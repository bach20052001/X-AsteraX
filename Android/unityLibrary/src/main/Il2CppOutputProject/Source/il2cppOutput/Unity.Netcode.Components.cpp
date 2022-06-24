#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.UInt64>
struct Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4;
// System.Action`3<System.Byte[],System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovedDelegate>
struct Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B;
// Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>
struct BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02;
// Unity.Netcode.BufferedLinearInterpolator`1<System.Single>
struct BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject>
struct HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t75C3361D3BE51E9742B0BBFA0F3998120E7CB6CE;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64>
struct IReadOnlyList_1_t9DEBBC2D05A865FB273FE805E7511A34DDDC6800;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct KeyCollection_t2B2BD06F195AD91EA8B476ACCBA4C5A7D872874E;
// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<UnityEngine.Quaternion>>
struct List_1_t5BC3A5B2927BB2EA7CC0EC1926CD2C375A1C8333;
// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<System.Single>>
struct List_1_t1E6C00759C830F22BC57005C551EFBD344BA75E4;
// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>
struct List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B;
// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>>
struct List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour>
struct List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery>
struct List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase>
struct List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05;
// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A;
// Unity.Netcode.NetworkVariable`1/ReadDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct ReadDelegate_1_t0C7BAC1A7541CEC3352FAC482DDF11A461630E80;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct ValueCollection_t4C2EDB5632FA637EC76F65D8F0F74411801C0327;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteDelegate_1_t6E3F11FA40A7DEF7C128EB51372AF47127F0285D;
// Unity.Netcode.BufferedLinearInterpolator`1<System.Single>[]
struct BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>[]
struct EntryU5BU5D_t9112975274DF8FACB8366096D8D0EB9548E2838B;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Unity.Netcode.BufferedLinearInterpolatorFloat
struct BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42;
// Unity.Netcode.BufferedLinearInterpolatorQuaternion
struct BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_t9EE3584E7F7C7D465027F67AC9DB1C3A367050DB;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Netcode.Components.NetworkAnimator
struct NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F;
// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1;
// Unity.Netcode.NetworkClient
struct NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50;
// Unity.Netcode.NetworkManager
struct NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F;
// Unity.Netcode.NetworkObject
struct NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935;
// Unity.Netcode.Components.NetworkTransform
struct NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408;
// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188;
// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471;
// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1;
// Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate
struct OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9;

IL2CPP_EXTERN_C RuntimeClass* AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral7A29E47E81FADB27D64EF5255EF4CFCA1733DC0A;
IL2CPP_EXTERN_C String_t* _stringLiteral7BBED68DDE16AF1D5EA27ED467F36EBB96FB81DB;
IL2CPP_EXTERN_C String_t* _stringLiteralC9334F5F8D2DB5F73AF4D47E992E81FA30B96151;
IL2CPP_EXTERN_C String_t* _stringLiteralD71DEAB128B6EB84915F9EE4AE53F16C1449F651;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC4C0AC7F2622E832E85C05D64A1F859A076611;
IL2CPP_EXTERN_C String_t* _stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2C4275A9F1D93339486527E0109CCCA342B8EB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4B0B0F67727DF1673152853ECA5B390C548B36D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkAnimator___rpc_handler_1069363937_mE36B9AF15A7D8A660849D0BE37F46A08C56A965B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkAnimator___rpc_handler_2230447564_m46F8C865D3FE5369A2B49FD04EE5F2937376973D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_OnNetworkStateChanged_m068D91DD465041EF0A04DEE6DBA54B9D99AB9CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_SetState_mB927022ACDDB84AF08C44C00C2AD48D8B42C81BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_Teleport_m7A5D6A2BEF96AA459E3C2BE8D2C92B51DA514683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform___rpc_handler_104221529_m6C2EBC9031E3887713EC89BA343BE12EC38CAF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform___rpc_handler_640767722_mBDBD2FABB4C588508134C46B50B5155946CC5480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 ;

struct AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6D175CC2EECC7E9D4D277B268EDC532AC5AA055D 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9112975274DF8FACB8366096D8D0EB9548E2838B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2B2BD06F195AD91EA8B476ACCBA4C5A7D872874E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4C2EDB5632FA637EC76F65D8F0F74411801C0327 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___entries_1)); }
	inline EntryU5BU5D_t9112975274DF8FACB8366096D8D0EB9548E2838B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9112975274DF8FACB8366096D8D0EB9548E2838B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9112975274DF8FACB8366096D8D0EB9548E2838B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___keys_7)); }
	inline KeyCollection_t2B2BD06F195AD91EA8B476ACCBA4C5A7D872874E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2B2BD06F195AD91EA8B476ACCBA4C5A7D872874E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2B2BD06F195AD91EA8B476ACCBA4C5A7D872874E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ___values_8)); }
	inline ValueCollection_t4C2EDB5632FA637EC76F65D8F0F74411801C0327 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4C2EDB5632FA637EC76F65D8F0F74411801C0327 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4C2EDB5632FA637EC76F65D8F0F74411801C0327 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>
struct List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B, ____items_1)); }
	inline BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE* get__items_1() const { return ____items_1; }
	inline BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B_StaticFields, ____emptyArray_5)); }
	inline BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BufferedLinearInterpolator_1U5BU5D_t839C9252A3E56C6B20B91D172564EB4BB255BEBE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<System.Single>
struct BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3 
{
public:
	// T Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::Item
	float ___Item_0;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::TimeSent
	double ___TimeSent_1;

public:
	inline static int32_t get_offset_of_Item_0() { return static_cast<int32_t>(offsetof(BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3, ___Item_0)); }
	inline float get_Item_0() const { return ___Item_0; }
	inline float* get_address_of_Item_0() { return &___Item_0; }
	inline void set_Item_0(float value)
	{
		___Item_0 = value;
	}

	inline static int32_t get_offset_of_TimeSent_1() { return static_cast<int32_t>(offsetof(BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3, ___TimeSent_1)); }
	inline double get_TimeSent_1() const { return ___TimeSent_1; }
	inline double* get_address_of_TimeSent_1() { return &___TimeSent_1; }
	inline void set_TimeSent_1(double value)
	{
		___TimeSent_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>
struct Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC, ___list_0)); }
	inline List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * get_list_0() const { return ___list_0; }
	inline List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC, ___current_3)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_current_3() const { return ___current_3; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.UInt64>
struct Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C 
{
public:
	// T System.Nullable`1::value
	uint64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___value_0)); }
	inline uint64_t get_value_0() const { return ___value_0; }
	inline uint64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>
struct ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A 
{
public:
	// T1 System.ValueTuple`4::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	bool ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	bool ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	bool ___Item4_3;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A, ___Item1_0)); }
	inline bool get_Item1_0() const { return ___Item1_0; }
	inline bool* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(bool value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A, ___Item3_2)); }
	inline bool get_Item3_2() const { return ___Item3_2; }
	inline bool* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(bool value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A, ___Item4_3)); }
	inline bool get_Item4_3() const { return ___Item4_3; }
	inline bool* get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(bool value)
	{
		___Item4_3 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.Netcode.ClientRpcReceiveParams
struct ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Unity.Netcode.FastBufferReader
struct FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 
{
public:
	// Unity.Netcode.FastBufferReader/ReaderHandle* Unity.Netcode.FastBufferReader::Handle
	ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855, ___Handle_0)); }
	inline ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * get_Handle_0() const { return ___Handle_0; }
	inline ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 ** get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * value)
	{
		___Handle_0 = value;
	}
};


// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F 
{
public:
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F, ___Handle_0)); }
	inline WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * get_Handle_0() const { return ___Handle_0; }
	inline WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 ** get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * value)
	{
		___Handle_0 = value;
	}
};

struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_StaticFields
{
public:
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___s_ByteArrayCache_1;

public:
	inline static int32_t get_offset_of_s_ByteArrayCache_1() { return static_cast<int32_t>(offsetof(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_StaticFields, ___s_ByteArrayCache_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_s_ByteArrayCache_1() const { return ___s_ByteArrayCache_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_s_ByteArrayCache_1() { return &___s_ByteArrayCache_1; }
	inline void set_s_ByteArrayCache_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___s_ByteArrayCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ByteArrayCache_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke
{
	WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * ___Handle_0;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com
{
	WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * ___Handle_0;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Unity.Netcode.NetworkTime
struct NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A 
{
public:
	// System.Double Unity.Netcode.NetworkTime::m_TimeSec
	double ___m_TimeSec_0;
	// System.UInt32 Unity.Netcode.NetworkTime::m_TickRate
	uint32_t ___m_TickRate_1;
	// System.Double Unity.Netcode.NetworkTime::m_TickInterval
	double ___m_TickInterval_2;
	// System.Int32 Unity.Netcode.NetworkTime::m_CachedTick
	int32_t ___m_CachedTick_3;
	// System.Double Unity.Netcode.NetworkTime::m_CachedTickOffset
	double ___m_CachedTickOffset_4;

public:
	inline static int32_t get_offset_of_m_TimeSec_0() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_TimeSec_0)); }
	inline double get_m_TimeSec_0() const { return ___m_TimeSec_0; }
	inline double* get_address_of_m_TimeSec_0() { return &___m_TimeSec_0; }
	inline void set_m_TimeSec_0(double value)
	{
		___m_TimeSec_0 = value;
	}

	inline static int32_t get_offset_of_m_TickRate_1() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_TickRate_1)); }
	inline uint32_t get_m_TickRate_1() const { return ___m_TickRate_1; }
	inline uint32_t* get_address_of_m_TickRate_1() { return &___m_TickRate_1; }
	inline void set_m_TickRate_1(uint32_t value)
	{
		___m_TickRate_1 = value;
	}

	inline static int32_t get_offset_of_m_TickInterval_2() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_TickInterval_2)); }
	inline double get_m_TickInterval_2() const { return ___m_TickInterval_2; }
	inline double* get_address_of_m_TickInterval_2() { return &___m_TickInterval_2; }
	inline void set_m_TickInterval_2(double value)
	{
		___m_TickInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_CachedTick_3() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_CachedTick_3)); }
	inline int32_t get_m_CachedTick_3() const { return ___m_CachedTick_3; }
	inline int32_t* get_address_of_m_CachedTick_3() { return &___m_CachedTick_3; }
	inline void set_m_CachedTick_3(int32_t value)
	{
		___m_CachedTick_3 = value;
	}

	inline static int32_t get_offset_of_m_CachedTickOffset_4() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_CachedTickOffset_4)); }
	inline double get_m_CachedTickOffset_4() const { return ___m_CachedTickOffset_4; }
	inline double* get_address_of_m_CachedTickOffset_4() { return &___m_CachedTickOffset_4; }
	inline void set_m_CachedTickOffset_4(double value)
	{
		___m_CachedTickOffset_4 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// Unity.Netcode.ServerRpcReceiveParams
struct ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311 
{
public:
	// System.UInt64 Unity.Netcode.ServerRpcReceiveParams::SenderClientId
	uint64_t ___SenderClientId_0;

public:
	inline static int32_t get_offset_of_SenderClientId_0() { return static_cast<int32_t>(offsetof(ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311, ___SenderClientId_0)); }
	inline uint64_t get_SenderClientId_0() const { return ___SenderClientId_0; }
	inline uint64_t* get_address_of_SenderClientId_0() { return &___SenderClientId_0; }
	inline void set_SenderClientId_0(uint64_t value)
	{
		___SenderClientId_0 = value;
	}
};


// Unity.Netcode.ServerRpcSendParams
struct ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D__padding[1];
	};

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 
{
public:
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationMessage::StateHash
	int32_t ___StateHash_0;
	// System.Single Unity.Netcode.Components.NetworkAnimator/AnimationMessage::NormalizedTime
	float ___NormalizedTime_1;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationMessage::Layer
	int32_t ___Layer_2;
	// System.Single Unity.Netcode.Components.NetworkAnimator/AnimationMessage::Weight
	float ___Weight_3;
	// System.Byte[] Unity.Netcode.Components.NetworkAnimator/AnimationMessage::Parameters
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Parameters_4;

public:
	inline static int32_t get_offset_of_StateHash_0() { return static_cast<int32_t>(offsetof(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597, ___StateHash_0)); }
	inline int32_t get_StateHash_0() const { return ___StateHash_0; }
	inline int32_t* get_address_of_StateHash_0() { return &___StateHash_0; }
	inline void set_StateHash_0(int32_t value)
	{
		___StateHash_0 = value;
	}

	inline static int32_t get_offset_of_NormalizedTime_1() { return static_cast<int32_t>(offsetof(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597, ___NormalizedTime_1)); }
	inline float get_NormalizedTime_1() const { return ___NormalizedTime_1; }
	inline float* get_address_of_NormalizedTime_1() { return &___NormalizedTime_1; }
	inline void set_NormalizedTime_1(float value)
	{
		___NormalizedTime_1 = value;
	}

	inline static int32_t get_offset_of_Layer_2() { return static_cast<int32_t>(offsetof(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597, ___Layer_2)); }
	inline int32_t get_Layer_2() const { return ___Layer_2; }
	inline int32_t* get_address_of_Layer_2() { return &___Layer_2; }
	inline void set_Layer_2(int32_t value)
	{
		___Layer_2 = value;
	}

	inline static int32_t get_offset_of_Weight_3() { return static_cast<int32_t>(offsetof(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597, ___Weight_3)); }
	inline float get_Weight_3() const { return ___Weight_3; }
	inline float* get_address_of_Weight_3() { return &___Weight_3; }
	inline void set_Weight_3(float value)
	{
		___Weight_3 = value;
	}

	inline static int32_t get_offset_of_Parameters_4() { return static_cast<int32_t>(offsetof(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597, ___Parameters_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Parameters_4() const { return ___Parameters_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Parameters_4() { return &___Parameters_4; }
	inline void set_Parameters_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Parameters_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_pinvoke
{
	int32_t ___StateHash_0;
	float ___NormalizedTime_1;
	int32_t ___Layer_2;
	float ___Weight_3;
	Il2CppSafeArray/*NONE*/* ___Parameters_4;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_com
{
	int32_t ___StateHash_0;
	float ___NormalizedTime_1;
	int32_t ___Layer_2;
	float ___Weight_3;
	Il2CppSafeArray/*NONE*/* ___Parameters_4;
};

// Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper
struct AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8__padding[1];
	};

public:
};

struct AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields
{
public:
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::AnimatorControllerParameterInt
	int32_t ___AnimatorControllerParameterInt_0;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::AnimatorControllerParameterFloat
	int32_t ___AnimatorControllerParameterFloat_1;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::AnimatorControllerParameterBool
	int32_t ___AnimatorControllerParameterBool_2;

public:
	inline static int32_t get_offset_of_AnimatorControllerParameterInt_0() { return static_cast<int32_t>(offsetof(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields, ___AnimatorControllerParameterInt_0)); }
	inline int32_t get_AnimatorControllerParameterInt_0() const { return ___AnimatorControllerParameterInt_0; }
	inline int32_t* get_address_of_AnimatorControllerParameterInt_0() { return &___AnimatorControllerParameterInt_0; }
	inline void set_AnimatorControllerParameterInt_0(int32_t value)
	{
		___AnimatorControllerParameterInt_0 = value;
	}

	inline static int32_t get_offset_of_AnimatorControllerParameterFloat_1() { return static_cast<int32_t>(offsetof(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields, ___AnimatorControllerParameterFloat_1)); }
	inline int32_t get_AnimatorControllerParameterFloat_1() const { return ___AnimatorControllerParameterFloat_1; }
	inline int32_t* get_address_of_AnimatorControllerParameterFloat_1() { return &___AnimatorControllerParameterFloat_1; }
	inline void set_AnimatorControllerParameterFloat_1(int32_t value)
	{
		___AnimatorControllerParameterFloat_1 = value;
	}

	inline static int32_t get_offset_of_AnimatorControllerParameterBool_2() { return static_cast<int32_t>(offsetof(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields, ___AnimatorControllerParameterBool_2)); }
	inline int32_t get_AnimatorControllerParameterBool_2() const { return ___AnimatorControllerParameterBool_2; }
	inline int32_t* get_address_of_AnimatorControllerParameterBool_2() { return &___AnimatorControllerParameterBool_2; }
	inline void set_AnimatorControllerParameterBool_2(int32_t value)
	{
		___AnimatorControllerParameterBool_2 = value;
	}
};


// Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 
{
public:
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::Hash
	int32_t ___Hash_0;
	// System.Boolean Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::Reset
	bool ___Reset_1;

public:
	inline static int32_t get_offset_of_Hash_0() { return static_cast<int32_t>(offsetof(AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7, ___Hash_0)); }
	inline int32_t get_Hash_0() const { return ___Hash_0; }
	inline int32_t* get_address_of_Hash_0() { return &___Hash_0; }
	inline void set_Hash_0(int32_t value)
	{
		___Hash_0 = value;
	}

	inline static int32_t get_offset_of_Reset_1() { return static_cast<int32_t>(offsetof(AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7, ___Reset_1)); }
	inline bool get_Reset_1() const { return ___Reset_1; }
	inline bool* get_address_of_Reset_1() { return &___Reset_1; }
	inline void set_Reset_1(bool value)
	{
		___Reset_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_pinvoke
{
	int32_t ___Hash_0;
	int32_t ___Reset_1;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_com
{
	int32_t ___Hash_0;
	int32_t ___Reset_1;
};

// Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 
{
public:
	// System.UInt16 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::m_Bitset
	uint16_t ___m_Bitset_11;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionX
	float ___PositionX_12;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionY
	float ___PositionY_13;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionZ
	float ___PositionZ_14;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleX
	float ___RotAngleX_15;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleY
	float ___RotAngleY_16;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleZ
	float ___RotAngleZ_17;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleX
	float ___ScaleX_18;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleY
	float ___ScaleY_19;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleZ
	float ___ScaleZ_20;
	// System.Double Unity.Netcode.Components.NetworkTransform/NetworkTransformState::SentTime
	double ___SentTime_21;

public:
	inline static int32_t get_offset_of_m_Bitset_11() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___m_Bitset_11)); }
	inline uint16_t get_m_Bitset_11() const { return ___m_Bitset_11; }
	inline uint16_t* get_address_of_m_Bitset_11() { return &___m_Bitset_11; }
	inline void set_m_Bitset_11(uint16_t value)
	{
		___m_Bitset_11 = value;
	}

	inline static int32_t get_offset_of_PositionX_12() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___PositionX_12)); }
	inline float get_PositionX_12() const { return ___PositionX_12; }
	inline float* get_address_of_PositionX_12() { return &___PositionX_12; }
	inline void set_PositionX_12(float value)
	{
		___PositionX_12 = value;
	}

	inline static int32_t get_offset_of_PositionY_13() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___PositionY_13)); }
	inline float get_PositionY_13() const { return ___PositionY_13; }
	inline float* get_address_of_PositionY_13() { return &___PositionY_13; }
	inline void set_PositionY_13(float value)
	{
		___PositionY_13 = value;
	}

	inline static int32_t get_offset_of_PositionZ_14() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___PositionZ_14)); }
	inline float get_PositionZ_14() const { return ___PositionZ_14; }
	inline float* get_address_of_PositionZ_14() { return &___PositionZ_14; }
	inline void set_PositionZ_14(float value)
	{
		___PositionZ_14 = value;
	}

	inline static int32_t get_offset_of_RotAngleX_15() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___RotAngleX_15)); }
	inline float get_RotAngleX_15() const { return ___RotAngleX_15; }
	inline float* get_address_of_RotAngleX_15() { return &___RotAngleX_15; }
	inline void set_RotAngleX_15(float value)
	{
		___RotAngleX_15 = value;
	}

	inline static int32_t get_offset_of_RotAngleY_16() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___RotAngleY_16)); }
	inline float get_RotAngleY_16() const { return ___RotAngleY_16; }
	inline float* get_address_of_RotAngleY_16() { return &___RotAngleY_16; }
	inline void set_RotAngleY_16(float value)
	{
		___RotAngleY_16 = value;
	}

	inline static int32_t get_offset_of_RotAngleZ_17() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___RotAngleZ_17)); }
	inline float get_RotAngleZ_17() const { return ___RotAngleZ_17; }
	inline float* get_address_of_RotAngleZ_17() { return &___RotAngleZ_17; }
	inline void set_RotAngleZ_17(float value)
	{
		___RotAngleZ_17 = value;
	}

	inline static int32_t get_offset_of_ScaleX_18() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___ScaleX_18)); }
	inline float get_ScaleX_18() const { return ___ScaleX_18; }
	inline float* get_address_of_ScaleX_18() { return &___ScaleX_18; }
	inline void set_ScaleX_18(float value)
	{
		___ScaleX_18 = value;
	}

	inline static int32_t get_offset_of_ScaleY_19() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___ScaleY_19)); }
	inline float get_ScaleY_19() const { return ___ScaleY_19; }
	inline float* get_address_of_ScaleY_19() { return &___ScaleY_19; }
	inline void set_ScaleY_19(float value)
	{
		___ScaleY_19 = value;
	}

	inline static int32_t get_offset_of_ScaleZ_20() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___ScaleZ_20)); }
	inline float get_ScaleZ_20() const { return ___ScaleZ_20; }
	inline float* get_address_of_ScaleZ_20() { return &___ScaleZ_20; }
	inline void set_ScaleZ_20(float value)
	{
		___ScaleZ_20 = value;
	}

	inline static int32_t get_offset_of_SentTime_21() { return static_cast<int32_t>(offsetof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450, ___SentTime_21)); }
	inline double get_SentTime_21() const { return ___SentTime_21; }
	inline double* get_address_of_SentTime_21() { return &___SentTime_21; }
	inline void set_SentTime_21(double value)
	{
		___SentTime_21 = value;
	}
};


// Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E__padding[4];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<UnityEngine.Quaternion>
struct BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E 
{
public:
	// T Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::Item
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Item_0;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::TimeSent
	double ___TimeSent_1;

public:
	inline static int32_t get_offset_of_Item_0() { return static_cast<int32_t>(offsetof(BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E, ___Item_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Item_0() const { return ___Item_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Item_0() { return &___Item_0; }
	inline void set_Item_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Item_0 = value;
	}

	inline static int32_t get_offset_of_TimeSent_1() { return static_cast<int32_t>(offsetof(BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E, ___TimeSent_1)); }
	inline double get_TimeSent_1() const { return ___TimeSent_1; }
	inline double* get_address_of_TimeSent_1() { return &___TimeSent_1; }
	inline void set_TimeSent_1(double value)
	{
		___TimeSent_1 = value;
	}
};


// Unity.Netcode.BufferedLinearInterpolator`1<System.Single>
struct BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1  : public RuntimeObject
{
public:
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpStartValue
	float ___m_InterpStartValue_1;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_CurrentInterpValue
	float ___m_CurrentInterpValue_2;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpEndValue
	float ___m_InterpEndValue_3;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_EndTimeConsumed
	double ___m_EndTimeConsumed_4;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_StartTimeConsumed
	double ___m_StartTimeConsumed_5;
	// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T>> Unity.Netcode.BufferedLinearInterpolator`1::m_Buffer
	List_1_t1E6C00759C830F22BC57005C551EFBD344BA75E4 * ___m_Buffer_6;
	// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T> Unity.Netcode.BufferedLinearInterpolator`1::m_LastBufferedItemReceived
	BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3  ___m_LastBufferedItemReceived_8;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_NbItemsReceivedThisFrame
	int32_t ___m_NbItemsReceivedThisFrame_9;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_LifetimeConsumedCount
	int32_t ___m_LifetimeConsumedCount_10;

public:
	inline static int32_t get_offset_of_m_InterpStartValue_1() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_InterpStartValue_1)); }
	inline float get_m_InterpStartValue_1() const { return ___m_InterpStartValue_1; }
	inline float* get_address_of_m_InterpStartValue_1() { return &___m_InterpStartValue_1; }
	inline void set_m_InterpStartValue_1(float value)
	{
		___m_InterpStartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentInterpValue_2() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_CurrentInterpValue_2)); }
	inline float get_m_CurrentInterpValue_2() const { return ___m_CurrentInterpValue_2; }
	inline float* get_address_of_m_CurrentInterpValue_2() { return &___m_CurrentInterpValue_2; }
	inline void set_m_CurrentInterpValue_2(float value)
	{
		___m_CurrentInterpValue_2 = value;
	}

	inline static int32_t get_offset_of_m_InterpEndValue_3() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_InterpEndValue_3)); }
	inline float get_m_InterpEndValue_3() const { return ___m_InterpEndValue_3; }
	inline float* get_address_of_m_InterpEndValue_3() { return &___m_InterpEndValue_3; }
	inline void set_m_InterpEndValue_3(float value)
	{
		___m_InterpEndValue_3 = value;
	}

	inline static int32_t get_offset_of_m_EndTimeConsumed_4() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_EndTimeConsumed_4)); }
	inline double get_m_EndTimeConsumed_4() const { return ___m_EndTimeConsumed_4; }
	inline double* get_address_of_m_EndTimeConsumed_4() { return &___m_EndTimeConsumed_4; }
	inline void set_m_EndTimeConsumed_4(double value)
	{
		___m_EndTimeConsumed_4 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeConsumed_5() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_StartTimeConsumed_5)); }
	inline double get_m_StartTimeConsumed_5() const { return ___m_StartTimeConsumed_5; }
	inline double* get_address_of_m_StartTimeConsumed_5() { return &___m_StartTimeConsumed_5; }
	inline void set_m_StartTimeConsumed_5(double value)
	{
		___m_StartTimeConsumed_5 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_6() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_Buffer_6)); }
	inline List_1_t1E6C00759C830F22BC57005C551EFBD344BA75E4 * get_m_Buffer_6() const { return ___m_Buffer_6; }
	inline List_1_t1E6C00759C830F22BC57005C551EFBD344BA75E4 ** get_address_of_m_Buffer_6() { return &___m_Buffer_6; }
	inline void set_m_Buffer_6(List_1_t1E6C00759C830F22BC57005C551EFBD344BA75E4 * value)
	{
		___m_Buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastBufferedItemReceived_8() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_LastBufferedItemReceived_8)); }
	inline BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3  get_m_LastBufferedItemReceived_8() const { return ___m_LastBufferedItemReceived_8; }
	inline BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3 * get_address_of_m_LastBufferedItemReceived_8() { return &___m_LastBufferedItemReceived_8; }
	inline void set_m_LastBufferedItemReceived_8(BufferedItem_t9BC1087CE6479F48A954A51EC6BFB896A6D438A3  value)
	{
		___m_LastBufferedItemReceived_8 = value;
	}

	inline static int32_t get_offset_of_m_NbItemsReceivedThisFrame_9() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_NbItemsReceivedThisFrame_9)); }
	inline int32_t get_m_NbItemsReceivedThisFrame_9() const { return ___m_NbItemsReceivedThisFrame_9; }
	inline int32_t* get_address_of_m_NbItemsReceivedThisFrame_9() { return &___m_NbItemsReceivedThisFrame_9; }
	inline void set_m_NbItemsReceivedThisFrame_9(int32_t value)
	{
		___m_NbItemsReceivedThisFrame_9 = value;
	}

	inline static int32_t get_offset_of_m_LifetimeConsumedCount_10() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1, ___m_LifetimeConsumedCount_10)); }
	inline int32_t get_m_LifetimeConsumedCount_10() const { return ___m_LifetimeConsumedCount_10; }
	inline int32_t* get_address_of_m_LifetimeConsumedCount_10() { return &___m_LifetimeConsumedCount_10; }
	inline void set_m_LifetimeConsumedCount_10(int32_t value)
	{
		___m_LifetimeConsumedCount_10 = value;
	}
};


// System.Nullable`1<UnityEngine.Quaternion>
struct Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 
{
public:
	// T System.Nullable`1::value
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___value_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_value_0() const { return ___value_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3>
struct ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9 
{
public:
	// T1 System.ValueTuple`3::Item1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9, ___Item1_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Item1_0() const { return ___Item1_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9, ___Item2_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Item2_1() const { return ___Item2_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9, ___Item3_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Item3_2() const { return ___Item3_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Item3_2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimatorControllerParameterType
struct AnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.LogLevel
struct LogLevel_tA90E03A9075E7B18C4365DC4822F2E79125F6172 
{
public:
	// System.Int32 Unity.Netcode.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tA90E03A9075E7B18C4365DC4822F2E79125F6172, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkDelivery
struct NetworkDelivery_t603EACB1D1BD0BC8C5446965D62C937DE07EB306 
{
public:
	// System.Int32 Unity.Netcode.NetworkDelivery::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkDelivery_t603EACB1D1BD0BC8C5446965D62C937DE07EB306, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkVariableReadPermission
struct NetworkVariableReadPermission_tBDFC94776EE8F79844818CDA5888E35C04F47637 
{
public:
	// System.Int32 Unity.Netcode.NetworkVariableReadPermission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkVariableReadPermission_tBDFC94776EE8F79844818CDA5888E35C04F47637, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkVariableWritePermission
struct NetworkVariableWritePermission_tA8EDB5182E3AE9FC4E4DDC483A1548E8969CFE12 
{
public:
	// System.Int32 Unity.Netcode.NetworkVariableWritePermission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkVariableWritePermission_tA8EDB5182E3AE9FC4E4DDC483A1548E8969CFE12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Netcode.RpcDelivery
struct RpcDelivery_t6B1769309FF3427D855ECA082110225AA0973D0D 
{
public:
	// System.Int32 Unity.Netcode.RpcDelivery::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RpcDelivery_t6B1769309FF3427D855ECA082110225AA0973D0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.ServerRpcParams
struct ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09 
{
public:
	// Unity.Netcode.ServerRpcSendParams Unity.Netcode.ServerRpcParams::Send
	ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D  ___Send_0;
	// Unity.Netcode.ServerRpcReceiveParams Unity.Netcode.ServerRpcParams::Receive
	ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  ___Receive_1;

public:
	inline static int32_t get_offset_of_Send_0() { return static_cast<int32_t>(offsetof(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09, ___Send_0)); }
	inline ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D  get_Send_0() const { return ___Send_0; }
	inline ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D * get_address_of_Send_0() { return &___Send_0; }
	inline void set_Send_0(ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D  value)
	{
		___Send_0 = value;
	}

	inline static int32_t get_offset_of_Receive_1() { return static_cast<int32_t>(offsetof(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09, ___Receive_1)); }
	inline ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  get_Receive_1() const { return ___Receive_1; }
	inline ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311 * get_address_of_Receive_1() { return &___Receive_1; }
	inline void set_Receive_1(ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  value)
	{
		___Receive_1 = value;
	}
};


// Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache
struct AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C 
{
public:
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache::Hash
	int32_t ___Hash_0;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache::Type
	int32_t ___Type_1;
	// Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache/<Value>e__FixedBuffer Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache::Value
	U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E  ___Value_2;

public:
	inline static int32_t get_offset_of_Hash_0() { return static_cast<int32_t>(offsetof(AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C, ___Hash_0)); }
	inline int32_t get_Hash_0() const { return ___Hash_0; }
	inline int32_t* get_address_of_Hash_0() { return &___Hash_0; }
	inline void set_Hash_0(int32_t value)
	{
		___Hash_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C, ___Value_2)); }
	inline U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E  get_Value_2() const { return ___Value_2; }
	inline U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E  value)
	{
		___Value_2 = value;
	}
};


// Unity.Netcode.NetworkBehaviour/__RpcExecStage
struct __RpcExecStage_tFE8D167C4ED836C92DEB53CEE6FF3F5226FC9C43 
{
public:
	// System.Int32 Unity.Netcode.NetworkBehaviour/__RpcExecStage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(__RpcExecStage_tFE8D167C4ED836C92DEB53CEE6FF3F5226FC9C43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>
struct BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02  : public RuntimeObject
{
public:
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpStartValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_InterpStartValue_1;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_CurrentInterpValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_CurrentInterpValue_2;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpEndValue
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_InterpEndValue_3;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_EndTimeConsumed
	double ___m_EndTimeConsumed_4;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_StartTimeConsumed
	double ___m_StartTimeConsumed_5;
	// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T>> Unity.Netcode.BufferedLinearInterpolator`1::m_Buffer
	List_1_t5BC3A5B2927BB2EA7CC0EC1926CD2C375A1C8333 * ___m_Buffer_6;
	// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T> Unity.Netcode.BufferedLinearInterpolator`1::m_LastBufferedItemReceived
	BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E  ___m_LastBufferedItemReceived_8;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_NbItemsReceivedThisFrame
	int32_t ___m_NbItemsReceivedThisFrame_9;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_LifetimeConsumedCount
	int32_t ___m_LifetimeConsumedCount_10;

public:
	inline static int32_t get_offset_of_m_InterpStartValue_1() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_InterpStartValue_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_InterpStartValue_1() const { return ___m_InterpStartValue_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_InterpStartValue_1() { return &___m_InterpStartValue_1; }
	inline void set_m_InterpStartValue_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_InterpStartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentInterpValue_2() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_CurrentInterpValue_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_CurrentInterpValue_2() const { return ___m_CurrentInterpValue_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_CurrentInterpValue_2() { return &___m_CurrentInterpValue_2; }
	inline void set_m_CurrentInterpValue_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_CurrentInterpValue_2 = value;
	}

	inline static int32_t get_offset_of_m_InterpEndValue_3() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_InterpEndValue_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_InterpEndValue_3() const { return ___m_InterpEndValue_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_InterpEndValue_3() { return &___m_InterpEndValue_3; }
	inline void set_m_InterpEndValue_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_InterpEndValue_3 = value;
	}

	inline static int32_t get_offset_of_m_EndTimeConsumed_4() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_EndTimeConsumed_4)); }
	inline double get_m_EndTimeConsumed_4() const { return ___m_EndTimeConsumed_4; }
	inline double* get_address_of_m_EndTimeConsumed_4() { return &___m_EndTimeConsumed_4; }
	inline void set_m_EndTimeConsumed_4(double value)
	{
		___m_EndTimeConsumed_4 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeConsumed_5() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_StartTimeConsumed_5)); }
	inline double get_m_StartTimeConsumed_5() const { return ___m_StartTimeConsumed_5; }
	inline double* get_address_of_m_StartTimeConsumed_5() { return &___m_StartTimeConsumed_5; }
	inline void set_m_StartTimeConsumed_5(double value)
	{
		___m_StartTimeConsumed_5 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_6() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_Buffer_6)); }
	inline List_1_t5BC3A5B2927BB2EA7CC0EC1926CD2C375A1C8333 * get_m_Buffer_6() const { return ___m_Buffer_6; }
	inline List_1_t5BC3A5B2927BB2EA7CC0EC1926CD2C375A1C8333 ** get_address_of_m_Buffer_6() { return &___m_Buffer_6; }
	inline void set_m_Buffer_6(List_1_t5BC3A5B2927BB2EA7CC0EC1926CD2C375A1C8333 * value)
	{
		___m_Buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastBufferedItemReceived_8() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_LastBufferedItemReceived_8)); }
	inline BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E  get_m_LastBufferedItemReceived_8() const { return ___m_LastBufferedItemReceived_8; }
	inline BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E * get_address_of_m_LastBufferedItemReceived_8() { return &___m_LastBufferedItemReceived_8; }
	inline void set_m_LastBufferedItemReceived_8(BufferedItem_t13B03CDBAEC7A0C3A6E9F51C2A9C68E804416F7E  value)
	{
		___m_LastBufferedItemReceived_8 = value;
	}

	inline static int32_t get_offset_of_m_NbItemsReceivedThisFrame_9() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_NbItemsReceivedThisFrame_9)); }
	inline int32_t get_m_NbItemsReceivedThisFrame_9() const { return ___m_NbItemsReceivedThisFrame_9; }
	inline int32_t* get_address_of_m_NbItemsReceivedThisFrame_9() { return &___m_NbItemsReceivedThisFrame_9; }
	inline void set_m_NbItemsReceivedThisFrame_9(int32_t value)
	{
		___m_NbItemsReceivedThisFrame_9 = value;
	}

	inline static int32_t get_offset_of_m_LifetimeConsumedCount_10() { return static_cast<int32_t>(offsetof(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02, ___m_LifetimeConsumedCount_10)); }
	inline int32_t get_m_LifetimeConsumedCount_10() const { return ___m_LifetimeConsumedCount_10; }
	inline int32_t* get_address_of_m_LifetimeConsumedCount_10() { return &___m_LifetimeConsumedCount_10; }
	inline void set_m_LifetimeConsumedCount_10(int32_t value)
	{
		___m_LifetimeConsumedCount_10 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>
struct NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};

// Unity.Netcode.BufferedLinearInterpolatorFloat
struct BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42  : public BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.Netcode.NetworkVariableBase
struct NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkBehaviour Unity.Netcode.NetworkVariableBase::m_NetworkBehaviour
	NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___m_NetworkBehaviour_1;
	// System.Boolean Unity.Netcode.NetworkVariableBase::m_IsDirty
	bool ___m_IsDirty_4;
	// System.String Unity.Netcode.NetworkVariableBase::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// Unity.Netcode.NetworkVariableReadPermission Unity.Netcode.NetworkVariableBase::ReadPerm
	int32_t ___ReadPerm_6;
	// Unity.Netcode.NetworkVariableWritePermission Unity.Netcode.NetworkVariableBase::WritePerm
	int32_t ___WritePerm_7;

public:
	inline static int32_t get_offset_of_m_NetworkBehaviour_1() { return static_cast<int32_t>(offsetof(NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1, ___m_NetworkBehaviour_1)); }
	inline NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * get_m_NetworkBehaviour_1() const { return ___m_NetworkBehaviour_1; }
	inline NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 ** get_address_of_m_NetworkBehaviour_1() { return &___m_NetworkBehaviour_1; }
	inline void set_m_NetworkBehaviour_1(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * value)
	{
		___m_NetworkBehaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDirty_4() { return static_cast<int32_t>(offsetof(NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1, ___m_IsDirty_4)); }
	inline bool get_m_IsDirty_4() const { return ___m_IsDirty_4; }
	inline bool* get_address_of_m_IsDirty_4() { return &___m_IsDirty_4; }
	inline void set_m_IsDirty_4(bool value)
	{
		___m_IsDirty_4 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1, ___U3CNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CNameU3Ek__BackingField_5() const { return ___U3CNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_5() { return &___U3CNameU3Ek__BackingField_5; }
	inline void set_U3CNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_ReadPerm_6() { return static_cast<int32_t>(offsetof(NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1, ___ReadPerm_6)); }
	inline int32_t get_ReadPerm_6() const { return ___ReadPerm_6; }
	inline int32_t* get_address_of_ReadPerm_6() { return &___ReadPerm_6; }
	inline void set_ReadPerm_6(int32_t value)
	{
		___ReadPerm_6 = value;
	}

	inline static int32_t get_offset_of_WritePerm_7() { return static_cast<int32_t>(offsetof(NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1, ___WritePerm_7)); }
	inline int32_t get_WritePerm_7() const { return ___WritePerm_7; }
	inline int32_t* get_address_of_WritePerm_7() { return &___WritePerm_7; }
	inline void set_WritePerm_7(int32_t value)
	{
		___WritePerm_7 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 
{
public:
	// System.Byte* Unity.Netcode.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;

public:
	inline static int32_t get_offset_of_BufferPointer_0() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___BufferPointer_0)); }
	inline uint8_t* get_BufferPointer_0() const { return ___BufferPointer_0; }
	inline uint8_t** get_address_of_BufferPointer_0() { return &___BufferPointer_0; }
	inline void set_BufferPointer_0(uint8_t* value)
	{
		___BufferPointer_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___Length_2)); }
	inline int32_t get_Length_2() const { return ___Length_2; }
	inline int32_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int32_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_Allocator_3() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___Allocator_3)); }
	inline int32_t get_Allocator_3() const { return ___Allocator_3; }
	inline int32_t* get_address_of_Allocator_3() { return &___Allocator_3; }
	inline void set_Allocator_3(int32_t value)
	{
		___Allocator_3 = value;
	}
};


// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 
{
public:
	// System.Byte* Unity.Netcode.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;

public:
	inline static int32_t get_offset_of_BufferPointer_0() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___BufferPointer_0)); }
	inline uint8_t* get_BufferPointer_0() const { return ___BufferPointer_0; }
	inline uint8_t** get_address_of_BufferPointer_0() { return &___BufferPointer_0; }
	inline void set_BufferPointer_0(uint8_t* value)
	{
		___BufferPointer_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Length_2)); }
	inline int32_t get_Length_2() const { return ___Length_2; }
	inline int32_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int32_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_Capacity_3() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Capacity_3)); }
	inline int32_t get_Capacity_3() const { return ___Capacity_3; }
	inline int32_t* get_address_of_Capacity_3() { return &___Capacity_3; }
	inline void set_Capacity_3(int32_t value)
	{
		___Capacity_3 = value;
	}

	inline static int32_t get_offset_of_MaxCapacity_4() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___MaxCapacity_4)); }
	inline int32_t get_MaxCapacity_4() const { return ___MaxCapacity_4; }
	inline int32_t* get_address_of_MaxCapacity_4() { return &___MaxCapacity_4; }
	inline void set_MaxCapacity_4(int32_t value)
	{
		___MaxCapacity_4 = value;
	}

	inline static int32_t get_offset_of_Allocator_5() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Allocator_5)); }
	inline int32_t get_Allocator_5() const { return ___Allocator_5; }
	inline int32_t* get_address_of_Allocator_5() { return &___Allocator_5; }
	inline void set_Allocator_5(int32_t value)
	{
		___Allocator_5 = value;
	}

	inline static int32_t get_offset_of_BufferGrew_6() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___BufferGrew_6)); }
	inline bool get_BufferGrew_6() const { return ___BufferGrew_6; }
	inline bool* get_address_of_BufferGrew_6() { return &___BufferGrew_6; }
	inline void set_BufferGrew_6(bool value)
	{
		___BufferGrew_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};

// Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05  : public NetworkVariableBase_tD532D1019FAA33C4D7A775884C513050DC9340D1
{
public:
	// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<T> Unity.Netcode.NetworkVariable`1::OnValueChanged
	OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * ___OnValueChanged_10;
	// T Unity.Netcode.NetworkVariable`1::m_InternalValue
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___m_InternalValue_11;

public:
	inline static int32_t get_offset_of_OnValueChanged_10() { return static_cast<int32_t>(offsetof(NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05, ___OnValueChanged_10)); }
	inline OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * get_OnValueChanged_10() const { return ___OnValueChanged_10; }
	inline OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A ** get_address_of_OnValueChanged_10() { return &___OnValueChanged_10; }
	inline void set_OnValueChanged_10(OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * value)
	{
		___OnValueChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalValue_11() { return static_cast<int32_t>(offsetof(NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05, ___m_InternalValue_11)); }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  get_m_InternalValue_11() const { return ___m_InternalValue_11; }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * get_address_of_m_InternalValue_11() { return &___m_InternalValue_11; }
	inline void set_m_InternalValue_11(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  value)
	{
		___m_InternalValue_11 = value;
	}
};

struct NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05_StaticFields
{
public:
	// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<T,T> Unity.Netcode.NetworkVariable`1::Write
	WriteDelegate_1_t6E3F11FA40A7DEF7C128EB51372AF47127F0285D * ___Write_8;
	// Unity.Netcode.NetworkVariable`1/ReadDelegate`1<T,T> Unity.Netcode.NetworkVariable`1::Read
	ReadDelegate_1_t0C7BAC1A7541CEC3352FAC482DDF11A461630E80 * ___Read_9;

public:
	inline static int32_t get_offset_of_Write_8() { return static_cast<int32_t>(offsetof(NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05_StaticFields, ___Write_8)); }
	inline WriteDelegate_1_t6E3F11FA40A7DEF7C128EB51372AF47127F0285D * get_Write_8() const { return ___Write_8; }
	inline WriteDelegate_1_t6E3F11FA40A7DEF7C128EB51372AF47127F0285D ** get_address_of_Write_8() { return &___Write_8; }
	inline void set_Write_8(WriteDelegate_1_t6E3F11FA40A7DEF7C128EB51372AF47127F0285D * value)
	{
		___Write_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Write_8), (void*)value);
	}

	inline static int32_t get_offset_of_Read_9() { return static_cast<int32_t>(offsetof(NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05_StaticFields, ___Read_9)); }
	inline ReadDelegate_1_t0C7BAC1A7541CEC3352FAC482DDF11A461630E80 * get_Read_9() const { return ___Read_9; }
	inline ReadDelegate_1_t0C7BAC1A7541CEC3352FAC482DDF11A461630E80 ** get_address_of_Read_9() { return &___Read_9; }
	inline void set_Read_9(ReadDelegate_1_t0C7BAC1A7541CEC3352FAC482DDF11A461630E80 * value)
	{
		___Read_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Read_9), (void*)value);
	}
};


// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>>
struct Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6 
{
public:
	// T System.Nullable`1::value
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6, ___value_0)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_value_0() const { return ___value_0; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A  : public MulticastDelegate_t
{
public:

public:
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Netcode.BufferedLinearInterpolatorQuaternion
struct BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204  : public BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate
struct OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4 
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.ClientRpcSendParams::TargetClientIds
	RuntimeObject* ___TargetClientIds_0;
	// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>> Unity.Netcode.ClientRpcSendParams::TargetClientIdsNativeArray
	Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  ___TargetClientIdsNativeArray_1;

public:
	inline static int32_t get_offset_of_TargetClientIds_0() { return static_cast<int32_t>(offsetof(ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4, ___TargetClientIds_0)); }
	inline RuntimeObject* get_TargetClientIds_0() const { return ___TargetClientIds_0; }
	inline RuntimeObject** get_address_of_TargetClientIds_0() { return &___TargetClientIds_0; }
	inline void set_TargetClientIds_0(RuntimeObject* value)
	{
		___TargetClientIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetClientIds_0), (void*)value);
	}

	inline static int32_t get_offset_of_TargetClientIdsNativeArray_1() { return static_cast<int32_t>(offsetof(ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4, ___TargetClientIdsNativeArray_1)); }
	inline Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  get_TargetClientIdsNativeArray_1() const { return ___TargetClientIdsNativeArray_1; }
	inline Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6 * get_address_of_TargetClientIdsNativeArray_1() { return &___TargetClientIdsNativeArray_1; }
	inline void set_TargetClientIdsNativeArray_1(Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  value)
	{
		___TargetClientIdsNativeArray_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_pinvoke
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  ___TargetClientIdsNativeArray_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_com
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  ___TargetClientIdsNativeArray_1;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89 
{
public:
	// Unity.Netcode.ClientRpcSendParams Unity.Netcode.ClientRpcParams::Send
	ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4  ___Send_0;
	// Unity.Netcode.ClientRpcReceiveParams Unity.Netcode.ClientRpcParams::Receive
	ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  ___Receive_1;

public:
	inline static int32_t get_offset_of_Send_0() { return static_cast<int32_t>(offsetof(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89, ___Send_0)); }
	inline ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4  get_Send_0() const { return ___Send_0; }
	inline ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4 * get_address_of_Send_0() { return &___Send_0; }
	inline void set_Send_0(ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4  value)
	{
		___Send_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Send_0))->___TargetClientIds_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Receive_1() { return static_cast<int32_t>(offsetof(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89, ___Receive_1)); }
	inline ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  get_Receive_1() const { return ___Receive_1; }
	inline ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7 * get_address_of_Receive_1() { return &___Receive_1; }
	inline void set_Receive_1(ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  value)
	{
		___Receive_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke
{
	ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  ___Receive_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com
{
	ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  ___Receive_1;
};

// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.Netcode.NetworkBehaviour/__RpcExecStage Unity.Netcode.NetworkBehaviour::__rpc_exec_stage
	int32_t _____rpc_exec_stage_4;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsLocalPlayer>k__BackingField
	bool ___U3CIsLocalPlayerU3Ek__BackingField_7;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsOwner>k__BackingField
	bool ___U3CIsOwnerU3Ek__BackingField_8;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_9;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_10;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsHost>k__BackingField
	bool ___U3CIsHostU3Ek__BackingField_11;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsOwnedByServer>k__BackingField
	bool ___U3CIsOwnedByServerU3Ek__BackingField_12;
	// System.Boolean Unity.Netcode.NetworkBehaviour::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_13;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::m_NetworkObject
	NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * ___m_NetworkObject_14;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_15;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::<NetworkBehaviourId>k__BackingField
	uint16_t ___U3CNetworkBehaviourIdU3Ek__BackingField_16;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::NetworkBehaviourIdCache
	uint16_t ___NetworkBehaviourIdCache_17;
	// System.UInt64 Unity.Netcode.NetworkBehaviour::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_18;
	// System.Boolean Unity.Netcode.NetworkBehaviour::m_VarInit
	bool ___m_VarInit_19;
	// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>> Unity.Netcode.NetworkBehaviour::m_DeliveryMappedNetworkVariableIndices
	List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 * ___m_DeliveryMappedNetworkVariableIndices_20;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery> Unity.Netcode.NetworkBehaviour::m_DeliveryTypesForNetworkVariableGroups
	List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C * ___m_DeliveryTypesForNetworkVariableGroups_21;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase> Unity.Netcode.NetworkBehaviour::NetworkVariableFields
	List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 * ___NetworkVariableFields_22;
	// System.Collections.Generic.List`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToReset
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___NetworkVariableIndexesToReset_24;
	// System.Collections.Generic.HashSet`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToResetSet
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___NetworkVariableIndexesToResetSet_25;

public:
	inline static int32_t get_offset_of___rpc_exec_stage_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, _____rpc_exec_stage_4)); }
	inline int32_t get___rpc_exec_stage_4() const { return _____rpc_exec_stage_4; }
	inline int32_t* get_address_of___rpc_exec_stage_4() { return &_____rpc_exec_stage_4; }
	inline void set___rpc_exec_stage_4(int32_t value)
	{
		_____rpc_exec_stage_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsLocalPlayerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsLocalPlayerU3Ek__BackingField_7)); }
	inline bool get_U3CIsLocalPlayerU3Ek__BackingField_7() const { return ___U3CIsLocalPlayerU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsLocalPlayerU3Ek__BackingField_7() { return &___U3CIsLocalPlayerU3Ek__BackingField_7; }
	inline void set_U3CIsLocalPlayerU3Ek__BackingField_7(bool value)
	{
		___U3CIsLocalPlayerU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsOwnerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsOwnerU3Ek__BackingField_8)); }
	inline bool get_U3CIsOwnerU3Ek__BackingField_8() const { return ___U3CIsOwnerU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsOwnerU3Ek__BackingField_8() { return &___U3CIsOwnerU3Ek__BackingField_8; }
	inline void set_U3CIsOwnerU3Ek__BackingField_8(bool value)
	{
		___U3CIsOwnerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsServerU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsServerU3Ek__BackingField_9)); }
	inline bool get_U3CIsServerU3Ek__BackingField_9() const { return ___U3CIsServerU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsServerU3Ek__BackingField_9() { return &___U3CIsServerU3Ek__BackingField_9; }
	inline void set_U3CIsServerU3Ek__BackingField_9(bool value)
	{
		___U3CIsServerU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsClientU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsClientU3Ek__BackingField_10)); }
	inline bool get_U3CIsClientU3Ek__BackingField_10() const { return ___U3CIsClientU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsClientU3Ek__BackingField_10() { return &___U3CIsClientU3Ek__BackingField_10; }
	inline void set_U3CIsClientU3Ek__BackingField_10(bool value)
	{
		___U3CIsClientU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsHostU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsHostU3Ek__BackingField_11)); }
	inline bool get_U3CIsHostU3Ek__BackingField_11() const { return ___U3CIsHostU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsHostU3Ek__BackingField_11() { return &___U3CIsHostU3Ek__BackingField_11; }
	inline void set_U3CIsHostU3Ek__BackingField_11(bool value)
	{
		___U3CIsHostU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsOwnedByServerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsOwnedByServerU3Ek__BackingField_12)); }
	inline bool get_U3CIsOwnedByServerU3Ek__BackingField_12() const { return ___U3CIsOwnedByServerU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsOwnedByServerU3Ek__BackingField_12() { return &___U3CIsOwnedByServerU3Ek__BackingField_12; }
	inline void set_U3CIsOwnedByServerU3Ek__BackingField_12(bool value)
	{
		___U3CIsOwnedByServerU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpawnedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CIsSpawnedU3Ek__BackingField_13)); }
	inline bool get_U3CIsSpawnedU3Ek__BackingField_13() const { return ___U3CIsSpawnedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsSpawnedU3Ek__BackingField_13() { return &___U3CIsSpawnedU3Ek__BackingField_13; }
	inline void set_U3CIsSpawnedU3Ek__BackingField_13(bool value)
	{
		___U3CIsSpawnedU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_m_NetworkObject_14() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_NetworkObject_14)); }
	inline NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * get_m_NetworkObject_14() const { return ___m_NetworkObject_14; }
	inline NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D ** get_address_of_m_NetworkObject_14() { return &___m_NetworkObject_14; }
	inline void set_m_NetworkObject_14(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * value)
	{
		___m_NetworkObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkObject_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkObjectIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CNetworkObjectIdU3Ek__BackingField_15)); }
	inline uint64_t get_U3CNetworkObjectIdU3Ek__BackingField_15() const { return ___U3CNetworkObjectIdU3Ek__BackingField_15; }
	inline uint64_t* get_address_of_U3CNetworkObjectIdU3Ek__BackingField_15() { return &___U3CNetworkObjectIdU3Ek__BackingField_15; }
	inline void set_U3CNetworkObjectIdU3Ek__BackingField_15(uint64_t value)
	{
		___U3CNetworkObjectIdU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkBehaviourIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3CNetworkBehaviourIdU3Ek__BackingField_16)); }
	inline uint16_t get_U3CNetworkBehaviourIdU3Ek__BackingField_16() const { return ___U3CNetworkBehaviourIdU3Ek__BackingField_16; }
	inline uint16_t* get_address_of_U3CNetworkBehaviourIdU3Ek__BackingField_16() { return &___U3CNetworkBehaviourIdU3Ek__BackingField_16; }
	inline void set_U3CNetworkBehaviourIdU3Ek__BackingField_16(uint16_t value)
	{
		___U3CNetworkBehaviourIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_NetworkBehaviourIdCache_17() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkBehaviourIdCache_17)); }
	inline uint16_t get_NetworkBehaviourIdCache_17() const { return ___NetworkBehaviourIdCache_17; }
	inline uint16_t* get_address_of_NetworkBehaviourIdCache_17() { return &___NetworkBehaviourIdCache_17; }
	inline void set_NetworkBehaviourIdCache_17(uint16_t value)
	{
		___NetworkBehaviourIdCache_17 = value;
	}

	inline static int32_t get_offset_of_U3COwnerClientIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___U3COwnerClientIdU3Ek__BackingField_18)); }
	inline uint64_t get_U3COwnerClientIdU3Ek__BackingField_18() const { return ___U3COwnerClientIdU3Ek__BackingField_18; }
	inline uint64_t* get_address_of_U3COwnerClientIdU3Ek__BackingField_18() { return &___U3COwnerClientIdU3Ek__BackingField_18; }
	inline void set_U3COwnerClientIdU3Ek__BackingField_18(uint64_t value)
	{
		___U3COwnerClientIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_VarInit_19() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_VarInit_19)); }
	inline bool get_m_VarInit_19() const { return ___m_VarInit_19; }
	inline bool* get_address_of_m_VarInit_19() { return &___m_VarInit_19; }
	inline void set_m_VarInit_19(bool value)
	{
		___m_VarInit_19 = value;
	}

	inline static int32_t get_offset_of_m_DeliveryMappedNetworkVariableIndices_20() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_DeliveryMappedNetworkVariableIndices_20)); }
	inline List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 * get_m_DeliveryMappedNetworkVariableIndices_20() const { return ___m_DeliveryMappedNetworkVariableIndices_20; }
	inline List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 ** get_address_of_m_DeliveryMappedNetworkVariableIndices_20() { return &___m_DeliveryMappedNetworkVariableIndices_20; }
	inline void set_m_DeliveryMappedNetworkVariableIndices_20(List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 * value)
	{
		___m_DeliveryMappedNetworkVariableIndices_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeliveryMappedNetworkVariableIndices_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeliveryTypesForNetworkVariableGroups_21() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_DeliveryTypesForNetworkVariableGroups_21)); }
	inline List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C * get_m_DeliveryTypesForNetworkVariableGroups_21() const { return ___m_DeliveryTypesForNetworkVariableGroups_21; }
	inline List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C ** get_address_of_m_DeliveryTypesForNetworkVariableGroups_21() { return &___m_DeliveryTypesForNetworkVariableGroups_21; }
	inline void set_m_DeliveryTypesForNetworkVariableGroups_21(List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C * value)
	{
		___m_DeliveryTypesForNetworkVariableGroups_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeliveryTypesForNetworkVariableGroups_21), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkVariableFields_22() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkVariableFields_22)); }
	inline List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 * get_NetworkVariableFields_22() const { return ___NetworkVariableFields_22; }
	inline List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 ** get_address_of_NetworkVariableFields_22() { return &___NetworkVariableFields_22; }
	inline void set_NetworkVariableFields_22(List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 * value)
	{
		___NetworkVariableFields_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkVariableFields_22), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkVariableIndexesToReset_24() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkVariableIndexesToReset_24)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_NetworkVariableIndexesToReset_24() const { return ___NetworkVariableIndexesToReset_24; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_NetworkVariableIndexesToReset_24() { return &___NetworkVariableIndexesToReset_24; }
	inline void set_NetworkVariableIndexesToReset_24(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___NetworkVariableIndexesToReset_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkVariableIndexesToReset_24), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkVariableIndexesToResetSet_25() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkVariableIndexesToResetSet_25)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_NetworkVariableIndexesToResetSet_25() const { return ___NetworkVariableIndexesToResetSet_25; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_NetworkVariableIndexesToResetSet_25() { return &___NetworkVariableIndexesToResetSet_25; }
	inline void set_NetworkVariableIndexesToResetSet_25(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___NetworkVariableIndexesToResetSet_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkVariableIndexesToResetSet_25), (void*)value);
	}
};

struct NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> Unity.Netcode.NetworkBehaviour::s_FieldTypes
	Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F * ___s_FieldTypes_23;

public:
	inline static int32_t get_offset_of_s_FieldTypes_23() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_StaticFields, ___s_FieldTypes_23)); }
	inline Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F * get_s_FieldTypes_23() const { return ___s_FieldTypes_23; }
	inline Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F ** get_address_of_s_FieldTypes_23() { return &___s_FieldTypes_23; }
	inline void set_s_FieldTypes_23(Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F * value)
	{
		___s_FieldTypes_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FieldTypes_23), (void*)value);
	}
};


// Unity.Netcode.NetworkManager
struct NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 * ___U3CBehaviourUpdaterU3Ek__BackingField_7;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 * ___U3CMessagingSystemU3Ek__BackingField_8;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 * ___m_PrefabHandler_9;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_10;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_11;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 * ___U3CNetworkTimeSystemU3Ek__BackingField_12;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B * ___U3CNetworkTickSystemU3Ek__BackingField_13;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_14;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_15;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F * ___U3CSpawnManagerU3Ek__BackingField_17;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * ___U3CCustomMessagingManagerU3Ek__BackingField_18;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * ___U3CSceneManagerU3Ek__BackingField_19;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_21;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 * ___m_ConnectedClients_22;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_23;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A * ___m_ClientIdToTransportIdMap_24;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A * ___m_TransportIdToClientIdMap_25;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 * ___m_ConnectedClientsList_26;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_ConnectedClientIds_27;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 * ___U3CLocalClientU3Ek__BackingField_28;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * ___PendingClients_29;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_30;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_31;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_32;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_33;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientConnectedCallback_34;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientDisconnectCallback_35;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnServerStarted_36;
	// System.Action`3<System.Byte[],System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovedDelegate> Unity.Netcode.NetworkManager::ConnectionApprovalCallback
	Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B * ___ConnectionApprovalCallback_37;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * ___NetworkConfig_38;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_39;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_40;

public:
	inline static int32_t get_offset_of_U3CBehaviourUpdaterU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CBehaviourUpdaterU3Ek__BackingField_7)); }
	inline NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 * get_U3CBehaviourUpdaterU3Ek__BackingField_7() const { return ___U3CBehaviourUpdaterU3Ek__BackingField_7; }
	inline NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 ** get_address_of_U3CBehaviourUpdaterU3Ek__BackingField_7() { return &___U3CBehaviourUpdaterU3Ek__BackingField_7; }
	inline void set_U3CBehaviourUpdaterU3Ek__BackingField_7(NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 * value)
	{
		___U3CBehaviourUpdaterU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBehaviourUpdaterU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessagingSystemU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CMessagingSystemU3Ek__BackingField_8)); }
	inline MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 * get_U3CMessagingSystemU3Ek__BackingField_8() const { return ___U3CMessagingSystemU3Ek__BackingField_8; }
	inline MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 ** get_address_of_U3CMessagingSystemU3Ek__BackingField_8() { return &___U3CMessagingSystemU3Ek__BackingField_8; }
	inline void set_U3CMessagingSystemU3Ek__BackingField_8(MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 * value)
	{
		___U3CMessagingSystemU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessagingSystemU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrefabHandler_9() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_PrefabHandler_9)); }
	inline NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 * get_m_PrefabHandler_9() const { return ___m_PrefabHandler_9; }
	inline NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 ** get_address_of_m_PrefabHandler_9() { return &___m_PrefabHandler_9; }
	inline void set_m_PrefabHandler_9(NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 * value)
	{
		___m_PrefabHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShuttingDown_10() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ShuttingDown_10)); }
	inline bool get_m_ShuttingDown_10() const { return ___m_ShuttingDown_10; }
	inline bool* get_address_of_m_ShuttingDown_10() { return &___m_ShuttingDown_10; }
	inline void set_m_ShuttingDown_10(bool value)
	{
		___m_ShuttingDown_10 = value;
	}

	inline static int32_t get_offset_of_m_StopProcessingMessages_11() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_StopProcessingMessages_11)); }
	inline bool get_m_StopProcessingMessages_11() const { return ___m_StopProcessingMessages_11; }
	inline bool* get_address_of_m_StopProcessingMessages_11() { return &___m_StopProcessingMessages_11; }
	inline void set_m_StopProcessingMessages_11(bool value)
	{
		___m_StopProcessingMessages_11 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkTimeSystemU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CNetworkTimeSystemU3Ek__BackingField_12)); }
	inline NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 * get_U3CNetworkTimeSystemU3Ek__BackingField_12() const { return ___U3CNetworkTimeSystemU3Ek__BackingField_12; }
	inline NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 ** get_address_of_U3CNetworkTimeSystemU3Ek__BackingField_12() { return &___U3CNetworkTimeSystemU3Ek__BackingField_12; }
	inline void set_U3CNetworkTimeSystemU3Ek__BackingField_12(NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 * value)
	{
		___U3CNetworkTimeSystemU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkTimeSystemU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkTickSystemU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CNetworkTickSystemU3Ek__BackingField_13)); }
	inline NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B * get_U3CNetworkTickSystemU3Ek__BackingField_13() const { return ___U3CNetworkTickSystemU3Ek__BackingField_13; }
	inline NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B ** get_address_of_U3CNetworkTickSystemU3Ek__BackingField_13() { return &___U3CNetworkTickSystemU3Ek__BackingField_13; }
	inline void set_U3CNetworkTickSystemU3Ek__BackingField_13(NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B * value)
	{
		___U3CNetworkTickSystemU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkTickSystemU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_RunInBackground_14() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___RunInBackground_14)); }
	inline bool get_RunInBackground_14() const { return ___RunInBackground_14; }
	inline bool* get_address_of_RunInBackground_14() { return &___RunInBackground_14; }
	inline void set_RunInBackground_14(bool value)
	{
		___RunInBackground_14 = value;
	}

	inline static int32_t get_offset_of_LogLevel_15() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___LogLevel_15)); }
	inline int32_t get_LogLevel_15() const { return ___LogLevel_15; }
	inline int32_t* get_address_of_LogLevel_15() { return &___LogLevel_15; }
	inline void set_LogLevel_15(int32_t value)
	{
		___LogLevel_15 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnManagerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CSpawnManagerU3Ek__BackingField_17)); }
	inline NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F * get_U3CSpawnManagerU3Ek__BackingField_17() const { return ___U3CSpawnManagerU3Ek__BackingField_17; }
	inline NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F ** get_address_of_U3CSpawnManagerU3Ek__BackingField_17() { return &___U3CSpawnManagerU3Ek__BackingField_17; }
	inline void set_U3CSpawnManagerU3Ek__BackingField_17(NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F * value)
	{
		___U3CSpawnManagerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpawnManagerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomMessagingManagerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CCustomMessagingManagerU3Ek__BackingField_18)); }
	inline CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * get_U3CCustomMessagingManagerU3Ek__BackingField_18() const { return ___U3CCustomMessagingManagerU3Ek__BackingField_18; }
	inline CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 ** get_address_of_U3CCustomMessagingManagerU3Ek__BackingField_18() { return &___U3CCustomMessagingManagerU3Ek__BackingField_18; }
	inline void set_U3CCustomMessagingManagerU3Ek__BackingField_18(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * value)
	{
		___U3CCustomMessagingManagerU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomMessagingManagerU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneManagerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CSceneManagerU3Ek__BackingField_19)); }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * get_U3CSceneManagerU3Ek__BackingField_19() const { return ___U3CSceneManagerU3Ek__BackingField_19; }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A ** get_address_of_U3CSceneManagerU3Ek__BackingField_19() { return &___U3CSceneManagerU3Ek__BackingField_19; }
	inline void set_U3CSceneManagerU3Ek__BackingField_19(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * value)
	{
		___U3CSceneManagerU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSceneManagerU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalClientId_21() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_LocalClientId_21)); }
	inline uint64_t get_m_LocalClientId_21() const { return ___m_LocalClientId_21; }
	inline uint64_t* get_address_of_m_LocalClientId_21() { return &___m_LocalClientId_21; }
	inline void set_m_LocalClientId_21(uint64_t value)
	{
		___m_LocalClientId_21 = value;
	}

	inline static int32_t get_offset_of_m_ConnectedClients_22() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ConnectedClients_22)); }
	inline Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 * get_m_ConnectedClients_22() const { return ___m_ConnectedClients_22; }
	inline Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 ** get_address_of_m_ConnectedClients_22() { return &___m_ConnectedClients_22; }
	inline void set_m_ConnectedClients_22(Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 * value)
	{
		___m_ConnectedClients_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectedClients_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_NextClientId_23() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_NextClientId_23)); }
	inline uint64_t get_m_NextClientId_23() const { return ___m_NextClientId_23; }
	inline uint64_t* get_address_of_m_NextClientId_23() { return &___m_NextClientId_23; }
	inline void set_m_NextClientId_23(uint64_t value)
	{
		___m_NextClientId_23 = value;
	}

	inline static int32_t get_offset_of_m_ClientIdToTransportIdMap_24() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ClientIdToTransportIdMap_24)); }
	inline Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A * get_m_ClientIdToTransportIdMap_24() const { return ___m_ClientIdToTransportIdMap_24; }
	inline Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A ** get_address_of_m_ClientIdToTransportIdMap_24() { return &___m_ClientIdToTransportIdMap_24; }
	inline void set_m_ClientIdToTransportIdMap_24(Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A * value)
	{
		___m_ClientIdToTransportIdMap_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientIdToTransportIdMap_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransportIdToClientIdMap_25() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_TransportIdToClientIdMap_25)); }
	inline Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A * get_m_TransportIdToClientIdMap_25() const { return ___m_TransportIdToClientIdMap_25; }
	inline Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A ** get_address_of_m_TransportIdToClientIdMap_25() { return &___m_TransportIdToClientIdMap_25; }
	inline void set_m_TransportIdToClientIdMap_25(Dictionary_2_tDF1B35F8FEC6532F2705E2B51525AC5F9642111A * value)
	{
		___m_TransportIdToClientIdMap_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransportIdToClientIdMap_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectedClientsList_26() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ConnectedClientsList_26)); }
	inline List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 * get_m_ConnectedClientsList_26() const { return ___m_ConnectedClientsList_26; }
	inline List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 ** get_address_of_m_ConnectedClientsList_26() { return &___m_ConnectedClientsList_26; }
	inline void set_m_ConnectedClientsList_26(List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 * value)
	{
		___m_ConnectedClientsList_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectedClientsList_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectedClientIds_27() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ConnectedClientIds_27)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_ConnectedClientIds_27() const { return ___m_ConnectedClientIds_27; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_ConnectedClientIds_27() { return &___m_ConnectedClientIds_27; }
	inline void set_m_ConnectedClientIds_27(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_ConnectedClientIds_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectedClientIds_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalClientU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CLocalClientU3Ek__BackingField_28)); }
	inline NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 * get_U3CLocalClientU3Ek__BackingField_28() const { return ___U3CLocalClientU3Ek__BackingField_28; }
	inline NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 ** get_address_of_U3CLocalClientU3Ek__BackingField_28() { return &___U3CLocalClientU3Ek__BackingField_28; }
	inline void set_U3CLocalClientU3Ek__BackingField_28(NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 * value)
	{
		___U3CLocalClientU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalClientU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_PendingClients_29() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___PendingClients_29)); }
	inline Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * get_PendingClients_29() const { return ___PendingClients_29; }
	inline Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 ** get_address_of_PendingClients_29() { return &___PendingClients_29; }
	inline void set_PendingClients_29(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * value)
	{
		___PendingClients_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PendingClients_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsServerU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsServerU3Ek__BackingField_30)); }
	inline bool get_U3CIsServerU3Ek__BackingField_30() const { return ___U3CIsServerU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CIsServerU3Ek__BackingField_30() { return &___U3CIsServerU3Ek__BackingField_30; }
	inline void set_U3CIsServerU3Ek__BackingField_30(bool value)
	{
		___U3CIsServerU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CIsClientU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsClientU3Ek__BackingField_31)); }
	inline bool get_U3CIsClientU3Ek__BackingField_31() const { return ___U3CIsClientU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CIsClientU3Ek__BackingField_31() { return &___U3CIsClientU3Ek__BackingField_31; }
	inline void set_U3CIsClientU3Ek__BackingField_31(bool value)
	{
		___U3CIsClientU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsListeningU3Ek__BackingField_32)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_32() const { return ___U3CIsListeningU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_32() { return &___U3CIsListeningU3Ek__BackingField_32; }
	inline void set_U3CIsListeningU3Ek__BackingField_32(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CIsConnectedClientU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsConnectedClientU3Ek__BackingField_33)); }
	inline bool get_U3CIsConnectedClientU3Ek__BackingField_33() const { return ___U3CIsConnectedClientU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CIsConnectedClientU3Ek__BackingField_33() { return &___U3CIsConnectedClientU3Ek__BackingField_33; }
	inline void set_U3CIsConnectedClientU3Ek__BackingField_33(bool value)
	{
		___U3CIsConnectedClientU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_OnClientConnectedCallback_34() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___OnClientConnectedCallback_34)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientConnectedCallback_34() const { return ___OnClientConnectedCallback_34; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientConnectedCallback_34() { return &___OnClientConnectedCallback_34; }
	inline void set_OnClientConnectedCallback_34(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientConnectedCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnectedCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnectCallback_35() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___OnClientDisconnectCallback_35)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientDisconnectCallback_35() const { return ___OnClientDisconnectCallback_35; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientDisconnectCallback_35() { return &___OnClientDisconnectCallback_35; }
	inline void set_OnClientDisconnectCallback_35(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientDisconnectCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnectCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerStarted_36() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___OnServerStarted_36)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnServerStarted_36() const { return ___OnServerStarted_36; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnServerStarted_36() { return &___OnServerStarted_36; }
	inline void set_OnServerStarted_36(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnServerStarted_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerStarted_36), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionApprovalCallback_37() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___ConnectionApprovalCallback_37)); }
	inline Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B * get_ConnectionApprovalCallback_37() const { return ___ConnectionApprovalCallback_37; }
	inline Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B ** get_address_of_ConnectionApprovalCallback_37() { return &___ConnectionApprovalCallback_37; }
	inline void set_ConnectionApprovalCallback_37(Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B * value)
	{
		___ConnectionApprovalCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionApprovalCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkConfig_38() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___NetworkConfig_38)); }
	inline NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * get_NetworkConfig_38() const { return ___NetworkConfig_38; }
	inline NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 ** get_address_of_NetworkConfig_38() { return &___NetworkConfig_38; }
	inline void set_NetworkConfig_38(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * value)
	{
		___NetworkConfig_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkConfig_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectedHostnameU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CConnectedHostnameU3Ek__BackingField_39)); }
	inline String_t* get_U3CConnectedHostnameU3Ek__BackingField_39() const { return ___U3CConnectedHostnameU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CConnectedHostnameU3Ek__BackingField_39() { return &___U3CConnectedHostnameU3Ek__BackingField_39; }
	inline void set_U3CConnectedHostnameU3Ek__BackingField_39(String_t* value)
	{
		___U3CConnectedHostnameU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectedHostnameU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkMetricsU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CNetworkMetricsU3Ek__BackingField_40)); }
	inline RuntimeObject* get_U3CNetworkMetricsU3Ek__BackingField_40() const { return ___U3CNetworkMetricsU3Ek__BackingField_40; }
	inline RuntimeObject** get_address_of_U3CNetworkMetricsU3Ek__BackingField_40() { return &___U3CNetworkMetricsU3Ek__BackingField_40; }
	inline void set_U3CNetworkMetricsU3Ek__BackingField_40(RuntimeObject* value)
	{
		___U3CNetworkMetricsU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkMetricsU3Ek__BackingField_40), (void*)value);
	}
};

struct NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___U3CSingletonU3Ek__BackingField_16;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSingletonReady_41;

public:
	inline static int32_t get_offset_of___rpc_func_table_4() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields, _____rpc_func_table_4)); }
	inline Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * get___rpc_func_table_4() const { return _____rpc_func_table_4; }
	inline Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 ** get_address_of___rpc_func_table_4() { return &_____rpc_func_table_4; }
	inline void set___rpc_func_table_4(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * value)
	{
		_____rpc_func_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____rpc_func_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSingletonU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields, ___U3CSingletonU3Ek__BackingField_16)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_U3CSingletonU3Ek__BackingField_16() const { return ___U3CSingletonU3Ek__BackingField_16; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_U3CSingletonU3Ek__BackingField_16() { return &___U3CSingletonU3Ek__BackingField_16; }
	inline void set_U3CSingletonU3Ek__BackingField_16(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___U3CSingletonU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSingletonU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnSingletonReady_41() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields, ___OnSingletonReady_41)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSingletonReady_41() const { return ___OnSingletonReady_41; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSingletonReady_41() { return &___OnSingletonReady_41; }
	inline void set_OnSingletonReady_41(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSingletonReady_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSingletonReady_41), (void*)value);
	}
};


// Unity.Netcode.NetworkObject
struct NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 Unity.Netcode.NetworkObject::GlobalObjectIdHash
	uint32_t ___GlobalObjectIdHash_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkObject::NetworkManagerOwner
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___NetworkManagerOwner_5;
	// System.UInt64 Unity.Netcode.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_6;
	// System.UInt64 Unity.Netcode.NetworkObject::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_7;
	// System.Boolean Unity.Netcode.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_8;
	// System.Boolean Unity.Netcode.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_9;
	// System.Boolean Unity.Netcode.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_10;
	// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsSceneObjectU3Ek__BackingField_11;
	// System.Boolean Unity.Netcode.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_12;
	// Unity.Netcode.NetworkObject/VisibilityDelegate Unity.Netcode.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * ___CheckObjectVisibility_13;
	// Unity.Netcode.NetworkObject/SpawnDelegate Unity.Netcode.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * ___IncludeTransformWhenSpawning_14;
	// System.Boolean Unity.Netcode.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_15;
	// System.Boolean Unity.Netcode.NetworkObject::AutoObjectParentSync
	bool ___AutoObjectParentSync_16;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::Observers
	HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * ___Observers_17;
	// System.String Unity.Netcode.NetworkObject::m_CachedNameForMetrics
	String_t* ___m_CachedNameForMetrics_18;
	// System.Boolean Unity.Netcode.NetworkObject::m_IsReparented
	bool ___m_IsReparented_19;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::m_LatestParent
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___m_LatestParent_20;
	// UnityEngine.Transform Unity.Netcode.NetworkObject::m_CachedParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CachedParent_21;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour> Unity.Netcode.NetworkObject::m_ChildNetworkBehaviours
	List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 * ___m_ChildNetworkBehaviours_23;

public:
	inline static int32_t get_offset_of_GlobalObjectIdHash_4() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___GlobalObjectIdHash_4)); }
	inline uint32_t get_GlobalObjectIdHash_4() const { return ___GlobalObjectIdHash_4; }
	inline uint32_t* get_address_of_GlobalObjectIdHash_4() { return &___GlobalObjectIdHash_4; }
	inline void set_GlobalObjectIdHash_4(uint32_t value)
	{
		___GlobalObjectIdHash_4 = value;
	}

	inline static int32_t get_offset_of_NetworkManagerOwner_5() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___NetworkManagerOwner_5)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_NetworkManagerOwner_5() const { return ___NetworkManagerOwner_5; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_NetworkManagerOwner_5() { return &___NetworkManagerOwner_5; }
	inline void set_NetworkManagerOwner_5(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___NetworkManagerOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkManagerOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkObjectIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CNetworkObjectIdU3Ek__BackingField_6)); }
	inline uint64_t get_U3CNetworkObjectIdU3Ek__BackingField_6() const { return ___U3CNetworkObjectIdU3Ek__BackingField_6; }
	inline uint64_t* get_address_of_U3CNetworkObjectIdU3Ek__BackingField_6() { return &___U3CNetworkObjectIdU3Ek__BackingField_6; }
	inline void set_U3CNetworkObjectIdU3Ek__BackingField_6(uint64_t value)
	{
		___U3CNetworkObjectIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COwnerClientIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3COwnerClientIdU3Ek__BackingField_7)); }
	inline uint64_t get_U3COwnerClientIdU3Ek__BackingField_7() const { return ___U3COwnerClientIdU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3COwnerClientIdU3Ek__BackingField_7() { return &___U3COwnerClientIdU3Ek__BackingField_7; }
	inline void set_U3COwnerClientIdU3Ek__BackingField_7(uint64_t value)
	{
		___U3COwnerClientIdU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_AlwaysReplicateAsRoot_8() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___AlwaysReplicateAsRoot_8)); }
	inline bool get_AlwaysReplicateAsRoot_8() const { return ___AlwaysReplicateAsRoot_8; }
	inline bool* get_address_of_AlwaysReplicateAsRoot_8() { return &___AlwaysReplicateAsRoot_8; }
	inline void set_AlwaysReplicateAsRoot_8(bool value)
	{
		___AlwaysReplicateAsRoot_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayerObjectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CIsPlayerObjectU3Ek__BackingField_9)); }
	inline bool get_U3CIsPlayerObjectU3Ek__BackingField_9() const { return ___U3CIsPlayerObjectU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPlayerObjectU3Ek__BackingField_9() { return &___U3CIsPlayerObjectU3Ek__BackingField_9; }
	inline void set_U3CIsPlayerObjectU3Ek__BackingField_9(bool value)
	{
		___U3CIsPlayerObjectU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpawnedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CIsSpawnedU3Ek__BackingField_10)); }
	inline bool get_U3CIsSpawnedU3Ek__BackingField_10() const { return ___U3CIsSpawnedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsSpawnedU3Ek__BackingField_10() { return &___U3CIsSpawnedU3Ek__BackingField_10; }
	inline void set_U3CIsSpawnedU3Ek__BackingField_10(bool value)
	{
		___U3CIsSpawnedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsSceneObjectU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CIsSceneObjectU3Ek__BackingField_11)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsSceneObjectU3Ek__BackingField_11() const { return ___U3CIsSceneObjectU3Ek__BackingField_11; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsSceneObjectU3Ek__BackingField_11() { return &___U3CIsSceneObjectU3Ek__BackingField_11; }
	inline void set_U3CIsSceneObjectU3Ek__BackingField_11(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsSceneObjectU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDestroyWithSceneU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CDestroyWithSceneU3Ek__BackingField_12)); }
	inline bool get_U3CDestroyWithSceneU3Ek__BackingField_12() const { return ___U3CDestroyWithSceneU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CDestroyWithSceneU3Ek__BackingField_12() { return &___U3CDestroyWithSceneU3Ek__BackingField_12; }
	inline void set_U3CDestroyWithSceneU3Ek__BackingField_12(bool value)
	{
		___U3CDestroyWithSceneU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_CheckObjectVisibility_13() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___CheckObjectVisibility_13)); }
	inline VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * get_CheckObjectVisibility_13() const { return ___CheckObjectVisibility_13; }
	inline VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 ** get_address_of_CheckObjectVisibility_13() { return &___CheckObjectVisibility_13; }
	inline void set_CheckObjectVisibility_13(VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * value)
	{
		___CheckObjectVisibility_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckObjectVisibility_13), (void*)value);
	}

	inline static int32_t get_offset_of_IncludeTransformWhenSpawning_14() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___IncludeTransformWhenSpawning_14)); }
	inline SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * get_IncludeTransformWhenSpawning_14() const { return ___IncludeTransformWhenSpawning_14; }
	inline SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 ** get_address_of_IncludeTransformWhenSpawning_14() { return &___IncludeTransformWhenSpawning_14; }
	inline void set_IncludeTransformWhenSpawning_14(SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * value)
	{
		___IncludeTransformWhenSpawning_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludeTransformWhenSpawning_14), (void*)value);
	}

	inline static int32_t get_offset_of_DontDestroyWithOwner_15() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___DontDestroyWithOwner_15)); }
	inline bool get_DontDestroyWithOwner_15() const { return ___DontDestroyWithOwner_15; }
	inline bool* get_address_of_DontDestroyWithOwner_15() { return &___DontDestroyWithOwner_15; }
	inline void set_DontDestroyWithOwner_15(bool value)
	{
		___DontDestroyWithOwner_15 = value;
	}

	inline static int32_t get_offset_of_AutoObjectParentSync_16() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___AutoObjectParentSync_16)); }
	inline bool get_AutoObjectParentSync_16() const { return ___AutoObjectParentSync_16; }
	inline bool* get_address_of_AutoObjectParentSync_16() { return &___AutoObjectParentSync_16; }
	inline void set_AutoObjectParentSync_16(bool value)
	{
		___AutoObjectParentSync_16 = value;
	}

	inline static int32_t get_offset_of_Observers_17() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___Observers_17)); }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * get_Observers_17() const { return ___Observers_17; }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E ** get_address_of_Observers_17() { return &___Observers_17; }
	inline void set_Observers_17(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * value)
	{
		___Observers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Observers_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedNameForMetrics_18() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_CachedNameForMetrics_18)); }
	inline String_t* get_m_CachedNameForMetrics_18() const { return ___m_CachedNameForMetrics_18; }
	inline String_t** get_address_of_m_CachedNameForMetrics_18() { return &___m_CachedNameForMetrics_18; }
	inline void set_m_CachedNameForMetrics_18(String_t* value)
	{
		___m_CachedNameForMetrics_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedNameForMetrics_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsReparented_19() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_IsReparented_19)); }
	inline bool get_m_IsReparented_19() const { return ___m_IsReparented_19; }
	inline bool* get_address_of_m_IsReparented_19() { return &___m_IsReparented_19; }
	inline void set_m_IsReparented_19(bool value)
	{
		___m_IsReparented_19 = value;
	}

	inline static int32_t get_offset_of_m_LatestParent_20() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_LatestParent_20)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_m_LatestParent_20() const { return ___m_LatestParent_20; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_m_LatestParent_20() { return &___m_LatestParent_20; }
	inline void set_m_LatestParent_20(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___m_LatestParent_20 = value;
	}

	inline static int32_t get_offset_of_m_CachedParent_21() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_CachedParent_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CachedParent_21() const { return ___m_CachedParent_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CachedParent_21() { return &___m_CachedParent_21; }
	inline void set_m_CachedParent_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CachedParent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedParent_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildNetworkBehaviours_23() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_ChildNetworkBehaviours_23)); }
	inline List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 * get_m_ChildNetworkBehaviours_23() const { return ___m_ChildNetworkBehaviours_23; }
	inline List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 ** get_address_of_m_ChildNetworkBehaviours_23() { return &___m_ChildNetworkBehaviours_23; }
	inline void set_m_ChildNetworkBehaviours_23(List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 * value)
	{
		___m_ChildNetworkBehaviours_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildNetworkBehaviours_23), (void*)value);
	}
};

struct NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkObject::OrphanChildren
	HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A * ___OrphanChildren_22;

public:
	inline static int32_t get_offset_of_OrphanChildren_22() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D_StaticFields, ___OrphanChildren_22)); }
	inline HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A * get_OrphanChildren_22() const { return ___OrphanChildren_22; }
	inline HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A ** get_address_of_OrphanChildren_22() { return &___OrphanChildren_22; }
	inline void set_OrphanChildren_22(HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A * value)
	{
		___OrphanChildren_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OrphanChildren_22), (void*)value);
	}
};


// Unity.Netcode.Components.NetworkAnimator
struct NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F  : public NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9
{
public:
	// UnityEngine.Animator Unity.Netcode.Components.NetworkAnimator::m_Animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___m_Animator_26;
	// System.Boolean Unity.Netcode.Components.NetworkAnimator::m_SendMessagesAllowed
	bool ___m_SendMessagesAllowed_27;
	// System.Int32[] Unity.Netcode.Components.NetworkAnimator::m_TransitionHash
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_TransitionHash_29;
	// System.Int32[] Unity.Netcode.Components.NetworkAnimator::m_AnimationHash
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_AnimationHash_30;
	// System.Single[] Unity.Netcode.Components.NetworkAnimator::m_LayerWeights
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_LayerWeights_31;
	// Unity.Netcode.FastBufferWriter Unity.Netcode.Components.NetworkAnimator::m_ParameterWriter
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___m_ParameterWriter_32;
	// Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache> Unity.Netcode.Components.NetworkAnimator::m_CachedAnimatorParameters
	NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  ___m_CachedAnimatorParameters_33;

public:
	inline static int32_t get_offset_of_m_Animator_26() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_Animator_26)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_m_Animator_26() const { return ___m_Animator_26; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_m_Animator_26() { return &___m_Animator_26; }
	inline void set_m_Animator_26(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___m_Animator_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Animator_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_SendMessagesAllowed_27() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_SendMessagesAllowed_27)); }
	inline bool get_m_SendMessagesAllowed_27() const { return ___m_SendMessagesAllowed_27; }
	inline bool* get_address_of_m_SendMessagesAllowed_27() { return &___m_SendMessagesAllowed_27; }
	inline void set_m_SendMessagesAllowed_27(bool value)
	{
		___m_SendMessagesAllowed_27 = value;
	}

	inline static int32_t get_offset_of_m_TransitionHash_29() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_TransitionHash_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_TransitionHash_29() const { return ___m_TransitionHash_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_TransitionHash_29() { return &___m_TransitionHash_29; }
	inline void set_m_TransitionHash_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_TransitionHash_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransitionHash_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationHash_30() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_AnimationHash_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_AnimationHash_30() const { return ___m_AnimationHash_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_AnimationHash_30() { return &___m_AnimationHash_30; }
	inline void set_m_AnimationHash_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_AnimationHash_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationHash_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayerWeights_31() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_LayerWeights_31)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_LayerWeights_31() const { return ___m_LayerWeights_31; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_LayerWeights_31() { return &___m_LayerWeights_31; }
	inline void set_m_LayerWeights_31(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_LayerWeights_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayerWeights_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParameterWriter_32() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_ParameterWriter_32)); }
	inline FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  get_m_ParameterWriter_32() const { return ___m_ParameterWriter_32; }
	inline FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * get_address_of_m_ParameterWriter_32() { return &___m_ParameterWriter_32; }
	inline void set_m_ParameterWriter_32(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  value)
	{
		___m_ParameterWriter_32 = value;
	}

	inline static int32_t get_offset_of_m_CachedAnimatorParameters_33() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F, ___m_CachedAnimatorParameters_33)); }
	inline NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  get_m_CachedAnimatorParameters_33() const { return ___m_CachedAnimatorParameters_33; }
	inline NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * get_address_of_m_CachedAnimatorParameters_33() { return &___m_CachedAnimatorParameters_33; }
	inline void set_m_CachedAnimatorParameters_33(NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  value)
	{
		___m_CachedAnimatorParameters_33 = value;
	}
};

struct NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_StaticFields
{
public:
	// System.Int32 Unity.Netcode.Components.NetworkAnimator::K_MaxAnimationParams
	int32_t ___K_MaxAnimationParams_28;

public:
	inline static int32_t get_offset_of_K_MaxAnimationParams_28() { return static_cast<int32_t>(offsetof(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_StaticFields, ___K_MaxAnimationParams_28)); }
	inline int32_t get_K_MaxAnimationParams_28() const { return ___K_MaxAnimationParams_28; }
	inline int32_t* get_address_of_K_MaxAnimationParams_28() { return &___K_MaxAnimationParams_28; }
	inline void set_K_MaxAnimationParams_28(int32_t value)
	{
		___K_MaxAnimationParams_28 = value;
	}
};


// Unity.Netcode.Components.NetworkTransform
struct NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426  : public NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9
{
public:
	// Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate Unity.Netcode.Components.NetworkTransform::OnClientRequestChange
	OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * ___OnClientRequestChange_29;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncPositionX
	bool ___SyncPositionX_30;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncPositionY
	bool ___SyncPositionY_31;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncPositionZ
	bool ___SyncPositionZ_32;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncRotAngleX
	bool ___SyncRotAngleX_33;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncRotAngleY
	bool ___SyncRotAngleY_34;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncRotAngleZ
	bool ___SyncRotAngleZ_35;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncScaleX
	bool ___SyncScaleX_36;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncScaleY
	bool ___SyncScaleY_37;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncScaleZ
	bool ___SyncScaleZ_38;
	// System.Single Unity.Netcode.Components.NetworkTransform::PositionThreshold
	float ___PositionThreshold_39;
	// System.Single Unity.Netcode.Components.NetworkTransform::RotAngleThreshold
	float ___RotAngleThreshold_40;
	// System.Single Unity.Netcode.Components.NetworkTransform::ScaleThreshold
	float ___ScaleThreshold_41;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::InLocalSpace
	bool ___InLocalSpace_42;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::m_LastInterpolateLocal
	bool ___m_LastInterpolateLocal_43;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::Interpolate
	bool ___Interpolate_44;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::m_LastInterpolate
	bool ___m_LastInterpolate_45;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::<CanCommitToTransform>k__BackingField
	bool ___U3CCanCommitToTransformU3Ek__BackingField_46;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::m_CachedIsServer
	bool ___m_CachedIsServer_47;
	// Unity.Netcode.NetworkManager Unity.Netcode.Components.NetworkTransform::m_CachedNetworkManager
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___m_CachedNetworkManager_48;
	// Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState> Unity.Netcode.Components.NetworkTransform::m_ReplicatedNetworkState
	NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * ___m_ReplicatedNetworkState_49;
	// Unity.Netcode.Components.NetworkTransform/NetworkTransformState Unity.Netcode.Components.NetworkTransform::m_LocalAuthoritativeNetworkState
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___m_LocalAuthoritativeNetworkState_50;
	// Unity.Netcode.Components.NetworkTransform/NetworkTransformState Unity.Netcode.Components.NetworkTransform::m_PrevNetworkState
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___m_PrevNetworkState_51;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::m_HasSentLastValue
	bool ___m_HasSentLastValue_53;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_PositionXInterpolator
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___m_PositionXInterpolator_54;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_PositionYInterpolator
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___m_PositionYInterpolator_55;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_PositionZInterpolator
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___m_PositionZInterpolator_56;
	// Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion> Unity.Netcode.Components.NetworkTransform::m_RotationInterpolator
	BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * ___m_RotationInterpolator_57;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_ScaleXInterpolator
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___m_ScaleXInterpolator_58;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_ScaleYInterpolator
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___m_ScaleYInterpolator_59;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_ScaleZInterpolator
	BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___m_ScaleZInterpolator_60;
	// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>> Unity.Netcode.Components.NetworkTransform::m_AllFloatInterpolators
	List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * ___m_AllFloatInterpolators_61;
	// UnityEngine.Transform Unity.Netcode.Components.NetworkTransform::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_62;
	// System.Int32 Unity.Netcode.Components.NetworkTransform::m_LastSentTick
	int32_t ___m_LastSentTick_63;
	// Unity.Netcode.Components.NetworkTransform/NetworkTransformState Unity.Netcode.Components.NetworkTransform::m_LastSentState
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___m_LastSentState_64;

public:
	inline static int32_t get_offset_of_OnClientRequestChange_29() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___OnClientRequestChange_29)); }
	inline OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * get_OnClientRequestChange_29() const { return ___OnClientRequestChange_29; }
	inline OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 ** get_address_of_OnClientRequestChange_29() { return &___OnClientRequestChange_29; }
	inline void set_OnClientRequestChange_29(OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * value)
	{
		___OnClientRequestChange_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientRequestChange_29), (void*)value);
	}

	inline static int32_t get_offset_of_SyncPositionX_30() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncPositionX_30)); }
	inline bool get_SyncPositionX_30() const { return ___SyncPositionX_30; }
	inline bool* get_address_of_SyncPositionX_30() { return &___SyncPositionX_30; }
	inline void set_SyncPositionX_30(bool value)
	{
		___SyncPositionX_30 = value;
	}

	inline static int32_t get_offset_of_SyncPositionY_31() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncPositionY_31)); }
	inline bool get_SyncPositionY_31() const { return ___SyncPositionY_31; }
	inline bool* get_address_of_SyncPositionY_31() { return &___SyncPositionY_31; }
	inline void set_SyncPositionY_31(bool value)
	{
		___SyncPositionY_31 = value;
	}

	inline static int32_t get_offset_of_SyncPositionZ_32() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncPositionZ_32)); }
	inline bool get_SyncPositionZ_32() const { return ___SyncPositionZ_32; }
	inline bool* get_address_of_SyncPositionZ_32() { return &___SyncPositionZ_32; }
	inline void set_SyncPositionZ_32(bool value)
	{
		___SyncPositionZ_32 = value;
	}

	inline static int32_t get_offset_of_SyncRotAngleX_33() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncRotAngleX_33)); }
	inline bool get_SyncRotAngleX_33() const { return ___SyncRotAngleX_33; }
	inline bool* get_address_of_SyncRotAngleX_33() { return &___SyncRotAngleX_33; }
	inline void set_SyncRotAngleX_33(bool value)
	{
		___SyncRotAngleX_33 = value;
	}

	inline static int32_t get_offset_of_SyncRotAngleY_34() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncRotAngleY_34)); }
	inline bool get_SyncRotAngleY_34() const { return ___SyncRotAngleY_34; }
	inline bool* get_address_of_SyncRotAngleY_34() { return &___SyncRotAngleY_34; }
	inline void set_SyncRotAngleY_34(bool value)
	{
		___SyncRotAngleY_34 = value;
	}

	inline static int32_t get_offset_of_SyncRotAngleZ_35() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncRotAngleZ_35)); }
	inline bool get_SyncRotAngleZ_35() const { return ___SyncRotAngleZ_35; }
	inline bool* get_address_of_SyncRotAngleZ_35() { return &___SyncRotAngleZ_35; }
	inline void set_SyncRotAngleZ_35(bool value)
	{
		___SyncRotAngleZ_35 = value;
	}

	inline static int32_t get_offset_of_SyncScaleX_36() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncScaleX_36)); }
	inline bool get_SyncScaleX_36() const { return ___SyncScaleX_36; }
	inline bool* get_address_of_SyncScaleX_36() { return &___SyncScaleX_36; }
	inline void set_SyncScaleX_36(bool value)
	{
		___SyncScaleX_36 = value;
	}

	inline static int32_t get_offset_of_SyncScaleY_37() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncScaleY_37)); }
	inline bool get_SyncScaleY_37() const { return ___SyncScaleY_37; }
	inline bool* get_address_of_SyncScaleY_37() { return &___SyncScaleY_37; }
	inline void set_SyncScaleY_37(bool value)
	{
		___SyncScaleY_37 = value;
	}

	inline static int32_t get_offset_of_SyncScaleZ_38() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___SyncScaleZ_38)); }
	inline bool get_SyncScaleZ_38() const { return ___SyncScaleZ_38; }
	inline bool* get_address_of_SyncScaleZ_38() { return &___SyncScaleZ_38; }
	inline void set_SyncScaleZ_38(bool value)
	{
		___SyncScaleZ_38 = value;
	}

	inline static int32_t get_offset_of_PositionThreshold_39() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___PositionThreshold_39)); }
	inline float get_PositionThreshold_39() const { return ___PositionThreshold_39; }
	inline float* get_address_of_PositionThreshold_39() { return &___PositionThreshold_39; }
	inline void set_PositionThreshold_39(float value)
	{
		___PositionThreshold_39 = value;
	}

	inline static int32_t get_offset_of_RotAngleThreshold_40() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___RotAngleThreshold_40)); }
	inline float get_RotAngleThreshold_40() const { return ___RotAngleThreshold_40; }
	inline float* get_address_of_RotAngleThreshold_40() { return &___RotAngleThreshold_40; }
	inline void set_RotAngleThreshold_40(float value)
	{
		___RotAngleThreshold_40 = value;
	}

	inline static int32_t get_offset_of_ScaleThreshold_41() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___ScaleThreshold_41)); }
	inline float get_ScaleThreshold_41() const { return ___ScaleThreshold_41; }
	inline float* get_address_of_ScaleThreshold_41() { return &___ScaleThreshold_41; }
	inline void set_ScaleThreshold_41(float value)
	{
		___ScaleThreshold_41 = value;
	}

	inline static int32_t get_offset_of_InLocalSpace_42() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___InLocalSpace_42)); }
	inline bool get_InLocalSpace_42() const { return ___InLocalSpace_42; }
	inline bool* get_address_of_InLocalSpace_42() { return &___InLocalSpace_42; }
	inline void set_InLocalSpace_42(bool value)
	{
		___InLocalSpace_42 = value;
	}

	inline static int32_t get_offset_of_m_LastInterpolateLocal_43() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_LastInterpolateLocal_43)); }
	inline bool get_m_LastInterpolateLocal_43() const { return ___m_LastInterpolateLocal_43; }
	inline bool* get_address_of_m_LastInterpolateLocal_43() { return &___m_LastInterpolateLocal_43; }
	inline void set_m_LastInterpolateLocal_43(bool value)
	{
		___m_LastInterpolateLocal_43 = value;
	}

	inline static int32_t get_offset_of_Interpolate_44() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___Interpolate_44)); }
	inline bool get_Interpolate_44() const { return ___Interpolate_44; }
	inline bool* get_address_of_Interpolate_44() { return &___Interpolate_44; }
	inline void set_Interpolate_44(bool value)
	{
		___Interpolate_44 = value;
	}

	inline static int32_t get_offset_of_m_LastInterpolate_45() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_LastInterpolate_45)); }
	inline bool get_m_LastInterpolate_45() const { return ___m_LastInterpolate_45; }
	inline bool* get_address_of_m_LastInterpolate_45() { return &___m_LastInterpolate_45; }
	inline void set_m_LastInterpolate_45(bool value)
	{
		___m_LastInterpolate_45 = value;
	}

	inline static int32_t get_offset_of_U3CCanCommitToTransformU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___U3CCanCommitToTransformU3Ek__BackingField_46)); }
	inline bool get_U3CCanCommitToTransformU3Ek__BackingField_46() const { return ___U3CCanCommitToTransformU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CCanCommitToTransformU3Ek__BackingField_46() { return &___U3CCanCommitToTransformU3Ek__BackingField_46; }
	inline void set_U3CCanCommitToTransformU3Ek__BackingField_46(bool value)
	{
		___U3CCanCommitToTransformU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_m_CachedIsServer_47() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_CachedIsServer_47)); }
	inline bool get_m_CachedIsServer_47() const { return ___m_CachedIsServer_47; }
	inline bool* get_address_of_m_CachedIsServer_47() { return &___m_CachedIsServer_47; }
	inline void set_m_CachedIsServer_47(bool value)
	{
		___m_CachedIsServer_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedNetworkManager_48() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_CachedNetworkManager_48)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_m_CachedNetworkManager_48() const { return ___m_CachedNetworkManager_48; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_m_CachedNetworkManager_48() { return &___m_CachedNetworkManager_48; }
	inline void set_m_CachedNetworkManager_48(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___m_CachedNetworkManager_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedNetworkManager_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReplicatedNetworkState_49() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_ReplicatedNetworkState_49)); }
	inline NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * get_m_ReplicatedNetworkState_49() const { return ___m_ReplicatedNetworkState_49; }
	inline NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 ** get_address_of_m_ReplicatedNetworkState_49() { return &___m_ReplicatedNetworkState_49; }
	inline void set_m_ReplicatedNetworkState_49(NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * value)
	{
		___m_ReplicatedNetworkState_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReplicatedNetworkState_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalAuthoritativeNetworkState_50() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_LocalAuthoritativeNetworkState_50)); }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  get_m_LocalAuthoritativeNetworkState_50() const { return ___m_LocalAuthoritativeNetworkState_50; }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * get_address_of_m_LocalAuthoritativeNetworkState_50() { return &___m_LocalAuthoritativeNetworkState_50; }
	inline void set_m_LocalAuthoritativeNetworkState_50(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  value)
	{
		___m_LocalAuthoritativeNetworkState_50 = value;
	}

	inline static int32_t get_offset_of_m_PrevNetworkState_51() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_PrevNetworkState_51)); }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  get_m_PrevNetworkState_51() const { return ___m_PrevNetworkState_51; }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * get_address_of_m_PrevNetworkState_51() { return &___m_PrevNetworkState_51; }
	inline void set_m_PrevNetworkState_51(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  value)
	{
		___m_PrevNetworkState_51 = value;
	}

	inline static int32_t get_offset_of_m_HasSentLastValue_53() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_HasSentLastValue_53)); }
	inline bool get_m_HasSentLastValue_53() const { return ___m_HasSentLastValue_53; }
	inline bool* get_address_of_m_HasSentLastValue_53() { return &___m_HasSentLastValue_53; }
	inline void set_m_HasSentLastValue_53(bool value)
	{
		___m_HasSentLastValue_53 = value;
	}

	inline static int32_t get_offset_of_m_PositionXInterpolator_54() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_PositionXInterpolator_54)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_m_PositionXInterpolator_54() const { return ___m_PositionXInterpolator_54; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_m_PositionXInterpolator_54() { return &___m_PositionXInterpolator_54; }
	inline void set_m_PositionXInterpolator_54(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___m_PositionXInterpolator_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PositionXInterpolator_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_PositionYInterpolator_55() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_PositionYInterpolator_55)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_m_PositionYInterpolator_55() const { return ___m_PositionYInterpolator_55; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_m_PositionYInterpolator_55() { return &___m_PositionYInterpolator_55; }
	inline void set_m_PositionYInterpolator_55(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___m_PositionYInterpolator_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PositionYInterpolator_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_PositionZInterpolator_56() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_PositionZInterpolator_56)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_m_PositionZInterpolator_56() const { return ___m_PositionZInterpolator_56; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_m_PositionZInterpolator_56() { return &___m_PositionZInterpolator_56; }
	inline void set_m_PositionZInterpolator_56(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___m_PositionZInterpolator_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PositionZInterpolator_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_RotationInterpolator_57() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_RotationInterpolator_57)); }
	inline BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * get_m_RotationInterpolator_57() const { return ___m_RotationInterpolator_57; }
	inline BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 ** get_address_of_m_RotationInterpolator_57() { return &___m_RotationInterpolator_57; }
	inline void set_m_RotationInterpolator_57(BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * value)
	{
		___m_RotationInterpolator_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RotationInterpolator_57), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleXInterpolator_58() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_ScaleXInterpolator_58)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_m_ScaleXInterpolator_58() const { return ___m_ScaleXInterpolator_58; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_m_ScaleXInterpolator_58() { return &___m_ScaleXInterpolator_58; }
	inline void set_m_ScaleXInterpolator_58(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___m_ScaleXInterpolator_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleXInterpolator_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleYInterpolator_59() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_ScaleYInterpolator_59)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_m_ScaleYInterpolator_59() const { return ___m_ScaleYInterpolator_59; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_m_ScaleYInterpolator_59() { return &___m_ScaleYInterpolator_59; }
	inline void set_m_ScaleYInterpolator_59(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___m_ScaleYInterpolator_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleYInterpolator_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleZInterpolator_60() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_ScaleZInterpolator_60)); }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * get_m_ScaleZInterpolator_60() const { return ___m_ScaleZInterpolator_60; }
	inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 ** get_address_of_m_ScaleZInterpolator_60() { return &___m_ScaleZInterpolator_60; }
	inline void set_m_ScaleZInterpolator_60(BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * value)
	{
		___m_ScaleZInterpolator_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleZInterpolator_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllFloatInterpolators_61() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_AllFloatInterpolators_61)); }
	inline List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * get_m_AllFloatInterpolators_61() const { return ___m_AllFloatInterpolators_61; }
	inline List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B ** get_address_of_m_AllFloatInterpolators_61() { return &___m_AllFloatInterpolators_61; }
	inline void set_m_AllFloatInterpolators_61(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * value)
	{
		___m_AllFloatInterpolators_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllFloatInterpolators_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_Transform_62() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_Transform_62)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_62() const { return ___m_Transform_62; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_62() { return &___m_Transform_62; }
	inline void set_m_Transform_62(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSentTick_63() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_LastSentTick_63)); }
	inline int32_t get_m_LastSentTick_63() const { return ___m_LastSentTick_63; }
	inline int32_t* get_address_of_m_LastSentTick_63() { return &___m_LastSentTick_63; }
	inline void set_m_LastSentTick_63(int32_t value)
	{
		___m_LastSentTick_63 = value;
	}

	inline static int32_t get_offset_of_m_LastSentState_64() { return static_cast<int32_t>(offsetof(NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426, ___m_LastSentState_64)); }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  get_m_LastSentState_64() const { return ___m_LastSentState_64; }
	inline NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * get_address_of_m_LastSentState_64() { return &___m_LastSentState_64; }
	inline void set_m_LastSentState_64(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  value)
	{
		___m_LastSentState_64 = value;
	}
};


// Unity.Netcode.__RpcParams
struct __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 
{
public:
	// Unity.Netcode.ServerRpcParams Unity.Netcode.__RpcParams::Server
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___Server_0;
	// Unity.Netcode.ClientRpcParams Unity.Netcode.__RpcParams::Client
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___Client_1;

public:
	inline static int32_t get_offset_of_Server_0() { return static_cast<int32_t>(offsetof(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0, ___Server_0)); }
	inline ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  get_Server_0() const { return ___Server_0; }
	inline ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09 * get_address_of_Server_0() { return &___Server_0; }
	inline void set_Server_0(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  value)
	{
		___Server_0 = value;
	}

	inline static int32_t get_offset_of_Client_1() { return static_cast<int32_t>(offsetof(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0, ___Client_1)); }
	inline ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  get_Client_1() const { return ___Client_1; }
	inline ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89 * get_address_of_Client_1() { return &___Client_1; }
	inline void set_Client_1(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  value)
	{
		___Client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Client_1))->___Send_0))->___TargetClientIds_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_pinvoke
{
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___Server_0;
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke ___Client_1;
};
// Native definition for COM marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_com
{
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___Server_0;
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com ___Client_1;
};

// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * m_Items[1];

public:
	inline AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978_gshared (const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F_gshared (const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D_gshared (const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5_gshared (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62_gshared (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514_gshared (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A_gshared (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246_gshared (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<System.Int32Enum>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m9CE0355C48BF67B9268E8739BC5E73CB68EFA60C_gshared (int32_t ___enumValue0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Boolean>(System.Void*,System.Int32,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_gshared (void* ___destination0, int32_t ___index1, bool ___value2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_gshared (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  ___nativeArray0, const RuntimeMethod* method);
// !!0& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ArrayElementAsRef<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_gshared (void* ___ptr0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Boolean>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, bool* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Single>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, float* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Boolean>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, bool* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Single>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, float* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0_gshared (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB_gshared (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m505F2CF58731D70AAE480EFFE20B311E5BBBB761_gshared (Dictionary_2_t32479D928C553725424938B11A68D3CD8069EA75 * __this, uint32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C_gshared (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6_gshared (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE_gshared (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::ResetTo(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_gshared (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, float ___targetValue0, double ___serverTime1, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::ResetTo(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_gshared (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___targetValue0, double ___serverTime1, const RuntimeMethod* method);
// System.Void System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>::.ctor(!0,!1,!2,!3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537_gshared (ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A * __this, bool ___item10, bool ___item21, bool ___item32, bool ___item43, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::GetInterpolatedValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_gshared_inline (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::GetInterpolatedValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_gshared_inline (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::AddMeasurement(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_gshared (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, float ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::AddMeasurement(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE_gshared (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_gshared (OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Quaternion>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_gshared_inline (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Quaternion>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8_gshared (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Vector3>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Quaternion>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C_gshared (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::Update(System.Single,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447_gshared (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::Update(System.Single,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D_gshared (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(!0,Unity.Netcode.NetworkVariableReadPermission,Unity.Netcode.NetworkVariableWritePermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6_gshared (NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___value0, int32_t ___readPerm1, int32_t ___writePerm2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15_gshared (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Vector3>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Quaternion>(!!0&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method);

// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>()
inline void NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>()
inline void NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>()
inline void NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D_gshared)(method);
}
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::.ctor()
inline void BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5 (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, const RuntimeMethod*))BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::.ctor()
inline void BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62 (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 *, const RuntimeMethod*))BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514 (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::Dispose()
inline void NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *, const RuntimeMethod*))NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A_gshared)(__this, method);
}
// System.Void Unity.Netcode.FastBufferWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_m70C0621A09E15FA2F71AF41F5871A00673A02EF9 (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsServer_mD979A08F94C851D2BA1B915A6E1B78FFFB85D781_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method);
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE* Animator_get_parameters_m77F06017E5D918C35FEB6A60B4A78E97DFB81CCA (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246 (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Int32 UnityEngine.AnimatorControllerParameter::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_nameHash_mA765F17CA6E90C1CDD5E09B9BD90FDC7079E311F (AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mEA933A8593B7A96ED334CB333384B4420F2E2678 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_type_mAFE0FF4AF9351535D2B13EB9555881B39B3C6FC1 (AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * __this, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<UnityEngine.AnimatorControllerParameterType>(!!0)
inline int32_t UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2 (int32_t ___enumValue0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))UnsafeUtility_EnumToInt_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m9CE0355C48BF67B9268E8739BC5E73CB68EFA60C_gshared)(___enumValue0, method);
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mF4C57107C655950D09A9CFB7360F7ABE2D8057D2 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,!!0)
inline void UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, float, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_gshared)(___destination0, ___index1, ___value2, method);
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m1DE57680CE07B659AF23B2C206850EA825F12DFC (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,!!0)
inline void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392 (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared)(___destination0, ___index1, ___value2, method);
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_m48FAF6A6341ADD7A9790DA1C59BA478A9048EB22 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Boolean>(System.Void*,System.Int32,!!0)
inline void UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318 (void* ___destination0, int32_t ___index1, bool ___value2, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, bool, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_gshared)(___destination0, ___index1, ___value2, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_CheckAnimStateChanged_mC7E162F5E00A71E4D4770536B29302BCEB26A114 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, int32_t* ___stateHash0, float* ___normalizedTime1, int32_t ___layer2, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::Seek(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mD2BD94CCA9C50AED0B099F7D10A7E2529AADCCDD_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___where0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::Truncate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m3376BE3BBB25AC8998E40625730D17177913E39D_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___where0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkAnimator::WriteParameters(Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteParameters_m3EB24D0C8F37CA087CBA3C53F4053F35C782440B (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method);
// System.Byte[] Unity.Netcode.FastBufferWriter::ToArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FastBufferWriter_ToArray_m20A12CE89DE19E17D9F4D3281D535E9187283999_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimStateClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimStateClientRpc_m0CA1238DAFB4CA56C0895AF88339D7D52B440E84 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  ___animSnapshot0, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___clientRpcParams1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m0A73AC322BA23FD164856B7FF67A3A0B748A1CF4 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0  Animator_GetAnimatorTransitionInfo_m1DE4BF583787BA1EFD2255C2DD0E3B157808CA16 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_m212C4F34B691C01A5E4A3DD3E2B840AC22E1FBD9 (AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0 * __this, const RuntimeMethod* method);
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_gshared)(___nativeArray0, method);
}
// !!0& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ArrayElementAsRef<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(System.Void*,System.Int32)
inline AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0 (void* ___ptr0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_gshared)(___ptr0, ___index1, method);
}
// System.Void Unity.Netcode.BytePacker::WriteValuePacked(Unity.Netcode.FastBufferWriter,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BytePacker_WriteValuePacked_mDF41C1526BCDFC3F60DB71E4E89A758E01B8625E_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Boolean>(!!0&)
inline void FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, bool* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, bool*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Single>(!!0&)
inline void FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, float*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.ByteUnpacker::ReadValuePacked(Unity.Netcode.FastBufferReader,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteUnpacker_ReadValuePacked_mCF3C24E3831072F5A1DA5286AA0FB103CAD67F99_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mF7D7D881496A3E762208730799DE488D942EFE46 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Boolean>(!!0&)
inline void FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, bool* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, bool*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Single>(!!0&)
inline void FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, float*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m22777620F85E25691F57A7CAD4190D7F5702E02C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkBehaviour::get_NetworkManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkManager::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_mBA4BAF2CE1B5B1BA634DF06D17AE4FDE7FE19B81_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkManager::get_IsHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// Unity.Netcode.FastBufferWriter Unity.Netcode.NetworkBehaviour::__beginSendClientRpc(System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  NetworkBehaviour___beginSendClientRpc_mB419251D8D7988E71167118F294DF269C1881D10 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, uint32_t ___rpcMethodId0, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___clientRpcParams1, int32_t ___rpcDelivery2, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(!!0&)
inline void FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0 (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 *, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.NetworkBehaviour::__endSendClientRpc(Unity.Netcode.FastBufferWriter&,System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___endSendClientRpc_m6E8A1202D9CC6791B40190C43800CD35B5946B68 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * ___bufferWriter0, uint32_t ___rpcMethodId1, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___clientRpcParams2, int32_t ___rpcDelivery3, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkManager::get_IsClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_m04A60A96E9BA6E015156120822AEA2917AC62E31_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m392289975B858ED7D85DF6E7980E5BA47F606AEC (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_mFC527EAF68AAA25156B5A5B838FB9AB7231DDDF7 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::.ctor(System.Byte*,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_mFB7A88092A09DB01CF1C722BBD077A3BEF1FCA8E (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint8_t* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkAnimator::ReadParameters(Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ReadParameters_m0F58D0BF8B19A36FF89373520497D55665833194 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(!!0&)
inline void FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 *, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8A3EFE371465928C7C898424B1852D06E45A9596 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m081FDF5695B938E2DB858A0DBDC38C2F48C55B28 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668 (String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkAnimator::SetTrigger(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetTrigger_m5EF843378176B81721CFB79246813286A0D26FD1 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, int32_t ___hash0, bool ___reset1, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimTriggerClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimTriggerClientRpc_m21F974B6453EDCCA910C0B47A2AA1FC212B62AED (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  ___animSnapshot0, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___clientRpcParams1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetTrigger_mFFF1F7E8AFD3BDB4D314AF96F85520160499E124 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, int32_t ___hash0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::.ctor(System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mBC8F8F94C7FC952EFE4FA40E933B639F624B0FDE (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___size0, int32_t ___allocator1, int32_t ___maxSize2, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_mF267A30FB25D35ED55E65C207EC9E44EDBC70FD1 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler__ctor_m03B70FB2D763FACEB7FCA76AD8446403F7394121 (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>::Add(!0,!1)
inline void Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0 (Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * __this, uint32_t ___key0, RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 *, uint32_t, RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 *, const RuntimeMethod*))Dictionary_2_Add_m505F2CF58731D70AAE480EFFE20B311E5BBBB761_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(!!0&)
inline void FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 *, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(!!0&)
inline void FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6 (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 *, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6_gshared)(__this, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransform_ApplyTransformToNetworkState_m8CFCC01B79D058B7C439606E28466762A2BB8C60 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___networkState0, double ___dirtyTime1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToUse2, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommit_m169DE4CFB836A0DBD60C1708AE5A7636BABB4B32 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, bool ___isDirty0, const RuntimeMethod* method);
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  NetworkTransform_ApplyTransformToNetworkStateWithInfo_m9AD12DD9FF9EADC9784B4268BAA93DE04B4E4ABB (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___networkState0, double ___dirtyTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotAngles3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale4, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::<TryCommit>g__Send|46_0(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_U3CTryCommitU3Eg__SendU7C46_0_m4C799AD0DEC285AAE514BB438D01BDEF7D9EA764 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___stateToSend0, const RuntimeMethod* method);
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkManager::get_LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.NetworkTime::get_Tick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_mC495A812B6B4C3BCD7B9454A8F7E4950B287B67B_inline (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, const RuntimeMethod* method);
// System.Double Unity.Netcode.NetworkTime::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, const RuntimeMethod* method);
// Unity.Netcode.FastBufferWriter Unity.Netcode.NetworkBehaviour::__beginSendServerRpc(System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  NetworkBehaviour___beginSendServerRpc_m08B66FC1F04688DF4E2F946E375B578D13910F40 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, uint32_t ___rpcMethodId0, ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___serverRpcParams1, int32_t ___rpcDelivery2, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(!!0&)
inline void FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.NetworkBehaviour::__endSendServerRpc(Unity.Netcode.FastBufferWriter&,System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___endSendServerRpc_mB1C1D0B3A96ECA21EFDF56A14EE45EFEB1B7E81E (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * ___bufferWriter0, uint32_t ___rpcMethodId1, ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___serverRpcParams2, int32_t ___rpcDelivery3, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.NetworkBehaviour::get_OwnerClientId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m3619480599CD440BF15F8746AFE254F63BA3032D_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::CommitLocallyAndReplicate(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitLocallyAndReplicate_m6DC198D5A9A826FF5E119970DBC1F5B3D31EB024 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___networkState0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::AddInterpolatedState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_AddInterpolatedState_mA080506B45875DBE311F18EE90313201AEA1EB46 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___newState0, bool ___reset1, const RuntimeMethod* method);
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkManager::get_ServerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  NetworkManager_get_ServerTime_m7A89CC74F5C58A879E94F5C1A49EE8F1EBDDC502 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::ResetTo(T,System.Double)
inline void BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, float ___targetValue0, double ___serverTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, float, double, const RuntimeMethod*))BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_gshared)(__this, ___targetValue0, ___serverTime1, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::ResetTo(T,System.Double)
inline void BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___targetValue0, double ___serverTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , double, const RuntimeMethod*))BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_gshared)(__this, ___targetValue0, ___serverTime1, method);
}
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  NetworkTransform_ApplyTransformToNetworkStateWithInfo_m59E392384FADA00A406533874AC5151326ADE6A7 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___networkState0, double ___dirtyTime1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToUse2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_InLocalSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_InLocalSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_InLocalSpace_mF973D00C4A5E3CC203B6D22BC173F424B736A7D9 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionX_m240F2C27547F74F422A288FE3BA992F93283694C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionY_m586C5B62153D0E8BB91508AC3654FAF9CE3E55C5 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionZ_m563CB6103A575B4D0D9C50349F073C18210A1E66 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleX_m16B08D2F6DD4098C8505C6D3AB4773A139E02D64 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleY_m1575AE73DAD31FE7FFEDB990E3B8C40FC8FB529C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleZ_m6E99C6BB328984E99B4AB2D0B656C5EF96A9FB22 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleX_mC44EB0B2C829B3A8D361A9273364E35A5EF18CDA (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleY_m892DFCB1EDC16BB21B1C0A327E6B0FF2421AA6E9 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleZ_m71C40ED9D74943E7683551DAC21CCCD1DA308BA2 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>::.ctor(!0,!1,!2,!3)
inline void ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537 (ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A * __this, bool ___item10, bool ___item21, bool ___item32, bool ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A *, bool, bool, bool, bool, const RuntimeMethod*))ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_IsTeleportingNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::GetInterpolatedValue()
inline float BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, const RuntimeMethod*))BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::GetInterpolatedValue()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_inline (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 *, const RuntimeMethod*))BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Position_m6D49CE6D51D822F248A93900D761D0D16ED88694 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Rotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Rotation_mC3266E64819783DB0AD36BFE65FB59BA90C61892 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Scale_m3D2545B45FF98B9C9A4D0B1D3729DA57013C89DE (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionX_m9C6FE08916A16EBAF8EBDE6CD6569393D5DC0445 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionY_m0C744222BC3DBF0B31409710295E92F29086416C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionZ_mA34324A2D4EAE14B069BFF5A10573C99902D8E1C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleX_m4D9FE027AD3DF34AA1B8E3DC4305ACA2CA13366B (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleY_m03DA2AB93E3B0CAAFE500E5D030DB4801B9412EE (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleZ_mF11F81778CA6BA17C658AF6D4F80AC0D900B4BF8 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::AddMeasurement(T,System.Double)
inline void BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07 (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, float ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, float, double, const RuntimeMethod*))BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_gshared)(__this, ___newMeasurement0, ___sentTime1, method);
}
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::AddMeasurement(T,System.Double)
inline void BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , double, const RuntimeMethod*))BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE_gshared)(__this, ___newMeasurement0, ___sentTime1, method);
}
// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::get_NetworkObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * NetworkBehaviour_get_NetworkObject_mE5E83275A96B99A24FDFA062C04BB3D1C428FA7B (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkObject::get_IsSpawned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObject_get_IsSpawned_m9EF4684B1493578362820A96247850ECD141FC77_inline (NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform::get_CanCommitToTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m5384A47F25E5B174ABA7D6A7A8726F2F17A5241F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, bool ___depthTest4, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolatorFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.BufferedLinearInterpolatorQuaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorQuaternion__ctor_m2733946696DC8221436914CA6BC26EFAE68C0166 (BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::get_Count()
inline int32_t List_1_get_Count_m4B0B0F67727DF1673152853ECA5B390C548B36D3_inline (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::Add(!0)
inline void List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * __this, BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B *, BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
inline void OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE (OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A *, RuntimeObject *, intptr_t, const RuntimeMethod*))OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::set_CanCommitToTransform(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTransform_set_CanCommitToTransform_m42E552D98628D7F818294C5FF4D01C79C59FC3CB_inline (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitTransformToServer(UnityEngine.Transform,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitTransformToServer_mF8E67C8B8D2E4FAB3E2DEBF662D0D47695EB36FD (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToCommit0, double ___dirtyTime1, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Initialize_m997E32CBEC947E523B3A4B562ED7451D6E0BEEEC (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::ResetInterpolatedStateToCurrentAuthoritativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ResetInterpolatedStateToCurrentAuthoritativeState_mB426D48B3B20E134277217E5C3F0FC04DB875BB1 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::ApplyInterpolatedNetworkStateToTransform(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ApplyInterpolatedNetworkStateToTransform_mB7E71F658A04266B416B6020F93869232BE639C7 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___networkState0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToUpdate1, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m6ED49E9AA5F58D31586A277CECF42991A56DD907_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkManager::get_IsConnectedClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsConnectedClient_m9902EA62994D80B32607E73ACC886B52D823EBC4_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<UnityEngine.Quaternion>::get_HasValue()
inline bool Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_inline (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 *, const RuntimeMethod*))Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Quaternion>::get_Value()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8 (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 *, const RuntimeMethod*))Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform::SetStateServerRpc(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetStateServerRpc_mFB359D2E01C2CD26D75E842F19F326485307BE2E (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, bool ___shouldTeleport3, const RuntimeMethod* method);
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_IsTeleportingNextFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m76F7307A2AB5EC4BE568C63DF041E0620386CD0C (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Vector3>(!!0&)
inline void FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Quaternion>(!!0&)
inline void FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_gshared_inline)(__this, ___value0, method);
}
// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3> Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  OnClientRequestChangeDelegate_Invoke_mEFDBF658E3A1B0FED79B13E5FAC440F6081104F8 (OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsSpawned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsSpawned_m8AE7B53713FCD10AF6FCCAE6B1E0FAD521988A51_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::GetEnumerator()
inline Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC  List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC  (*) (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::get_Current()
inline BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_inline (Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC * __this, const RuntimeMethod* method)
{
	return ((  BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * (*) (Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::Clear()
inline void BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, const RuntimeMethod*))BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::MoveNext()
inline bool Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272 (Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::Dispose()
inline void Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5 (Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::TimeTicksAgo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  NetworkTime_TimeTicksAgo_m8DBFF515497CD2EF8A8C76362AD25FFCBF701C31 (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, int32_t ___ticks0, const RuntimeMethod* method);
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::Update(System.Single,System.Double,System.Double)
inline float BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447 (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method)
{
	return ((  float (*) (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 *, float, double, double, const RuntimeMethod*))BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447_gshared)(__this, ___deltaTime0, ___renderTime1, ___serverTime2, method);
}
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::Update(System.Single,System.Double,System.Double)
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 *, float, double, double, const RuntimeMethod*))BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D_gshared)(__this, ___deltaTime0, ___renderTime1, ___serverTime2, method);
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitValuesToServer(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitValuesToServer_m0DB485669C0E672AEB432DC3655289AD1BF027D9 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, double ___dirtyTime3, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(!0,Unity.Netcode.NetworkVariableReadPermission,Unity.Netcode.NetworkVariableWritePermission)
inline void NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6 (NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___value0, int32_t ___readPerm1, int32_t ___writePerm2, const RuntimeMethod* method)
{
	((  void (*) (NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 *, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 , int32_t, int32_t, const RuntimeMethod*))NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6_gshared)(__this, ___value0, ___readPerm1, ___writePerm2, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::.ctor(System.Int32)
inline void List_1__ctor_mB2C4275A9F1D93339486527E0109CCCA342B8EB8 (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitTransformServerRpc(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitTransformServerRpc_m72F5625E7FCC3A3D25779BA1E569B602E6DC64D8 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___networkState0, ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___serverParams1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(!!0&)
inline void FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15 (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Vector3>(!!0&)
inline void FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Quaternion>(!!0&)
inline void FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_gshared_inline)(__this, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleX_m2532ABF7120513A264C60DE4C2FDAB82A057DC20 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleY_m16AF1BE8B3E18074851A361406D631A096A3AFFB (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleZ_m138176B2D6517F29D0923548C0051B72E1E0B1AD (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m75E89423C5D2462392B0C3D55CDE4BC18C2A0B06_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void Unity.Netcode.BytePacker::WriteUInt32Packed(Unity.Netcode.FastBufferWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteUInt32Packed_m2C6B55119C7107B1AFE249B45E86C1981471ABAC (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Unity.Netcode.ByteUnpacker::ReadUInt32Packed(Unity.Netcode.FastBufferReader,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUnpacker_ReadUInt32Packed_m45A5E8334A96F24AC8EB0560BE9E410AA7506ECD (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Int64 Unity.Netcode.Arithmetic::ZigZagDecode(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Arithmetic_ZigZagDecode_mE91448DB440858A2F9B3F9320CC442FDC949DB6B (uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___bytes0, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, int32_t ___bytes0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mBBFF2DB791E8BBC5A732DC63351724CBE84AA9AC (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_mE034C3F8C9161C3F2347B40532BF5A1503238556 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978(/*hidden argument*/NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_m397BB4137D4F870075F985DDB07DFA8C4CA12978_RuntimeMethod_var);
		NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F(/*hidden argument*/NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m18C291AD23F9F798B44ED742BA63CB628EB64D5F_RuntimeMethod_var);
		NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D(/*hidden argument*/NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m7ED9DE5E3D1AB2F88E07B24960539E31B031932D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.Netcode.BufferedLinearInterpolatorFloat::InterpolateUnclamped(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedLinearInterpolatorFloat_InterpolateUnclamped_m43713876A4D545E37790EFC5495F319E07CE5039 (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * __this, float ___start0, float ___end1, float ___time2, const RuntimeMethod* method)
{
	{
		// return Mathf.LerpUnclamped(start, end, time);
		float L_0 = ___start0;
		float L_1 = ___end1;
		float L_2 = ___time2;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single Unity.Netcode.BufferedLinearInterpolatorFloat::Interpolate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedLinearInterpolatorFloat_Interpolate_m36EDC43BE7F2ED1C77A1A3C633F76D7BCDA094F7 (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * __this, float ___start0, float ___end1, float ___time2, const RuntimeMethod* method)
{
	{
		// return Mathf.Lerp(start, end, time);
		float L_0 = ___start0;
		float L_1 = ___end1;
		float L_2 = ___time2;
		float L_3;
		L_3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Netcode.BufferedLinearInterpolatorFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5(__this, /*hidden argument*/BufferedLinearInterpolator_1__ctor_mA958D5774CF6B5E95A1D5D5D3406C8F5BBCCC8B5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion Unity.Netcode.BufferedLinearInterpolatorQuaternion::InterpolateUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolatorQuaternion_InterpolateUnclamped_m8C64ED6CF8DDB3F8656B1D5C5CCD5F6B0B0FBA9C (BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___start0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___end1, float ___time2, const RuntimeMethod* method)
{
	{
		// return Quaternion.SlerpUnclamped(start, end, time);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___start0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___end1;
		float L_2 = ___time2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion Unity.Netcode.BufferedLinearInterpolatorQuaternion::Interpolate(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolatorQuaternion_Interpolate_mD45833A66540AA3359238ABB99F6B5AF75CBC87B (BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___start0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___end1, float ___time2, const RuntimeMethod* method)
{
	{
		// return Quaternion.SlerpUnclamped(start, end, time);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___start0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___end1;
		float L_2 = ___time2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_SlerpUnclamped_m654DA9A5B418C2E18B2794BC0CE92E52DF96151F(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Netcode.BufferedLinearInterpolatorQuaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorQuaternion__ctor_m2733946696DC8221436914CA6BC26EFAE68C0166 (BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62(__this, /*hidden argument*/BufferedLinearInterpolator_1__ctor_mBE28E1A878AE65B27B87583B00413FA4A8DDCE62_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animator Unity.Netcode.Components.NetworkAnimator::get_Animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * NetworkAnimator_get_Animator_m0FCC2C325F8DCF385DCC3BB960BE8571C5182064 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Animator; }
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_m_Animator_26();
		return L_0;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::set_Animator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_set_Animator_m6DD3456B48DAF8E434225FA56B4EE8693F150BF4 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___value0, const RuntimeMethod* method)
{
	{
		// m_Animator = value;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = ___value0;
		__this->set_m_Animator_26(L_0);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnDestroy_m98CC7A2B0D5A7D55374B59DC751A0D5A1AB062EF (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CachedAnimatorParameters.IsCreated)
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * L_0 = __this->get_address_of_m_CachedAnimatorParameters_33();
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514((NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *)L_0, /*hidden argument*/NativeArray_1_get_IsCreated_m69F9C32A7CCB9D907615244C1ABCB4DDCF7AB514_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_CachedAnimatorParameters.Dispose();
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * L_2 = __this->get_address_of_m_CachedAnimatorParameters_33();
		NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A((NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *)L_2, /*hidden argument*/NativeArray_1_Dispose_mF4E23974E9C5E5FF48CDBAC5DC8E71108EFC209A_RuntimeMethod_var);
	}

IL_0018:
	{
		// m_ParameterWriter.Dispose();
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * L_3 = __this->get_address_of_m_ParameterWriter_32();
		FastBufferWriter_Dispose_m70C0621A09E15FA2F71AF41F5871A00673A02EF9((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnNetworkSpawn_m99B69A27468E08C656CA417861143E3D7F9C2645 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * V_3 = NULL;
	AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		// if (IsServer)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsServer_mD979A08F94C851D2BA1B915A6E1B78FFFB85D781_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// m_SendMessagesAllowed = true;
		__this->set_m_SendMessagesAllowed_27((bool)1);
		// int layers = m_Animator.layerCount;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_m_Animator_26();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// m_TransitionHash = new int[layers];
		int32_t L_3 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set_m_TransitionHash_29(L_4);
		// m_AnimationHash = new int[layers];
		int32_t L_5 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_m_AnimationHash_30(L_6);
		// m_LayerWeights = new float[layers];
		int32_t L_7 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_m_LayerWeights_31(L_8);
	}

IL_003f:
	{
		// var parameters = m_Animator.parameters;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_m_Animator_26();
		NullCheck(L_9);
		AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE* L_10;
		L_10 = Animator_get_parameters_m77F06017E5D918C35FEB6A60B4A78E97DFB81CCA(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// m_CachedAnimatorParameters = new NativeArray<AnimatorParamCache>(parameters.Length, Allocator.Persistent);
		AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE* L_11 = V_0;
		NullCheck(L_11);
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  L_12;
		memset((&L_12), 0, sizeof(L_12));
		NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246((&L_12), ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), 4, 1, /*hidden argument*/NativeArray_1__ctor_mA5BC3B4CFE22AFBB4EC730A224301FE7F2B0C246_RuntimeMethod_var);
		__this->set_m_CachedAnimatorParameters_33(L_12);
		// for (var i = 0; i < parameters.Length; i++)
		V_2 = 0;
		goto IL_0164;
	}

IL_0062:
	{
		// var parameter = parameters[i];
		AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE* L_13 = V_0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		// if (m_Animator.IsParameterControlledByCurve(parameter.nameHash))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_m_Animator_26();
		AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = AnimatorControllerParameter_get_nameHash_mA765F17CA6E90C1CDD5E09B9BD90FDC7079E311F(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_20;
		L_20 = Animator_IsParameterControlledByCurve_mEA933A8593B7A96ED334CB333384B4420F2E2678(L_17, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0160;
		}
	}
	{
		// var cacheParam = new AnimatorParamCache
		// {
		//     Type = UnsafeUtility.EnumToInt(parameter.type),
		//     Hash = parameter.nameHash
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C ));
		AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnimatorControllerParameter_get_type_mAFE0FF4AF9351535D2B13EB9555881B39B3C6FC1(L_21, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2(L_22, /*hidden argument*/UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var);
		(&V_5)->set_Type_1(L_23);
		AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = AnimatorControllerParameter_get_nameHash_mA765F17CA6E90C1CDD5E09B9BD90FDC7079E311F(L_24, /*hidden argument*/NULL);
		(&V_5)->set_Hash_0(L_25);
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  L_26 = V_5;
		V_4 = L_26;
		// switch (parameter.type)
		AnimatorControllerParameter_t8E7EB3AF7837189FB5523DC4E21D9D51CEA70FEE * L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = AnimatorControllerParameter_get_type_mAFE0FF4AF9351535D2B13EB9555881B39B3C6FC1(L_27, /*hidden argument*/NULL);
		V_9 = L_28;
		int32_t L_29 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_0152;
			}
			case 2:
			{
				goto IL_00fe;
			}
			case 3:
			{
				goto IL_0129;
			}
		}
	}
	{
		int32_t L_30 = V_9;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)9))))
		{
			goto IL_0152;
		}
	}
	{
		goto IL_0152;
	}

IL_00d3:
	{
		// var value = m_Animator.GetFloat(cacheParam.Hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_31 = __this->get_m_Animator_26();
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  L_32 = V_4;
		int32_t L_33 = L_32.get_Hash_0();
		NullCheck(L_31);
		float L_34;
		L_34 = Animator_GetFloat_mF4C57107C655950D09A9CFB7360F7ABE2D8057D2(L_31, L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		// UnsafeUtility.WriteArrayElement(cacheParam.Value, 0, value);
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_35 = (&V_4)->get_address_of_Value_2();
		uint8_t* L_36 = L_35->get_address_of_FixedElementField_0();
		float L_37 = V_6;
		UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E((void*)(void*)((uintptr_t)L_36), 0, L_37, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var);
		// break;
		goto IL_0152;
	}

IL_00fe:
	{
		// var valueInt = m_Animator.GetInteger(cacheParam.Hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_38 = __this->get_m_Animator_26();
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  L_39 = V_4;
		int32_t L_40 = L_39.get_Hash_0();
		NullCheck(L_38);
		int32_t L_41;
		L_41 = Animator_GetInteger_m1DE57680CE07B659AF23B2C206850EA825F12DFC(L_38, L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		// UnsafeUtility.WriteArrayElement(cacheParam.Value, 0, valueInt);
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_42 = (&V_4)->get_address_of_Value_2();
		uint8_t* L_43 = L_42->get_address_of_FixedElementField_0();
		int32_t L_44 = V_7;
		UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392((void*)(void*)((uintptr_t)L_43), 0, L_44, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var);
		// break;
		goto IL_0152;
	}

IL_0129:
	{
		// var valueBool = m_Animator.GetBool(cacheParam.Hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_45 = __this->get_m_Animator_26();
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  L_46 = V_4;
		int32_t L_47 = L_46.get_Hash_0();
		NullCheck(L_45);
		bool L_48;
		L_48 = Animator_GetBool_m48FAF6A6341ADD7A9790DA1C59BA478A9048EB22(L_45, L_47, /*hidden argument*/NULL);
		V_8 = L_48;
		// UnsafeUtility.WriteArrayElement(cacheParam.Value, 0, valueBool);
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_49 = (&V_4)->get_address_of_Value_2();
		uint8_t* L_50 = L_49->get_address_of_FixedElementField_0();
		bool L_51 = V_8;
		UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318((void*)(void*)((uintptr_t)L_50), 0, L_51, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var);
	}

IL_0152:
	{
		// m_CachedAnimatorParameters[i] = cacheParam;
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * L_52 = __this->get_address_of_m_CachedAnimatorParameters_33();
		int32_t L_53 = V_2;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C  L_54 = V_4;
		IL2CPP_NATIVEARRAY_SET_ITEM(AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C , ((NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *)L_52)->___m_Buffer_0, L_53, (L_54));
	}

IL_0160:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0164:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_56 = V_2;
		AnimatorControllerParameterU5BU5D_t51A7788330152A26BE85C81C904CD9C874598EDE* L_57 = V_0;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length))))))
		{
			goto IL_0062;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::OnNetworkDespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnNetworkDespawn_m1E64CC4D0A07720D91EC1D12E05A25695B73E495 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	{
		// m_SendMessagesAllowed = false;
		__this->set_m_SendMessagesAllowed_27((bool)0);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_FixedUpdate_m87B5917C43FA82F3F069D2CBD27ADCFDD70D75F8 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  V_3;
	memset((&V_3), 0, sizeof(V_3));
	AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (!m_SendMessagesAllowed || !m_Animator || !m_Animator.enabled)
		bool L_0 = __this->get_m_SendMessagesAllowed_27();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_m_Animator_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_m_Animator_26();
		NullCheck(L_3);
		bool L_4;
		L_4 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// for (int layer = 0; layer < m_Animator.layerCount; layer++)
		V_0 = 0;
		goto IL_00b4;
	}

IL_002a:
	{
		// if (!CheckAnimStateChanged(out stateHash, out normalizedTime, layer))
		int32_t L_5 = V_0;
		bool L_6;
		L_6 = NetworkAnimator_CheckAnimStateChanged_mC7E162F5E00A71E4D4770536B29302BCEB26A114(__this, (int32_t*)(&V_1), (float*)(&V_2), L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00b0;
		}
	}
	{
		// var animMsg = new AnimationMessage
		// {
		//     StateHash = stateHash,
		//     NormalizedTime = normalizedTime,
		//     Layer = layer,
		//     Weight = m_LayerWeights[layer]
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 ));
		int32_t L_7 = V_1;
		(&V_4)->set_StateHash_0(L_7);
		float L_8 = V_2;
		(&V_4)->set_NormalizedTime_1(L_8);
		int32_t L_9 = V_0;
		(&V_4)->set_Layer_2(L_9);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = __this->get_m_LayerWeights_31();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		(&V_4)->set_Weight_3(L_13);
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_14 = V_4;
		V_3 = L_14;
		// m_ParameterWriter.Seek(0);
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * L_15 = __this->get_address_of_m_ParameterWriter_32();
		FastBufferWriter_Seek_mD2BD94CCA9C50AED0B099F7D10A7E2529AADCCDD_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)L_15, 0, /*hidden argument*/NULL);
		// m_ParameterWriter.Truncate();
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * L_16 = __this->get_address_of_m_ParameterWriter_32();
		FastBufferWriter_Truncate_m3376BE3BBB25AC8998E40625730D17177913E39D_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)L_16, (-1), /*hidden argument*/NULL);
		// WriteParameters(m_ParameterWriter);
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_17 = __this->get_m_ParameterWriter_32();
		NetworkAnimator_WriteParameters_m3EB24D0C8F37CA087CBA3C53F4053F35C782440B(__this, L_17, /*hidden argument*/NULL);
		// animMsg.Parameters = m_ParameterWriter.ToArray();
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * L_18 = __this->get_address_of_m_ParameterWriter_32();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19;
		L_19 = FastBufferWriter_ToArray_m20A12CE89DE19E17D9F4D3281D535E9187283999_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)L_18, /*hidden argument*/NULL);
		(&V_3)->set_Parameters_4(L_19);
		// SendAnimStateClientRpc(animMsg);
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_20 = V_3;
		il2cpp_codegen_initobj((&V_5), sizeof(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89 ));
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_21 = V_5;
		NetworkAnimator_SendAnimStateClientRpc_m0CA1238DAFB4CA56C0895AF88339D7D52B440E84(__this, L_20, L_21, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// for (int layer = 0; layer < m_Animator.layerCount; layer++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00b4:
	{
		// for (int layer = 0; layer < m_Animator.layerCount; layer++)
		int32_t L_23 = V_0;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_24 = __this->get_m_Animator_26();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_CheckAnimStateChanged_mC7E162F5E00A71E4D4770536B29302BCEB26A114 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, int32_t* ___stateHash0, float* ___normalizedTime1, int32_t ___layer2, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool shouldUpdate = false;
		V_0 = (bool)0;
		// stateHash = 0;
		int32_t* L_0 = ___stateHash0;
		*((int32_t*)L_0) = (int32_t)0;
		// normalizedTime = 0;
		float* L_1 = ___normalizedTime1;
		*((float*)L_1) = (float)(0.0f);
		// float layerWeightNow = m_Animator.GetLayerWeight(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_m_Animator_26();
		int32_t L_3 = ___layer2;
		NullCheck(L_2);
		float L_4;
		L_4 = Animator_GetLayerWeight_m0A73AC322BA23FD164856B7FF67A3A0B748A1CF4(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (!Mathf.Approximately(layerWeightNow, m_LayerWeights[layer]))
		float L_5 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = __this->get_m_LayerWeights_31();
		int32_t L_7 = ___layer2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_5, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		// m_LayerWeights[layer] = layerWeightNow;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = __this->get_m_LayerWeights_31();
		int32_t L_12 = ___layer2;
		float L_13 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (float)L_13);
		// shouldUpdate = true;
		V_0 = (bool)1;
	}

IL_0034:
	{
		// if (m_Animator.IsInTransition(layer))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_m_Animator_26();
		int32_t L_15 = ___layer2;
		NullCheck(L_14);
		bool L_16;
		L_16 = Animator_IsInTransition_mA37A7575AA127459175230011F2BA7560E0E44B9(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		// AnimatorTransitionInfo tt = m_Animator.GetAnimatorTransitionInfo(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_m_Animator_26();
		int32_t L_18 = ___layer2;
		NullCheck(L_17);
		AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0  L_19;
		L_19 = Animator_GetAnimatorTransitionInfo_m1DE4BF583787BA1EFD2255C2DD0E3B157808CA16(L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// if (tt.fullPathHash != m_TransitionHash[layer])
		int32_t L_20;
		L_20 = AnimatorTransitionInfo_get_fullPathHash_m212C4F34B691C01A5E4A3DD3E2B840AC22E1FBD9((AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0 *)(&V_2), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_m_TransitionHash_29();
		int32_t L_22 = ___layer2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((((int32_t)L_20) == ((int32_t)L_24)))
		{
			goto IL_00d0;
		}
	}
	{
		// m_TransitionHash[layer] = tt.fullPathHash;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = __this->get_m_TransitionHash_29();
		int32_t L_26 = ___layer2;
		int32_t L_27;
		L_27 = AnimatorTransitionInfo_get_fullPathHash_m212C4F34B691C01A5E4A3DD3E2B840AC22E1FBD9((AnimatorTransitionInfo_t7D0BAD3D274C055F1FC7ACE0F3A195CA3C9026A0 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_27);
		// m_AnimationHash[layer] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = __this->get_m_AnimationHash_30();
		int32_t L_29 = ___layer2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (int32_t)0);
		// shouldUpdate = true;
		V_0 = (bool)1;
		// }
		goto IL_00d0;
	}

IL_007c:
	{
		// AnimatorStateInfo st = m_Animator.GetCurrentAnimatorStateInfo(layer);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_30 = __this->get_m_Animator_26();
		int32_t L_31 = ___layer2;
		NullCheck(L_30);
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_32;
		L_32 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_30, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// if (st.fullPathHash != m_AnimationHash[layer])
		int32_t L_33;
		L_33 = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = __this->get_m_AnimationHash_30();
		int32_t L_35 = ___layer2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_33) == ((int32_t)L_37)))
		{
			goto IL_00d0;
		}
	}
	{
		// if (m_AnimationHash[layer] != 0)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = __this->get_m_AnimationHash_30();
		int32_t L_39 = ___layer2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if (!L_41)
		{
			goto IL_00b6;
		}
	}
	{
		// stateHash = st.fullPathHash;
		int32_t* L_42 = ___stateHash0;
		int32_t L_43;
		L_43 = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), /*hidden argument*/NULL);
		*((int32_t*)L_42) = (int32_t)L_43;
		// normalizedTime = st.normalizedTime;
		float* L_44 = ___normalizedTime1;
		float L_45;
		L_45 = AnimatorStateInfo_get_normalizedTime_mC951C5D83749FC2AE37DCC75A022383C578F3B40((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), /*hidden argument*/NULL);
		*((float*)L_44) = (float)L_45;
	}

IL_00b6:
	{
		// m_TransitionHash[layer] = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = __this->get_m_TransitionHash_29();
		int32_t L_47 = ___layer2;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)0);
		// m_AnimationHash[layer] = st.fullPathHash;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = __this->get_m_AnimationHash_30();
		int32_t L_49 = ___layer2;
		int32_t L_50;
		L_50 = AnimatorStateInfo_get_fullPathHash_m296D315AB1FBF6177A423298296CECC1DBA7221D((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_50);
		// shouldUpdate = true;
		V_0 = (bool)1;
	}

IL_00d0:
	{
		// return shouldUpdate;
		bool L_51 = V_0;
		return L_51;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::WriteParameters(Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_WriteParameters_m3EB24D0C8F37CA087CBA3C53F4053F35C782440B (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	uint8_t* V_5 = NULL;
	bool V_6 = false;
	void* V_7 = NULL;
	float V_8 = 0.0f;
	void* V_9 = NULL;
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		V_0 = 0;
		goto IL_00f3;
	}

IL_0007:
	{
		// ref var cacheValue = ref UnsafeUtility.ArrayElementAsRef<AnimatorParamCache>(m_CachedAnimatorParameters.GetUnsafePtr(), i);
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  L_0 = __this->get_m_CachedAnimatorParameters_33();
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F(L_0, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_RuntimeMethod_var);
		int32_t L_2 = V_0;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0((void*)(void*)L_1, L_2, /*hidden argument*/UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_RuntimeMethod_var);
		V_1 = (AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C *)L_3;
		// var hash = cacheValue.Hash;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_4 = V_1;
		int32_t L_5 = L_4->get_Hash_0();
		V_2 = L_5;
		// if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterInt)
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_6 = V_1;
		int32_t L_7 = L_6->get_Type_1();
		IL2CPP_RUNTIME_CLASS_INIT(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		int32_t L_8 = ((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->get_AnimatorControllerParameterInt_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0065;
		}
	}
	{
		// var valueInt = m_Animator.GetInteger(hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_m_Animator_26();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = Animator_GetInteger_m1DE57680CE07B659AF23B2C206850EA825F12DFC(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_12 = V_1;
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_13 = L_12->get_address_of_Value_2();
		uint8_t* L_14 = L_13->get_address_of_FixedElementField_0();
		V_5 = (uint8_t*)L_14;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_15 = V_5;
		V_4 = (void*)((uintptr_t)L_15);
		// UnsafeUtility.WriteArrayElement(value, 0, valueInt);
		void* L_16 = V_4;
		int32_t L_17 = V_3;
		UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392((void*)(void*)L_16, 0, L_17, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var);
		// BytePacker.WriteValuePacked(writer, (uint)valueInt);
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_18 = ___writer0;
		int32_t L_19 = V_3;
		BytePacker_WriteValuePacked_mDF41C1526BCDFC3F60DB71E4E89A758E01B8625E_inline(L_18, L_19, /*hidden argument*/NULL);
		V_5 = (uint8_t*)((uintptr_t)0);
		// }
		goto IL_00ef;
	}

IL_0065:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterBool)
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_20 = V_1;
		int32_t L_21 = L_20->get_Type_1();
		IL2CPP_RUNTIME_CLASS_INIT(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		int32_t L_22 = ((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->get_AnimatorControllerParameterBool_2();
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_00ab;
		}
	}
	{
		// var valueBool = m_Animator.GetBool(hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_23 = __this->get_m_Animator_26();
		int32_t L_24 = V_2;
		NullCheck(L_23);
		bool L_25;
		L_25 = Animator_GetBool_m48FAF6A6341ADD7A9790DA1C59BA478A9048EB22(L_23, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_26 = V_1;
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_27 = L_26->get_address_of_Value_2();
		uint8_t* L_28 = L_27->get_address_of_FixedElementField_0();
		V_5 = (uint8_t*)L_28;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_29 = V_5;
		V_7 = (void*)((uintptr_t)L_29);
		// UnsafeUtility.WriteArrayElement(value, 0, valueBool);
		void* L_30 = V_7;
		bool L_31 = V_6;
		UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318((void*)(void*)L_30, 0, L_31, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var);
		// writer.WriteValueSafe(valueBool);
		FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (bool*)(&V_6), /*hidden argument*/FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
		// }
		goto IL_00ef;
	}

IL_00ab:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterFloat)
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_32 = V_1;
		int32_t L_33 = L_32->get_Type_1();
		IL2CPP_RUNTIME_CLASS_INIT(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		int32_t L_34 = ((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->get_AnimatorControllerParameterFloat_1();
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_00ef;
		}
	}
	{
		// var valueFloat = m_Animator.GetFloat(hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_35 = __this->get_m_Animator_26();
		int32_t L_36 = V_2;
		NullCheck(L_35);
		float L_37;
		L_37 = Animator_GetFloat_mF4C57107C655950D09A9CFB7360F7ABE2D8057D2(L_35, L_36, /*hidden argument*/NULL);
		V_8 = L_37;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_38 = V_1;
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_39 = L_38->get_address_of_Value_2();
		uint8_t* L_40 = L_39->get_address_of_FixedElementField_0();
		V_5 = (uint8_t*)L_40;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_41 = V_5;
		V_9 = (void*)((uintptr_t)L_41);
		// UnsafeUtility.WriteArrayElement(value, 0, valueFloat);
		void* L_42 = V_9;
		float L_43 = V_8;
		UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E((void*)(void*)L_42, 0, L_43, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var);
		// writer.WriteValueSafe(valueFloat);
		FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (float*)(&V_8), /*hidden argument*/FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
	}

IL_00ef:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00f3:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_45 = V_0;
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * L_46 = __this->get_address_of_m_CachedAnimatorParameters_33();
		int32_t L_47;
		L_47 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *)L_46)->___m_Length_1);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ReadParameters(Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ReadParameters_m0F58D0BF8B19A36FF89373520497D55665833194 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	uint8_t* V_5 = NULL;
	bool V_6 = false;
	void* V_7 = NULL;
	float V_8 = 0.0f;
	void* V_9 = NULL;
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		V_0 = 0;
		goto IL_00f4;
	}

IL_0007:
	{
		// ref var cacheValue = ref UnsafeUtility.ArrayElementAsRef<AnimatorParamCache>(m_CachedAnimatorParameters.GetUnsafePtr(), i);
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992  L_0 = __this->get_m_CachedAnimatorParameters_33();
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F(L_0, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_mCAB4383BED8483B652BD2331605E25157377C11F_RuntimeMethod_var);
		int32_t L_2 = V_0;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0((void*)(void*)L_1, L_2, /*hidden argument*/UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C_m51B6AFAE65050BA8A95210DA3AB3F94F328634D0_RuntimeMethod_var);
		V_1 = (AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C *)L_3;
		// var hash = cacheValue.Hash;
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_4 = V_1;
		int32_t L_5 = L_4->get_Hash_0();
		V_2 = L_5;
		// if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterInt)
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_6 = V_1;
		int32_t L_7 = L_6->get_Type_1();
		IL2CPP_RUNTIME_CLASS_INIT(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		int32_t L_8 = ((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->get_AnimatorControllerParameterInt_0();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0066;
		}
	}
	{
		// ByteUnpacker.ReadValuePacked(reader, out int newValue);
		FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  L_9 = ___reader0;
		ByteUnpacker_ReadValuePacked_mCF3C24E3831072F5A1DA5286AA0FB103CAD67F99_inline(L_9, (int32_t*)(&V_3), /*hidden argument*/NULL);
		// m_Animator.SetInteger(hash, newValue);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_m_Animator_26();
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		Animator_SetInteger_mF7D7D881496A3E762208730799DE488D942EFE46(L_10, L_11, L_12, /*hidden argument*/NULL);
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_13 = V_1;
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_14 = L_13->get_address_of_Value_2();
		uint8_t* L_15 = L_14->get_address_of_FixedElementField_0();
		V_5 = (uint8_t*)L_15;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_16 = V_5;
		V_4 = (void*)((uintptr_t)L_16);
		// UnsafeUtility.WriteArrayElement(value, 0, newValue);
		void* L_17 = V_4;
		int32_t L_18 = V_3;
		UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392((void*)(void*)L_17, 0, L_18, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
		// }
		goto IL_00f0;
	}

IL_0066:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterBool)
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_19 = V_1;
		int32_t L_20 = L_19->get_Type_1();
		IL2CPP_RUNTIME_CLASS_INIT(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		int32_t L_21 = ((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->get_AnimatorControllerParameterBool_2();
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00ac;
		}
	}
	{
		// reader.ReadValueSafe(out bool newBoolValue);
		FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (bool*)(&V_6), /*hidden argument*/FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_RuntimeMethod_var);
		// m_Animator.SetBool(hash, newBoolValue);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_22 = __this->get_m_Animator_26();
		int32_t L_23 = V_2;
		bool L_24 = V_6;
		NullCheck(L_22);
		Animator_SetBool_m0F0363B189AAB848FA3B428986C6A01470B3E38C(L_22, L_23, L_24, /*hidden argument*/NULL);
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_25 = V_1;
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_26 = L_25->get_address_of_Value_2();
		uint8_t* L_27 = L_26->get_address_of_FixedElementField_0();
		V_5 = (uint8_t*)L_27;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_28 = V_5;
		V_7 = (void*)((uintptr_t)L_28);
		// UnsafeUtility.WriteArrayElement(value, 0, newBoolValue);
		void* L_29 = V_7;
		bool L_30 = V_6;
		UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318((void*)(void*)L_29, 0, L_30, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m475A39B82ABE95FC3BBB6C66026825BAF3D3F318_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
		// }
		goto IL_00f0;
	}

IL_00ac:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterFloat)
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_31 = V_1;
		int32_t L_32 = L_31->get_Type_1();
		IL2CPP_RUNTIME_CLASS_INIT(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		int32_t L_33 = ((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->get_AnimatorControllerParameterFloat_1();
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00f0;
		}
	}
	{
		// reader.ReadValueSafe(out float newFloatValue);
		FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (float*)(&V_8), /*hidden argument*/FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_RuntimeMethod_var);
		// m_Animator.SetFloat(hash, newFloatValue);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_34 = __this->get_m_Animator_26();
		int32_t L_35 = V_2;
		float L_36 = V_8;
		NullCheck(L_34);
		Animator_SetFloat_m22777620F85E25691F57A7CAD4190D7F5702E02C(L_34, L_35, L_36, /*hidden argument*/NULL);
		AnimatorParamCache_t054B5CFF7C64C726C5F00B58C54287CC8066574C * L_37 = V_1;
		U3CValueU3Ee__FixedBuffer_tDFC3D889623FA685F0DAA8425C1B6C0910B9A25E * L_38 = L_37->get_address_of_Value_2();
		uint8_t* L_39 = L_38->get_address_of_FixedElementField_0();
		V_5 = (uint8_t*)L_39;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_40 = V_5;
		V_9 = (void*)((uintptr_t)L_40);
		// UnsafeUtility.WriteArrayElement(value, 0, newFloatValue);
		void* L_41 = V_9;
		float L_42 = V_8;
		UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E((void*)(void*)L_41, 0, L_42, /*hidden argument*/UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
	}

IL_00f0:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00f4:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_44 = V_0;
		NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 * L_45 = __this->get_address_of_m_CachedAnimatorParameters_33();
		int32_t L_46;
		L_46 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t2A72CA265157435A8D76C708818100521D41E992 *)L_45)->___m_Length_1);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimStateClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimStateClientRpc_m0CA1238DAFB4CA56C0895AF88339D7D52B440E84 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  ___animSnapshot0, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___clientRpcParams1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_3 = NULL;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		V_3 = L_0;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_0097;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_5 = V_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_mBA4BAF2CE1B5B1BA634DF06D17AE4FDE7FE19B81_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_7 = V_3;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0097;
		}
	}

IL_0058:
	{
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_9 = ___clientRpcParams1;
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_10;
		L_10 = NetworkBehaviour___beginSendClientRpc_mB419251D8D7988E71167118F294DF269C1881D10(__this, ((int32_t)1069363937), L_9, ((int32_t)0), /*hidden argument*/NULL);
		V_4 = L_10;
		FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_4), (AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 *)(&___animSnapshot0), /*hidden argument*/FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mCB042B5165F48911D0707B4FBA58D64DE912ECB0_RuntimeMethod_var);
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_11 = ___clientRpcParams1;
		NetworkBehaviour___endSendClientRpc_m6E8A1202D9CC6791B40190C43800CD35B5946B68(__this, (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_4), ((int32_t)1069363937), L_11, ((int32_t)0), /*hidden argument*/NULL);
	}

IL_0097:
	{
		int32_t L_12 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)L_12) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00c6;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_13 = V_3;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkManager_get_IsClient_m04A60A96E9BA6E015156120822AEA2917AC62E31_inline(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00c7;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_15 = V_3;
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00c7;
		}
	}

IL_00c6:
	{
		return;
	}

IL_00c7:
	{
		// if (animSnapshot.StateHash != 0)
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_17 = ___animSnapshot0;
		int32_t L_18 = L_17.get_StateHash_0();
		if (!L_18)
		{
			goto IL_00ed;
		}
	}
	{
		// m_Animator.Play(animSnapshot.StateHash, animSnapshot.Layer, animSnapshot.NormalizedTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_m_Animator_26();
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_20 = ___animSnapshot0;
		int32_t L_21 = L_20.get_StateHash_0();
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_22 = ___animSnapshot0;
		int32_t L_23 = L_22.get_Layer_2();
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_24 = ___animSnapshot0;
		float L_25 = L_24.get_NormalizedTime_1();
		NullCheck(L_19);
		Animator_Play_m392289975B858ED7D85DF6E7980E5BA47F606AEC(L_19, L_21, L_23, L_25, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// m_Animator.SetLayerWeight(animSnapshot.Layer, animSnapshot.Weight);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_26 = __this->get_m_Animator_26();
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_27 = ___animSnapshot0;
		int32_t L_28 = L_27.get_Layer_2();
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_29 = ___animSnapshot0;
		float L_30 = L_29.get_Weight_3();
		NullCheck(L_26);
		Animator_SetLayerWeight_mFC527EAF68AAA25156B5A5B838FB9AB7231DDDF7(L_26, L_28, L_30, /*hidden argument*/NULL);
		// if (animSnapshot.Parameters != null && animSnapshot.Parameters.Length != 0)
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_31 = ___animSnapshot0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31.get_Parameters_4();
		if (!L_32)
		{
			goto IL_014d;
		}
	}
	{
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_33 = ___animSnapshot0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33.get_Parameters_4();
		NullCheck(L_34);
		if (!(((RuntimeArray*)L_34)->max_length))
		{
			goto IL_014d;
		}
	}
	{
		// fixed (byte* parameters = animSnapshot.Parameters)
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_35 = ___animSnapshot0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = L_35.get_Parameters_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = L_36;
		V_1 = L_37;
		if (!L_37)
		{
			goto IL_0124;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_1;
		NullCheck(L_38);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))
		{
			goto IL_0129;
		}
	}

IL_0124:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0132;
	}

IL_0129:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = V_1;
		NullCheck(L_39);
		V_0 = (uint8_t*)((uintptr_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0132:
	{
		// var reader = new FastBufferReader(parameters, Allocator.None, animSnapshot.Parameters.Length);
		uint8_t* L_40 = V_0;
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_41 = ___animSnapshot0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = L_41.get_Parameters_4();
		NullCheck(L_42);
		FastBufferReader__ctor_mFB7A88092A09DB01CF1C722BBD077A3BEF1FCA8E((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&V_2), (uint8_t*)(uint8_t*)L_40, 1, ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), 0, /*hidden argument*/NULL);
		// ReadParameters(reader);
		FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  L_43 = V_2;
		NetworkAnimator_ReadParameters_m0F58D0BF8B19A36FF89373520497D55665833194(__this, L_43, /*hidden argument*/NULL);
		V_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimTriggerClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimTriggerClientRpc_m21F974B6453EDCCA910C0B47A2AA1FC212B62AED (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  ___animSnapshot0, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___clientRpcParams1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_0097;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_mBA4BAF2CE1B5B1BA634DF06D17AE4FDE7FE19B81_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0097;
		}
	}

IL_0058:
	{
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_9 = ___clientRpcParams1;
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_10;
		L_10 = NetworkBehaviour___beginSendClientRpc_mB419251D8D7988E71167118F294DF269C1881D10(__this, ((int32_t)-2064519732), L_9, ((int32_t)0), /*hidden argument*/NULL);
		V_1 = L_10;
		FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), (AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 *)(&___animSnapshot0), /*hidden argument*/FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m537CEE9FDB75A568DC138BEAB6E2390957C3A0DB_RuntimeMethod_var);
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_11 = ___clientRpcParams1;
		NetworkBehaviour___endSendClientRpc_m6E8A1202D9CC6791B40190C43800CD35B5946B68(__this, (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), ((int32_t)-2064519732), L_11, ((int32_t)0), /*hidden argument*/NULL);
	}

IL_0097:
	{
		int32_t L_12 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)L_12) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00c6;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkManager_get_IsClient_m04A60A96E9BA6E015156120822AEA2917AC62E31_inline(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00c7;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00c7;
		}
	}

IL_00c6:
	{
		return;
	}

IL_00c7:
	{
		// if (animSnapshot.Reset)
		AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  L_17 = ___animSnapshot0;
		bool L_18 = L_17.get_Reset_1();
		if (!L_18)
		{
			goto IL_00e2;
		}
	}
	{
		// m_Animator.ResetTrigger(animSnapshot.Hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_m_Animator_26();
		AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  L_20 = ___animSnapshot0;
		int32_t L_21 = L_20.get_Hash_0();
		NullCheck(L_19);
		Animator_ResetTrigger_m8A3EFE371465928C7C898424B1852D06E45A9596(L_19, L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e2:
	{
		// m_Animator.SetTrigger(animSnapshot.Hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_22 = __this->get_m_Animator_26();
		AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  L_23 = ___animSnapshot0;
		int32_t L_24 = L_23.get_Hash_0();
		NullCheck(L_22);
		Animator_SetTrigger_m081FDF5695B938E2DB858A0DBDC38C2F48C55B28(L_22, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetTrigger_m5A85CFD0B15DB911BAF5ECB6B36ACD8457F9EA96 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, String_t* ___triggerName0, const RuntimeMethod* method)
{
	{
		// SetTrigger(Animator.StringToHash(triggerName));
		String_t* L_0 = ___triggerName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(L_0, /*hidden argument*/NULL);
		NetworkAnimator_SetTrigger_m5EF843378176B81721CFB79246813286A0D26FD1(__this, L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SetTrigger(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetTrigger_m5EF843378176B81721CFB79246813286A0D26FD1 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, int32_t ___hash0, bool ___reset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BBED68DDE16AF1D5EA27ED467F36EBB96FB81DB);
		s_Il2CppMethodInitialized = true;
	}
	AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var animMsg = new AnimationTriggerMessage();
		il2cpp_codegen_initobj((&V_0), sizeof(AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 ));
		// animMsg.Hash = hash;
		int32_t L_0 = ___hash0;
		(&V_0)->set_Hash_0(L_0);
		// animMsg.Reset = reset;
		bool L_1 = ___reset1;
		(&V_0)->set_Reset_1(L_1);
		// if (IsServer)
		bool L_2;
		L_2 = NetworkBehaviour_get_IsServer_mD979A08F94C851D2BA1B915A6E1B78FFFB85D781_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		// if (reset)
		bool L_3 = ___reset1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// m_Animator.ResetTrigger(hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_m_Animator_26();
		int32_t L_5 = ___hash0;
		NullCheck(L_4);
		Animator_ResetTrigger_m8A3EFE371465928C7C898424B1852D06E45A9596(L_4, L_5, /*hidden argument*/NULL);
		// }
		goto IL_003d;
	}

IL_0031:
	{
		// m_Animator.SetTrigger(hash);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_m_Animator_26();
		int32_t L_7 = ___hash0;
		NullCheck(L_6);
		Animator_SetTrigger_m081FDF5695B938E2DB858A0DBDC38C2F48C55B28(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// SendAnimTriggerClientRpc(animMsg);
		AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  L_8 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89 ));
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_9 = V_1;
		NetworkAnimator_SendAnimTriggerClientRpc_m21F974B6453EDCCA910C0B47A2AA1FC212B62AED(__this, L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004e:
	{
		// Debug.LogWarning("Trying to call NetworkAnimator.SetTrigger on a client...ignoring");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7BBED68DDE16AF1D5EA27ED467F36EBB96FB81DB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetTrigger_m05BA7FF14AD05130059426EB5E55047026A1CF78 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, String_t* ___triggerName0, const RuntimeMethod* method)
{
	{
		// ResetTrigger(Animator.StringToHash(triggerName));
		String_t* L_0 = ___triggerName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA351F39D53E2AEFCF0BBD50E4FA92B7E1C99A668(L_0, /*hidden argument*/NULL);
		NetworkAnimator_ResetTrigger_mFFF1F7E8AFD3BDB4D314AF96F85520160499E124(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetTrigger_mFFF1F7E8AFD3BDB4D314AF96F85520160499E124 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, int32_t ___hash0, const RuntimeMethod* method)
{
	{
		// SetTrigger(hash, true);
		int32_t L_0 = ___hash0;
		NetworkAnimator_SetTrigger_m5EF843378176B81721CFB79246813286A0D26FD1(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator__ctor_mDBE18DEB6073E262913B7F3734A27FA9048C64E4 (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private FastBufferWriter m_ParameterWriter = new FastBufferWriter(K_MaxAnimationParams * sizeof(float), Allocator.Persistent);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_StaticFields*)il2cpp_codegen_static_fields_for(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var))->get_K_MaxAnimationParams_28();
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		FastBufferWriter__ctor_mBC8F8F94C7FC952EFE4FA40E933B639F624B0FDE((&L_1), ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)4)), 4, (-1), /*hidden argument*/NULL);
		__this->set_m_ParameterWriter_32(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_mF267A30FB25D35ED55E65C207EC9E44EDBC70FD1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator__cctor_mCBF86C80FEBA4C33EF33A90E6653C0ABF3A68908 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator___rpc_handler_1069363937_mE36B9AF15A7D8A660849D0BE37F46A08C56A965B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator___rpc_handler_2230447564_m46F8C865D3FE5369A2B49FD04EE5F2937376973D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var);
		Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * L_0 = ((NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var))->get___rpc_func_table_4();
		RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * L_1 = (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 *)il2cpp_codegen_object_new(RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var);
		RpcReceiveHandler__ctor_m03B70FB2D763FACEB7FCA76AD8446403F7394121(L_1, NULL, (intptr_t)((intptr_t)NetworkAnimator___rpc_handler_1069363937_mE36B9AF15A7D8A660849D0BE37F46A08C56A965B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0(L_0, ((int32_t)1069363937), L_1, /*hidden argument*/Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var);
		Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * L_2 = ((NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var))->get___rpc_func_table_4();
		RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * L_3 = (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 *)il2cpp_codegen_object_new(RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var);
		RpcReceiveHandler__ctor_m03B70FB2D763FACEB7FCA76AD8446403F7394121(L_3, NULL, (intptr_t)((intptr_t)NetworkAnimator___rpc_handler_2230447564_m46F8C865D3FE5369A2B49FD04EE5F2937376973D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0(L_2, ((int32_t)-2064519732), L_3, /*hidden argument*/Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var);
		// public static int K_MaxAnimationParams = 32;
		((NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_StaticFields*)il2cpp_codegen_static_fields_for(NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var))->set_K_MaxAnimationParams_28(((int32_t)32));
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::__rpc_handler_1069363937(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator___rpc_handler_1069363937_mE36B9AF15A7D8A660849D0BE37F46A08C56A965B (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___target0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  ___rpcParams2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597 *)(&V_1), /*hidden argument*/FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_mF2EA37A9BC508DE6DE5EB07488FA121645A2955C_RuntimeMethod_var);
		__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  L_5 = ___rpcParams2;
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_6 = L_5.get_Client_1();
		V_2 = L_6;
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_7 = ___target0;
		NullCheck(L_7);
		L_7->set___rpc_exec_stage_4(((int32_t)2));
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_8 = ___target0;
		AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597  L_9 = V_1;
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_10 = V_2;
		NullCheck(((NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F *)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var)));
		NetworkAnimator_SendAnimStateClientRpc_m0CA1238DAFB4CA56C0895AF88339D7D52B440E84(((NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F *)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var)), L_9, L_10, /*hidden argument*/NULL);
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_11 = ___target0;
		NullCheck(L_11);
		L_11->set___rpc_exec_stage_4(((int32_t)0));
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::__rpc_handler_2230447564(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator___rpc_handler_2230447564_m46F8C865D3FE5369A2B49FD04EE5F2937376973D (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___target0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  ___rpcParams2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7 *)(&V_1), /*hidden argument*/FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_m38E4412C9989351366CB90EFDF0C8A7DBBD2ACC6_RuntimeMethod_var);
		__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  L_5 = ___rpcParams2;
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_6 = L_5.get_Client_1();
		V_2 = L_6;
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_7 = ___target0;
		NullCheck(L_7);
		L_7->set___rpc_exec_stage_4(((int32_t)2));
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_8 = ___target0;
		AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7  L_9 = V_1;
		ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  L_10 = V_2;
		NullCheck(((NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F *)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var)));
		NetworkAnimator_SendAnimTriggerClientRpc_m21F974B6453EDCCA910C0B47A2AA1FC212B62AED(((NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F *)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F_il2cpp_TypeInfo_var)), L_9, L_10, /*hidden argument*/NULL);
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_11 = ___target0;
		NullCheck(L_11);
		L_11->set___rpc_exec_stage_4(((int32_t)0));
		return;
	}
}
// System.String Unity.Netcode.Components.NetworkAnimator::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkAnimator___getTypeName_m9B4AD03E8DCA75CD3087AA7B66226079F71D25FD (NetworkAnimator_t6E78932DB9F9EC02588DC6C5A72894C9EBA6F95F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9334F5F8D2DB5F73AF4D47E992E81FA30B96151);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC9334F5F8D2DB5F73AF4D47E992E81FA30B96151;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Netcode.Components.NetworkTransform::get_CanCommitToTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanCommitToTransform { get; protected set; }
		bool L_0 = __this->get_U3CCanCommitToTransformU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::set_CanCommitToTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_set_CanCommitToTransform_m42E552D98628D7F818294C5FF4D01C79C59FC3CB (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CanCommitToTransform { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CCanCommitToTransformU3Ek__BackingField_46(L_0);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitTransformToServer(UnityEngine.Transform,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitTransformToServer_mF8E67C8B8D2E4FAB3E2DEBF662D0D47695EB36FD (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToCommit0, double ___dirtyTime1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// var isDirty = ApplyTransformToNetworkState(ref m_LocalAuthoritativeNetworkState, dirtyTime, transformToCommit);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_0 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		double L_1 = ___dirtyTime1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transformToCommit0;
		bool L_3;
		L_3 = NetworkTransform_ApplyTransformToNetworkState_m8CFCC01B79D058B7C439606E28466762A2BB8C60(__this, (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// TryCommit(isDirty);
		bool L_4 = V_0;
		NetworkTransform_TryCommit_m169DE4CFB836A0DBD60C1708AE5A7636BABB4B32(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitValuesToServer(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitValuesToServer_m0DB485669C0E672AEB432DC3655289AD1BF027D9 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, double ___dirtyTime3, const RuntimeMethod* method)
{
	ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var isDirty = ApplyTransformToNetworkStateWithInfo(ref m_LocalAuthoritativeNetworkState, dirtyTime, position, rotation, scale);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_0 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		double L_1 = ___dirtyTime3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___rotation1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___scale2;
		ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  L_5;
		L_5 = NetworkTransform_ApplyTransformToNetworkStateWithInfo_m9AD12DD9FF9EADC9784B4268BAA93DE04B4E4ABB(__this, (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// TryCommit(isDirty.isDirty);
		ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  L_6 = V_0;
		bool L_7 = L_6.get_Item1_0();
		NetworkTransform_TryCommit_m169DE4CFB836A0DBD60C1708AE5A7636BABB4B32(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommit_m169DE4CFB836A0DBD60C1708AE5A7636BABB4B32 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, bool ___isDirty0, const RuntimeMethod* method)
{
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isDirty)
		bool L_0 = ___isDirty0;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// Send(m_LocalAuthoritativeNetworkState);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_1 = __this->get_m_LocalAuthoritativeNetworkState_50();
		NetworkTransform_U3CTryCommitU3Eg__SendU7C46_0_m4C799AD0DEC285AAE514BB438D01BDEF7D9EA764(__this, L_1, /*hidden argument*/NULL);
		// m_HasSentLastValue = false;
		__this->set_m_HasSentLastValue_53((bool)0);
		// m_LastSentTick = m_CachedNetworkManager.LocalTime.Tick;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_2);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_3;
		L_3 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = NetworkTime_get_Tick_mC495A812B6B4C3BCD7B9454A8F7E4950B287B67B_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_0), /*hidden argument*/NULL);
		__this->set_m_LastSentTick_63(L_4);
		// m_LastSentState = m_LocalAuthoritativeNetworkState;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_5 = __this->get_m_LocalAuthoritativeNetworkState_50();
		__this->set_m_LastSentState_64(L_5);
		// }
		return;
	}

IL_003c:
	{
		// else if (!m_HasSentLastValue && m_CachedNetworkManager.LocalTime.Tick >= m_LastSentTick + 1) // check for state.IsDirty since update can happen more than once per tick. No need for client, RPCs will just queue up
		bool L_6 = __this->get_m_HasSentLastValue_53();
		if (L_6)
		{
			goto IL_0092;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_7 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_7);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_8;
		L_8 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = NetworkTime_get_Tick_mC495A812B6B4C3BCD7B9454A8F7E4950B287B67B_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10 = __this->get_m_LastSentTick_63();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_0092;
		}
	}
	{
		// m_LastSentState.SentTime = m_CachedNetworkManager.LocalTime.Time; // time 1+ tick later
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_11 = __this->get_address_of_m_LastSentState_64();
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_12 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_12);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_13;
		L_13 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		double L_14;
		L_14 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_0), /*hidden argument*/NULL);
		L_11->set_SentTime_21(L_14);
		// Send(m_LastSentState);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_15 = __this->get_m_LastSentState_64();
		NetworkTransform_U3CTryCommitU3Eg__SendU7C46_0_m4C799AD0DEC285AAE514BB438D01BDEF7D9EA764(__this, L_15, /*hidden argument*/NULL);
		// m_HasSentLastValue = true;
		__this->set_m_HasSentLastValue_53((bool)1);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitTransformServerRpc(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitTransformServerRpc_m72F5625E7FCC3A3D25779BA1E569B602E6DC64D8 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___networkState0, ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___serverParams1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_0097;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_m04A60A96E9BA6E015156120822AEA2917AC62E31_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0097;
		}
	}

IL_0058:
	{
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_9 = ___serverParams1;
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_10;
		L_10 = NetworkBehaviour___beginSendServerRpc_m08B66FC1F04688DF4E2F946E375B578D13910F40(__this, ((int32_t)104221529), L_9, ((int32_t)0), /*hidden argument*/NULL);
		V_1 = L_10;
		FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m8D463EDAA0703F233C45EA252EB4F490933BEEFE_RuntimeMethod_var);
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_11 = ___serverParams1;
		NetworkBehaviour___endSendServerRpc_mB1C1D0B3A96ECA21EFDF56A14EE45EFEB1B7E81E(__this, (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), ((int32_t)104221529), L_11, ((int32_t)0), /*hidden argument*/NULL);
	}

IL_0097:
	{
		int32_t L_12 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)L_12) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00c6;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkManager_get_IsServer_mBA4BAF2CE1B5B1BA634DF06D17AE4FDE7FE19B81_inline(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00c7;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00c7;
		}
	}

IL_00c6:
	{
		return;
	}

IL_00c7:
	{
		// if (serverParams.Receive.SenderClientId == OwnerClientId) // RPC call when not authorized to write could happen during the RTT interval during which a server's ownership change hasn't reached the client yet
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_17 = ___serverParams1;
		ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  L_18 = L_17.get_Receive_1();
		uint64_t L_19 = L_18.get_SenderClientId_0();
		uint64_t L_20;
		L_20 = NetworkBehaviour_get_OwnerClientId_m3619480599CD440BF15F8746AFE254F63BA3032D_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_19) == ((uint64_t)L_20))))
		{
			goto IL_00e2;
		}
	}
	{
		// CommitLocallyAndReplicate(networkState);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_21 = ___networkState0;
		NetworkTransform_CommitLocallyAndReplicate_m6DC198D5A9A826FF5E119970DBC1F5B3D31EB024(__this, L_21, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitLocallyAndReplicate(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitLocallyAndReplicate_m6DC198D5A9A826FF5E119970DBC1F5B3D31EB024 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___networkState0, const RuntimeMethod* method)
{
	{
		// m_ReplicatedNetworkState.Value = networkState;
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_0 = __this->get_m_ReplicatedNetworkState_49();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_1 = ___networkState0;
		NullCheck(L_0);
		VirtActionInvoker1< NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  >::Invoke(14 /* System.Void Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::set_Value(!0) */, L_0, L_1);
		// if (Interpolate)
		bool L_2 = __this->get_Interpolate_44();
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// AddInterpolatedState(networkState);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_3 = ___networkState0;
		NetworkTransform_AddInterpolatedState_mA080506B45875DBE311F18EE90313201AEA1EB46(__this, L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::ResetInterpolatedStateToCurrentAuthoritativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ResetInterpolatedStateToCurrentAuthoritativeState_mB426D48B3B20E134277217E5C3F0FC04DB875BB1 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var serverTime = NetworkManager.ServerTime.Time;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_1;
		L_1 = NetworkManager_get_ServerTime_m7A89CC74F5C58A879E94F5C1A49EE8F1EBDDC502(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		double L_2;
		L_2 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// m_PositionXInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.PositionX, serverTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_3 = __this->get_m_PositionXInterpolator_54();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_4 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		float L_5 = L_4->get_PositionX_12();
		double L_6 = V_0;
		NullCheck(L_3);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_3, L_5, L_6, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		// m_PositionYInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.PositionY, serverTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_7 = __this->get_m_PositionYInterpolator_55();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_8 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		float L_9 = L_8->get_PositionY_13();
		double L_10 = V_0;
		NullCheck(L_7);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_7, L_9, L_10, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		// m_PositionZInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.PositionZ, serverTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_11 = __this->get_m_PositionZInterpolator_56();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_12 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		float L_13 = L_12->get_PositionZ_14();
		double L_14 = V_0;
		NullCheck(L_11);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_11, L_13, L_14, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		// m_RotationInterpolator.ResetTo(Quaternion.Euler(m_LocalAuthoritativeNetworkState.Rotation), serverTime);
		BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * L_15 = __this->get_m_RotationInterpolator_57();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_16 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_16, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_17, /*hidden argument*/NULL);
		double L_19 = V_0;
		NullCheck(L_15);
		BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D(L_15, L_18, L_19, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_RuntimeMethod_var);
		// m_ScaleXInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.ScaleX, serverTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_20 = __this->get_m_ScaleXInterpolator_58();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_21 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		float L_22 = L_21->get_ScaleX_18();
		double L_23 = V_0;
		NullCheck(L_20);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_20, L_22, L_23, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		// m_ScaleYInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.ScaleY, serverTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_24 = __this->get_m_ScaleYInterpolator_59();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_25 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		float L_26 = L_25->get_ScaleY_19();
		double L_27 = V_0;
		NullCheck(L_24);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_24, L_26, L_27, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		// m_ScaleZInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.ScaleZ, serverTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_28 = __this->get_m_ScaleZInterpolator_60();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_29 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		float L_30 = L_29->get_ScaleZ_20();
		double L_31 = V_0;
		NullCheck(L_28);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_28, L_30, L_31, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransform_ApplyTransformToNetworkState_m8CFCC01B79D058B7C439606E28466762A2BB8C60 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___networkState0, double ___dirtyTime1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToUse2, const RuntimeMethod* method)
{
	{
		// return ApplyTransformToNetworkStateWithInfo(ref networkState, dirtyTime, transformToUse).isDirty;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_0 = ___networkState0;
		double L_1 = ___dirtyTime1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transformToUse2;
		ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  L_3;
		L_3 = NetworkTransform_ApplyTransformToNetworkStateWithInfo_m59E392384FADA00A406533874AC5151326ADE6A7(__this, (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_4 = L_3.get_Item1_0();
		return L_4;
	}
}
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  NetworkTransform_ApplyTransformToNetworkStateWithInfo_m59E392384FADA00A406533874AC5151326ADE6A7 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___networkState0, double ___dirtyTime1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToUse2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// var position = InLocalSpace ? transformToUse.localPosition : transformToUse.position;
		bool L_0 = __this->get_InLocalSpace_42();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transformToUse2;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transformToUse2;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		// var rotAngles = InLocalSpace ? transformToUse.localEulerAngles : transformToUse.eulerAngles;
		bool L_5 = __this->get_InLocalSpace_42();
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___transformToUse2;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		G_B6_0 = L_7;
		goto IL_002d;
	}

IL_0027:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___transformToUse2;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_8, /*hidden argument*/NULL);
		G_B6_0 = L_9;
	}

IL_002d:
	{
		V_1 = G_B6_0;
		// var scale = transformToUse.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ___transformToUse2;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// return ApplyTransformToNetworkStateWithInfo(ref networkState, dirtyTime, position, rotAngles, scale);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_12 = ___networkState0;
		double L_13 = ___dirtyTime1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  L_17;
		L_17 = NetworkTransform_ApplyTransformToNetworkStateWithInfo_m9AD12DD9FF9EADC9784B4268BAA93DE04B4E4ABB(__this, (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  NetworkTransform_ApplyTransformToNetworkStateWithInfo_m9AD12DD9FF9EADC9784B4268BAA93DE04B4E4ABB (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * ___networkState0, double ___dirtyTime1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotAngles3, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var isDirty = false;
		V_0 = (bool)0;
		// var isPositionDirty = false;
		V_1 = (bool)0;
		// var isRotationDirty = false;
		V_2 = (bool)0;
		// var isScaleDirty = false;
		V_3 = (bool)0;
		// if (InLocalSpace != networkState.InLocalSpace)
		bool L_0 = __this->get_InLocalSpace_42();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_1 = ___networkState0;
		bool L_2;
		L_2 = NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		// networkState.InLocalSpace = InLocalSpace;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_3 = ___networkState0;
		bool L_4 = __this->get_InLocalSpace_42();
		NetworkTransformState_set_InLocalSpace_mF973D00C4A5E3CC203B6D22BC173F424B736A7D9((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_3, L_4, /*hidden argument*/NULL);
		// isDirty = true;
		V_0 = (bool)1;
	}

IL_0024:
	{
		// if (SyncPositionX &&
		//     Mathf.Abs(networkState.PositionX - position.x) > PositionThreshold)
		bool L_5 = __this->get_SyncPositionX_30();
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_6 = ___networkState0;
		float L_7 = L_6->get_PositionX_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___position2;
		float L_9 = L_8.get_x_2();
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)));
		float L_11 = __this->get_PositionThreshold_39();
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_005b;
		}
	}
	{
		// networkState.PositionX = position.x;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_12 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___position2;
		float L_14 = L_13.get_x_2();
		L_12->set_PositionX_12(L_14);
		// networkState.HasPositionX = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_15 = ___networkState0;
		NetworkTransformState_set_HasPositionX_m240F2C27547F74F422A288FE3BA992F93283694C((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_15, (bool)1, /*hidden argument*/NULL);
		// isPositionDirty = true;
		V_1 = (bool)1;
	}

IL_005b:
	{
		// if (SyncPositionY &&
		//     Mathf.Abs(networkState.PositionY - position.y) > PositionThreshold)
		bool L_16 = __this->get_SyncPositionY_31();
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_17 = ___networkState0;
		float L_18 = L_17->get_PositionY_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = ___position2;
		float L_20 = L_19.get_y_3();
		float L_21;
		L_21 = fabsf(((float)il2cpp_codegen_subtract((float)L_18, (float)L_20)));
		float L_22 = __this->get_PositionThreshold_39();
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_0092;
		}
	}
	{
		// networkState.PositionY = position.y;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_23 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___position2;
		float L_25 = L_24.get_y_3();
		L_23->set_PositionY_13(L_25);
		// networkState.HasPositionY = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_26 = ___networkState0;
		NetworkTransformState_set_HasPositionY_m586C5B62153D0E8BB91508AC3654FAF9CE3E55C5((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_26, (bool)1, /*hidden argument*/NULL);
		// isPositionDirty = true;
		V_1 = (bool)1;
	}

IL_0092:
	{
		// if (SyncPositionZ &&
		//     Mathf.Abs(networkState.PositionZ - position.z) > PositionThreshold)
		bool L_27 = __this->get_SyncPositionZ_32();
		if (!L_27)
		{
			goto IL_00c9;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_28 = ___networkState0;
		float L_29 = L_28->get_PositionZ_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = ___position2;
		float L_31 = L_30.get_z_4();
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract((float)L_29, (float)L_31)));
		float L_33 = __this->get_PositionThreshold_39();
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_00c9;
		}
	}
	{
		// networkState.PositionZ = position.z;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_34 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = ___position2;
		float L_36 = L_35.get_z_4();
		L_34->set_PositionZ_14(L_36);
		// networkState.HasPositionZ = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_37 = ___networkState0;
		NetworkTransformState_set_HasPositionZ_m563CB6103A575B4D0D9C50349F073C18210A1E66((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_37, (bool)1, /*hidden argument*/NULL);
		// isPositionDirty = true;
		V_1 = (bool)1;
	}

IL_00c9:
	{
		// if (SyncRotAngleX &&
		//     Mathf.Abs(networkState.RotAngleX - rotAngles.x) > RotAngleThreshold)
		bool L_38 = __this->get_SyncRotAngleX_33();
		if (!L_38)
		{
			goto IL_0102;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_39 = ___networkState0;
		float L_40 = L_39->get_RotAngleX_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = ___rotAngles3;
		float L_42 = L_41.get_x_2();
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract((float)L_40, (float)L_42)));
		float L_44 = __this->get_RotAngleThreshold_40();
		if ((!(((float)L_43) > ((float)L_44))))
		{
			goto IL_0102;
		}
	}
	{
		// networkState.RotAngleX = rotAngles.x;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_45 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = ___rotAngles3;
		float L_47 = L_46.get_x_2();
		L_45->set_RotAngleX_15(L_47);
		// networkState.HasRotAngleX = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_48 = ___networkState0;
		NetworkTransformState_set_HasRotAngleX_m16B08D2F6DD4098C8505C6D3AB4773A139E02D64((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_48, (bool)1, /*hidden argument*/NULL);
		// isRotationDirty = true;
		V_2 = (bool)1;
	}

IL_0102:
	{
		// if (SyncRotAngleY &&
		//     Mathf.Abs(networkState.RotAngleY - rotAngles.y) > RotAngleThreshold)
		bool L_49 = __this->get_SyncRotAngleY_34();
		if (!L_49)
		{
			goto IL_013b;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_50 = ___networkState0;
		float L_51 = L_50->get_RotAngleY_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = ___rotAngles3;
		float L_53 = L_52.get_y_3();
		float L_54;
		L_54 = fabsf(((float)il2cpp_codegen_subtract((float)L_51, (float)L_53)));
		float L_55 = __this->get_RotAngleThreshold_40();
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_013b;
		}
	}
	{
		// networkState.RotAngleY = rotAngles.y;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_56 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = ___rotAngles3;
		float L_58 = L_57.get_y_3();
		L_56->set_RotAngleY_16(L_58);
		// networkState.HasRotAngleY = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_59 = ___networkState0;
		NetworkTransformState_set_HasRotAngleY_m1575AE73DAD31FE7FFEDB990E3B8C40FC8FB529C((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_59, (bool)1, /*hidden argument*/NULL);
		// isRotationDirty = true;
		V_2 = (bool)1;
	}

IL_013b:
	{
		// if (SyncRotAngleZ &&
		//     Mathf.Abs(networkState.RotAngleZ - rotAngles.z) > RotAngleThreshold)
		bool L_60 = __this->get_SyncRotAngleZ_35();
		if (!L_60)
		{
			goto IL_0174;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_61 = ___networkState0;
		float L_62 = L_61->get_RotAngleZ_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = ___rotAngles3;
		float L_64 = L_63.get_z_4();
		float L_65;
		L_65 = fabsf(((float)il2cpp_codegen_subtract((float)L_62, (float)L_64)));
		float L_66 = __this->get_RotAngleThreshold_40();
		if ((!(((float)L_65) > ((float)L_66))))
		{
			goto IL_0174;
		}
	}
	{
		// networkState.RotAngleZ = rotAngles.z;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_67 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = ___rotAngles3;
		float L_69 = L_68.get_z_4();
		L_67->set_RotAngleZ_17(L_69);
		// networkState.HasRotAngleZ = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_70 = ___networkState0;
		NetworkTransformState_set_HasRotAngleZ_m6E99C6BB328984E99B4AB2D0B656C5EF96A9FB22((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_70, (bool)1, /*hidden argument*/NULL);
		// isRotationDirty = true;
		V_2 = (bool)1;
	}

IL_0174:
	{
		// if (SyncScaleX &&
		//     Mathf.Abs(networkState.ScaleX - scale.x) > ScaleThreshold)
		bool L_71 = __this->get_SyncScaleX_36();
		if (!L_71)
		{
			goto IL_01ad;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_72 = ___networkState0;
		float L_73 = L_72->get_ScaleX_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = ___scale4;
		float L_75 = L_74.get_x_2();
		float L_76;
		L_76 = fabsf(((float)il2cpp_codegen_subtract((float)L_73, (float)L_75)));
		float L_77 = __this->get_ScaleThreshold_41();
		if ((!(((float)L_76) > ((float)L_77))))
		{
			goto IL_01ad;
		}
	}
	{
		// networkState.ScaleX = scale.x;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_78 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = ___scale4;
		float L_80 = L_79.get_x_2();
		L_78->set_ScaleX_18(L_80);
		// networkState.HasScaleX = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_81 = ___networkState0;
		NetworkTransformState_set_HasScaleX_mC44EB0B2C829B3A8D361A9273364E35A5EF18CDA((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_81, (bool)1, /*hidden argument*/NULL);
		// isScaleDirty = true;
		V_3 = (bool)1;
	}

IL_01ad:
	{
		// if (SyncScaleY &&
		//     Mathf.Abs(networkState.ScaleY - scale.y) > ScaleThreshold)
		bool L_82 = __this->get_SyncScaleY_37();
		if (!L_82)
		{
			goto IL_01e6;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_83 = ___networkState0;
		float L_84 = L_83->get_ScaleY_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = ___scale4;
		float L_86 = L_85.get_y_3();
		float L_87;
		L_87 = fabsf(((float)il2cpp_codegen_subtract((float)L_84, (float)L_86)));
		float L_88 = __this->get_ScaleThreshold_41();
		if ((!(((float)L_87) > ((float)L_88))))
		{
			goto IL_01e6;
		}
	}
	{
		// networkState.ScaleY = scale.y;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_89 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = ___scale4;
		float L_91 = L_90.get_y_3();
		L_89->set_ScaleY_19(L_91);
		// networkState.HasScaleY = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_92 = ___networkState0;
		NetworkTransformState_set_HasScaleY_m892DFCB1EDC16BB21B1C0A327E6B0FF2421AA6E9((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_92, (bool)1, /*hidden argument*/NULL);
		// isScaleDirty = true;
		V_3 = (bool)1;
	}

IL_01e6:
	{
		// if (SyncScaleZ &&
		//     Mathf.Abs(networkState.ScaleZ - scale.z) > ScaleThreshold)
		bool L_93 = __this->get_SyncScaleZ_38();
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_94 = ___networkState0;
		float L_95 = L_94->get_ScaleZ_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = ___scale4;
		float L_97 = L_96.get_z_4();
		float L_98;
		L_98 = fabsf(((float)il2cpp_codegen_subtract((float)L_95, (float)L_97)));
		float L_99 = __this->get_ScaleThreshold_41();
		if ((!(((float)L_98) > ((float)L_99))))
		{
			goto IL_021f;
		}
	}
	{
		// networkState.ScaleZ = scale.z;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_100 = ___networkState0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101 = ___scale4;
		float L_102 = L_101.get_z_4();
		L_100->set_ScaleZ_20(L_102);
		// networkState.HasScaleZ = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_103 = ___networkState0;
		NetworkTransformState_set_HasScaleZ_m71C40ED9D74943E7683551DAC21CCCD1DA308BA2((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_103, (bool)1, /*hidden argument*/NULL);
		// isScaleDirty = true;
		V_3 = (bool)1;
	}

IL_021f:
	{
		// isDirty |= isPositionDirty || isRotationDirty || isScaleDirty;
		bool L_104 = V_0;
		bool L_105 = V_1;
		bool L_106 = V_2;
		bool L_107 = V_3;
		V_0 = (bool)((int32_t)((int32_t)L_104|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_105|(int32_t)L_106))|(int32_t)L_107))));
		// if (isDirty)
		bool L_108 = V_0;
		if (!L_108)
		{
			goto IL_0231;
		}
	}
	{
		// networkState.SentTime = dirtyTime;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_109 = ___networkState0;
		double L_110 = ___dirtyTime1;
		L_109->set_SentTime_21(L_110);
	}

IL_0231:
	{
		// return (isDirty, isPositionDirty, isRotationDirty, isScaleDirty);
		bool L_111 = V_0;
		bool L_112 = V_1;
		bool L_113 = V_2;
		bool L_114 = V_3;
		ValueTuple_4_tDA69B1571991574363D06E6BD32853D2EBE97B1A  L_115;
		memset((&L_115), 0, sizeof(L_115));
		ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537((&L_115), L_111, L_112, L_113, L_114, /*hidden argument*/ValueTuple_4__ctor_m033CCDC76CD1AE3CBE6524171977894679332537_RuntimeMethod_var);
		return L_115;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::ApplyInterpolatedNetworkStateToTransform(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ApplyInterpolatedNetworkStateToTransform_mB7E71F658A04266B416B6020F93869232BE639C7 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___networkState0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformToUpdate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B10_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B8_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B11_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B16_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B14_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B17_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B22_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B20_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B23_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B33_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B31_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B32_0 = NULL;
	float G_B34_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B34_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B39_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B37_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B38_0 = NULL;
	float G_B40_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B40_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B45_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B43_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B44_0 = NULL;
	float G_B46_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B46_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B51_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B49_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B50_0 = NULL;
	float G_B52_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B52_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B57_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B55_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B56_0 = NULL;
	float G_B58_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B58_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B63_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B61_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B62_0 = NULL;
	float G_B64_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B64_1 = NULL;
	{
		// m_PrevNetworkState = networkState;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_0 = ___networkState0;
		__this->set_m_PrevNetworkState_51(L_0);
		// var interpolatedPosition = InLocalSpace ? transformToUpdate.localPosition : transformToUpdate.position;
		bool L_1 = __this->get_InLocalSpace_42();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transformToUpdate1;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_001d;
	}

IL_0017:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___transformToUpdate1;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// var interpolatedRotAngles = InLocalSpace ? transformToUpdate.localEulerAngles : transformToUpdate.eulerAngles;
		bool L_6 = __this->get_InLocalSpace_42();
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___transformToUpdate1;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		goto IL_0034;
	}

IL_002e:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___transformToUpdate1;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_9, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_0034:
	{
		V_1 = G_B6_0;
		// var interpolatedScale = transformToUpdate.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___transformToUpdate1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// InLocalSpace = networkState.InLocalSpace;
		bool L_13;
		L_13 = NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		__this->set_InLocalSpace_42(L_13);
		// if (SyncPositionX)
		bool L_14 = __this->get_SyncPositionX_30();
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		// interpolatedPosition.x = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Position.x : m_PositionXInterpolator.GetInterpolatedValue();
		bool L_15;
		L_15 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B8_0 = (&V_0);
		if (L_15)
		{
			G_B10_0 = (&V_0);
			goto IL_0071;
		}
	}
	{
		bool L_16 = __this->get_Interpolate_44();
		G_B9_0 = G_B8_0;
		if (!L_16)
		{
			G_B10_0 = G_B8_0;
			goto IL_0071;
		}
	}
	{
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_17 = __this->get_m_PositionXInterpolator_54();
		NullCheck(L_17);
		float L_18;
		L_18 = BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline(L_17, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		G_B11_0 = L_18;
		G_B11_1 = G_B9_0;
		goto IL_007d;
	}

IL_0071:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		G_B11_0 = L_20;
		G_B11_1 = G_B10_0;
	}

IL_007d:
	{
		G_B11_1->set_x_2(G_B11_0);
	}

IL_0082:
	{
		// if (SyncPositionY)
		bool L_21 = __this->get_SyncPositionY_31();
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		// interpolatedPosition.y = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Position.y : m_PositionYInterpolator.GetInterpolatedValue();
		bool L_22;
		L_22 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B14_0 = (&V_0);
		if (L_22)
		{
			G_B16_0 = (&V_0);
			goto IL_00aa;
		}
	}
	{
		bool L_23 = __this->get_Interpolate_44();
		G_B15_0 = G_B14_0;
		if (!L_23)
		{
			G_B16_0 = G_B14_0;
			goto IL_00aa;
		}
	}
	{
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_24 = __this->get_m_PositionYInterpolator_55();
		NullCheck(L_24);
		float L_25;
		L_25 = BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline(L_24, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		G_B17_0 = L_25;
		G_B17_1 = G_B15_0;
		goto IL_00b6;
	}

IL_00aa:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		G_B17_0 = L_27;
		G_B17_1 = G_B16_0;
	}

IL_00b6:
	{
		G_B17_1->set_y_3(G_B17_0);
	}

IL_00bb:
	{
		// if (SyncPositionZ)
		bool L_28 = __this->get_SyncPositionZ_32();
		if (!L_28)
		{
			goto IL_00f4;
		}
	}
	{
		// interpolatedPosition.z = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Position.z : m_PositionZInterpolator.GetInterpolatedValue();
		bool L_29;
		L_29 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B20_0 = (&V_0);
		if (L_29)
		{
			G_B22_0 = (&V_0);
			goto IL_00e3;
		}
	}
	{
		bool L_30 = __this->get_Interpolate_44();
		G_B21_0 = G_B20_0;
		if (!L_30)
		{
			G_B22_0 = G_B20_0;
			goto IL_00e3;
		}
	}
	{
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_31 = __this->get_m_PositionZInterpolator_56();
		NullCheck(L_31);
		float L_32;
		L_32 = BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline(L_31, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		G_B23_0 = L_32;
		G_B23_1 = G_B21_0;
		goto IL_00ef;
	}

IL_00e3:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_34 = L_33.get_z_4();
		G_B23_0 = L_34;
		G_B23_1 = G_B22_0;
	}

IL_00ef:
	{
		G_B23_1->set_z_4(G_B23_0);
	}

IL_00f4:
	{
		// if (SyncRotAngleX || SyncRotAngleY || SyncRotAngleZ)
		bool L_35 = __this->get_SyncRotAngleX_33();
		if (L_35)
		{
			goto IL_010f;
		}
	}
	{
		bool L_36 = __this->get_SyncRotAngleY_34();
		if (L_36)
		{
			goto IL_010f;
		}
	}
	{
		bool L_37 = __this->get_SyncRotAngleZ_35();
		if (!L_37)
		{
			goto IL_01d0;
		}
	}

IL_010f:
	{
		// var eulerAngles = new Vector3();
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (Interpolate)
		bool L_38 = __this->get_Interpolate_44();
		if (!L_38)
		{
			goto IL_0134;
		}
	}
	{
		// eulerAngles = m_RotationInterpolator.GetInterpolatedValue().eulerAngles;
		BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * L_39 = __this->get_m_RotationInterpolator_57();
		NullCheck(L_39);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_inline(L_39, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_RuntimeMethod_var);
		V_4 = L_40;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_41;
	}

IL_0134:
	{
		// if (SyncRotAngleX)
		bool L_42 = __this->get_SyncRotAngleX_33();
		if (!L_42)
		{
			goto IL_0168;
		}
	}
	{
		// interpolatedRotAngles.x = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Rotation.x : eulerAngles.x;
		bool L_43;
		L_43 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B31_0 = (&V_1);
		if (L_43)
		{
			G_B33_0 = (&V_1);
			goto IL_0157;
		}
	}
	{
		bool L_44 = __this->get_Interpolate_44();
		G_B32_0 = G_B31_0;
		if (!L_44)
		{
			G_B33_0 = G_B31_0;
			goto IL_0157;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_3;
		float L_46 = L_45.get_x_2();
		G_B34_0 = L_46;
		G_B34_1 = G_B32_0;
		goto IL_0163;
	}

IL_0157:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_48 = L_47.get_x_2();
		G_B34_0 = L_48;
		G_B34_1 = G_B33_0;
	}

IL_0163:
	{
		G_B34_1->set_x_2(G_B34_0);
	}

IL_0168:
	{
		// if (SyncRotAngleY)
		bool L_49 = __this->get_SyncRotAngleY_34();
		if (!L_49)
		{
			goto IL_019c;
		}
	}
	{
		// interpolatedRotAngles.y = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Rotation.y : eulerAngles.y;
		bool L_50;
		L_50 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B37_0 = (&V_1);
		if (L_50)
		{
			G_B39_0 = (&V_1);
			goto IL_018b;
		}
	}
	{
		bool L_51 = __this->get_Interpolate_44();
		G_B38_0 = G_B37_0;
		if (!L_51)
		{
			G_B39_0 = G_B37_0;
			goto IL_018b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_3;
		float L_53 = L_52.get_y_3();
		G_B40_0 = L_53;
		G_B40_1 = G_B38_0;
		goto IL_0197;
	}

IL_018b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		G_B40_0 = L_55;
		G_B40_1 = G_B39_0;
	}

IL_0197:
	{
		G_B40_1->set_y_3(G_B40_0);
	}

IL_019c:
	{
		// if (SyncRotAngleZ)
		bool L_56 = __this->get_SyncRotAngleZ_35();
		if (!L_56)
		{
			goto IL_01d0;
		}
	}
	{
		// interpolatedRotAngles.z = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Rotation.z : eulerAngles.z;
		bool L_57;
		L_57 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B43_0 = (&V_1);
		if (L_57)
		{
			G_B45_0 = (&V_1);
			goto IL_01bf;
		}
	}
	{
		bool L_58 = __this->get_Interpolate_44();
		G_B44_0 = G_B43_0;
		if (!L_58)
		{
			G_B45_0 = G_B43_0;
			goto IL_01bf;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_3;
		float L_60 = L_59.get_z_4();
		G_B46_0 = L_60;
		G_B46_1 = G_B44_0;
		goto IL_01cb;
	}

IL_01bf:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_62 = L_61.get_z_4();
		G_B46_0 = L_62;
		G_B46_1 = G_B45_0;
	}

IL_01cb:
	{
		G_B46_1->set_z_4(G_B46_0);
	}

IL_01d0:
	{
		// if (SyncScaleX)
		bool L_63 = __this->get_SyncScaleX_36();
		if (!L_63)
		{
			goto IL_0209;
		}
	}
	{
		// interpolatedScale.x = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Scale.x : m_ScaleXInterpolator.GetInterpolatedValue();
		bool L_64;
		L_64 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B49_0 = (&V_2);
		if (L_64)
		{
			G_B51_0 = (&V_2);
			goto IL_01f8;
		}
	}
	{
		bool L_65 = __this->get_Interpolate_44();
		G_B50_0 = G_B49_0;
		if (!L_65)
		{
			G_B51_0 = G_B49_0;
			goto IL_01f8;
		}
	}
	{
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_66 = __this->get_m_ScaleXInterpolator_58();
		NullCheck(L_66);
		float L_67;
		L_67 = BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline(L_66, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		G_B52_0 = L_67;
		G_B52_1 = G_B50_0;
		goto IL_0204;
	}

IL_01f8:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_69 = L_68.get_x_2();
		G_B52_0 = L_69;
		G_B52_1 = G_B51_0;
	}

IL_0204:
	{
		G_B52_1->set_x_2(G_B52_0);
	}

IL_0209:
	{
		// if (SyncScaleY)
		bool L_70 = __this->get_SyncScaleY_37();
		if (!L_70)
		{
			goto IL_0242;
		}
	}
	{
		// interpolatedScale.y = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Scale.y : m_ScaleYInterpolator.GetInterpolatedValue();
		bool L_71;
		L_71 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B55_0 = (&V_2);
		if (L_71)
		{
			G_B57_0 = (&V_2);
			goto IL_0231;
		}
	}
	{
		bool L_72 = __this->get_Interpolate_44();
		G_B56_0 = G_B55_0;
		if (!L_72)
		{
			G_B57_0 = G_B55_0;
			goto IL_0231;
		}
	}
	{
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_73 = __this->get_m_ScaleYInterpolator_59();
		NullCheck(L_73);
		float L_74;
		L_74 = BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline(L_73, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		G_B58_0 = L_74;
		G_B58_1 = G_B56_0;
		goto IL_023d;
	}

IL_0231:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_76 = L_75.get_y_3();
		G_B58_0 = L_76;
		G_B58_1 = G_B57_0;
	}

IL_023d:
	{
		G_B58_1->set_y_3(G_B58_0);
	}

IL_0242:
	{
		// if (SyncScaleZ)
		bool L_77 = __this->get_SyncScaleZ_38();
		if (!L_77)
		{
			goto IL_027b;
		}
	}
	{
		// interpolatedScale.z = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Scale.z : m_ScaleZInterpolator.GetInterpolatedValue();
		bool L_78;
		L_78 = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		G_B61_0 = (&V_2);
		if (L_78)
		{
			G_B63_0 = (&V_2);
			goto IL_026a;
		}
	}
	{
		bool L_79 = __this->get_Interpolate_44();
		G_B62_0 = G_B61_0;
		if (!L_79)
		{
			G_B63_0 = G_B61_0;
			goto IL_026a;
		}
	}
	{
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_80 = __this->get_m_ScaleZInterpolator_60();
		NullCheck(L_80);
		float L_81;
		L_81 = BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_inline(L_80, /*hidden argument*/BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_RuntimeMethod_var);
		G_B64_0 = L_81;
		G_B64_1 = G_B62_0;
		goto IL_0276;
	}

IL_026a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___networkState0), /*hidden argument*/NULL);
		float L_83 = L_82.get_z_4();
		G_B64_0 = L_83;
		G_B64_1 = G_B63_0;
	}

IL_0276:
	{
		G_B64_1->set_z_4(G_B64_0);
	}

IL_027b:
	{
		// if (SyncPositionX || SyncPositionY || SyncPositionZ)
		bool L_84 = __this->get_SyncPositionX_30();
		if (L_84)
		{
			goto IL_0293;
		}
	}
	{
		bool L_85 = __this->get_SyncPositionY_31();
		if (L_85)
		{
			goto IL_0293;
		}
	}
	{
		bool L_86 = __this->get_SyncPositionZ_32();
		if (!L_86)
		{
			goto IL_02b7;
		}
	}

IL_0293:
	{
		// if (InLocalSpace)
		bool L_87 = __this->get_InLocalSpace_42();
		if (!L_87)
		{
			goto IL_02a4;
		}
	}
	{
		// transformToUpdate.localPosition = interpolatedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = ___transformToUpdate1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = V_0;
		NullCheck(L_88);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_88, L_89, /*hidden argument*/NULL);
		// }
		goto IL_02ab;
	}

IL_02a4:
	{
		// transformToUpdate.position = interpolatedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90 = ___transformToUpdate1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = V_0;
		NullCheck(L_90);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_90, L_91, /*hidden argument*/NULL);
	}

IL_02ab:
	{
		// m_PrevNetworkState.Position = interpolatedPosition;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_92 = __this->get_address_of_m_PrevNetworkState_51();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = V_0;
		NetworkTransformState_set_Position_m6D49CE6D51D822F248A93900D761D0D16ED88694((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_92, L_93, /*hidden argument*/NULL);
	}

IL_02b7:
	{
		// if (SyncRotAngleX || SyncRotAngleY || SyncRotAngleZ)
		bool L_94 = __this->get_SyncRotAngleX_33();
		if (L_94)
		{
			goto IL_02cf;
		}
	}
	{
		bool L_95 = __this->get_SyncRotAngleY_34();
		if (L_95)
		{
			goto IL_02cf;
		}
	}
	{
		bool L_96 = __this->get_SyncRotAngleZ_35();
		if (!L_96)
		{
			goto IL_02fd;
		}
	}

IL_02cf:
	{
		// if (InLocalSpace)
		bool L_97 = __this->get_InLocalSpace_42();
		if (!L_97)
		{
			goto IL_02e5;
		}
	}
	{
		// transformToUpdate.localRotation = Quaternion.Euler(interpolatedRotAngles);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98 = ___transformToUpdate1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_100;
		L_100 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_99, /*hidden argument*/NULL);
		NullCheck(L_98);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_98, L_100, /*hidden argument*/NULL);
		// }
		goto IL_02f1;
	}

IL_02e5:
	{
		// transformToUpdate.rotation = Quaternion.Euler(interpolatedRotAngles);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101 = ___transformToUpdate1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_103;
		L_103 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_102, /*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_101, L_103, /*hidden argument*/NULL);
	}

IL_02f1:
	{
		// m_PrevNetworkState.Rotation = interpolatedRotAngles;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_104 = __this->get_address_of_m_PrevNetworkState_51();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = V_1;
		NetworkTransformState_set_Rotation_mC3266E64819783DB0AD36BFE65FB59BA90C61892((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_104, L_105, /*hidden argument*/NULL);
	}

IL_02fd:
	{
		// if (SyncScaleX || SyncScaleY || SyncScaleZ)
		bool L_106 = __this->get_SyncScaleX_36();
		if (L_106)
		{
			goto IL_0315;
		}
	}
	{
		bool L_107 = __this->get_SyncScaleY_37();
		if (L_107)
		{
			goto IL_0315;
		}
	}
	{
		bool L_108 = __this->get_SyncScaleZ_38();
		if (!L_108)
		{
			goto IL_0328;
		}
	}

IL_0315:
	{
		// transformToUpdate.localScale = interpolatedScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109 = ___transformToUpdate1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = V_2;
		NullCheck(L_109);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_109, L_110, /*hidden argument*/NULL);
		// m_PrevNetworkState.Scale = interpolatedScale;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_111 = __this->get_address_of_m_PrevNetworkState_51();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112 = V_2;
		NetworkTransformState_set_Scale_m3D2545B45FF98B9C9A4D0B1D3729DA57013C89DE((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_111, L_112, /*hidden argument*/NULL);
	}

IL_0328:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::AddInterpolatedState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_AddInterpolatedState_mA080506B45875DBE311F18EE90313201AEA1EB46 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___newState0, bool ___reset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var sentTime = newState.SentTime;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_0 = ___newState0;
		double L_1 = L_0.get_SentTime_21();
		V_0 = L_1;
		// if (reset)
		bool L_2 = ___reset1;
		if (!L_2)
		{
			goto IL_00c8;
		}
	}
	{
		// if (newState.HasPositionX)
		bool L_3;
		L_3 = NetworkTransformState_get_HasPositionX_m9C6FE08916A16EBAF8EBDE6CD6569393D5DC0445((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// m_PositionXInterpolator.ResetTo(newState.PositionX, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_4 = __this->get_m_PositionXInterpolator_54();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_5 = ___newState0;
		float L_6 = L_5.get_PositionX_12();
		double L_7 = V_0;
		NullCheck(L_4);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_4, L_6, L_7, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
	}

IL_0028:
	{
		// if (newState.HasPositionY)
		bool L_8;
		L_8 = NetworkTransformState_get_HasPositionY_m0C744222BC3DBF0B31409710295E92F29086416C((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_PositionYInterpolator.ResetTo(newState.PositionY, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_9 = __this->get_m_PositionYInterpolator_55();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_10 = ___newState0;
		float L_11 = L_10.get_PositionY_13();
		double L_12 = V_0;
		NullCheck(L_9);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_9, L_11, L_12, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
	}

IL_0043:
	{
		// if (newState.HasPositionZ)
		bool L_13;
		L_13 = NetworkTransformState_get_HasPositionZ_mA34324A2D4EAE14B069BFF5A10573C99902D8E1C((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// m_PositionZInterpolator.ResetTo(newState.PositionZ, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_14 = __this->get_m_PositionZInterpolator_56();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_15 = ___newState0;
		float L_16 = L_15.get_PositionZ_14();
		double L_17 = V_0;
		NullCheck(L_14);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_14, L_16, L_17, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
	}

IL_005e:
	{
		// m_RotationInterpolator.ResetTo(Quaternion.Euler(newState.Rotation), sentTime);
		BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * L_18 = __this->get_m_RotationInterpolator_57();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_19, /*hidden argument*/NULL);
		double L_21 = V_0;
		NullCheck(L_18);
		BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D(L_18, L_20, L_21, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_mFDF9B00940A77C91E68583E157DBFA590E587D1D_RuntimeMethod_var);
		// if (newState.HasScaleX)
		bool L_22;
		L_22 = NetworkTransformState_get_HasScaleX_m4D9FE027AD3DF34AA1B8E3DC4305ACA2CA13366B((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		// m_ScaleXInterpolator.ResetTo(newState.ScaleX, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_23 = __this->get_m_ScaleXInterpolator_58();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_24 = ___newState0;
		float L_25 = L_24.get_ScaleX_18();
		double L_26 = V_0;
		NullCheck(L_23);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_23, L_25, L_26, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
	}

IL_0091:
	{
		// if (newState.HasScaleY)
		bool L_27;
		L_27 = NetworkTransformState_get_HasScaleY_m03DA2AB93E3B0CAAFE500E5D030DB4801B9412EE((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ac;
		}
	}
	{
		// m_ScaleYInterpolator.ResetTo(newState.ScaleY, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_28 = __this->get_m_ScaleYInterpolator_59();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_29 = ___newState0;
		float L_30 = L_29.get_ScaleY_19();
		double L_31 = V_0;
		NullCheck(L_28);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_28, L_30, L_31, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
	}

IL_00ac:
	{
		// if (newState.HasScaleZ)
		bool L_32;
		L_32 = NetworkTransformState_get_HasScaleZ_mF11F81778CA6BA17C658AF6D4F80AC0D900B4BF8((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// m_ScaleZInterpolator.ResetTo(newState.ScaleZ, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_33 = __this->get_m_ScaleZInterpolator_60();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_34 = ___newState0;
		float L_35 = L_34.get_ScaleZ_20();
		double L_36 = V_0;
		NullCheck(L_33);
		BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF(L_33, L_35, L_36, /*hidden argument*/BufferedLinearInterpolator_1_ResetTo_m02A19328D8CAA70F5F6D7CBB290009DD22B091DF_RuntimeMethod_var);
	}

IL_00c7:
	{
		// return;
		return;
	}

IL_00c8:
	{
		// if (newState.HasPositionX)
		bool L_37;
		L_37 = NetworkTransformState_get_HasPositionX_m9C6FE08916A16EBAF8EBDE6CD6569393D5DC0445((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00e3;
		}
	}
	{
		// m_PositionXInterpolator.AddMeasurement(newState.PositionX, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_38 = __this->get_m_PositionXInterpolator_54();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_39 = ___newState0;
		float L_40 = L_39.get_PositionX_12();
		double L_41 = V_0;
		NullCheck(L_38);
		BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07(L_38, L_40, L_41, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
	}

IL_00e3:
	{
		// if (newState.HasPositionY)
		bool L_42;
		L_42 = NetworkTransformState_get_HasPositionY_m0C744222BC3DBF0B31409710295E92F29086416C((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00fe;
		}
	}
	{
		// m_PositionYInterpolator.AddMeasurement(newState.PositionY, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_43 = __this->get_m_PositionYInterpolator_55();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_44 = ___newState0;
		float L_45 = L_44.get_PositionY_13();
		double L_46 = V_0;
		NullCheck(L_43);
		BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07(L_43, L_45, L_46, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
	}

IL_00fe:
	{
		// if (newState.HasPositionZ)
		bool L_47;
		L_47 = NetworkTransformState_get_HasPositionZ_mA34324A2D4EAE14B069BFF5A10573C99902D8E1C((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0119;
		}
	}
	{
		// m_PositionZInterpolator.AddMeasurement(newState.PositionZ, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_48 = __this->get_m_PositionZInterpolator_56();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_49 = ___newState0;
		float L_50 = L_49.get_PositionZ_14();
		double L_51 = V_0;
		NullCheck(L_48);
		BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07(L_48, L_50, L_51, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
	}

IL_0119:
	{
		// m_RotationInterpolator.AddMeasurement(Quaternion.Euler(newState.Rotation), sentTime);
		BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * L_52 = __this->get_m_RotationInterpolator_57();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		L_54 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_53, /*hidden argument*/NULL);
		double L_55 = V_0;
		NullCheck(L_52);
		BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE(L_52, L_54, L_55, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mD9D87A26A47EC9B0350B7481ECDE8E01492FD1AE_RuntimeMethod_var);
		// if (newState.HasScaleX)
		bool L_56;
		L_56 = NetworkTransformState_get_HasScaleX_m4D9FE027AD3DF34AA1B8E3DC4305ACA2CA13366B((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_014c;
		}
	}
	{
		// m_ScaleXInterpolator.AddMeasurement(newState.ScaleX, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_57 = __this->get_m_ScaleXInterpolator_58();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_58 = ___newState0;
		float L_59 = L_58.get_ScaleX_18();
		double L_60 = V_0;
		NullCheck(L_57);
		BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07(L_57, L_59, L_60, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
	}

IL_014c:
	{
		// if (newState.HasScaleY)
		bool L_61;
		L_61 = NetworkTransformState_get_HasScaleY_m03DA2AB93E3B0CAAFE500E5D030DB4801B9412EE((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0167;
		}
	}
	{
		// m_ScaleYInterpolator.AddMeasurement(newState.ScaleY, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_62 = __this->get_m_ScaleYInterpolator_59();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_63 = ___newState0;
		float L_64 = L_63.get_ScaleY_19();
		double L_65 = V_0;
		NullCheck(L_62);
		BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07(L_62, L_64, L_65, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
	}

IL_0167:
	{
		// if (newState.HasScaleZ)
		bool L_66;
		L_66 = NetworkTransformState_get_HasScaleZ_mF11F81778CA6BA17C658AF6D4F80AC0D900B4BF8((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState0), /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0182;
		}
	}
	{
		// m_ScaleZInterpolator.AddMeasurement(newState.ScaleZ, sentTime);
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_67 = __this->get_m_ScaleZInterpolator_60();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_68 = ___newState0;
		float L_69 = L_68.get_ScaleZ_20();
		double L_70 = V_0;
		NullCheck(L_67);
		BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07(L_67, L_69, L_70, /*hidden argument*/BufferedLinearInterpolator_1_AddMeasurement_mDB1717CBB100A7A7983E61AF4ADB59DBABA64D07_RuntimeMethod_var);
	}

IL_0182:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnNetworkStateChanged(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnNetworkStateChanged_m068D91DD465041EF0A04DEE6DBA54B9D99AB9CDF (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___oldState0, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NetworkObject.IsSpawned)
		NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * L_0;
		L_0 = NetworkBehaviour_get_NetworkObject_mE5E83275A96B99A24FDFA062C04BB3D1C428FA7B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkObject_get_IsSpawned_m9EF4684B1493578362820A96247850ECD141FC77_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (CanCommitToTransform)
		bool L_2;
		L_2 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// Debug.DrawLine(newState.Position, newState.Position + Vector3.up + Vector3.left, Color.green, 10, false);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m5384A47F25E5B174ABA7D6A7A8726F2F17A5241F(L_3, L_8, L_9, (10.0f), (bool)0, /*hidden argument*/NULL);
		// if (Interpolate)
		bool L_10 = __this->get_Interpolate_44();
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// AddInterpolatedState(newState, (newState.InLocalSpace != m_LastInterpolateLocal));
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_11 = ___newState1;
		bool L_12;
		L_12 = NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState1), /*hidden argument*/NULL);
		bool L_13 = __this->get_m_LastInterpolateLocal_43();
		NetworkTransform_AddInterpolatedState_mA080506B45875DBE311F18EE90313201AEA1EB46(__this, L_11, (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_006a:
	{
		// m_LastInterpolateLocal = newState.InLocalSpace;
		bool L_14;
		L_14 = NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&___newState1), /*hidden argument*/NULL);
		__this->set_m_LastInterpolateLocal_43(L_14);
		// if (m_CachedNetworkManager.LogLevel == LogLevel.Developer)
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_15 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_LogLevel_15();
		if (L_16)
		{
			goto IL_00d4;
		}
	}
	{
		// var pos = new Vector3(newState.PositionX, newState.PositionY, newState.PositionZ);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_17 = ___newState1;
		float L_18 = L_17.get_PositionX_12();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_19 = ___newState1;
		float L_20 = L_19.get_PositionY_13();
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_21 = ___newState1;
		float L_22 = L_21.get_PositionZ_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), L_18, L_20, L_22, /*hidden argument*/NULL);
		// Debug.DrawLine(pos, pos + Vector3.up + Vector3.left * Random.Range(0.5f, 2f), Color.green, k_DebugDrawLineTime, false);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = L_23;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_24, L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		float L_28;
		L_28 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_29, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m5384A47F25E5B174ABA7D6A7A8726F2F17A5241F(L_24, L_30, L_31, (10.0f), (bool)0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Awake_m43903DCCB3BEEE6DE34670605B5DC9A941604A9E (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4B0B0F67727DF1673152853ECA5B390C548B36D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PositionXInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * L_0 = (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD(L_0, /*hidden argument*/NULL);
		__this->set_m_PositionXInterpolator_54(L_0);
		// m_PositionYInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * L_1 = (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD(L_1, /*hidden argument*/NULL);
		__this->set_m_PositionYInterpolator_55(L_1);
		// m_PositionZInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * L_2 = (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD(L_2, /*hidden argument*/NULL);
		__this->set_m_PositionZInterpolator_56(L_2);
		// m_RotationInterpolator = new BufferedLinearInterpolatorQuaternion(); // rotation is a single Quaternion since each euler axis will affect the quaternion's final value
		BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204 * L_3 = (BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorQuaternion_tAAF9FC540D264CCABACD25453A1B77CCE1939204_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorQuaternion__ctor_m2733946696DC8221436914CA6BC26EFAE68C0166(L_3, /*hidden argument*/NULL);
		__this->set_m_RotationInterpolator_57(L_3);
		// m_ScaleXInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * L_4 = (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD(L_4, /*hidden argument*/NULL);
		__this->set_m_ScaleXInterpolator_58(L_4);
		// m_ScaleYInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * L_5 = (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD(L_5, /*hidden argument*/NULL);
		__this->set_m_ScaleYInterpolator_59(L_5);
		// m_ScaleZInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 * L_6 = (BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42 *)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_tF47EDFE6AA8992FE7E659E196FD92434A26C9A42_il2cpp_TypeInfo_var);
		BufferedLinearInterpolatorFloat__ctor_m29CEB9F7C452AF1AEB9058EC0EEDD07A4EE74BDD(L_6, /*hidden argument*/NULL);
		__this->set_m_ScaleZInterpolator_60(L_6);
		// if (m_AllFloatInterpolators.Count == 0)
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_7 = __this->get_m_AllFloatInterpolators_61();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4B0B0F67727DF1673152853ECA5B390C548B36D3_inline(L_7, /*hidden argument*/List_1_get_Count_m4B0B0F67727DF1673152853ECA5B390C548B36D3_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00c0;
		}
	}
	{
		// m_AllFloatInterpolators.Add(m_PositionXInterpolator);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_9 = __this->get_m_AllFloatInterpolators_61();
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_10 = __this->get_m_PositionXInterpolator_54();
		NullCheck(L_9);
		List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E(L_9, L_10, /*hidden argument*/List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_PositionYInterpolator);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_11 = __this->get_m_AllFloatInterpolators_61();
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_12 = __this->get_m_PositionYInterpolator_55();
		NullCheck(L_11);
		List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E(L_11, L_12, /*hidden argument*/List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_PositionZInterpolator);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_13 = __this->get_m_AllFloatInterpolators_61();
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_14 = __this->get_m_PositionZInterpolator_56();
		NullCheck(L_13);
		List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E(L_13, L_14, /*hidden argument*/List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_ScaleXInterpolator);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_15 = __this->get_m_AllFloatInterpolators_61();
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_16 = __this->get_m_ScaleXInterpolator_58();
		NullCheck(L_15);
		List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E(L_15, L_16, /*hidden argument*/List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_ScaleYInterpolator);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_17 = __this->get_m_AllFloatInterpolators_61();
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_18 = __this->get_m_ScaleYInterpolator_59();
		NullCheck(L_17);
		List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E(L_17, L_18, /*hidden argument*/List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_ScaleZInterpolator);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_19 = __this->get_m_AllFloatInterpolators_61();
		BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_20 = __this->get_m_ScaleZInterpolator_60();
		NullCheck(L_19);
		List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E(L_19, L_20, /*hidden argument*/List_1_Add_m7B3DAB7EED793286F6A537DF21CDFF09FDCCCE1E_RuntimeMethod_var);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnNetworkSpawn_m7F7043E871E6F64D6696A44B03EE7C5CD9B9FD9F (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_OnNetworkStateChanged_m068D91DD465041EF0A04DEE6DBA54B9D99AB9CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Transform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_m_Transform_62(L_0);
		// m_ReplicatedNetworkState.OnValueChanged += OnNetworkStateChanged;
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_1 = __this->get_m_ReplicatedNetworkState_49();
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_2 = L_1;
		NullCheck(L_2);
		OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * L_3 = L_2->get_OnValueChanged_10();
		OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * L_4 = (OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A *)il2cpp_codegen_object_new(OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE(L_4, __this, (intptr_t)((intptr_t)NetworkTransform_OnNetworkStateChanged_m068D91DD465041EF0A04DEE6DBA54B9D99AB9CDF_RuntimeMethod_var), /*hidden argument*/OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_OnValueChanged_10(((OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A *)CastclassSealed((RuntimeObject*)L_5, OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var)));
		// CanCommitToTransform = IsServer;
		bool L_6;
		L_6 = NetworkBehaviour_get_IsServer_mD979A08F94C851D2BA1B915A6E1B78FFFB85D781_inline(__this, /*hidden argument*/NULL);
		NetworkTransform_set_CanCommitToTransform_m42E552D98628D7F818294C5FF4D01C79C59FC3CB_inline(__this, L_6, /*hidden argument*/NULL);
		// m_CachedIsServer = IsServer;
		bool L_7;
		L_7 = NetworkBehaviour_get_IsServer_mD979A08F94C851D2BA1B915A6E1B78FFFB85D781_inline(__this, /*hidden argument*/NULL);
		__this->set_m_CachedIsServer_47(L_7);
		// m_CachedNetworkManager = NetworkManager;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_8;
		L_8 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		__this->set_m_CachedNetworkManager_48(L_8);
		// if (CanCommitToTransform)
		bool L_9;
		L_9 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		// TryCommitTransformToServer(m_Transform, m_CachedNetworkManager.LocalTime.Time);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_m_Transform_62();
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_11 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_11);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_12;
		L_12 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		double L_13;
		L_13 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_0), /*hidden argument*/NULL);
		NetworkTransform_TryCommitTransformToServer_mF8E67C8B8D2E4FAB3E2DEBF662D0D47695EB36FD(__this, L_10, L_13, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// m_LocalAuthoritativeNetworkState = m_ReplicatedNetworkState.Value;
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_14 = __this->get_m_ReplicatedNetworkState_49();
		NullCheck(L_14);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_15;
		L_15 = VirtFuncInvoker0< NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  >::Invoke(13 /* !0 Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::get_Value() */, L_14);
		__this->set_m_LocalAuthoritativeNetworkState_50(L_15);
		// Initialize();
		NetworkTransform_Initialize_m997E32CBEC947E523B3A4B562ED7451D6E0BEEEC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnNetworkDespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnNetworkDespawn_m176CC95F0A8C8DE640970A04A4EE0719F04AB1FE (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_OnNetworkStateChanged_m068D91DD465041EF0A04DEE6DBA54B9D99AB9CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ReplicatedNetworkState.OnValueChanged -= OnNetworkStateChanged;
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_0 = __this->get_m_ReplicatedNetworkState_49();
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_1 = L_0;
		NullCheck(L_1);
		OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * L_2 = L_1->get_OnValueChanged_10();
		OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A * L_3 = (OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A *)il2cpp_codegen_object_new(OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE(L_3, __this, (intptr_t)((intptr_t)NetworkTransform_OnNetworkStateChanged_m068D91DD465041EF0A04DEE6DBA54B9D99AB9CDF_RuntimeMethod_var), /*hidden argument*/OnValueChangedDelegate__ctor_m4078C8D7E753AD3E39FE31DF3EB55E9FEEC560AE_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_OnValueChanged_10(((OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A *)CastclassSealed((RuntimeObject*)L_4, OnValueChangedDelegate_t07FEF31C5278FE0494BC8A4A1F0DB6067004A24A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnGainedOwnership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnGainedOwnership_m4743BC7BABF8EE95AE362CEC9538F974CDB85884 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	{
		// Initialize();
		NetworkTransform_Initialize_m997E32CBEC947E523B3A4B562ED7451D6E0BEEEC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnLostOwnership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnLostOwnership_m52348DD0AB77D6A491342767790A92749868AA52 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	{
		// Initialize();
		NetworkTransform_Initialize_m997E32CBEC947E523B3A4B562ED7451D6E0BEEEC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Initialize_m997E32CBEC947E523B3A4B562ED7451D6E0BEEEC (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetInterpolatedStateToCurrentAuthoritativeState(); // useful for late joining
		NetworkTransform_ResetInterpolatedStateToCurrentAuthoritativeState_mB426D48B3B20E134277217E5C3F0FC04DB875BB1(__this, /*hidden argument*/NULL);
		// if (CanCommitToTransform)
		bool L_0;
		L_0 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// m_ReplicatedNetworkState.SetDirty(true);
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_1 = __this->get_m_ReplicatedNetworkState_49();
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Unity.Netcode.NetworkVariableBase::SetDirty(System.Boolean) */, L_1, (bool)1);
		// }
		return;
	}

IL_001b:
	{
		// else if (m_Transform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_Transform_62();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// ApplyInterpolatedNetworkStateToTransform(m_ReplicatedNetworkState.Value, m_Transform);
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_4 = __this->get_m_ReplicatedNetworkState_49();
		NullCheck(L_4);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_5;
		L_5 = VirtFuncInvoker0< NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  >::Invoke(13 /* !0 Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::get_Value() */, L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_m_Transform_62();
		NetworkTransform_ApplyInterpolatedNetworkStateToTransform_mB7E71F658A04266B416B6020F93869232BE639C7(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::SetState(System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetState_mB927022ACDDB84AF08C44C00C2AD48D8B42C81BF (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___posIn0, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotIn1, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___scaleIn2, bool ___shouldGhostsInterpolate3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	{
		// if (!IsOwner)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsOwner_m6ED49E9AA5F58D31586A277CECF42991A56DD907_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("Trying to set a state on a not owned transform");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD71DEAB128B6EB84915F9EE4AE53F16C1449F651)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransform_SetState_mB927022ACDDB84AF08C44C00C2AD48D8B42C81BF_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (m_CachedNetworkManager && !(m_CachedNetworkManager.IsConnectedClient || m_CachedNetworkManager.IsListening))
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = __this->get_m_CachedNetworkManager_48();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_4 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkManager_get_IsConnectedClient_m9902EA62994D80B32607E73ACC886B52D823EBC4_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_6 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003b;
		}
	}
	{
		// return;
		return;
	}

IL_003b:
	{
		// Vector3 pos = posIn == null ? transform.position : (Vector3)posIn;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___posIn0), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___posIn0), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		G_B9_0 = L_9;
		goto IL_0058;
	}

IL_004d:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		G_B9_0 = L_11;
	}

IL_0058:
	{
		V_0 = G_B9_0;
		// Quaternion rot = rotIn == null ? transform.rotation : (Quaternion)rotIn;
		bool L_12;
		L_12 = Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_inline((Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 *)(&___rotIn1), /*hidden argument*/Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8((Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 *)(&___rotIn1), /*hidden argument*/Nullable_1_get_Value_m3E52E50BDF7EE831043EA6B69B3FF455EDDEF2C8_RuntimeMethod_var);
		G_B12_0 = L_13;
		goto IL_0076;
	}

IL_006b:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		G_B12_0 = L_15;
	}

IL_0076:
	{
		V_1 = G_B12_0;
		// Vector3 scale = scaleIn == null ? transform.localScale : (Vector3)scaleIn;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___scaleIn2), /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)(&___scaleIn2), /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		G_B15_0 = L_17;
		goto IL_0094;
	}

IL_0089:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_18, /*hidden argument*/NULL);
		G_B15_0 = L_19;
	}

IL_0094:
	{
		V_2 = G_B15_0;
		// if (!CanCommitToTransform)
		bool L_20;
		L_20 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b1;
		}
	}
	{
		// if (!m_CachedIsServer)
		bool L_21 = __this->get_m_CachedIsServer_47();
		if (L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// SetStateServerRpc(pos, rot, scale, shouldGhostsInterpolate);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_2;
		bool L_25 = ___shouldGhostsInterpolate3;
		NetworkTransform_SetStateServerRpc_mFB359D2E01C2CD26D75E842F19F326485307BE2E(__this, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b1:
	{
		// m_Transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_m_Transform_62();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_27, /*hidden argument*/NULL);
		// m_Transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = __this->get_m_Transform_62();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29 = V_1;
		NullCheck(L_28);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_28, L_29, /*hidden argument*/NULL);
		// m_Transform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_m_Transform_62();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_2;
		NullCheck(L_30);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_30, L_31, /*hidden argument*/NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = shouldGhostsInterpolate;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_32 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		bool L_33 = ___shouldGhostsInterpolate3;
		NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_32, L_33, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::SetStateServerRpc(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetStateServerRpc_mFB359D2E01C2CD26D75E842F19F326485307BE2E (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, bool ___shouldTeleport3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_0104;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_m04A60A96E9BA6E015156120822AEA2917AC62E31_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0104;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m3619480599CD440BF15F8746AFE254F63BA3032D_inline(__this, /*hidden argument*/NULL);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_10 = V_0;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m76F7307A2AB5EC4BE568C63DF041E0620386CD0C(L_10, /*hidden argument*/NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_LogLevel_15();
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_14 = V_2;
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_15;
		L_15 = NetworkBehaviour___beginSendServerRpc_m08B66FC1F04688DF4E2F946E375B578D13910F40(__this, ((int32_t)640767722), L_14, ((int32_t)0), /*hidden argument*/NULL);
		V_1 = L_15;
		FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___pos0), /*hidden argument*/FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_RuntimeMethod_var);
		FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___rot1), /*hidden argument*/FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_RuntimeMethod_var);
		FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___scale2), /*hidden argument*/FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_RuntimeMethod_var);
		FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), (bool*)(&___shouldTeleport3), /*hidden argument*/FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_RuntimeMethod_var);
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_16 = V_2;
		NetworkBehaviour___endSendServerRpc_mB1C1D0B3A96ECA21EFDF56A14EE45EFEB1B7E81E(__this, (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&V_1), ((int32_t)640767722), L_16, ((int32_t)0), /*hidden argument*/NULL);
	}

IL_0104:
	{
		int32_t L_17 = ((NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *)__this)->get___rpc_exec_stage_4();
		if (!((((int32_t)L_17) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_0133;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = NetworkManager_get_IsServer_mBA4BAF2CE1B5B1BA634DF06D17AE4FDE7FE19B81_inline(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0134;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = NetworkManager_get_IsHost_mE86F0FDA80EB3EE6A3EF79E455325ED1083FFDD2(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0134;
		}
	}

IL_0133:
	{
		return;
	}

IL_0134:
	{
		// if (OnClientRequestChange != null)
		OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * L_22 = __this->get_OnClientRequestChange_29();
		if (!L_22)
		{
			goto IL_0162;
		}
	}
	{
		// (pos, rot, scale) = OnClientRequestChange(pos, rot, scale);
		OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * L_23 = __this->get_OnClientRequestChange_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___pos0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = ___rot1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = ___scale2;
		NullCheck(L_23);
		ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  L_27;
		L_27 = OnClientRequestChangeDelegate_Invoke_mEFDBF658E3A1B0FED79B13E5FAC440F6081104F8(L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  L_28 = L_27;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28.get_Item1_0();
		___pos0 = L_29;
		ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  L_30 = L_28;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = L_30.get_Item2_1();
		___rot1 = L_31;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = L_30.get_Item3_2();
		___scale2 = L_32;
	}

IL_0162:
	{
		// m_Transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_m_Transform_62();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = ___pos0;
		NullCheck(L_33);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_34, /*hidden argument*/NULL);
		// m_Transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_m_Transform_62();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36 = ___rot1;
		NullCheck(L_35);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_35, L_36, /*hidden argument*/NULL);
		// m_Transform.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = __this->get_m_Transform_62();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = ___scale2;
		NullCheck(L_37);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_37, L_38, /*hidden argument*/NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = shouldTeleport;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_39 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		bool L_40 = ___shouldTeleport3;
		NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_39, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Update_mE850232F762A1C2D34E759A37418314B19DDDAC0 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	double V_5 = 0.0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (!IsSpawned)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsSpawned_m8AE7B53713FCD10AF6FCCAE6B1E0FAD521988A51_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!Interpolate && m_LastInterpolate)
		bool L_1 = __this->get_Interpolate_44();
		if (L_1)
		{
			goto IL_004c;
		}
	}
	{
		bool L_2 = __this->get_m_LastInterpolate_45();
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// foreach (var interpolator in m_AllFloatInterpolators)
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_3 = __this->get_m_AllFloatInterpolators_61();
		NullCheck(L_3);
		Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC  L_4;
		L_4 = List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F(L_3, /*hidden argument*/List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0027:
		{
			// foreach (var interpolator in m_AllFloatInterpolators)
			BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_5;
			L_5 = Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_inline((Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_RuntimeMethod_var);
			// interpolator.Clear();
			NullCheck(L_5);
			BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C(L_5, /*hidden argument*/BufferedLinearInterpolator_1_Clear_mBB061110A984730C5F5A4D045D55CF305795E41C_RuntimeMethod_var);
		}

IL_0033:
		{
			// foreach (var interpolator in m_AllFloatInterpolators)
			bool L_6;
			L_6 = Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272((Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0027;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5((Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// m_LastInterpolate = Interpolate;
		bool L_7 = __this->get_Interpolate_44();
		__this->set_m_LastInterpolate_45(L_7);
		// if (CanCommitToTransform)
		bool L_8;
		L_8 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0093;
		}
	}
	{
		// if (m_CachedIsServer)
		bool L_9 = __this->get_m_CachedIsServer_47();
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		// TryCommitTransformToServer(m_Transform, m_CachedNetworkManager.LocalTime.Time);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_m_Transform_62();
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_11 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_11);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_12;
		L_12 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		double L_13;
		L_13 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_1), /*hidden argument*/NULL);
		NetworkTransform_TryCommitTransformToServer_mF8E67C8B8D2E4FAB3E2DEBF662D0D47695EB36FD(__this, L_10, L_13, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// m_PrevNetworkState = m_LocalAuthoritativeNetworkState;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_14 = __this->get_m_LocalAuthoritativeNetworkState_50();
		__this->set_m_PrevNetworkState_51(L_14);
	}

IL_0093:
	{
		// if (m_CachedNetworkManager.IsConnectedClient || m_CachedNetworkManager.IsListening)
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_15 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_15);
		bool L_16;
		L_16 = NetworkManager_get_IsConnectedClient_m9902EA62994D80B32607E73ACC886B52D823EBC4_inline(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00b0;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_17 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_17);
		bool L_18;
		L_18 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_014e;
		}
	}

IL_00b0:
	{
		// var cachedDeltaTime = Time.deltaTime;
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = L_19;
		// var serverTime = NetworkManager.ServerTime;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_20;
		L_20 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_21;
		L_21 = NetworkManager_get_ServerTime_m7A89CC74F5C58A879E94F5C1A49EE8F1EBDDC502(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// var cachedServerTime = serverTime.Time;
		double L_22;
		L_22 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_22;
		// var cachedRenderTime = serverTime.TimeTicksAgo(1).Time;
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_23;
		L_23 = NetworkTime_TimeTicksAgo_m8DBFF515497CD2EF8A8C76362AD25FFCBF701C31((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_3), 1, /*hidden argument*/NULL);
		V_1 = L_23;
		double L_24;
		L_24 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_1), /*hidden argument*/NULL);
		V_5 = L_24;
		// if (Interpolate)
		bool L_25 = __this->get_Interpolate_44();
		if (!L_25)
		{
			goto IL_012f;
		}
	}
	{
		// foreach (var interpolator in m_AllFloatInterpolators)
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_26 = __this->get_m_AllFloatInterpolators_61();
		NullCheck(L_26);
		Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC  L_27;
		L_27 = List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F(L_26, /*hidden argument*/List_1_GetEnumerator_m13B6865BFC010034D79B9D9107C0E7FFDDA2F17F_RuntimeMethod_var);
		V_0 = L_27;
	}

IL_00f1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0105;
		}

IL_00f3:
		{
			// foreach (var interpolator in m_AllFloatInterpolators)
			BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * L_28;
			L_28 = Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_inline((Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9C46A4091D93DD2FA6E10464EBD3B87F6E98EC0E_RuntimeMethod_var);
			// interpolator.Update(cachedDeltaTime, cachedRenderTime, cachedServerTime);
			float L_29 = V_2;
			double L_30 = V_5;
			double L_31 = V_4;
			NullCheck(L_28);
			float L_32;
			L_32 = BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447(L_28, L_29, L_30, L_31, /*hidden argument*/BufferedLinearInterpolator_1_Update_m79F78B11020BC389703214DF54BFDB38BAFBB447_RuntimeMethod_var);
		}

IL_0105:
		{
			// foreach (var interpolator in m_AllFloatInterpolators)
			bool L_33;
			L_33 = Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272((Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m6AB3DB2092E57F36AF41FA0189B65B66CE648272_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_00f3;
			}
		}

IL_010e:
		{
			IL2CPP_LEAVE(0x11E, FINALLY_0110);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0110;
	}

FINALLY_0110:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5((Enumerator_tE428D96E2FAC6D7C4A78F4C96D97917BE9CB11BC *)(&V_0), /*hidden argument*/Enumerator_Dispose_m1C54D18D9498175207902B1C67F5BF7C96AC6DC5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(272)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(272)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11E, IL_011e)
	}

IL_011e:
	{
		// m_RotationInterpolator.Update(cachedDeltaTime, cachedRenderTime, cachedServerTime);
		BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * L_34 = __this->get_m_RotationInterpolator_57();
		float L_35 = V_2;
		double L_36 = V_5;
		double L_37 = V_4;
		NullCheck(L_34);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D(L_34, L_35, L_36, L_37, /*hidden argument*/BufferedLinearInterpolator_1_Update_mA6B41E05B01B74865936AD971E992F9D0CCA212D_RuntimeMethod_var);
	}

IL_012f:
	{
		// if (!CanCommitToTransform)
		bool L_39;
		L_39 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_014e;
		}
	}
	{
		// ApplyInterpolatedNetworkStateToTransform(m_ReplicatedNetworkState.Value, m_Transform);
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_40 = __this->get_m_ReplicatedNetworkState_49();
		NullCheck(L_40);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_41;
		L_41 = VirtFuncInvoker0< NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  >::Invoke(13 /* !0 Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::get_Value() */, L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_m_Transform_62();
		NetworkTransform_ApplyInterpolatedNetworkStateToTransform_mB7E71F658A04266B416B6020F93869232BE639C7(__this, L_41, L_42, /*hidden argument*/NULL);
	}

IL_014e:
	{
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = false;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_43 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_43, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Teleport(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Teleport_m7A5D6A2BEF96AA459E3C2BE8D2C92B51DA514683 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___newRotation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newScale2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!CanCommitToTransform)
		bool L_0;
		L_0 = NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("Teleport not allowed");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A29E47E81FADB27D64EF5255EF4CFCA1733DC0A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransform_Teleport_m7A5D6A2BEF96AA459E3C2BE8D2C92B51DA514683_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var newRotationEuler = newRotation.eulerAngles;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&___newRotation1), /*hidden argument*/NULL);
		V_0 = L_2;
		// var stateToSend = m_LocalAuthoritativeNetworkState;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_3 = __this->get_m_LocalAuthoritativeNetworkState_50();
		V_1 = L_3;
		// stateToSend.IsTeleportingNextFrame = true;
		NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		// stateToSend.Position = newPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___newPosition0;
		NetworkTransformState_set_Position_m6D49CE6D51D822F248A93900D761D0D16ED88694((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&V_1), L_4, /*hidden argument*/NULL);
		// stateToSend.Rotation = newRotationEuler;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		NetworkTransformState_set_Rotation_mC3266E64819783DB0AD36BFE65FB59BA90C61892((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&V_1), L_5, /*hidden argument*/NULL);
		// stateToSend.Scale = newScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___newScale2;
		NetworkTransformState_set_Scale_m3D2545B45FF98B9C9A4D0B1D3729DA57013C89DE((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&V_1), L_6, /*hidden argument*/NULL);
		// ApplyInterpolatedNetworkStateToTransform(stateToSend, transform);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_7 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NetworkTransform_ApplyInterpolatedNetworkStateToTransform_mB7E71F658A04266B416B6020F93869232BE639C7(__this, L_7, L_8, /*hidden argument*/NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = true;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_9 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_9, (bool)1, /*hidden argument*/NULL);
		// TryCommitValuesToServer(newPosition, newRotationEuler, newScale, m_CachedNetworkManager.LocalTime.Time);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___newPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___newScale2;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_13 = __this->get_m_CachedNetworkManager_48();
		NullCheck(L_13);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_14;
		L_14 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		double L_15;
		L_15 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_2), /*hidden argument*/NULL);
		NetworkTransform_TryCommitValuesToServer_m0DB485669C0E672AEB432DC3655289AD1BF027D9(__this, L_10, L_11, L_12, L_15, /*hidden argument*/NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = false;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * L_16 = __this->get_address_of_m_LocalAuthoritativeNetworkState_50();
		NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91((NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)L_16, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform__ctor_m0921273526AB8C7F307A4EC5097E24CD13054E28 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2C4275A9F1D93339486527E0109CCCA342B8EB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public bool SyncPositionX = true, SyncPositionY = true, SyncPositionZ = true;
		__this->set_SyncPositionX_30((bool)1);
		// public bool SyncPositionX = true, SyncPositionY = true, SyncPositionZ = true;
		__this->set_SyncPositionY_31((bool)1);
		// public bool SyncPositionX = true, SyncPositionY = true, SyncPositionZ = true;
		__this->set_SyncPositionZ_32((bool)1);
		// public bool SyncRotAngleX = true, SyncRotAngleY = true, SyncRotAngleZ = true;
		__this->set_SyncRotAngleX_33((bool)1);
		// public bool SyncRotAngleX = true, SyncRotAngleY = true, SyncRotAngleZ = true;
		__this->set_SyncRotAngleY_34((bool)1);
		// public bool SyncRotAngleX = true, SyncRotAngleY = true, SyncRotAngleZ = true;
		__this->set_SyncRotAngleZ_35((bool)1);
		// public bool SyncScaleX = true, SyncScaleY = true, SyncScaleZ = true;
		__this->set_SyncScaleX_36((bool)1);
		// public bool SyncScaleX = true, SyncScaleY = true, SyncScaleZ = true;
		__this->set_SyncScaleY_37((bool)1);
		// public bool SyncScaleX = true, SyncScaleY = true, SyncScaleZ = true;
		__this->set_SyncScaleZ_38((bool)1);
		// public float PositionThreshold = PositionThresholdDefault;
		__this->set_PositionThreshold_39((0.00100000005f));
		// public float RotAngleThreshold = RotAngleThresholdDefault;
		__this->set_RotAngleThreshold_40((0.00999999978f));
		// public float ScaleThreshold = ScaleThresholdDefault;
		__this->set_ScaleThreshold_41((0.00999999978f));
		// public bool Interpolate = true;
		__this->set_Interpolate_44((bool)1);
		// private bool m_LastInterpolate = true; // was the last frame interpolated
		__this->set_m_LastInterpolate_45((bool)1);
		// private readonly NetworkVariable<NetworkTransformState> m_ReplicatedNetworkState = new NetworkVariable<NetworkTransformState>(new NetworkTransformState());
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 ));
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_0 = V_0;
		NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 * L_1 = (NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05 *)il2cpp_codegen_object_new(NetworkVariable_1_tE152440A528805856B24CE5D64275E43A6C47E05_il2cpp_TypeInfo_var);
		NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6(L_1, L_0, 0, 0, /*hidden argument*/NetworkVariable_1__ctor_m117FBB933B1633181EBE7EA44A86BCCCEA292DF6_RuntimeMethod_var);
		__this->set_m_ReplicatedNetworkState_49(L_1);
		// private readonly List<BufferedLinearInterpolator<float>> m_AllFloatInterpolators = new List<BufferedLinearInterpolator<float>>(6);
		List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B * L_2 = (List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B *)il2cpp_codegen_object_new(List_1_t98DFD94403335BA85D94C959F5E0C28DEB91A17B_il2cpp_TypeInfo_var);
		List_1__ctor_mB2C4275A9F1D93339486527E0109CCCA342B8EB8(L_2, 6, /*hidden argument*/List_1__ctor_mB2C4275A9F1D93339486527E0109CCCA342B8EB8_RuntimeMethod_var);
		__this->set_m_AllFloatInterpolators_61(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_mF267A30FB25D35ED55E65C207EC9E44EDBC70FD1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::<TryCommit>g__Send|46_0(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_U3CTryCommitU3Eg__SendU7C46_0_m4C799AD0DEC285AAE514BB438D01BDEF7D9EA764 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  ___stateToSend0, const RuntimeMethod* method)
{
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_CachedIsServer)
		bool L_0 = __this->get_m_CachedIsServer_47();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// CommitLocallyAndReplicate(stateToSend);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_1 = ___stateToSend0;
		NetworkTransform_CommitLocallyAndReplicate_m6DC198D5A9A826FF5E119970DBC1F5B3D31EB024(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0010:
	{
		// CommitTransformServerRpc(stateToSend);
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_2 = ___stateToSend0;
		il2cpp_codegen_initobj((&V_0), sizeof(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09 ));
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_3 = V_0;
		NetworkTransform_CommitTransformServerRpc_m72F5625E7FCC3A3D25779BA1E569B602E6DC64D8(__this, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform__cctor_m40CF649FA843B74A40EC1E38138E40C4F8C00015 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform___rpc_handler_104221529_m6C2EBC9031E3887713EC89BA343BE12EC38CAF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform___rpc_handler_640767722_mBDBD2FABB4C588508134C46B50B5155946CC5480_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var);
		Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * L_0 = ((NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var))->get___rpc_func_table_4();
		RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * L_1 = (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 *)il2cpp_codegen_object_new(RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var);
		RpcReceiveHandler__ctor_m03B70FB2D763FACEB7FCA76AD8446403F7394121(L_1, NULL, (intptr_t)((intptr_t)NetworkTransform___rpc_handler_104221529_m6C2EBC9031E3887713EC89BA343BE12EC38CAF73_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0(L_0, ((int32_t)104221529), L_1, /*hidden argument*/Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var);
		Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * L_2 = ((NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var))->get___rpc_func_table_4();
		RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * L_3 = (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 *)il2cpp_codegen_object_new(RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188_il2cpp_TypeInfo_var);
		RpcReceiveHandler__ctor_m03B70FB2D763FACEB7FCA76AD8446403F7394121(L_3, NULL, (intptr_t)((intptr_t)NetworkTransform___rpc_handler_640767722_mBDBD2FABB4C588508134C46B50B5155946CC5480_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0(L_2, ((int32_t)640767722), L_3, /*hidden argument*/Dictionary_2_Add_mB3DA0A872B3C6FBB292494321505C45B3102DBA0_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::__rpc_handler_104221529(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform___rpc_handler_104221529_m6C2EBC9031E3887713EC89BA343BE12EC38CAF73 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___target0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  ___rpcParams2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *)(&V_1), /*hidden argument*/FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450_m19D33E98065B6933ADBF0EB35A58C5C0A011FC15_RuntimeMethod_var);
		__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  L_5 = ___rpcParams2;
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_6 = L_5.get_Server_0();
		V_2 = L_6;
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_7 = ___target0;
		NullCheck(L_7);
		L_7->set___rpc_exec_stage_4(((int32_t)1));
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_8 = ___target0;
		NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450  L_9 = V_1;
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_10 = V_2;
		NullCheck(((NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 *)CastclassClass((RuntimeObject*)L_8, NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var)));
		NetworkTransform_CommitTransformServerRpc_m72F5625E7FCC3A3D25779BA1E569B602E6DC64D8(((NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 *)CastclassClass((RuntimeObject*)L_8, NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var)), L_9, L_10, /*hidden argument*/NULL);
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_11 = ___target0;
		NullCheck(L_11);
		L_11->set___rpc_exec_stage_4(((int32_t)0));
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::__rpc_handler_640767722(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform___rpc_handler_640767722_mBDBD2FABB4C588508134C46B50B5155946CC5480 (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___target0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  ___rpcParams2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_0 = ___target0;
		NullCheck(L_0);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1;
		L_1 = NetworkBehaviour_get_NetworkManager_m64857964FD37E7246FC39968CC61D7B0A30D3EB4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  L_5 = ___rpcParams2;
		ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  L_6 = L_5.get_Server_0();
		ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  L_7 = L_6.get_Receive_1();
		uint64_t L_8 = L_7.get_SenderClientId_0();
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_9 = ___target0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = NetworkBehaviour_get_OwnerClientId_m3619480599CD440BF15F8746AFE254F63BA3032D_inline(L_9, /*hidden argument*/NULL);
		if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006f;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_LogLevel_15();
		if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}

IL_006f:
	{
		FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_RuntimeMethod_var);
		FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_2), /*hidden argument*/FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_RuntimeMethod_var);
		FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_RuntimeMethod_var);
		FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader1), (bool*)(&V_4), /*hidden argument*/FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_RuntimeMethod_var);
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_13 = ___target0;
		NullCheck(L_13);
		L_13->set___rpc_exec_stage_4(((int32_t)1));
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_14 = ___target0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_3;
		bool L_18 = V_4;
		NullCheck(((NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 *)CastclassClass((RuntimeObject*)L_14, NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var)));
		NetworkTransform_SetStateServerRpc_mFB359D2E01C2CD26D75E842F19F326485307BE2E(((NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 *)CastclassClass((RuntimeObject*)L_14, NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426_il2cpp_TypeInfo_var)), L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * L_19 = ___target0;
		NullCheck(L_19);
		L_19->set___rpc_exec_stage_4(((int32_t)0));
		return;
	}
}
// System.String Unity.Netcode.Components.NetworkTransform::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkTransform___getTypeName_m9B81388899D8C9B30DCC215287BBE5C54888B852 (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC4C0AC7F2622E832E85C05D64A1F859A076611);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDAC4C0AC7F2622E832E85C05D64A1F859A076611;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshal_pinvoke(const AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597& unmarshaled, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_pinvoke& marshaled)
{
	marshaled.___StateHash_0 = unmarshaled.get_StateHash_0();
	marshaled.___NormalizedTime_1 = unmarshaled.get_NormalizedTime_1();
	marshaled.___Layer_2 = unmarshaled.get_Layer_2();
	marshaled.___Weight_3 = unmarshaled.get_Weight_3();
	marshaled.___Parameters_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_Parameters_4());
}
IL2CPP_EXTERN_C void AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshal_pinvoke_back(const AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_pinvoke& marshaled, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_StateHash_temp_0 = 0;
	unmarshaled_StateHash_temp_0 = marshaled.___StateHash_0;
	unmarshaled.set_StateHash_0(unmarshaled_StateHash_temp_0);
	float unmarshaled_NormalizedTime_temp_1 = 0.0f;
	unmarshaled_NormalizedTime_temp_1 = marshaled.___NormalizedTime_1;
	unmarshaled.set_NormalizedTime_1(unmarshaled_NormalizedTime_temp_1);
	int32_t unmarshaled_Layer_temp_2 = 0;
	unmarshaled_Layer_temp_2 = marshaled.___Layer_2;
	unmarshaled.set_Layer_2(unmarshaled_Layer_temp_2);
	float unmarshaled_Weight_temp_3 = 0.0f;
	unmarshaled_Weight_temp_3 = marshaled.___Weight_3;
	unmarshaled.set_Weight_3(unmarshaled_Weight_temp_3);
	unmarshaled.set_Parameters_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___Parameters_4));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshal_pinvoke_cleanup(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Parameters_4);
	marshaled.___Parameters_4 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshal_com(const AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597& unmarshaled, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_com& marshaled)
{
	marshaled.___StateHash_0 = unmarshaled.get_StateHash_0();
	marshaled.___NormalizedTime_1 = unmarshaled.get_NormalizedTime_1();
	marshaled.___Layer_2 = unmarshaled.get_Layer_2();
	marshaled.___Weight_3 = unmarshaled.get_Weight_3();
	marshaled.___Parameters_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_Parameters_4());
}
IL2CPP_EXTERN_C void AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshal_com_back(const AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_com& marshaled, AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_StateHash_temp_0 = 0;
	unmarshaled_StateHash_temp_0 = marshaled.___StateHash_0;
	unmarshaled.set_StateHash_0(unmarshaled_StateHash_temp_0);
	float unmarshaled_NormalizedTime_temp_1 = 0.0f;
	unmarshaled_NormalizedTime_temp_1 = marshaled.___NormalizedTime_1;
	unmarshaled.set_NormalizedTime_1(unmarshaled_NormalizedTime_temp_1);
	int32_t unmarshaled_Layer_temp_2 = 0;
	unmarshaled_Layer_temp_2 = marshaled.___Layer_2;
	unmarshaled.set_Layer_2(unmarshaled_Layer_temp_2);
	float unmarshaled_Weight_temp_3 = 0.0f;
	unmarshaled_Weight_temp_3 = marshaled.___Weight_3;
	unmarshaled.set_Weight_3(unmarshaled_Weight_temp_3);
	unmarshaled.set_Parameters_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___Parameters_4));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshal_com_cleanup(AnimationMessage_tEBE0D12CF41CA0B1DC4C779768026D7B29C06597_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Parameters_4);
	marshaled.___Parameters_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationParamEnumWrapper__cctor_m30A3868E54C5A33F61C753A3A60B48770DA2A25D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimatorControllerParameterInt = UnsafeUtility.EnumToInt(AnimatorControllerParameterType.Int);
		int32_t L_0;
		L_0 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2(3, /*hidden argument*/UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var);
		((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->set_AnimatorControllerParameterInt_0(L_0);
		// AnimatorControllerParameterFloat = UnsafeUtility.EnumToInt(AnimatorControllerParameterType.Float);
		int32_t L_1;
		L_1 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2(1, /*hidden argument*/UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var);
		((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->set_AnimatorControllerParameterFloat_1(L_1);
		// AnimatorControllerParameterBool = UnsafeUtility.EnumToInt(AnimatorControllerParameterType.Bool);
		int32_t L_2;
		L_2 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2(4, /*hidden argument*/UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE_m1D4B6B03EC198D0A83DBAA63703266FCD3DB99F2_RuntimeMethod_var);
		((AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_tBA5094D10AA8D5C209BB15F2F6AF01085CFF87A8_il2cpp_TypeInfo_var))->set_AnimatorControllerParameterBool_2(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshal_pinvoke(const AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7& unmarshaled, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_pinvoke& marshaled)
{
	marshaled.___Hash_0 = unmarshaled.get_Hash_0();
	marshaled.___Reset_1 = static_cast<int32_t>(unmarshaled.get_Reset_1());
}
IL2CPP_EXTERN_C void AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshal_pinvoke_back(const AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_pinvoke& marshaled, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7& unmarshaled)
{
	int32_t unmarshaled_Hash_temp_0 = 0;
	unmarshaled_Hash_temp_0 = marshaled.___Hash_0;
	unmarshaled.set_Hash_0(unmarshaled_Hash_temp_0);
	bool unmarshaled_Reset_temp_1 = false;
	unmarshaled_Reset_temp_1 = static_cast<bool>(marshaled.___Reset_1);
	unmarshaled.set_Reset_1(unmarshaled_Reset_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshal_pinvoke_cleanup(AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshal_com(const AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7& unmarshaled, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_com& marshaled)
{
	marshaled.___Hash_0 = unmarshaled.get_Hash_0();
	marshaled.___Reset_1 = static_cast<int32_t>(unmarshaled.get_Reset_1());
}
IL2CPP_EXTERN_C void AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshal_com_back(const AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_com& marshaled, AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7& unmarshaled)
{
	int32_t unmarshaled_Hash_temp_0 = 0;
	unmarshaled_Hash_temp_0 = marshaled.___Hash_0;
	unmarshaled.set_Hash_0(unmarshaled_Hash_temp_0);
	bool unmarshaled_Reset_temp_1 = false;
	unmarshaled_Reset_temp_1 = static_cast<bool>(marshaled.___Reset_1);
	unmarshaled.set_Reset_1(unmarshaled_Reset_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshal_com_cleanup(AnimationTriggerMessage_tD07884005B7B279974756CF15D55C05EA1D431F7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_InLocalSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_InLocalSpaceBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_InLocalSpace_m3AF9D9AB34415384F9109EBE77E89B8DA4D40511(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_InLocalSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_InLocalSpace_mF973D00C4A5E3CC203B6D22BC173F424B736A7D9 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_InLocalSpaceBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_InLocalSpaceBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)1)))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_InLocalSpaceBit)); }
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_InLocalSpaceBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_InLocalSpace_mF973D00C4A5E3CC203B6D22BC173F424B736A7D9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_InLocalSpace_mF973D00C4A5E3CC203B6D22BC173F424B736A7D9(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionX_m9C6FE08916A16EBAF8EBDE6CD6569393D5DC0445 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_PositionXBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasPositionX_m9C6FE08916A16EBAF8EBDE6CD6569393D5DC0445_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasPositionX_m9C6FE08916A16EBAF8EBDE6CD6569393D5DC0445(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionX_m240F2C27547F74F422A288FE3BA992F93283694C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionXBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionXBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)2)))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionXBit)); }
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_PositionXBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasPositionX_m240F2C27547F74F422A288FE3BA992F93283694C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasPositionX_m240F2C27547F74F422A288FE3BA992F93283694C(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionY_m0C744222BC3DBF0B31409710295E92F29086416C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_PositionYBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasPositionY_m0C744222BC3DBF0B31409710295E92F29086416C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasPositionY_m0C744222BC3DBF0B31409710295E92F29086416C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionY_m586C5B62153D0E8BB91508AC3654FAF9CE3E55C5 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionYBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionYBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)4)))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionYBit)); }
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_PositionYBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasPositionY_m586C5B62153D0E8BB91508AC3654FAF9CE3E55C5_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasPositionY_m586C5B62153D0E8BB91508AC3654FAF9CE3E55C5(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionZ_mA34324A2D4EAE14B069BFF5A10573C99902D8E1C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_PositionZBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasPositionZ_mA34324A2D4EAE14B069BFF5A10573C99902D8E1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasPositionZ_mA34324A2D4EAE14B069BFF5A10573C99902D8E1C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionZ_m563CB6103A575B4D0D9C50349F073C18210A1E66 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionZBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionZBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)8)))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionZBit)); }
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_PositionZBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-9))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasPositionZ_m563CB6103A575B4D0D9C50349F073C18210A1E66_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasPositionZ_m563CB6103A575B4D0D9C50349F073C18210A1E66(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleX_m2532ABF7120513A264C60DE4C2FDAB82A057DC20 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_RotAngleXBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasRotAngleX_m2532ABF7120513A264C60DE4C2FDAB82A057DC20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasRotAngleX_m2532ABF7120513A264C60DE4C2FDAB82A057DC20(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleX_m16B08D2F6DD4098C8505C6D3AB4773A139E02D64 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleXBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleXBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)16))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleXBit)); }
		return;
	}

IL_0014:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_RotAngleXBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-17))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasRotAngleX_m16B08D2F6DD4098C8505C6D3AB4773A139E02D64_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasRotAngleX_m16B08D2F6DD4098C8505C6D3AB4773A139E02D64(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleY_m16AF1BE8B3E18074851A361406D631A096A3AFFB (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_RotAngleYBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasRotAngleY_m16AF1BE8B3E18074851A361406D631A096A3AFFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasRotAngleY_m16AF1BE8B3E18074851A361406D631A096A3AFFB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleY_m1575AE73DAD31FE7FFEDB990E3B8C40FC8FB529C (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleYBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleYBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)32))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleYBit)); }
		return;
	}

IL_0014:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_RotAngleYBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-33))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasRotAngleY_m1575AE73DAD31FE7FFEDB990E3B8C40FC8FB529C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasRotAngleY_m1575AE73DAD31FE7FFEDB990E3B8C40FC8FB529C(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleZ_m138176B2D6517F29D0923548C0051B72E1E0B1AD (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_RotAngleZBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasRotAngleZ_m138176B2D6517F29D0923548C0051B72E1E0B1AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasRotAngleZ_m138176B2D6517F29D0923548C0051B72E1E0B1AD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleZ_m6E99C6BB328984E99B4AB2D0B656C5EF96A9FB22 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleZBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleZBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)64))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleZBit)); }
		return;
	}

IL_0014:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_RotAngleZBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-65))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasRotAngleZ_m6E99C6BB328984E99B4AB2D0B656C5EF96A9FB22_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasRotAngleZ_m6E99C6BB328984E99B4AB2D0B656C5EF96A9FB22(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleX_m4D9FE027AD3DF34AA1B8E3DC4305ACA2CA13366B (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_ScaleXBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasScaleX_m4D9FE027AD3DF34AA1B8E3DC4305ACA2CA13366B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasScaleX_m4D9FE027AD3DF34AA1B8E3DC4305ACA2CA13366B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleX_mC44EB0B2C829B3A8D361A9273364E35A5EF18CDA (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleXBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleXBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)128))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleXBit)); }
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_ScaleXBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-129))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasScaleX_mC44EB0B2C829B3A8D361A9273364E35A5EF18CDA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasScaleX_mC44EB0B2C829B3A8D361A9273364E35A5EF18CDA(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleY_m03DA2AB93E3B0CAAFE500E5D030DB4801B9412EE (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_ScaleYBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)256)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasScaleY_m03DA2AB93E3B0CAAFE500E5D030DB4801B9412EE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasScaleY_m03DA2AB93E3B0CAAFE500E5D030DB4801B9412EE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleY_m892DFCB1EDC16BB21B1C0A327E6B0FF2421AA6E9 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleYBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleYBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)256))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleYBit)); }
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_ScaleYBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-257))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasScaleY_m892DFCB1EDC16BB21B1C0A327E6B0FF2421AA6E9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasScaleY_m892DFCB1EDC16BB21B1C0A327E6B0FF2421AA6E9(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleZ_mF11F81778CA6BA17C658AF6D4F80AC0D900B4BF8 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_ScaleZBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)512)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasScaleZ_mF11F81778CA6BA17C658AF6D4F80AC0D900B4BF8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasScaleZ_mF11F81778CA6BA17C658AF6D4F80AC0D900B4BF8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleZ_m71C40ED9D74943E7683551DAC21CCCD1DA308BA2 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleZBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleZBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)512))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleZBit)); }
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_ScaleZBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-513))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasScaleZ_m71C40ED9D74943E7683551DAC21CCCD1DA308BA2_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_HasScaleZ_m71C40ED9D74943E7683551DAC21CCCD1DA308BA2(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_IsTeleportingNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get => (m_Bitset & (1 << k_TeleportingBit)) != 0;
		uint16_t L_0 = __this->get_m_Bitset_11();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)1024)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_IsTeleportingNextFrame_m64398AF0338290AB00D33081AE87CE54BE26E66A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_IsTeleportingNextFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_TeleportingBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_TeleportingBit)); }
		uint16_t L_1 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)1024))))));
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_TeleportingBit)); }
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_TeleportingBit)); }
		uint16_t L_2 = __this->get_m_Bitset_11();
		__this->set_m_Bitset_11((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-1025))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_IsTeleportingNextFrame_mFAAB3CCDDDB5E160D106D29871D66B83A26B3C91(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get { return new Vector3(PositionX, PositionY, PositionZ); }
		float L_0 = __this->get_PositionX_12();
		float L_1 = __this->get_PositionY_13();
		float L_2 = __this->get_PositionZ_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = NetworkTransformState_get_Position_m4D553009CB9A44CEAF47CAE5ADC50AE4EE8153FC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Position_m6D49CE6D51D822F248A93900D761D0D16ED88694 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// PositionX = value.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		__this->set_PositionX_12(L_1);
		// PositionY = value.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___value0;
		float L_3 = L_2.get_y_3();
		__this->set_PositionY_13(L_3);
		// PositionZ = value.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_z_4();
		__this->set_PositionZ_14(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_Position_m6D49CE6D51D822F248A93900D761D0D16ED88694_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_Position_m6D49CE6D51D822F248A93900D761D0D16ED88694(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get { return new Vector3(RotAngleX, RotAngleY, RotAngleZ); }
		float L_0 = __this->get_RotAngleX_15();
		float L_1 = __this->get_RotAngleY_16();
		float L_2 = __this->get_RotAngleZ_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = NetworkTransformState_get_Rotation_mE647E0B45F89CAA12F44F1A127C1FDFC416BD109(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Rotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Rotation_mC3266E64819783DB0AD36BFE65FB59BA90C61892 (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// RotAngleX = value.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		__this->set_RotAngleX_15(L_1);
		// RotAngleY = value.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___value0;
		float L_3 = L_2.get_y_3();
		__this->set_RotAngleY_16(L_3);
		// RotAngleZ = value.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_z_4();
		__this->set_RotAngleZ_17(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_Rotation_mC3266E64819783DB0AD36BFE65FB59BA90C61892_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_Rotation_mC3266E64819783DB0AD36BFE65FB59BA90C61892(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, const RuntimeMethod* method)
{
	{
		// get { return new Vector3(ScaleX, ScaleY, ScaleZ); }
		float L_0 = __this->get_ScaleX_18();
		float L_1 = __this->get_ScaleY_19();
		float L_2 = __this->get_ScaleZ_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = NetworkTransformState_get_Scale_mDE0571357D81E3CAA7C04BF72C2507A2FAEBD11A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Scale_m3D2545B45FF98B9C9A4D0B1D3729DA57013C89DE (NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// ScaleX = value.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		__this->set_ScaleX_18(L_1);
		// ScaleY = value.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___value0;
		float L_3 = L_2.get_y_3();
		__this->set_ScaleY_19(L_3);
		// ScaleZ = value.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_z_4();
		__this->set_ScaleZ_20(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_Scale_m3D2545B45FF98B9C9A4D0B1D3729DA57013C89DE_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 * _thisAdjusted = reinterpret_cast<NetworkTransformState_t5E5B3096904C3D32F847BE5CBB4CD8E6DB347450 *>(__this + _offset);
	NetworkTransformState_set_Scale_m3D2545B45FF98B9C9A4D0B1D3729DA57013C89DE(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClientRequestChangeDelegate__ctor_m7C3DDE9F00C1F772EB36D20EAB6A3E96E8A24C5B (OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3> Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  OnClientRequestChangeDelegate_Invoke_mEFDBF658E3A1B0FED79B13E5FAC440F6081104F8 (OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, const RuntimeMethod* method)
{
	ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pos0, ___rot1, ___scale2, targetMethod);
			}
			else
			{
				// closed
				typedef ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pos0, ___rot1, ___scale2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___pos0, ___rot1, ___scale2);
					else
						result = GenericVirtFuncInvoker3< ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___pos0, ___rot1, ___scale2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pos0, ___rot1, ___scale2);
					else
						result = VirtFuncInvoker3< ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pos0, ___rot1, ___scale2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  (*FunctionPointerType) (RuntimeObject*, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___pos0) - 1), ___rot1, ___scale2, targetMethod);
				}
				else
				{
					typedef ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pos0, ___rot1, ___scale2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClientRequestChangeDelegate_BeginInvoke_m64E54FC1D111C193113BF5387023707338CF454C (OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___pos0);
	__d_args[1] = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &___rot1);
	__d_args[2] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___scale2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3> Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9  OnClientRequestChangeDelegate_EndInvoke_m68843D4745C79EA22370A74CCAD88BDD95C84440 (OnClientRequestChangeDelegate_t544A2725B28F29A3876915817E26F91AE75FDEB9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(ValueTuple_3_t9D6E647C7F90F9E93C2784BD00343768891522F9 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsServer_mD979A08F94C851D2BA1B915A6E1B78FFFB85D781_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method)
{
	{
		// protected bool IsServer { get; private set; }
		bool L_0 = __this->get_U3CIsServerU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mD2BD94CCA9C50AED0B099F7D10A7E2529AADCCDD_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___where0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// where = Math.Min(where, Handle->Capacity);
		int32_t L_0 = ___where0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_1 = __this->get_Handle_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_Capacity_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_0, L_2, /*hidden argument*/NULL);
		___where0 = L_3;
		// if (Handle->Position > Handle->Length && where < Handle->Position)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_4 = __this->get_Handle_0();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Position_1();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = __this->get_Handle_0();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Length_2();
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = ___where0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_9 = __this->get_Handle_0();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Position_1();
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		// Handle->Length = Handle->Position;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_11 = __this->get_Handle_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = __this->get_Handle_0();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_Position_1();
		NullCheck(L_11);
		L_11->set_Length_2(L_13);
	}

IL_004f:
	{
		// Handle->Position = where;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_14 = __this->get_Handle_0();
		int32_t L_15 = ___where0;
		NullCheck(L_14);
		L_14->set_Position_1(L_15);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m3376BE3BBB25AC8998E40625730D17177913E39D_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___where0, const RuntimeMethod* method)
{
	{
		// if (where == -1)
		int32_t L_0 = ___where0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		// where = Position;
		int32_t L_1;
		L_1 = FastBufferWriter_get_Position_m75E89423C5D2462392B0C3D55CDE4BC18C2A0B06_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, /*hidden argument*/NULL);
		___where0 = L_1;
	}

IL_000c:
	{
		// if (Handle->Position > where)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_2 = __this->get_Handle_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Position_1();
		int32_t L_4 = ___where0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		// Handle->Position = where;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = __this->get_Handle_0();
		int32_t L_6 = ___where0;
		NullCheck(L_5);
		L_5->set_Position_1(L_6);
	}

IL_0026:
	{
		// if (Handle->Length > where)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_7 = __this->get_Handle_0();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_Length_2();
		int32_t L_9 = ___where0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0040;
		}
	}
	{
		// Handle->Length = where;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_10 = __this->get_Handle_0();
		int32_t L_11 = ___where0;
		NullCheck(L_10);
		L_10->set_Length_2(L_11);
	}

IL_0040:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FastBufferWriter_ToArray_m20A12CE89DE19E17D9F4D3281D535E9187283999_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B2_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B1_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_7 = __this->get_Handle_0();
		NullCheck(L_7);
		uint8_t* L_8 = L_7->get_BufferPointer_0();
		int32_t L_9;
		L_9 = FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, /*hidden argument*/NULL);
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_6, (void*)(void*)L_8, ((int64_t)((int64_t)L_9)), /*hidden argument*/NULL);
		V_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BytePacker_WriteValuePacked_mDF41C1526BCDFC3F60DB71E4E89A758E01B8625E_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, uint32_t ___value1, const RuntimeMethod* method)
{
	{
		// public static void WriteValuePacked(FastBufferWriter writer, uint value) => WriteUInt32Packed(writer, value);
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_0 = ___writer0;
		uint32_t L_1 = ___value1;
		BytePacker_WriteUInt32Packed_m2C6B55119C7107B1AFE249B45E86C1981471ABAC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteUnpacker_ReadValuePacked_mCF3C24E3831072F5A1DA5286AA0FB103CAD67F99_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, int32_t* ___value1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// ReadUInt32Packed(reader, out uint readValue);
		FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  L_0 = ___reader0;
		ByteUnpacker_ReadUInt32Packed_m45A5E8334A96F24AC8EB0560BE9E410AA7506ECD(L_0, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		// value = (int)Arithmetic.ZigZagDecode(readValue);
		int32_t* L_1 = ___value1;
		uint32_t L_2 = V_0;
		int64_t L_3;
		L_3 = Arithmetic_ZigZagDecode_mE91448DB440858A2F9B3F9320CC442FDC949DB6B(((int64_t)((uint64_t)L_2)), /*hidden argument*/NULL);
		*((int32_t*)L_1) = (int32_t)((int32_t)((int32_t)L_3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m5812E734F038F06E7C8B8B035BE0016B3C50C76A_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsListening { get; internal set; }
		bool L_0 = __this->get_U3CIsListeningU3Ek__BackingField_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_mBA4BAF2CE1B5B1BA634DF06D17AE4FDE7FE19B81_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->get_U3CIsServerU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_m04A60A96E9BA6E015156120822AEA2917AC62E31_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsClient { get; internal set; }
		bool L_0 = __this->get_U3CIsClientU3Ek__BackingField_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_mC495A812B6B4C3BCD7B9454A8F7E4950B287B67B_inline (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, const RuntimeMethod* method)
{
	{
		// public int Tick => m_CachedTick;
		int32_t L_0 = __this->get_m_CachedTick_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, const RuntimeMethod* method)
{
	{
		// public double Time => m_TimeSec;
		double L_0 = __this->get_m_TimeSec_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m3619480599CD440BF15F8746AFE254F63BA3032D_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method)
{
	{
		// public ulong OwnerClientId { get; internal set; }
		uint64_t L_0 = __this->get_U3COwnerClientIdU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObject_get_IsSpawned_m9EF4684B1493578362820A96247850ECD141FC77_inline (NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSpawned { get; internal set; }
		bool L_0 = __this->get_U3CIsSpawnedU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkTransform_get_CanCommitToTransform_m9A48B1A25C673BB3F161583DB687CEB994066F55_inline (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanCommitToTransform { get; protected set; }
		bool L_0 = __this->get_U3CCanCommitToTransformU3Ek__BackingField_46();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTransform_set_CanCommitToTransform_m42E552D98628D7F818294C5FF4D01C79C59FC3CB_inline (NetworkTransform_t9282BC5CAC868CBE120D5B5D6DEB50EC00C5C426 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CanCommitToTransform { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CCanCommitToTransformU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m6ED49E9AA5F58D31586A277CECF42991A56DD907_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsOwner { get; internal set; }
		bool L_0 = __this->get_U3CIsOwnerU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsConnectedClient_m9902EA62994D80B32607E73ACC886B52D823EBC4_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsConnectedClient { get; internal set; }
		bool L_0 = __this->get_U3CIsConnectedClientU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsSpawned_m8AE7B53713FCD10AF6FCCAE6B1E0FAD521988A51_inline (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsSpawned { get; internal set; }
		bool L_0 = __this->get_U3CIsSpawnedU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, bool* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool* V_1 = NULL;
	bool* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(bool);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m5C672D784BB692E43699DDDBC6C334F6757CE8C1_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool* L_4 = ___value0;
		V_2 = (bool*)L_4;
		// fixed (T* ptr = &value)
		bool* L_5 = V_2;
		V_1 = (bool*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		bool* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (void*)(void*)L_10, (int64_t)((int64_t)((int64_t)L_11)), /*hidden argument*/NULL);
		V_2 = (bool*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)L_12->get_address_of_Position_1();
		int32_t* L_14 = (int32_t*)L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, float* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float* V_1 = NULL;
	float* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(float);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mA20541CEF3F1244811C8A34FA30D32D8BEED77ED_RuntimeMethod_var)));
	}

IL_001b:
	{
		float* L_4 = ___value0;
		V_2 = (float*)L_4;
		// fixed (T* ptr = &value)
		float* L_5 = V_2;
		V_1 = (float*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		float* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (void*)(void*)L_10, (int64_t)((int64_t)((int64_t)L_11)), /*hidden argument*/NULL);
		V_2 = (float*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)L_12->get_address_of_Position_1();
		int32_t* L_14 = (int32_t*)L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, bool* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(bool);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0D95A09941F2AF3CBAEB5CE525D9011E3FF87678_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool* L_4 = ___value0;
		V_1 = (bool*)L_4;
		// fixed (T* ptr = &value)
		bool* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_6 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_5), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (int64_t)((int64_t)((int64_t)L_10)), /*hidden argument*/NULL);
		V_1 = (bool*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_11 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)L_11->get_address_of_Position_1();
		int32_t* L_13 = (int32_t*)L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, float* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(float);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mC920D639F773FE08754C1B9D9CCFC5AACDA235CA_RuntimeMethod_var)));
	}

IL_001b:
	{
		float* L_4 = ___value0;
		V_1 = (float*)L_4;
		// fixed (T* ptr = &value)
		float* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_6 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_5), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (int64_t)((int64_t)((int64_t)L_10)), /*hidden argument*/NULL);
		V_1 = (float*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_11 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)L_11->get_address_of_Position_1();
		int32_t* L_13 = (int32_t*)L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedLinearInterpolator_1_GetInterpolatedValue_mD7DAC196E2D1C18C400318E4D5344FF9483F2FF7_gshared_inline (BufferedLinearInterpolator_1_tBE56A775F72B70BF367D0559FA8D1BA948A55FB1 * __this, const RuntimeMethod* method)
{
	{
		// return m_CurrentInterpValue;
		float L_0 = (float)__this->get_m_CurrentInterpValue_2();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BufferedLinearInterpolator_1_GetInterpolatedValue_m4D635A4345DE39468A621BD881A9C569071DE6A5_gshared_inline (BufferedLinearInterpolator_1_t7FDCFA7A5174337B993824296EF2004B768D9A02 * __this, const RuntimeMethod* method)
{
	{
		// return m_CurrentInterpValue;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )__this->get_m_CurrentInterpValue_2();
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDAA5F84DAA9409FD895729634F77999D90EC9A4C_gshared_inline (Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m1F05E6338FE88BC7B1D6604DB28BF41906C2D23F_RuntimeMethod_var)));
	}

IL_001b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___value0;
		V_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4;
		// fixed (T* ptr = &value)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = V_2;
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (void*)(void*)L_10, (int64_t)((int64_t)((int64_t)L_11)), /*hidden argument*/NULL);
		V_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)L_12->get_address_of_Position_1();
		int32_t* L_14 = (int32_t*)L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * V_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m3586EF65F9ABA0C1A547AC007FCCDAA35255275B_RuntimeMethod_var)));
	}

IL_001b:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_4 = ___value0;
		V_2 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_4;
		// fixed (T* ptr = &value)
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = V_2;
		V_1 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (void*)(void*)L_10, (int64_t)((int64_t)((int64_t)L_11)), /*hidden argument*/NULL);
		V_2 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)L_12->get_address_of_Position_1();
		int32_t* L_14 = (int32_t*)L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m23F0BA9E4AE3AA5DEA57F270E7B3B0F10215E90C_RuntimeMethod_var)));
	}

IL_001b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___value0;
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4;
		// fixed (T* ptr = &value)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_6 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_5), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (int64_t)((int64_t)((int64_t)L_10)), /*hidden argument*/NULL);
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_11 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)L_11->get_address_of_Position_1();
		int32_t* L_13 = (int32_t*)L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mBE4EEE02F65286D2D7D5D99929A8BDC2B8BA5B3D_RuntimeMethod_var)));
	}

IL_001b:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_4 = ___value0;
		V_1 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_4;
		// fixed (T* ptr = &value)
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_6 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_5), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (int64_t)((int64_t)((int64_t)L_10)), /*hidden argument*/NULL);
		V_1 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_11 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)L_11->get_address_of_Position_1();
		int32_t* L_13 = (int32_t*)L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m75E89423C5D2462392B0C3D55CDE4BC18C2A0B06_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method)
{
	{
		// get => Handle->Position;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method)
{
	{
		// get => Handle->Position > Handle->Length ? Handle->Position : Handle->Length;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_2 = __this->get_Handle_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Length_2();
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_4 = __this->get_Handle_0();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Length_2();
		return L_5;
	}

IL_0024:
	{
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = __this->get_Handle_0();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Position_1();
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		int32_t L_2 = ___bytes0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Capacity_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = __this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Position_1();
		int32_t L_7 = ___bytes0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = __this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_MaxCapacity_4();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_10 = __this->get_Handle_0();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_Capacity_3();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = __this->get_Handle_0();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_MaxCapacity_4();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_mBBFF2DB791E8BBC5A732DC63351724CBE84AA9AC((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		int32_t L_2 = ___bytes0;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Length_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
