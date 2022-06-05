using System;
using UnityEngine;
using Firebase.Auth;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Newtonsoft.Json;

[Serializable]
public class PlayerAccount
{
    public string verificationId;
    public string verificationCode;
}
public class PhoneAuth : MonoBehaviour
{
    public static PlayerAccount user = new PlayerAccount();
    
    [SerializeField] private InputField phoneNumber;
    [SerializeField] private InputField countryCode;
    [SerializeField] private InputField OTP;
    private FirebaseAuth firebaseAuth;
    private PhoneAuthProvider phoneAuthProvider;
    
    private string verificationId;
    private string verificationCode;
    
    [SerializeField] private Text debug;
    [SerializeField] private GameObject phoneAuthLayer;
    [SerializeField] private GameObject optionLayer;
    
    
    // Start is called before the first frame update
    private void Start()
    {
        firebaseAuth = FirebaseAuth.DefaultInstance;
    }

    public void Login()
    {
        phoneAuthProvider = PhoneAuthProvider.GetInstance(firebaseAuth);

        phoneAuthProvider.VerifyPhoneNumber(countryCode.text + phoneNumber.text, 60 * 1000, null,
            verificationCompleted: (credential) =>
            {
                debug.text = "verificationCompleted";
                // Auto-sms-retrieval or instant validation has succeeded (Android only).
                // There is no need to input the verification code.
                // `credential` can be used instead of calling GetCredential().
            },
            verificationFailed: (error) => {
                debug.text = error;
                

                // The verification code was not sent.
                // `error` contains a human readable explanation of the problem.
            },
            codeSent: (id, token) =>
            {
                verificationId = id;
                debug.text = "codeSent";

                // Verification code was successfully sent via SMS.
                // `id` contains the verification id that will need to passed in with
                // the code from the user when calling GetCredential().
                // `token` can be used if the user requests the code be sent again, to
                // tie the two requests together.
            },
            codeAutoRetrievalTimeOut: (id) => {
                debug.text = id;

                // Called when the auto-sms-retrieval has timed out, based on the given
                // timeout parameter.
                // `id` contains the verification id of the request that timed out.
            });
    }

    public void VerifyOTP()
    {
        debug.text = "verify";
        verificationCode = OTP.text;

        if (phoneAuthProvider == null)
        {
            phoneAuthProvider = PhoneAuthProvider.GetInstance(firebaseAuth);
        }
        
        Credential credential = phoneAuthProvider.GetCredential(verificationId, verificationCode);
        
        firebaseAuth.SignInWithCredentialAsync(credential).ContinueWith(task => {
            if (task.IsFaulted) {
                Debug.LogError("SignInWithCredentialAsync encountered an error: " +
                               task.Exception);

                debug.text = "SignInWithCredentialAsync encountered an error: " +
                             task.Exception;

                return;
            }
            

            FirebaseUser newUser = task.Result;
            Debug.Log("User signed in successfully");
            // This should display the phone number.
            Debug.Log("Phone number: " + newUser.PhoneNumber);
            // The phone number providerID is 'phone'.
            
            Debug.Log("Phone provider ID: " + newUser.ProviderId);
            
            if (task.IsCompleted)
            {
                debug.text = "Completed";
                
                SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
            }
        });
    }

    public void LoginExistingUser()
    {
        user = Database.LoadData();
        
        if (user.verificationId != "" && user.verificationCode != "")
        {
            phoneAuthProvider = PhoneAuthProvider.GetInstance(firebaseAuth);

            Credential credential =
                phoneAuthProvider.GetCredential(user.verificationId, user.verificationCode);
        
            firebaseAuth.SignInWithCredentialAsync(credential).ContinueWith(task => {
                if (task.IsFaulted) {
                    Debug.LogError("SignInWithCredentialAsync encountered an error: " +
                                   task.Exception);
                    return;
                }

                FirebaseUser newUser = task.Result;
                Debug.Log("User signed in successfully");
                // This should display the phone number.
                Debug.Log("Phone number: " + newUser.PhoneNumber);
                // The phone number providerID is 'phone'.
                Debug.Log("Phone provider ID: " + newUser.ProviderId);

                SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
            });
        }
        else
        {
            debug.text = "No account in this device. You need to register";
        }
    }

    public void GoToRegister()
    {
        phoneAuthLayer.SetActive(true);
        optionLayer.SetActive(false);
    }
}

public static class Database
{
    public static void SaveData()
    {
        string dataString = JsonConvert.SerializeObject(PhoneAuth.user);
        PlayerPrefs.SetString("Account", dataString);
        PlayerPrefs.Save();
    }

    public static PlayerAccount LoadData()
    {
        if (!PlayerPrefs.HasKey("Account"))
            return null;

        return JsonConvert.DeserializeObject<PlayerAccount>(PlayerPrefs.GetString("Account"));
    }
}
