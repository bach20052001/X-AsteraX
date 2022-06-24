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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>
struct Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>
struct Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>
struct Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Func_2_tBB7E6D91370C8619C0935A25EB1654111E876BCF;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Collections.Generic.IEqualityComparer`1<Firebase.Auth.FirebaseAuth>
struct IEqualityComparer_1_tDE59FE6007A4DF0D93B2C9A66B4BC9A4D234735A;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.Dictionary`2/KeyCollection<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>
struct KeyCollection_t1C0AD8B5847863667296DFF3BB7AD4C30AA75165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.IntPtr>
struct KeyCollection_t7B979BF18A36727108F4CBEDE8592EE5776D719E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct KeyCollection_t4F91029C47995F2DEFDE9A6C457FB31F26E850DF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>
struct KeyCollection_t7DC20854BF12F6F0B9BFCC5C2A75EFC8CA7C4FB1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct KeyCollection_t8129AD5A6C11E6453F62A3D54803557CA22AE829;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Firebase.Auth.FirebaseUser>
struct TaskFactory_1_t160F7EF58F7D6D5343949360BB46B3E625DD9437;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>
struct ValueCollection_t3A1E5626346B8B9DFD3982053E50F2C2376E833D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.IntPtr>
struct ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Auth.Future_User/Action>
struct ValueCollection_t765EBCC29BA8749122F120F6AC45570734B41F64;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>
struct ValueCollection_t27AF6D167E5FA316E7529BEC6F090F9A6B11F9D0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct ValueCollection_t2F950F8332FCAAEA47378CAE9FF9BA83ECB7A340;
// System.Collections.Generic.Dictionary`2/Entry<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>[]
struct EntryU5BU5D_tB93CC88D9280E7318A101D434B5A7C4A008DBCE9;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.IntPtr>[]
struct EntryU5BU5D_t119DE0A8B44A184ADCAB96046FA72ED14AD9C510;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Auth.Future_User/Action>[]
struct EntryU5BU5D_t00085EF78575EBD3246A162D79090E91058ACC4A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>[]
struct EntryU5BU5D_t27D9C378B01B804146F93C0C54607B2CB05DB9CB;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,Firebase.Auth.FirebaseAuth>[]
struct EntryU5BU5D_tACBC72A755F394113C526420E6308FE34BDD2CCB;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Auth.Credential
struct Credential_tE9C53256D21EB157C9B4F97351173344083241C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0;
// Firebase.Auth.ForceResendingToken
struct ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.Auth.Future_User
struct Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.MethodAccessException
struct MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// Firebase.Auth.PhoneAuthProvider
struct PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3;
// Firebase.Auth.PhoneAuthProviderInternal
struct PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368;
// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D;
// Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5;
// Firebase.Auth.Future_User/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6;
// Firebase.Auth.Future_User/Action
struct Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450;
// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686;
// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594;
// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB;
// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82;
// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394;
// Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut
struct CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441;
// Firebase.Auth.PhoneAuthProvider/CodeSent
struct CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62;
// Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates
struct PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D;
// Firebase.Auth.PhoneAuthProvider/VerificationCompleted
struct VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720;
// Firebase.Auth.PhoneAuthProvider/VerificationFailed
struct VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C;
// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate
struct CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56;
// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate
struct TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222;
// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate
struct VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6;
// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate
struct VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Credential_tE9C53256D21EB157C9B4F97351173344083241C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralFDABCE729268A676A97D9D1EC324478A8E03CD75;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF7794D0D3D424B5A625009ED7C4F144A596889FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4BB5C7A8777DAAAB4306FA1CB4C5C9D8B222DDC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateAuthStateListener_m5D3D93DE9892F6A6B5EA3C25DFFA20A5CB735BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_CreateIdTokenListener_mB628BD86F89F3C9B9143F1BBD6778B0455E6DF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyAuthStateListener_mE3EA7192771F9DDB124D38987D6B8826BD626BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthUtil_DestroyIdTokenListener_m91711705C4AFFAD2D1D32FBD3CC7CEB86A64305E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m89F7EAA925E8B1FCE09FFC33B899A19CC6A3BD83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9973F600F805F49379A9C365611EFB4FB4C0AD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mCEA6BC7623C4A1BA2A573F1432600C582A8126AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m024DBC01D8532732F02031EB2CC56121F256C48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0F68A723CB89DD21993EB3C2876E0F151C067796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m945EEF736BB3B7C594DE968C34B4EDE9CD393D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1E71D8819E4ECB7B3FB43954E0436C79D617E0B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m306EFC8D74490C055030A2CA2B2351A948B76947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA2B5325ECE3ABEC43FC14FF9FF855CD50D53B891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDEF936F70B269990802A1B577AC973427F07F40E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8EBEAE6A994FF237F89E2BA0840BD716EDA4FA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD20BAA0188D10720EB2DB64971BC276A2D31034C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE0000EFFC79D042FC491DC280847005C58EA8FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_GetAuthInternal_mBF11B5BF490AA96AB4207E582498CD6F64569727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_LogHeartbeatInternal_m4C0CD7B379B1229A8F3BF609CC775CC81C2F60D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_OnAppDisposed_m8168DE1D2900DE7CAF23A4B9F5E8D329AE52A2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ReleaseReferenceInternal_mB490E787E92AE01D0D2ED35B264E9F1FD5D76139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_SignInWithCredentialInternalAsync_mC71CB159D75D92180D11F9BD4BFD031F3693841F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_ThrowIfNull_m159C26085D4233394B0753FFEE3814F78B4EDC5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAuth_get_CurrentUserInternal_mB792BA9E27A67C769D02190FC052F58C27C0AAAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_get_PhoneNumber_m79CD5016DAD0DEC3049E5A8E75BBF5169CDEDC35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseUser_get_ProviderId_m1601FD518AAFA30F11ACAE29F6C899C4FAE29082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_GetResult_mC377EDE6BFC43F7A5F87A6BB3492547A345A614F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_FreeCompletionData_mB483D431EE2D51344C72D759C3851F6F3A9F9C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_SWIG_OnCompletion_m4F87387C003E314EA41944E4C028B3CA2D86B4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_User_ThrowIfDisposed_m09A3C21C9FDCE199CB7D1CD56C9E9540619F0E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProviderInternal_DestroyListenerImplInternal_mD78DEACD485D47657D99C436B76124FCD3BE2D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProviderInternal_Dispose_m637389BEB9989AE7A1DBEB1DC704AD0C95FDA2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProviderInternal_GetCredential_m5FBB8AB8F20679BA899E6ADA4496395C81AE71EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProviderInternal_GetInstance_m59674004BD90A667C8E53D39D3DBF20A6B2A6416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProviderInternal_SetCallbacks_mA45D605D6DB7630316AF456F43DD7F8709D65A2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m3C7DA2CDE3D5F8DDC646D39DA0552E5E8B82C7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSourceCompat_1_SetException_m08699E46E4B72BFA5D27AAA9DA37064ADDD74A17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m24045BAC07B2A7E3DB6C963C6882823955998038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m7DD70EBD08B64DEA7D6CB44BFFF85400D2956800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__24_0_m88B524DF71B7296719E4EBE0D7B3DF6D2DDE3581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStateChangedFunctionU3Eb__23_0_mB7180C7ECE81DFE300395D6A478C535CBA2D1145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CVerificationCompletedHandlerU3Eb__0_m5B2CF72144EB09F561A89AF169B9823F929C7FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CVerificationFailedHandlerU3Eb__0_mACD07B1DB54562472F910C3F10605994357BA731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCodeSentHandlerU3Eb__0_m4E6E7246B0D981D5050D9FC83902D5DDE027EB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CTimeOutHandlerU3Eb__0_mC311EE5476139BE9D5A87A405BC834A89378846A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_1_U3CGetAuthU3Eb__0_mA406FECDE947BF25735463A01E1E96FA3C1D086D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_1_U3CForwardStateChangeU3Eb__0_m4F901DBA8E2674E89877A286ACF4ECBC1C7B68F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass48_0_U3CSignInWithCredentialAsyncU3Eb__0_mCA4A8712E8862D090E294E187C3020AE37A6D7A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m0B54B10D1CE2F9D66BE34A6FB0790950D2221FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t05EE128E9E0C91B3D43EE47549F8BED31195B20C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>
struct Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB93CC88D9280E7318A101D434B5A7C4A008DBCE9* ___entries_1;
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
	KeyCollection_t1C0AD8B5847863667296DFF3BB7AD4C30AA75165 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3A1E5626346B8B9DFD3982053E50F2C2376E833D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___entries_1)); }
	inline EntryU5BU5D_tB93CC88D9280E7318A101D434B5A7C4A008DBCE9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB93CC88D9280E7318A101D434B5A7C4A008DBCE9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB93CC88D9280E7318A101D434B5A7C4A008DBCE9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___keys_7)); }
	inline KeyCollection_t1C0AD8B5847863667296DFF3BB7AD4C30AA75165 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1C0AD8B5847863667296DFF3BB7AD4C30AA75165 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1C0AD8B5847863667296DFF3BB7AD4C30AA75165 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ___values_8)); }
	inline ValueCollection_t3A1E5626346B8B9DFD3982053E50F2C2376E833D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3A1E5626346B8B9DFD3982053E50F2C2376E833D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3A1E5626346B8B9DFD3982053E50F2C2376E833D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>
struct Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t119DE0A8B44A184ADCAB96046FA72ED14AD9C510* ___entries_1;
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
	KeyCollection_t7B979BF18A36727108F4CBEDE8592EE5776D719E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___entries_1)); }
	inline EntryU5BU5D_t119DE0A8B44A184ADCAB96046FA72ED14AD9C510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t119DE0A8B44A184ADCAB96046FA72ED14AD9C510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t119DE0A8B44A184ADCAB96046FA72ED14AD9C510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___keys_7)); }
	inline KeyCollection_t7B979BF18A36727108F4CBEDE8592EE5776D719E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7B979BF18A36727108F4CBEDE8592EE5776D719E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7B979BF18A36727108F4CBEDE8592EE5776D719E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ___values_8)); }
	inline ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t00085EF78575EBD3246A162D79090E91058ACC4A* ___entries_1;
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
	KeyCollection_t4F91029C47995F2DEFDE9A6C457FB31F26E850DF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t765EBCC29BA8749122F120F6AC45570734B41F64 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___entries_1)); }
	inline EntryU5BU5D_t00085EF78575EBD3246A162D79090E91058ACC4A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t00085EF78575EBD3246A162D79090E91058ACC4A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t00085EF78575EBD3246A162D79090E91058ACC4A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___keys_7)); }
	inline KeyCollection_t4F91029C47995F2DEFDE9A6C457FB31F26E850DF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4F91029C47995F2DEFDE9A6C457FB31F26E850DF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4F91029C47995F2DEFDE9A6C457FB31F26E850DF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ___values_8)); }
	inline ValueCollection_t765EBCC29BA8749122F120F6AC45570734B41F64 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t765EBCC29BA8749122F120F6AC45570734B41F64 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t765EBCC29BA8749122F120F6AC45570734B41F64 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>
struct Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t27D9C378B01B804146F93C0C54607B2CB05DB9CB* ___entries_1;
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
	KeyCollection_t7DC20854BF12F6F0B9BFCC5C2A75EFC8CA7C4FB1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t27AF6D167E5FA316E7529BEC6F090F9A6B11F9D0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___entries_1)); }
	inline EntryU5BU5D_t27D9C378B01B804146F93C0C54607B2CB05DB9CB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t27D9C378B01B804146F93C0C54607B2CB05DB9CB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t27D9C378B01B804146F93C0C54607B2CB05DB9CB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___keys_7)); }
	inline KeyCollection_t7DC20854BF12F6F0B9BFCC5C2A75EFC8CA7C4FB1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7DC20854BF12F6F0B9BFCC5C2A75EFC8CA7C4FB1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7DC20854BF12F6F0B9BFCC5C2A75EFC8CA7C4FB1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ___values_8)); }
	inline ValueCollection_t27AF6D167E5FA316E7529BEC6F090F9A6B11F9D0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t27AF6D167E5FA316E7529BEC6F090F9A6B11F9D0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t27AF6D167E5FA316E7529BEC6F090F9A6B11F9D0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tACBC72A755F394113C526420E6308FE34BDD2CCB* ___entries_1;
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
	KeyCollection_t8129AD5A6C11E6453F62A3D54803557CA22AE829 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2F950F8332FCAAEA47378CAE9FF9BA83ECB7A340 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___entries_1)); }
	inline EntryU5BU5D_tACBC72A755F394113C526420E6308FE34BDD2CCB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tACBC72A755F394113C526420E6308FE34BDD2CCB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tACBC72A755F394113C526420E6308FE34BDD2CCB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___keys_7)); }
	inline KeyCollection_t8129AD5A6C11E6453F62A3D54803557CA22AE829 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8129AD5A6C11E6453F62A3D54803557CA22AE829 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8129AD5A6C11E6453F62A3D54803557CA22AE829 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ___values_8)); }
	inline ValueCollection_t2F950F8332FCAAEA47378CAE9FF9BA83ECB7A340 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2F950F8332FCAAEA47378CAE9FF9BA83ECB7A340 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2F950F8332FCAAEA47378CAE9FF9BA83ECB7A340 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C, ___m_task_0)); }
	inline Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.IntPtr>
struct ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019, ___dictionary_0)); }
	inline Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Firebase.Auth.AuthUtil
struct AuthUtil_t1BBAF1C6A5216251415853389D16267A9BC3B649  : public RuntimeObject
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE
struct AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF  : public RuntimeObject
{
public:

public:
};

struct AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper Firebase.Auth.AuthUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E * ___swigExceptionHelper_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper Firebase.Auth.AuthUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Firebase.Auth.PhoneAuthProvider
struct PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr> Firebase.Auth.PhoneAuthProvider::cppListeners
	Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * ___cppListeners_2;
	// Firebase.Auth.PhoneAuthProviderInternal Firebase.Auth.PhoneAuthProvider::InternalProvider
	PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * ___InternalProvider_8;

public:
	inline static int32_t get_offset_of_cppListeners_2() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3, ___cppListeners_2)); }
	inline Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * get_cppListeners_2() const { return ___cppListeners_2; }
	inline Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C ** get_address_of_cppListeners_2() { return &___cppListeners_2; }
	inline void set_cppListeners_2(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * value)
	{
		___cppListeners_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cppListeners_2), (void*)value);
	}

	inline static int32_t get_offset_of_InternalProvider_8() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3, ___InternalProvider_8)); }
	inline PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * get_InternalProvider_8() const { return ___InternalProvider_8; }
	inline PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B ** get_address_of_InternalProvider_8() { return &___InternalProvider_8; }
	inline void set_InternalProvider_8(PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * value)
	{
		___InternalProvider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalProvider_8), (void*)value);
	}
};

struct PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields
{
public:
	// System.Int32 Firebase.Auth.PhoneAuthProvider::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates> Firebase.Auth.PhoneAuthProvider::authCallbacks
	Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * ___authCallbacks_1;
	// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate Firebase.Auth.PhoneAuthProvider::verificationCompletedDelegate
	VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * ___verificationCompletedDelegate_3;
	// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate Firebase.Auth.PhoneAuthProvider::verificationFailedDelegate
	VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * ___verificationFailedDelegate_4;
	// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate Firebase.Auth.PhoneAuthProvider::codeSentDelegate
	CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * ___codeSentDelegate_5;
	// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate Firebase.Auth.PhoneAuthProvider::timeOutDelegate
	TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * ___timeOutDelegate_6;
	// System.Boolean Firebase.Auth.PhoneAuthProvider::callbacksInitialized
	bool ___callbacksInitialized_7;
	// System.Collections.Generic.Dictionary`2<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider> Firebase.Auth.PhoneAuthProvider::CachedProviders
	Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * ___CachedProviders_9;

public:
	inline static int32_t get_offset_of_uidGenerator_0() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___uidGenerator_0)); }
	inline int32_t get_uidGenerator_0() const { return ___uidGenerator_0; }
	inline int32_t* get_address_of_uidGenerator_0() { return &___uidGenerator_0; }
	inline void set_uidGenerator_0(int32_t value)
	{
		___uidGenerator_0 = value;
	}

	inline static int32_t get_offset_of_authCallbacks_1() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___authCallbacks_1)); }
	inline Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * get_authCallbacks_1() const { return ___authCallbacks_1; }
	inline Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 ** get_address_of_authCallbacks_1() { return &___authCallbacks_1; }
	inline void set_authCallbacks_1(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * value)
	{
		___authCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authCallbacks_1), (void*)value);
	}

	inline static int32_t get_offset_of_verificationCompletedDelegate_3() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___verificationCompletedDelegate_3)); }
	inline VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * get_verificationCompletedDelegate_3() const { return ___verificationCompletedDelegate_3; }
	inline VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 ** get_address_of_verificationCompletedDelegate_3() { return &___verificationCompletedDelegate_3; }
	inline void set_verificationCompletedDelegate_3(VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * value)
	{
		___verificationCompletedDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verificationCompletedDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_verificationFailedDelegate_4() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___verificationFailedDelegate_4)); }
	inline VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * get_verificationFailedDelegate_4() const { return ___verificationFailedDelegate_4; }
	inline VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 ** get_address_of_verificationFailedDelegate_4() { return &___verificationFailedDelegate_4; }
	inline void set_verificationFailedDelegate_4(VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * value)
	{
		___verificationFailedDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verificationFailedDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_codeSentDelegate_5() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___codeSentDelegate_5)); }
	inline CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * get_codeSentDelegate_5() const { return ___codeSentDelegate_5; }
	inline CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 ** get_address_of_codeSentDelegate_5() { return &___codeSentDelegate_5; }
	inline void set_codeSentDelegate_5(CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * value)
	{
		___codeSentDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeSentDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeOutDelegate_6() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___timeOutDelegate_6)); }
	inline TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * get_timeOutDelegate_6() const { return ___timeOutDelegate_6; }
	inline TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 ** get_address_of_timeOutDelegate_6() { return &___timeOutDelegate_6; }
	inline void set_timeOutDelegate_6(TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * value)
	{
		___timeOutDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeOutDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_callbacksInitialized_7() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___callbacksInitialized_7)); }
	inline bool get_callbacksInitialized_7() const { return ___callbacksInitialized_7; }
	inline bool* get_address_of_callbacksInitialized_7() { return &___callbacksInitialized_7; }
	inline void set_callbacksInitialized_7(bool value)
	{
		___callbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_CachedProviders_9() { return static_cast<int32_t>(offsetof(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields, ___CachedProviders_9)); }
	inline Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * get_CachedProviders_9() const { return ___CachedProviders_9; }
	inline Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 ** get_address_of_CachedProviders_9() { return &___CachedProviders_9; }
	inline void set_CachedProviders_9(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * value)
	{
		___CachedProviders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CachedProviders_9), (void*)value);
	}
};


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

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___applicationDelegate_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___arithmeticDelegate_1;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___divideByZeroDelegate_2;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___indexOutOfRangeDelegate_3;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___invalidCastDelegate_4;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___invalidOperationDelegate_5;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___ioDelegate_6;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___nullReferenceDelegate_7;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___outOfMemoryDelegate_8;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___overflowDelegate_9;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___systemDelegate_10;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentDelegate_11;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentNullDelegate_12;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields
{
public:
	// System.Int32 Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject * ___exceptionsLock_2;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}

	inline static int32_t get_offset_of_exceptionsLock_2() { return static_cast<int32_t>(offsetof(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields, ___exceptionsLock_2)); }
	inline RuntimeObject * get_exceptionsLock_2() const { return ___exceptionsLock_2; }
	inline RuntimeObject ** get_address_of_exceptionsLock_2() { return &___exceptionsLock_2; }
	inline void set_exceptionsLock_2(RuntimeObject * value)
	{
		___exceptionsLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionsLock_2), (void*)value);
	}
};

struct SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields
{
public:
	// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<>c
struct U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields
{
public:
	// Firebase.Auth.FirebaseAuth/<>c Firebase.Auth.FirebaseAuth/<>c::<>9
	U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * ___U3CU3E9_0;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c::<>9__23_0
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * ___U3CU3E9__23_0_1;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c::<>9__24_0
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * ___U3CU3E9__24_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields, ___U3CU3E9__24_0_2)); }
	inline Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * get_U3CU3E9__24_0_2() const { return ___U3CU3E9__24_0_2; }
	inline Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 ** get_address_of_U3CU3E9__24_0_2() { return &___U3CU3E9__24_0_2; }
	inline void set_U3CU3E9__24_0_2(Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * value)
	{
		___U3CU3E9__24_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_2), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0::auth
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth_0;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0::app
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app_1;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4, ___auth_0)); }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * get_auth_0() const { return ___auth_0; }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_0), (void*)value);
	}

	inline static int32_t get_offset_of_app_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4, ___app_1)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_app_1() const { return ___app_1; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_app_1() { return &___app_1; }
	inline void set_app_1(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___app_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7  : public RuntimeObject
{
public:
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_0::stateChangeClosure
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * ___stateChangeClosure_0;

public:
	inline static int32_t get_offset_of_stateChangeClosure_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7, ___stateChangeClosure_0)); }
	inline Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * get_stateChangeClosure_0() const { return ___stateChangeClosure_0; }
	inline Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 ** get_address_of_stateChangeClosure_0() { return &___stateChangeClosure_0; }
	inline void set_stateChangeClosure_0(Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * value)
	{
		___stateChangeClosure_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangeClosure_0), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1::auth
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth_0;
	// Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_0 Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D, ___auth_0)); }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * get_auth_0() const { return ___auth_0; }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___auth_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::<>4__this
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::taskCompletionSource
	TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * ___taskCompletionSource_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5, ___U3CU3E4__this_0)); }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_taskCompletionSource_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5, ___taskCompletionSource_1)); }
	inline TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * get_taskCompletionSource_1() const { return ___taskCompletionSource_1; }
	inline TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C ** get_address_of_taskCompletionSource_1() { return &___taskCompletionSource_1; }
	inline void set_taskCompletionSource_1(TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * value)
	{
		___taskCompletionSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taskCompletionSource_1), (void*)value);
	}
};


// Firebase.Auth.Future_User/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6  : public RuntimeObject
{
public:
	// Firebase.Auth.Future_User Firebase.Auth.Future_User/<>c__DisplayClass4_0::fu
	Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User/<>c__DisplayClass4_0::tcs
	TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6, ___fu_0)); }
	inline Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * get_fu_0() const { return ___fu_0; }
	inline Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6, ___tcs_1)); }
	inline TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0::callbackId
	int32_t ___callbackId_0;
	// System.String Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0::error
	String_t* ___error_1;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}
};


// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0::callbackId
	int32_t ___callbackId_0;
	// System.String Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0::verificationId
	String_t* ___verificationId_1;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_verificationId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394, ___verificationId_1)); }
	inline String_t* get_verificationId_1() const { return ___verificationId_1; }
	inline String_t** get_address_of_verificationId_1() { return &___verificationId_1; }
	inline void set_verificationId_1(String_t* value)
	{
		___verificationId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verificationId_1), (void*)value);
	}
};


// Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates
struct PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D  : public RuntimeObject
{
public:
	// Firebase.Auth.PhoneAuthProvider/VerificationCompleted Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates::verificationCompleted
	VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * ___verificationCompleted_0;
	// Firebase.Auth.PhoneAuthProvider/VerificationFailed Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates::verificationFailed
	VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * ___verificationFailed_1;
	// Firebase.Auth.PhoneAuthProvider/CodeSent Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates::codeSent
	CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * ___codeSent_2;
	// Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates::timeOut
	CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * ___timeOut_3;

public:
	inline static int32_t get_offset_of_verificationCompleted_0() { return static_cast<int32_t>(offsetof(PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D, ___verificationCompleted_0)); }
	inline VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * get_verificationCompleted_0() const { return ___verificationCompleted_0; }
	inline VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 ** get_address_of_verificationCompleted_0() { return &___verificationCompleted_0; }
	inline void set_verificationCompleted_0(VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * value)
	{
		___verificationCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verificationCompleted_0), (void*)value);
	}

	inline static int32_t get_offset_of_verificationFailed_1() { return static_cast<int32_t>(offsetof(PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D, ___verificationFailed_1)); }
	inline VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * get_verificationFailed_1() const { return ___verificationFailed_1; }
	inline VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C ** get_address_of_verificationFailed_1() { return &___verificationFailed_1; }
	inline void set_verificationFailed_1(VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * value)
	{
		___verificationFailed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verificationFailed_1), (void*)value);
	}

	inline static int32_t get_offset_of_codeSent_2() { return static_cast<int32_t>(offsetof(PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D, ___codeSent_2)); }
	inline CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * get_codeSent_2() const { return ___codeSent_2; }
	inline CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 ** get_address_of_codeSent_2() { return &___codeSent_2; }
	inline void set_codeSent_2(CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * value)
	{
		___codeSent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codeSent_2), (void*)value);
	}

	inline static int32_t get_offset_of_timeOut_3() { return static_cast<int32_t>(offsetof(PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D, ___timeOut_3)); }
	inline CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * get_timeOut_3() const { return ___timeOut_3; }
	inline CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 ** get_address_of_timeOut_3() { return &___timeOut_3; }
	inline void set_timeOut_3(CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * value)
	{
		___timeOut_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeOut_3), (void*)value);
	}
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


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>
struct Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	intptr_t ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877, ___dictionary_0)); }
	inline Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877, ___currentValue_3)); }
	inline intptr_t get_currentValue_3() const { return ___currentValue_3; }
	inline intptr_t* get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(intptr_t value)
	{
		___currentValue_3 = value;
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

// Firebase.FutureStatus
struct FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// Firebase.InitResult
struct InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0::credential
	intptr_t ___credential_0;
	// System.Int32 Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594, ___credential_0)); }
	inline intptr_t get_credential_0() const { return ___credential_0; }
	inline intptr_t* get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(intptr_t value)
	{
		___credential_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0::token
	intptr_t ___token_0;
	// System.Int32 Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0::callbackId
	int32_t ___callbackId_1;
	// System.String Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0::verificationId
	String_t* ___verificationId_2;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82, ___token_0)); }
	inline intptr_t get_token_0() const { return ___token_0; }
	inline intptr_t* get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(intptr_t value)
	{
		___token_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}

	inline static int32_t get_offset_of_verificationId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82, ___verificationId_2)); }
	inline String_t* get_verificationId_2() const { return ___verificationId_2; }
	inline String_t** get_address_of_verificationId_2() { return &___verificationId_2; }
	inline void set_verificationId_2(String_t* value)
	{
		___verificationId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verificationId_2), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C, ___m_result_22)); }
	inline FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * get_m_result_22() const { return ___m_result_22; }
	inline FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t160F7EF58F7D6D5343949360BB46B3E625DD9437 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tBB7E6D91370C8619C0935A25EB1654111E876BCF * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t160F7EF58F7D6D5343949360BB46B3E625DD9437 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t160F7EF58F7D6D5343949360BB46B3E625DD9437 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t160F7EF58F7D6D5343949360BB46B3E625DD9437 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tBB7E6D91370C8619C0935A25EB1654111E876BCF * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tBB7E6D91370C8619C0935A25EB1654111E876BCF ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tBB7E6D91370C8619C0935A25EB1654111E876BCF * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Firebase.Auth.Credential
struct Credential_tE9C53256D21EB157C9B4F97351173344083241C2  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Credential_tE9C53256D21EB157C9B4F97351173344083241C2, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Credential_tE9C53256D21EB157C9B4F97351173344083241C2, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}
};


// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___appProxy_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appProxy_2), (void*)value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___appCPtr_3)); }
	inline intptr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline intptr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(intptr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_authStateListener_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___authStateListener_4)); }
	inline intptr_t get_authStateListener_4() const { return ___authStateListener_4; }
	inline intptr_t* get_address_of_authStateListener_4() { return &___authStateListener_4; }
	inline void set_authStateListener_4(intptr_t value)
	{
		___authStateListener_4 = value;
	}

	inline static int32_t get_offset_of_idTokenListener_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___idTokenListener_5)); }
	inline intptr_t get_idTokenListener_5() const { return ___idTokenListener_5; }
	inline intptr_t* get_address_of_idTokenListener_5() { return &___idTokenListener_5; }
	inline void set_idTokenListener_5(intptr_t value)
	{
		___idTokenListener_5 = value;
	}

	inline static int32_t get_offset_of_currentUser_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___currentUser_6)); }
	inline FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * get_currentUser_6() const { return ___currentUser_6; }
	inline FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 ** get_address_of_currentUser_6() { return &___currentUser_6; }
	inline void set_currentUser_6(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * value)
	{
		___currentUser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUser_6), (void*)value);
	}

	inline static int32_t get_offset_of_stateChangedImpl_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___stateChangedImpl_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_stateChangedImpl_7() const { return ___stateChangedImpl_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_stateChangedImpl_7() { return &___stateChangedImpl_7; }
	inline void set_stateChangedImpl_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___stateChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangedImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_idTokenChangedImpl_8() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___idTokenChangedImpl_8)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_idTokenChangedImpl_8() const { return ___idTokenChangedImpl_8; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_idTokenChangedImpl_8() { return &___idTokenChangedImpl_8; }
	inline void set_idTokenChangedImpl_8(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___idTokenChangedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idTokenChangedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_persistentLoaded_9() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B, ___persistentLoaded_9)); }
	inline bool get_persistentLoaded_9() const { return ___persistentLoaded_9; }
	inline bool* get_address_of_persistentLoaded_9() { return &___persistentLoaded_9; }
	inline void set_persistentLoaded_9(bool value)
	{
		___persistentLoaded_9 = value;
	}
};

struct FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * ___appCPtrToAuth_10;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_10() { return static_cast<int32_t>(offsetof(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields, ___appCPtrToAuth_10)); }
	inline Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * get_appCPtrToAuth_10() const { return ___appCPtrToAuth_10; }
	inline Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 ** get_address_of_appCPtrToAuth_10() { return &___appCPtrToAuth_10; }
	inline void set_appCPtrToAuth_10(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * value)
	{
		___appCPtrToAuth_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appCPtrToAuth_10), (void*)value);
	}
};


// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.Auth.ForceResendingToken
struct ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.ForceResendingToken::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.ForceResendingToken::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.InitializationException
struct InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75  : public Exception_t
{
public:
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CInitResultU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75, ___U3CInitResultU3Ek__BackingField_17)); }
	inline int32_t get_U3CInitResultU3Ek__BackingField_17() const { return ___U3CInitResultU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CInitResultU3Ek__BackingField_17() { return &___U3CInitResultU3Ek__BackingField_17; }
	inline void set_U3CInitResultU3Ek__BackingField_17(int32_t value)
	{
		___U3CInitResultU3Ek__BackingField_17 = value;
	}
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

// Firebase.Auth.PhoneAuthProviderInternal
struct PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.PhoneAuthProviderInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.PhoneAuthProviderInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0  : public RuntimeObject
{
public:
	// Firebase.InitResult Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1::init_result
	int32_t ___init_result_0;
	// Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0 Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_init_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0, ___init_result_0)); }
	inline int32_t get_init_result_0() const { return ___init_result_0; }
	inline int32_t* get_address_of_init_result_0() { return &___init_result_0; }
	inline void set_init_result_0(int32_t value)
	{
		___init_result_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
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


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.FirebaseUser
struct FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0  : public UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___authProxy_3;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_authProxy_3() { return static_cast<int32_t>(offsetof(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0, ___authProxy_3)); }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * get_authProxy_3() const { return ___authProxy_3; }
	inline FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B ** get_address_of_authProxy_3() { return &___authProxy_3; }
	inline void set_authProxy_3(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * value)
	{
		___authProxy_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authProxy_3), (void*)value);
	}
};


// Firebase.Auth.Future_User
struct Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Future_User::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.Auth.Future_User::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Auth.Future_User/SWIG_CompletionDelegate Firebase.Auth.Future_User::SWIG_CompletionCB
	SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action> Firebase.Auth.Future_User::Callbacks
	Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * ___Callbacks_3;
	// System.Int32 Firebase.Auth.Future_User::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Auth.Future_User::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.MemberAccessException
struct MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.Future_User/Action
struct Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut
struct CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProvider/CodeSent
struct CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProvider/VerificationCompleted
struct VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProvider/VerificationFailed
struct VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate
struct CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate
struct TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate
struct VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate
struct VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.MethodAccessException
struct MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6  : public MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<System.Object>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSourceCompat_1_SetException_m94304710182CF79A0E5E1F81CE4D3051208C6D59_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___tcs0, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * ___exception1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21_gshared (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, int32_t ___key0, intptr_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059_gshared (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921_gshared (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.IntPtr>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877  ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7_gshared (ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_gshared_inline (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049_gshared (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A_gshared (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166_gshared (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_mFC0E58DCF7B5F4CA81566406EDFDD1B61CF47869 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m94FF806623FCE712B1FE7B00B270543ED3218F9F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_m7706611CE2F372CECF5D394ADA0B83BB404EB82D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_m2C641D2057D4A4C1F0EB4405295DAB87FEEAC8E4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mEC45F1C1418B7AB0992D58CEF9D018BBF1BCDC2D (SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m0B2A803056B8D5C03A7243D1B046D95B1BB1C01C (SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Credential::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_mA13803581F5FA2614CEFC052CEC5A8E8DFD92E11 (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m0EEE0518E8C45B12F32CA0A55D5C0EE06C670708 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636 (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m97FADB17E8B3DE6AC0AB52FF4F5D2D735275589D (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_mCB32D607A51193524368281C2A7F4E4FA3261A93 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m945EEF736BB3B7C594DE968C34B4EDE9CD393D5A (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * __this, intptr_t ___key0, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 *, intptr_t, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B **, const RuntimeMethod*))Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m3D65FC66CC7BBCD9EC0F6B5555CC80FBEC89D0D9 (U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m9188EEA4979F2C10B7ADB5E41D707C175C8D1849 (U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_ProxyFromAppCPtr_mB5FF044AF24B8F318F75057FFCF421C6CFD81C8A (intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::LogHeartbeatInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_LogHeartbeatInternal_m4C0CD7B379B1229A8F3BF609CC775CC81C2F60D6 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___closureToExecute0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_mB7A5D8BCB4D5788B8CA8D82E1A995895AF930353 (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m5D3D93DE9892F6A6B5EA3C25DFFA20A5CB735BCA (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___state_changed_delegate1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_mB628BD86F89F3C9B9143F1BBD6778B0455E6DF97 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___state_changed_delegate1, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m8EBEAE6A994FF237F89E2BA0840BD716EDA4FA81 (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * __this, intptr_t ___key0, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 *, intptr_t, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *, const RuntimeMethod*))Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m23E89CC9A2A5B9F6068C1462E4D9AD6024222146 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::Remove(!0)
inline bool Dictionary_2_Remove_mCEA6BC7623C4A1BA2A573F1432600C582A8126AF (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Auth.UserInfoInterface::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_m8B618F0FE8B7B5204A9F143E059CFCE32E629C69 (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_mE3EA7192771F9DDB124D38987D6B8826BD626BA4 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, intptr_t ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m91711705C4AFFAD2D1D32FBD3CC7CEB86A64305E (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, intptr_t ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_mB490E787E92AE01D0D2ED35B264E9F1FD5D76139 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___instance0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mEC9DCF875A0BC3B693732BF1F6FA346F3FC825FC (U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_m36CE2B6D42C332A4669CE4C46210942B6A216ACC (U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * __this, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8 (Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m71D5CD738601A3264AC0C27DCBBCC87A79D3A9CF (intptr_t ___appCPtr0, Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * ___stateChangeClosure1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_GetAuth_m7B93B79B5D9CA972546D28803581F6C4521E07E5 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseUser_getCPtr_m4DE775495F6A7D508D80E4CCC83CF6684774FC05 (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_mEB4CA588E22FF2DF393E9538B1B32B539D264D00 (U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_m159C26085D4233394B0753FFEE3814F78B4EDC5B (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518 (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialInternalAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * FirebaseAuth_SignInWithCredentialInternalAsync_mC71CB159D75D92180D11F9BD4BFD031F3693841F (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___credential0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4BB5C7A8777DAAAB4306FA1CB4C5C9D8B222DDC1 (Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m24045BAC07B2A7E3DB6C963C6882823955998038 (Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * __this, Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C *, Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65 *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::get_Task()
inline Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_inline (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * (*) (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9 (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<Firebase.Auth.FirebaseUser>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
inline void TaskCompletionSourceCompat_1_SetException_m08699E46E4B72BFA5D27AAA9DA37064ADDD74A17 (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * ___tcs0, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * ___exception1, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *, const RuntimeMethod*))TaskCompletionSourceCompat_1_SetException_m94304710182CF79A0E5E1F81CE4D3051208C6D59_gshared)(___tcs0, ___exception1, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * Task_1_get_Result_m7DD70EBD08B64DEA7D6CB44BFFF85400D2956800 (Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * (*) (Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * FirebaseAuth_UpdateCurrentUser_m02E6A70B9B9BD931CC0921C723D7EFBCB5560813 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___proxy0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4 (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * __this, FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *, FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::getCPtr(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Credential_getCPtr_mAA1465ABA33A707DD6C24F3845D74CC080806AAF (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_mC52A46DC031EAEF23ACD9D9E687BC29D78663AC4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m8CBECD9993EE02DA089D5CCDC2FCFC4F994AA151 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * Future_User_GetTask_m133E2EBC3AF45BA90DC2B4C380B1FCA032DDA4F0 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * ___fu0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m8A2A4D9CDB91C2AA6B0416CE319CA7F2366B8715 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_mFA342FF3F4607CCCA2D73476BAEB7A6207C9F4B7 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_mA2D4B910DD41FB8732CE519993DFE58A4143F078 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mB7A8098812B966A0A48CD2647223C38AD9000DEC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_m2696CA750DEBDDC333D5EDDFD4231A45738BC647 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_mAE9750F361571711C0780CF1104E8C62093C680F (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>::.ctor()
inline void Dictionary_2__ctor_mDEF936F70B269990802A1B577AC973427F07F40E (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 *, const RuntimeMethod*))Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared)(__this, method);
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_mAB2C89094FF396A7C547D95C97FEB1F7CA0E11C7 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.UserInfoInterface::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface__ctor_m5FA4B296F0CF95C555569B5B05F6003D27055976 (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m2F49CC8A037B4DE1BAB54085C6BE24A999C12AC6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_mE158FFCC6D734F5D723721C70A02FDD1F35332FE (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, bool ___disposing0, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_PhoneNumber_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_PhoneNumber_get_m3EE567ADECE50484410EA9735BFC2D887376D15B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ProviderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_ProviderId_get_m650DC0CE047E8716E7ACDD8FE9EAA9F296A83911 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.ForceResendingToken::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken_Dispose_mA1866AA7603A5FBAAB05A64C627DBE2163D3EF41 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_ForceResendingToken(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_ForceResendingToken_m93421C0E639F7B03C87BAE52B5C9C0FEA8613922 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_m9C38253A26DA25E29CC2B5704A0C0F55320847AA (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m0C64EA9F2CF782121110A34F522E004A345726F7 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_m20EFC23ACBA8112502F412A598364E722614221D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_mD92D3FE1E216E3FFBE40723A1F3871452931B2AB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mD6AF96D5D63DD76B9E5B30B7FEBD216A8220D1E2 (U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m5875B3BB003C2B23F08CB99BC79534ABB955A66D (const RuntimeMethod* method);
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF (const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37 (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mF54D8810130AC4F1782F7DFEA044256BEF01FADB (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_mBE50D5BDA584280F80FEE13B18015CCA6A74A582 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m09A3C21C9FDCE199CB7D1CD56C9E9540619F0E6C (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mC609626C03A348165BB23CB6795849FED04ED33C (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::.ctor()
inline void Dictionary_2__ctor_m1E71D8819E4ECB7B3FB43954E0436C79D617E0B8 (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD20BAA0188D10720EB2DB64971BC276A2D31034C (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * __this, int32_t ___key0, Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 *, int32_t, Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m4F87387C003E314EA41944E4C028B3CA2D86B4AD (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_mB483D431EE2D51344C72D759C3851F6F3A9F9C6A (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m024DBC01D8532732F02031EB2CC56121F256C48A (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * __this, int32_t ___key0, Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 *, int32_t, Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m9973F600F805F49379A9C365611EFB4FB4C0AD6C (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mABB8053BC7349622F1CEEC4E8C526260B52D1CC8 (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_mF5530C539FDC946FACE484265909C4EE3E95DB81 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_m7184D9856585BBAB8F1DEBF4C778F02C8E520912 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_mE1B184111A11193F4BA79EB3C154ED50865AE5A6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider::VerificationCompletedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE (int32_t ___callbackId0, intptr_t ___credential1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider::VerificationFailedHandler(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420 (int32_t ___callbackId0, String_t* ___error1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider::CodeSentHandler(System.Int32,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968 (int32_t ___callbackId0, String_t* ___verificationId1, intptr_t ___token2, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider::TimeOutHandler(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B (int32_t ___callbackId0, String_t* ___verificationId1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthDelegates__ctor_mFE87E5263EEA175B9B13333C187EA7F64FF15796 (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE0000EFFC79D042FC491DC280847005C58EA8FEA (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * __this, int32_t ___key0, PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 *, int32_t, PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9C751AE6EB66F38BE93143060D39536DC4330882 (U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m0A0F9C52654A17A12C09DF2C218849E31C5417F7 (U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m6339FDEC8F4757277D2D59DE1E37E872EB117392 (U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m6C880E1C26074D40D6E27F1DAE36E995F5E88E23 (U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProviderInternal::SetCallbacks(Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate,Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate,Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate,Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_SetCallbacks_mA45D605D6DB7630316AF456F43DD7F8709D65A2F (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * ___completedCallback0, VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * ___failedCallback1, CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * ___sentCallback2, TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * ___timeOutCallback3, const RuntimeMethod* method);
// System.Int32 Firebase.Auth.PhoneAuthProvider::SaveCallbacks(Firebase.Auth.PhoneAuthProvider/VerificationCompleted,Firebase.Auth.PhoneAuthProvider/VerificationFailed,Firebase.Auth.PhoneAuthProvider/CodeSent,Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhoneAuthProvider_SaveCallbacks_mD2BC1DFFA14A209A985E4ADA5A6A05628B2A68C2 (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * ___verificationCompleted0, VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * ___verificationFailed1, CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * ___codeSent2, CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * ___timeOut3, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.PhoneAuthProviderInternal::VerifyPhoneNumberInternal(System.String,System.UInt32,Firebase.Auth.ForceResendingToken,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m3C7DA2CDE3D5F8DDC646D39DA0552E5E8B82C7BF (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, String_t* ___phone_number0, uint32_t ___auto_verify_time_out_ms1, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___token2, int32_t ___callback_id3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::Add(!0,!1)
inline void Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21 (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, int32_t ___key0, intptr_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C *, int32_t, intptr_t, const RuntimeMethod*))Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::.ctor()
inline void Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059 (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C *, const RuntimeMethod*))Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059_gshared)(__this, method);
}
// System.Void Firebase.Auth.PhoneAuthProvider::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_InitializeCallbacks_m8E667B4C844DB4C59D263F52637D6BA76A605028 (const RuntimeMethod* method);
// Firebase.Auth.PhoneAuthProviderInternal Firebase.Auth.PhoneAuthProviderInternal::GetInstance(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * PhoneAuthProviderInternal_GetInstance_m59674004BD90A667C8E53D39D3DBF20A6B2A6416 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::get_Values()
inline ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921 (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * (*) (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C *, const RuntimeMethod*))Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.IntPtr>::GetEnumerator()
inline Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877  ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7 (ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877  (*) (ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 *, const RuntimeMethod*))ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>::get_Current()
inline intptr_t Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_inline (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 *, const RuntimeMethod*))Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_gshared_inline)(__this, method);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::DestroyListenerImplInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_DestroyListenerImplInternal_mD78DEACD485D47657D99C436B76124FCD3BE2D13 (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, intptr_t ___listener0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>::MoveNext()
inline bool Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049 (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 *, const RuntimeMethod*))Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.IntPtr>::Dispose()
inline void Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 *, const RuntimeMethod*))Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.IntPtr>::Clear()
inline void Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166 (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C *, const RuntimeMethod*))Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166_gshared)(__this, method);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_Dispose_m7CB79A779BC66D070816AC03ED987E2975FB21F3 (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0F68A723CB89DD21993EB3C2876E0F151C067796 (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___key0, PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 *, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *, PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Auth.PhoneAuthProvider::.ctor(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider__ctor_mC9D9B9B2EDAC80204FFDA3FBA2D389C2B6CA76BB (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>::Add(!0,!1)
inline void Dictionary_2_Add_m89F7EAA925E8B1FCE09FFC33B899A19CC6A3BD83 (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___key0, PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 *, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *, PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Auth.Credential Firebase.Auth.PhoneAuthProviderInternal::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * PhoneAuthProviderInternal_GetCredential_m5FBB8AB8F20679BA899E6ADA4496395C81AE71EA (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, String_t* ___verificationId0, String_t* ___verificationCode1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>::.ctor()
inline void Dictionary_2__ctor_m306EFC8D74490C055030A2CA2B2351A948B76947 (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompletedDelegate__ctor_mE641599675A073B7E8FAFD885AB57E249AEC36A5 (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailedDelegate__ctor_m74160E9BCBE04C94CBAE4ADFE644D22FDA5AF325 (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSentDelegate__ctor_m80E139870E8E882A381E94F0F3700D901188EC5C (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeOutDelegate__ctor_m84B48C02139A4720066445F51B4C6F2B4F95C10C (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Auth.FirebaseAuth,Firebase.Auth.PhoneAuthProvider>::.ctor()
inline void Dictionary_2__ctor_mA2B5325ECE3ABEC43FC14FF9FF855CD50D53B891 (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.MethodAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodAccessException__ctor_m32817FA677AD036178BCE835957A7C84C3096E17 (MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetCredential(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetCredential_mB4793592FB263E129D3A81963662D9BA2C6FDDF7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.Credential::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential__ctor_m0ABFDBA844553C3EF878C83763D87616455AA405 (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetInstance(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetInstance_m51B72ADAEBC79E9490F5F55A8E3D6BE313BDD3AA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProviderInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal__ctor_m0E1CE14C8FB5315C87EA3DB7B772E393381130FF (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Auth.ForceResendingToken::getCPtr(Firebase.Auth.ForceResendingToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ForceResendingToken_getCPtr_m0B79391137F6039911648A8C5C72EFAB1694F826 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_VerifyPhoneNumberInternal(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m87BF98615A1B6904547BFCABE776DB7A5156702F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, uint32_t ___jarg32, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg43, int32_t ___jarg54, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_DestroyListenerImplInternal(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthProviderInternal_DestroyListenerImplInternal_mB858F15C97DBD7058FB332DB575455CD9F8FB40E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_SetCallbacks(Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate,Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate,Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate,Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthProviderInternal_SetCallbacks_m66DEB5E3F3A8523528B355CF9DE58D6AEF7C473B (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * ___jarg10, VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * ___jarg21, CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * ___jarg32, TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * ___jarg43, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserInfoInterface(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserInfoInterface_m5092BAD57B3EB75470BD3C4FFE66C7540196B807 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mA1FDF2A2F282AA5D7ED2E8262566F9CFE51C51EA (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mA7BC1526019A141C5C4867E65F6FAC176BE3F1C5 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___applicationDelegate0, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___arithmeticDelegate1, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___divideByZeroDelegate2, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___indexOutOfRangeDelegate3, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___invalidCastDelegate4, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___invalidOperationDelegate5, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___ioDelegate6, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___nullReferenceDelegate7, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___outOfMemoryDelegate8, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___overflowDelegate9, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m87065A170CE1FBF3EFC2A1A30A740B9E88448E45 (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentDelegate0, ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m814C6775D7751AA8697CA8E0E8F0C6ECF095C707 (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m371DB48C11AD3447255059440F4BCC7AF577347A (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m23DF1F4B30988D3F1EE05A3A9B00CA1F7090090F (U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * FirebaseAuth_get_CurrentUserInternal_mB792BA9E27A67C769D02190FC052F58C27C0AAAF (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_GetAuthInternal_mBF11B5BF490AA96AB4207E582498CD6F64569727 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::Invoke(!0)
inline void Action_1_Invoke_mF7794D0D3D424B5A625009ED7C4F144A596889FD (Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 *, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m7452ABAF9D569E8BE2D1C0F05EF0B5AE62B1DED8 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * ___task0, TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * ___taskCompletionSource1, const RuntimeMethod* method);
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * Future_User_GetResult_mC377EDE6BFC43F7A5F87A6BB3492547A345A614F (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360 (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * __this, int32_t ___key0, PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 *, int32_t, PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationCompleted::Invoke(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompleted_Invoke_mE026B473704253E6D91136145799E33319C260F1 (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * __this, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___credential0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Credential::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m8230F895334F2724521CE94DF34A987FC26D093E (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationFailed::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailed_Invoke_mA03309AF815F3AC4BD68B5642ABE32BE7141CFDC (VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * __this, String_t* ___error0, const RuntimeMethod* method);
// System.Void Firebase.Auth.ForceResendingToken::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken__ctor_m4642FF9F6048617134DFC933D55965AAE57226F2 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/CodeSent::Invoke(System.String,Firebase.Auth.ForceResendingToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSent_Invoke_m9B46A824E02F944C90AEA0A22EBFE04FF411F027 (CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * __this, String_t* ___verificationId0, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___forceResendingToken1, const RuntimeMethod* method);
// System.Void Firebase.Auth.ForceResendingToken::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken_Dispose_mE20F2EE7269382E8E63B0E81EAAA5327BF122CF4 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeAutoRetrievalTimeOut_Invoke_m9CCDBF648B5A159EADFE8A0A1CEA56F0B2EB932E (CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * __this, String_t* ___verificationId0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Future_User(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_Credential(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetInstance(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal(void*, char*, uint32_t, void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_DestroyListenerImplInternal(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_PhoneAuthProviderInternal_SetCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_ForceResendingToken(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_UserInfoInterface(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_delete_FirebaseUser(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_PhoneNumber_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_ProviderId_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateAuthStateListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyAuthStateListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_CreateIdTokenListener(void*, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Auth_CSharp_DestroyIdTokenListener(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_Future_User_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_AuthUtil(Il2CppMethodPointer);
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
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m5D3D93DE9892F6A6B5EA3C25DFFA20A5CB735BCA (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07(L_0, /*hidden argument*/NULL);
		StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateAuthStateListener_mFC0E58DCF7B5F4CA81566406EDFDD1B61CF47869(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateAuthStateListener_m5D3D93DE9892F6A6B5EA3C25DFFA20A5CB735BCA_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_7 = V_0;
		V_2 = (intptr_t)L_7;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_8 = V_2;
		return (intptr_t)L_8;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_mE3EA7192771F9DDB124D38987D6B8826BD626BA4 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, intptr_t ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___listener1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyAuthStateListener_m94FF806623FCE712B1FE7B00B270543ED3218F9F(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyAuthStateListener_mE3EA7192771F9DDB124D38987D6B8826BD626BA4_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_mB628BD86F89F3C9B9143F1BBD6778B0455E6DF97 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07(L_0, /*hidden argument*/NULL);
		StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_CreateIdTokenListener_m7706611CE2F372CECF5D394ADA0B83BB404EB82D(L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_CreateIdTokenListener_mB628BD86F89F3C9B9143F1BBD6778B0455E6DF97_RuntimeMethod_var)));
	}

IL_001d:
	{
		intptr_t L_7 = V_0;
		V_2 = (intptr_t)L_7;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_8 = V_2;
		return (intptr_t)L_8;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(Firebase.Auth.FirebaseAuth,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m91711705C4AFFAD2D1D32FBD3CC7CEB86A64305E (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, intptr_t ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___listener1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_DestroyIdTokenListener_m2C641D2057D4A4C1F0EB4405295DAB87FEEAC8E4(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthUtil_DestroyIdTokenListener_m91711705C4AFFAD2D1D32FBD3CC7CEB86A64305E_RuntimeMethod_var)));
	}

IL_001d:
	{
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
// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__cctor_m6005F402912182AD2576B197411A156C3C5C55B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E * L_0 = (SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E *)il2cpp_codegen_object_new(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_mEC45F1C1418B7AB0992D58CEF9D018BBF1BCDC2D(L_0, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 * L_1 = (SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 *)il2cpp_codegen_object_new(SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m0B2A803056B8D5C03A7243D1B046D95B1BB1C01C(L_1, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_mF5530C539FDC946FACE484265909C4EE3E95DB81 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_m7184D9856585BBAB8F1DEBF4C778F02C8E520912 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_GetResult_mE1B184111A11193F4BA79EB3C154ED50865AE5A6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_Future_User_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_GetResult)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Future_User(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Future_User_m20EFC23ACBA8112502F412A598364E722614221D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_delete_Future_User", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Future_User)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_Credential(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_Credential_m0EEE0518E8C45B12F32CA0A55D5C0EE06C670708 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_delete_Credential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_Credential)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetCredential(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetCredential_mB4793592FB263E129D3A81963662D9BA2C6FDDF7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetCredential)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_GetInstance(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_GetInstance_m51B72ADAEBC79E9490F5F55A8E3D6BE313BDD3AA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetInstance", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_GetInstance)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_VerifyPhoneNumberInternal(System.Runtime.InteropServices.HandleRef,System.String,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m87BF98615A1B6904547BFCABE776DB7A5156702F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, uint32_t ___jarg32, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg43, int32_t ___jarg54, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, uint32_t, void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(uint32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg43' to native representation
	void* ____jarg43_marshaled = NULL;
	____jarg43_marshaled = (void*)___jarg43.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_VerifyPhoneNumberInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32, ____jarg43_marshaled, ___jarg54);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32, ____jarg43_marshaled, ___jarg54);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_DestroyListenerImplInternal(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthProviderInternal_DestroyListenerImplInternal_mB858F15C97DBD7058FB332DB575455CD9F8FB40E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_DestroyListenerImplInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_DestroyListenerImplInternal)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::PhoneAuthProviderInternal_SetCallbacks(Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate,Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate,Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate,Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_PhoneAuthProviderInternal_SetCallbacks_m66DEB5E3F3A8523528B355CF9DE58D6AEF7C473B (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * ___jarg10, VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * ___jarg21, CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * ___jarg32, TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * ___jarg43, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_PhoneAuthProviderInternal_SetCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Marshaling of parameter '___jarg43' to native representation
	Il2CppMethodPointer ____jarg43_marshaled = NULL;
	____jarg43_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg43));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_PhoneAuthProviderInternal_SetCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled, ____jarg43_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled, ____jarg43_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_ForceResendingToken(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_ForceResendingToken_m93421C0E639F7B03C87BAE52B5C9C0FEA8613922 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_delete_ForceResendingToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_ForceResendingToken)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_UserInfoInterface(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_UserInfoInterface_m5092BAD57B3EB75470BD3C4FFE66C7540196B807 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_delete_UserInfoInterface", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_UserInfoInterface)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_delete_FirebaseUser_m2F49CC8A037B4DE1BAB54085C6BE24A999C12AC6 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_delete_FirebaseUser", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_delete_FirebaseUser)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_PhoneNumber_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_PhoneNumber_get_m3EE567ADECE50484410EA9735BFC2D887376D15B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseUser_PhoneNumber_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_PhoneNumber_get)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_ProviderId_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_FirebaseUser_ProviderId_get_m650DC0CE047E8716E7ACDD8FE9EAA9F296A83911 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseUser_ProviderId_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_ProviderId_get)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_SignInWithCredentialInternal(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_mC52A46DC031EAEF23ACD9D9E687BC29D78663AC4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_SignInWithCredentialInternal)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m8A2A4D9CDB91C2AA6B0416CE319CA7F2366B8715 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_GetAuthInternal)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_LogHeartbeatInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_mA2D4B910DD41FB8732CE519993DFE58A4143F078 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_LogHeartbeatInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mB7A8098812B966A0A48CD2647223C38AD9000DEC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_m2696CA750DEBDDC333D5EDDFD4231A45738BC647 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseAuth_CurrentUserInternal_get)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateAuthStateListener_mFC0E58DCF7B5F4CA81566406EDFDD1B61CF47869 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_CreateAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateAuthStateListener)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyAuthStateListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyAuthStateListener_m94FF806623FCE712B1FE7B00B270543ED3218F9F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_DestroyAuthStateListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyAuthStateListener)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_CreateIdTokenListener_m7706611CE2F372CECF5D394ADA0B83BB404EB82D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_CreateIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_CreateIdTokenListener)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE::DestroyIdTokenListener(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_DestroyIdTokenListener_m2C641D2057D4A4C1F0EB4405295DAB87FEEAC8E4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_DestroyIdTokenListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_DestroyIdTokenListener)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Future_User_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Future_User_SWIGUpcast_m9C38253A26DA25E29CC2B5704A0C0F55320847AA (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_Future_User_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_Future_User_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::FirebaseUser_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_mAB2C89094FF396A7C547D95C97FEB1F7CA0E11C7 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CSharp_FirebaseUser_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.Credential::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential__ctor_m0ABFDBA844553C3EF878C83763D87616455AA405 (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::getCPtr(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Credential_getCPtr_mAA1465ABA33A707DD6C24F3845D74CC080806AAF (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = L_1->get_swigCPtr_0();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Auth.Credential::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Finalize_mA10F0A969557A42B573FE48F86367E3BA6823A41 (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		Credential_Dispose_mA13803581F5FA2614CEFC052CEC5A8E8DFD92E11(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.Credential::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_m8230F895334F2724521CE94DF34A987FC26D093E (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Credential_Dispose_mA13803581F5FA2614CEFC052CEC5A8E8DFD92E11(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Credential::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credential_Dispose_mA13803581F5FA2614CEFC052CEC5A8E8DFD92E11 (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_Credential_m0EEE0518E8C45B12F32CA0A55D5C0EE06C670708(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636(___appCPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C(___appCPtr0, NULL);

}
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_mFA342FF3F4607CCCA2D73476BAEB7A6207C9F4B7 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		__this->set_persistentLoaded_9((bool)0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = L_1->get_swigCPtr_0();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Finalize_m4C69CF988473AD237AE2874B376C3694EE6E080B (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_Dispose_m97FADB17E8B3DE6AC0AB52FF4F5D2D735275589D(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m23E89CC9A2A5B9F6068C1462E4D9AD6024222146 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_Dispose_m97FADB17E8B3DE6AC0AB52FF4F5D2D735275589D(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m97FADB17E8B3DE6AC0AB52FF4F5D2D735275589D (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		FirebaseAuth_DisposeInternal_mCB32D607A51193524368281C2A7F4E4FA3261A93(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_ProxyFromAppCPtr_mB5FF044AF24B8F318F75057FFCF421C6CFD81C8A (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m945EEF736BB3B7C594DE968C34B4EDE9CD393D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * V_0 = NULL;
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * V_1 = NULL;
	bool V_2 = false;
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_0 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
			Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_2 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_3 = ___appCPtr0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m945EEF736BB3B7C594DE968C34B4EDE9CD393D5A(L_2, (intptr_t)L_3, (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m945EEF736BB3B7C594DE968C34B4EDE9CD393D5A_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_6 = V_1;
			V_3 = L_6;
			IL2CPP_LEAVE(0x34, FINALLY_0028);
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x30, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_JUMP_TBL(0x30, IL_0030)
	}

IL_0030:
	{
		V_3 = (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *)NULL;
		goto IL_0034;
	}

IL_0034:
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_8 = V_3;
		return L_8;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_m159C26085D4233394B0753FFEE3814F78B4EDC5B (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_4 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_ThrowIfNull_m159C26085D4233394B0753FFEE3814F78B4EDC5B_RuntimeMethod_var)));
	}

IL_0021:
	{
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_GetAuth_m7B93B79B5D9CA972546D28803581F6C4521E07E5 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8EBEAE6A994FF237F89E2BA0840BD716EDA4FA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_OnAppDisposed_m8168DE1D2900DE7CAF23A4B9F5E8D329AE52A2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_1_U3CGetAuthU3Eb__0_mA406FECDE947BF25735463A01E1E96FA3C1D086D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * V_0 = NULL;
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * V_1 = NULL;
	U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_0 = (U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass19_0__ctor_m3D65FC66CC7BBCD9EC0F6B5555CC80FBEC89D0D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_1 = V_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___app0;
		NullCheck(L_1);
		L_1->set_app_1(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_3 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_3;
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_4 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_5 = (U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass19_1__ctor_m9188EEA4979F2C10B7ADB5E41D707C175C8D1849(L_5, /*hidden argument*/NULL);
			V_2 = L_5;
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_6 = V_2;
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_7 = V_0;
			NullCheck(L_6);
			L_6->set_CSU24U3CU3E8__locals1_1(L_7);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_8 = V_2;
			NullCheck(L_8);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_9 = L_8->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_9);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_10 = L_9->get_app_1();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_11;
			L_11 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_10, /*hidden argument*/NULL);
			V_4 = L_11;
			intptr_t L_12;
			L_12 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_4), /*hidden argument*/NULL);
			V_3 = (intptr_t)L_12;
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_13 = V_2;
			NullCheck(L_13);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_14 = L_13->get_CSU24U3CU3E8__locals1_1();
			intptr_t L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_16;
			L_16 = FirebaseAuth_ProxyFromAppCPtr_mB5FF044AF24B8F318F75057FFCF421C6CFD81C8A((intptr_t)L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_auth_0(L_16);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_17 = V_2;
			NullCheck(L_17);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_18 = L_17->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_18);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_19 = L_18->get_auth_0();
			V_5 = (bool)((!(((RuntimeObject*)(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_20 = V_5;
			if (!L_20)
			{
				goto IL_008c;
			}
		}

IL_0068:
		{
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_21 = V_2;
			NullCheck(L_21);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_22 = L_21->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_22);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_23 = L_22->get_app_1();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
			FirebaseAuth_LogHeartbeatInternal_m4C0CD7B379B1229A8F3BF609CC775CC81C2F60D6(L_23, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_24 = V_2;
			NullCheck(L_24);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_25 = L_24->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_25);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_26 = L_25->get_auth_0();
			V_6 = L_26;
			IL2CPP_LEAVE(0x175, FINALLY_0163);
		}

IL_008c:
		{
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_27 = V_2;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_28 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_1_U3CGetAuthU3Eb__0_mA406FECDE947BF25735463A01E1E96FA3C1D086D_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			FirebaseApp_TranslateDllNotFoundException_m7AA751F31022C03AA209E73B99646C4D0A17A90D(L_28, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_29 = V_2;
			NullCheck(L_29);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_30 = L_29->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_30);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_31 = L_30->get_auth_0();
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_32 = V_2;
			NullCheck(L_32);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_33 = L_32->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_33);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_34 = L_33->get_auth_0();
			StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * L_35 = (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 *)il2cpp_codegen_object_new(StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_mB7A5D8BCB4D5788B8CA8D82E1A995895AF930353(L_35, NULL, (intptr_t)((intptr_t)FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636_RuntimeMethod_var), /*hidden argument*/NULL);
			intptr_t L_36;
			L_36 = AuthUtil_CreateAuthStateListener_m5D3D93DE9892F6A6B5EA3C25DFFA20A5CB735BCA(L_34, L_35, /*hidden argument*/NULL);
			NullCheck(L_31);
			L_31->set_authStateListener_4((intptr_t)L_36);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_37 = V_2;
			NullCheck(L_37);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_38 = L_37->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_38);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_39 = L_38->get_auth_0();
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_40 = V_2;
			NullCheck(L_40);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_41 = L_40->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_41);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_42 = L_41->get_auth_0();
			StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * L_43 = (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 *)il2cpp_codegen_object_new(StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_mB7A5D8BCB4D5788B8CA8D82E1A995895AF930353(L_43, NULL, (intptr_t)((intptr_t)FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C_RuntimeMethod_var), /*hidden argument*/NULL);
			intptr_t L_44;
			L_44 = AuthUtil_CreateIdTokenListener_mB628BD86F89F3C9B9143F1BBD6778B0455E6DF97(L_42, L_43, /*hidden argument*/NULL);
			NullCheck(L_39);
			L_39->set_idTokenListener_5((intptr_t)L_44);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_45 = V_2;
			NullCheck(L_45);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_46 = L_45->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_46);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_47 = L_46->get_auth_0();
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_48 = V_2;
			NullCheck(L_48);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_49 = L_48->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_49);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_50 = L_49->get_app_1();
			NullCheck(L_47);
			L_47->set_appProxy_2(L_50);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_51 = V_2;
			NullCheck(L_51);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_52 = L_51->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_52);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_53 = L_52->get_auth_0();
			intptr_t L_54 = V_3;
			NullCheck(L_53);
			L_53->set_appCPtr_3((intptr_t)L_54);
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_55 = V_2;
			NullCheck(L_55);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_56 = L_55->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_56);
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_57 = L_56->get_app_1();
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_58 = V_2;
			NullCheck(L_58);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_59 = L_58->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_59);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_60 = L_59->get_auth_0();
			EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_61 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
			EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_61, L_60, (intptr_t)((intptr_t)FirebaseAuth_OnAppDisposed_m8168DE1D2900DE7CAF23A4B9F5E8D329AE52A2AC_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_57);
			FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79(L_57, L_61, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
			Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_62 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_63 = V_3;
			U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * L_64 = V_2;
			NullCheck(L_64);
			U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_65 = L_64->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_65);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_66 = L_65->get_auth_0();
			NullCheck(L_62);
			Dictionary_2_set_Item_m8EBEAE6A994FF237F89E2BA0840BD716EDA4FA81(L_62, (intptr_t)L_63, L_66, /*hidden argument*/Dictionary_2_set_Item_m8EBEAE6A994FF237F89E2BA0840BD716EDA4FA81_RuntimeMethod_var);
			IL2CPP_LEAVE(0x16B, FINALLY_0163);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0163;
	}

FINALLY_0163:
	{ // begin finally (depth: 1)
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_67 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_67, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(355)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(355)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x175, IL_0175)
		IL2CPP_JUMP_TBL(0x16B, IL_016b)
	}

IL_016b:
	{
		U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_68 = V_0;
		NullCheck(L_68);
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_69 = L_68->get_auth_0();
		V_6 = L_69;
		goto IL_0175;
	}

IL_0175:
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_70 = V_6;
		return L_70;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_OnAppDisposed_m8168DE1D2900DE7CAF23A4B9F5E8D329AE52A2AC (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseAuth_Dispose_m23E89CC9A2A5B9F6068C1462E4D9AD6024222146(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_mCB32D607A51193524368281C2A7F4E4FA3261A93 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mCEA6BC7623C4A1BA2A573F1432600C582A8126AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_OnAppDisposed_m8168DE1D2900DE7CAF23A4B9F5E8D329AE52A2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_0 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			RuntimeObject * L_2 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
			V_1 = L_2;
			RuntimeObject * L_3 = V_1;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
		}

IL_001c:
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
				HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_4 = __this->get_address_of_swigCPtr_0();
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_4, /*hidden argument*/NULL);
				bool L_6;
				L_6 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
				V_2 = L_6;
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_011e;
				}
			}

IL_0040:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
				Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_8 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
				intptr_t L_9 = __this->get_appCPtr_3();
				NullCheck(L_8);
				bool L_10;
				L_10 = Dictionary_2_Remove_mCEA6BC7623C4A1BA2A573F1432600C582A8126AF(L_8, (intptr_t)L_9, /*hidden argument*/Dictionary_2_Remove_mCEA6BC7623C4A1BA2A573F1432600C582A8126AF_RuntimeMethod_var);
				FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_11 = __this->get_appProxy_2();
				EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_12 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
				EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_12, __this, (intptr_t)((intptr_t)FirebaseAuth_OnAppDisposed_m8168DE1D2900DE7CAF23A4B9F5E8D329AE52A2AC_RuntimeMethod_var), /*hidden argument*/NULL);
				NullCheck(L_11);
				FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812(L_11, L_12, /*hidden argument*/NULL);
				__this->set_appProxy_2((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL);
				__this->set_appCPtr_3((intptr_t)(0));
				FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_13 = __this->get_currentUser_6();
				V_3 = (bool)((!(((RuntimeObject*)(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_009e;
				}
			}

IL_0089:
			{
				FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_15 = __this->get_currentUser_6();
				NullCheck(L_15);
				UserInfoInterface_Dispose_m8B618F0FE8B7B5204A9F143E059CFCE32E629C69(L_15, /*hidden argument*/NULL);
				__this->set_currentUser_6((FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)NULL);
			}

IL_009e:
			{
				intptr_t L_16 = __this->get_authStateListener_4();
				bool L_17;
				L_17 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_16, (intptr_t)(0), /*hidden argument*/NULL);
				V_4 = L_17;
				bool L_18 = V_4;
				if (!L_18)
				{
					goto IL_00ce;
				}
			}

IL_00b4:
			{
				intptr_t L_19 = __this->get_authStateListener_4();
				AuthUtil_DestroyAuthStateListener_mE3EA7192771F9DDB124D38987D6B8826BD626BA4(__this, (intptr_t)L_19, /*hidden argument*/NULL);
				__this->set_authStateListener_4((intptr_t)(0));
			}

IL_00ce:
			{
				intptr_t L_20 = __this->get_idTokenListener_5();
				bool L_21;
				L_21 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_20, (intptr_t)(0), /*hidden argument*/NULL);
				V_5 = L_21;
				bool L_22 = V_5;
				if (!L_22)
				{
					goto IL_00fe;
				}
			}

IL_00e4:
			{
				intptr_t L_23 = __this->get_idTokenListener_5();
				AuthUtil_DestroyIdTokenListener_m91711705C4AFFAD2D1D32FBD3CC7CEB86A64305E(__this, (intptr_t)L_23, /*hidden argument*/NULL);
				__this->set_idTokenListener_5((intptr_t)(0));
			}

IL_00fe:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
				FirebaseAuth_ReleaseReferenceInternal_mB490E787E92AE01D0D2ED35B264E9F1FD5D76139(__this, /*hidden argument*/NULL);
				__this->set_swigCMemOwn_1((bool)0);
				HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_24;
				memset((&L_24), 0, sizeof(L_24));
				HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_24), NULL, (intptr_t)(0), /*hidden argument*/NULL);
				__this->set_swigCPtr_0(L_24);
			}

IL_011e:
			{
				IL2CPP_LEAVE(0x129, FINALLY_0121);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0121;
		}

FINALLY_0121:
		{ // begin finally (depth: 2)
			RuntimeObject * L_25 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_25, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(289)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(289)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x129, IL_0129)
		}

IL_0129:
		{
			IL2CPP_LEAVE(0x134, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_26 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_26, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x134, IL_0134)
	}

IL_0134:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m71D5CD738601A3264AC0C27DCBBCC87A79D3A9CF (intptr_t ___appCPtr0, Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * ___stateChangeClosure1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_1_U3CForwardStateChangeU3Eb__0_m4F901DBA8E2674E89877A286ACF4ECBC1C7B68F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * V_0 = NULL;
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * V_1 = NULL;
	U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * L_0 = (U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass22_0__ctor_mEC9DCF875A0BC3B693732BF1F6FA346F3FC825FC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * L_1 = V_0;
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_2 = ___stateChangeClosure1;
		NullCheck(L_1);
		L_1->set_stateChangeClosure_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_3 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_3;
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_4 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * L_5 = (U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass22_1__ctor_m36CE2B6D42C332A4669CE4C46210942B6A216ACC(L_5, /*hidden argument*/NULL);
			V_2 = L_5;
			U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * L_6 = V_2;
			U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * L_7 = V_0;
			NullCheck(L_6);
			L_6->set_CSU24U3CU3E8__locals1_1(L_7);
			U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * L_8 = V_2;
			intptr_t L_9 = ___appCPtr0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_10;
			L_10 = FirebaseAuth_ProxyFromAppCPtr_mB5FF044AF24B8F318F75057FFCF421C6CFD81C8A((intptr_t)L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_auth_0(L_10);
			U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * L_11 = V_2;
			NullCheck(L_11);
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_12 = L_11->get_auth_0();
			V_3 = (bool)((!(((RuntimeObject*)(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_13 = V_3;
			if (!L_13)
			{
				goto IL_0054;
			}
		}

IL_0042:
		{
			U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * L_14 = V_2;
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_1_U3CForwardStateChangeU3Eb__0_m4F901DBA8E2674E89877A286ACF4ECBC1C7B68F1_RuntimeMethod_var), /*hidden argument*/NULL);
			ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_15, /*hidden argument*/NULL);
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_16 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m6585D5A52DD33AFC96D21CA9785C624FFFA3E636 (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStateChangedFunctionU3Eb__23_0_mB7180C7ECE81DFE300395D6A478C535CBA2D1145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_1 = ((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->get_U3CU3E9__23_0_1();
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * L_3 = ((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_4 = (Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 *)il2cpp_codegen_object_new(Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8_il2cpp_TypeInfo_var);
		Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStateChangedFunctionU3Eb__23_0_mB7180C7ECE81DFE300395D6A478C535CBA2D1145_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8_RuntimeMethod_var);
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_5 = L_4;
		((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->set_U3CU3E9__23_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		FirebaseAuth_ForwardStateChange_m71D5CD738601A3264AC0C27DCBBCC87A79D3A9CF((intptr_t)G_B2_1, G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m501014D35B42550521827A6FD94B8F40920F786C (intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__24_0_m88B524DF71B7296719E4EBE0D7B3DF6D2DDE3581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * G_B2_0 = NULL;
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * G_B1_0 = NULL;
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_1 = ((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_2();
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * L_3 = ((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_4 = (Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 *)il2cpp_codegen_object_new(Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8_il2cpp_TypeInfo_var);
		Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__24_0_m88B524DF71B7296719E4EBE0D7B3DF6D2DDE3581_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5482287826B8DC41E9E7B758B54B7792C8B4F0C8_RuntimeMethod_var);
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_5 = L_4;
		((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_2(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		FirebaseAuth_ForwardStateChange_m71D5CD738601A3264AC0C27DCBBCC87A79D3A9CF((intptr_t)G_B2_1, G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_get_DefaultInstance_m9EAD1C18E2A3D7B634E5C0F9B3F9C9CB8884AADD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_1;
		L_1 = FirebaseAuth_GetAuth_m7B93B79B5D9CA972546D28803581F6C4521E07E5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_2 = V_0;
		return L_2;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * FirebaseAuth_UpdateCurrentUser_m02E6A70B9B9BD931CC0921C723D7EFBCB5560813 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___proxy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_0 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_2 = ___proxy0;
			V_1 = (bool)((((RuntimeObject*)(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0022;
			}
		}

IL_0017:
		{
			__this->set_currentUser_6((FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)NULL);
			goto IL_007d;
		}

IL_0022:
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_4 = __this->get_currentUser_6();
			V_2 = (bool)((((RuntimeObject*)(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_003a;
			}
		}

IL_002f:
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_6 = ___proxy0;
			__this->set_currentUser_6(L_6);
			goto IL_007d;
		}

IL_003a:
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_7 = __this->get_currentUser_6();
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8;
			L_8 = FirebaseUser_getCPtr_m4DE775495F6A7D508D80E4CCC83CF6684774FC05(L_7, /*hidden argument*/NULL);
			V_4 = L_8;
			intptr_t L_9;
			L_9 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_4), /*hidden argument*/NULL);
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_10 = ___proxy0;
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_11;
			L_11 = FirebaseUser_getCPtr_m4DE775495F6A7D508D80E4CCC83CF6684774FC05(L_10, /*hidden argument*/NULL);
			V_4 = L_11;
			intptr_t L_12;
			L_12 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_4), /*hidden argument*/NULL);
			bool L_13;
			L_13 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_9, (intptr_t)L_12, /*hidden argument*/NULL);
			V_3 = L_13;
			bool L_14 = V_3;
			if (!L_14)
			{
				goto IL_007c;
			}
		}

IL_0067:
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_15 = __this->get_currentUser_6();
			NullCheck(L_15);
			UserInfoInterface_Dispose_m8B618F0FE8B7B5204A9F143E059CFCE32E629C69(L_15, /*hidden argument*/NULL);
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_16 = ___proxy0;
			__this->set_currentUser_6(L_16);
		}

IL_007c:
		{
		}

IL_007d:
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_17 = __this->get_currentUser_6();
			V_5 = (bool)((!(((RuntimeObject*)(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0098;
			}
		}

IL_008c:
		{
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_19 = __this->get_currentUser_6();
			NullCheck(L_19);
			L_19->set_authProxy_3(__this);
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_20 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(155)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
	}

IL_00a3:
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_21 = __this->get_currentUser_6();
		V_6 = L_21;
		goto IL_00ad;
	}

IL_00ad:
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_22 = V_6;
		return L_22;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * FirebaseAuth_SignInWithCredentialAsync_mA5CB220A0077ADC3B657A8AEE1E9D832682EBDC4 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___credential0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4BB5C7A8777DAAAB4306FA1CB4C5C9D8B222DDC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m24045BAC07B2A7E3DB6C963C6882823955998038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_U3CSignInWithCredentialAsyncU3Eb__0_mCA4A8712E8862D090E294E187C3020AE37A6D7A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * V_0 = NULL;
	Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * L_0 = (U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass48_0__ctor_mEB4CA588E22FF2DF393E9538B1B32B539D264D00(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		FirebaseAuth_ThrowIfNull_m159C26085D4233394B0753FFEE3814F78B4EDC5B(__this, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * L_2 = V_0;
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_3 = (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *)il2cpp_codegen_object_new(TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_taskCompletionSource_1(L_3);
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_4 = ___credential0;
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_5;
		L_5 = FirebaseAuth_SignInWithCredentialInternalAsync_mC71CB159D75D92180D11F9BD4BFD031F3693841F(__this, L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * L_6 = V_0;
		Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65 * L_7 = (Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65 *)il2cpp_codegen_object_new(Action_1_tD53660E1717F0F23D07D4EDB8280F51CEF543E65_il2cpp_TypeInfo_var);
		Action_1__ctor_m4BB5C7A8777DAAAB4306FA1CB4C5C9D8B222DDC1(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass48_0_U3CSignInWithCredentialAsyncU3Eb__0_mCA4A8712E8862D090E294E187C3020AE37A6D7A9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4BB5C7A8777DAAAB4306FA1CB4C5C9D8B222DDC1_RuntimeMethod_var);
		NullCheck(L_5);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = Task_1_ContinueWith_m24045BAC07B2A7E3DB6C963C6882823955998038(L_5, L_7, /*hidden argument*/Task_1_ContinueWith_m24045BAC07B2A7E3DB6C963C6882823955998038_RuntimeMethod_var);
		U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_10 = L_9->get_taskCompletionSource_1();
		NullCheck(L_10);
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_11;
		L_11 = TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var);
		V_1 = L_11;
		goto IL_0047;
	}

IL_0047:
	{
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_12 = V_1;
		return L_12;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m7452ABAF9D569E8BE2D1C0F05EF0B5AE62B1DED8 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * ___task0, TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * ___taskCompletionSource1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSourceCompat_1_SetException_m08699E46E4B72BFA5D27AAA9DA37064ADDD74A17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m7DD70EBD08B64DEA7D6CB44BFFF85400D2956800_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_3 = ___taskCompletionSource1;
		NullCheck(L_3);
		TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9(L_3, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9_RuntimeMethod_var);
		goto IL_0046;
	}

IL_0016:
	{
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_4 = ___task0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_7 = ___taskCompletionSource1;
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_8 = ___task0;
		NullCheck(L_8);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_9;
		L_9 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_8, /*hidden argument*/NULL);
		TaskCompletionSourceCompat_1_SetException_m08699E46E4B72BFA5D27AAA9DA37064ADDD74A17(L_7, L_9, /*hidden argument*/TaskCompletionSourceCompat_1_SetException_m08699E46E4B72BFA5D27AAA9DA37064ADDD74A17_RuntimeMethod_var);
		goto IL_0046;
	}

IL_0031:
	{
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_10 = ___taskCompletionSource1;
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_11 = ___task0;
		NullCheck(L_11);
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_12;
		L_12 = Task_1_get_Result_m7DD70EBD08B64DEA7D6CB44BFFF85400D2956800(L_11, /*hidden argument*/Task_1_get_Result_m7DD70EBD08B64DEA7D6CB44BFFF85400D2956800_RuntimeMethod_var);
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_13;
		L_13 = FirebaseAuth_UpdateCurrentUser_m02E6A70B9B9BD931CC0921C723D7EFBCB5560813(__this, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4(L_10, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4_RuntimeMethod_var);
	}

IL_0046:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialInternalAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * FirebaseAuth_SignInWithCredentialInternalAsync_mC71CB159D75D92180D11F9BD4BFD031F3693841F (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___credential0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_1 = ___credential0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = Credential_getCPtr_mAA1465ABA33A707DD6C24F3845D74CC080806AAF(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_FirebaseAuth_SignInWithCredentialInternal_mC52A46DC031EAEF23ACD9D9E687BC29D78663AC4(L_0, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_SignInWithCredentialInternalAsync_mC71CB159D75D92180D11F9BD4BFD031F3693841F_RuntimeMethod_var)));
	}

IL_0022:
	{
		intptr_t L_7 = V_0;
		Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_8 = (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 *)il2cpp_codegen_object_new(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		Future_User__ctor_m8CBECD9993EE02DA089D5CCDC2FCFC4F994AA151(L_8, (intptr_t)L_7, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_9;
		L_9 = Future_User_GetTask_m133E2EBC3AF45BA90DC2B4C380B1FCA032DDA4F0(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0031;
	}

IL_0031:
	{
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_10 = V_2;
		return L_10;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * FirebaseAuth_GetAuthInternal_mBF11B5BF490AA96AB4207E582498CD6F64569727 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * V_2 = NULL;
	bool V_3 = false;
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
			L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
			intptr_t L_2;
			L_2 = AuthUtilPINVOKE_FirebaseAuth_GetAuthInternal_m8A2A4D9CDB91C2AA6B0416CE319CA7F2366B8715(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_2;
			intptr_t L_3 = V_1;
			bool L_4;
			L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0028;
			}
		}

IL_001f:
		{
			intptr_t L_5 = V_1;
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_6 = (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *)il2cpp_codegen_object_new(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
			FirebaseAuth__ctor_mFA342FF3F4607CCCA2D73476BAEB7A6207C9F4B7(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
			G_B4_0 = L_6;
			goto IL_0029;
		}

IL_0028:
		{
			G_B4_0 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B *)(NULL));
		}

IL_0029:
		{
			V_2 = G_B4_0;
			IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
			V_3 = L_7;
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
			Exception_t * L_9;
			L_9 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_GetAuthInternal_mBF11B5BF490AA96AB4207E582498CD6F64569727_RuntimeMethod_var)));
		}

IL_0039:
		{
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_10 = V_2;
			V_4 = L_10;
			IL2CPP_LEAVE(0x44, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		int32_t* L_11 = ___init_result_out1;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_13 = V_4;
		return L_13;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::LogHeartbeatInternal(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_LogHeartbeatInternal_m4C0CD7B379B1229A8F3BF609CC775CC81C2F60D6 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FirebaseAuth_LogHeartbeatInternal_mA2D4B910DD41FB8732CE519993DFE58A4143F078(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_LogHeartbeatInternal_m4C0CD7B379B1229A8F3BF609CC775CC81C2F60D6_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_ReleaseReferenceInternal_mB490E787E92AE01D0D2ED35B264E9F1FD5D76139 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___instance0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_FirebaseAuth_ReleaseReferenceInternal_mB7A8098812B966A0A48CD2647223C38AD9000DEC(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_ReleaseReferenceInternal_mB490E787E92AE01D0D2ED35B264E9F1FD5D76139_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * FirebaseAuth_get_CurrentUserInternal_mB792BA9E27A67C769D02190FC052F58C27C0AAAF (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * V_1 = NULL;
	bool V_2 = false;
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * V_3 = NULL;
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FirebaseAuth_CurrentUserInternal_get_m2696CA750DEBDDC333D5EDDFD4231A45738BC647(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_4 = V_0;
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_5 = (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)il2cpp_codegen_object_new(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_mAE9750F361571711C0780CF1104E8C62093C680F(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_8;
		L_8 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseAuth_get_CurrentUserInternal_mB792BA9E27A67C769D02190FC052F58C27C0AAAF_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_10 = V_3;
		return L_10;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth__cctor_mA44375054C8223D714B5AC91F5B5042AD71C433E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDEF936F70B269990802A1B577AC973427F07F40E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_0 = (Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 *)il2cpp_codegen_object_new(Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDEF936F70B269990802A1B577AC973427F07F40E(L_0, /*hidden argument*/Dictionary_2__ctor_mDEF936F70B269990802A1B577AC973427F07F40E_RuntimeMethod_var);
		((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->set_appCPtrToAuth_10(L_0);
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
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser__ctor_mAE9750F361571711C0780CF1104E8C62093C680F (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_FirebaseUser_SWIGUpcast_mAB2C89094FF396A7C547D95C97FEB1F7CA0E11C7((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		UserInfoInterface__ctor_m5FA4B296F0CF95C555569B5B05F6003D27055976(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseUser_getCPtr_m4DE775495F6A7D508D80E4CCC83CF6684774FC05 (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = L_1->get_swigCPtr_2();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_mBC583FC039EF9AB8871CADF1B2F4493006B0A842 (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = ((UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF *)__this)->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			((UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_FirebaseUser_m2F49CC8A037B4DE1BAB54085C6BE24A999C12AC6(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			bool L_10 = ___disposing0;
			UserInfoInterface_Dispose_mE158FFCC6D734F5D723721C70A02FDD1F35332FE(__this, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x74, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		return;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_PhoneNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_PhoneNumber_m79CD5016DAD0DEC3049E5A8E75BBF5169CDEDC35 (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AuthUtilPINVOKE_FirebaseUser_PhoneNumber_get_m3EE567ADECE50484410EA9735BFC2D887376D15B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseUser_get_PhoneNumber_m79CD5016DAD0DEC3049E5A8E75BBF5169CDEDC35_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_ProviderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_ProviderId_m1601FD518AAFA30F11ACAE29F6C899C4FAE29082 (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AuthUtilPINVOKE_FirebaseUser_ProviderId_get_m650DC0CE047E8716E7ACDD8FE9EAA9F296A83911(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseUser_get_ProviderId_m1601FD518AAFA30F11ACAE29F6C899C4FAE29082_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
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
// System.Void Firebase.Auth.ForceResendingToken::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken__ctor_m4642FF9F6048617134DFC933D55965AAE57226F2 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.ForceResendingToken::getCPtr(Firebase.Auth.ForceResendingToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ForceResendingToken_getCPtr_m0B79391137F6039911648A8C5C72EFAB1694F826 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = L_1->get_swigCPtr_0();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Auth.ForceResendingToken::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken_Finalize_mEFE3C0D2F2E91C8F53AF6B1A93CFA116966E27F7 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		ForceResendingToken_Dispose_mA1866AA7603A5FBAAB05A64C627DBE2163D3EF41(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.ForceResendingToken::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken_Dispose_mE20F2EE7269382E8E63B0E81EAAA5327BF122CF4 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ForceResendingToken_Dispose_mA1866AA7603A5FBAAB05A64C627DBE2163D3EF41(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.ForceResendingToken::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceResendingToken_Dispose_mA1866AA7603A5FBAAB05A64C627DBE2163D3EF41 (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_ForceResendingToken_m93421C0E639F7B03C87BAE52B5C9C0FEA8613922(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3(___key0, NULL);

}
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__ctor_m8CBECD9993EE02DA089D5CCDC2FCFC4F994AA151 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		__this->set_SWIG_CompletionCB_7((SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 *)NULL);
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_Future_User_SWIGUpcast_m9C38253A26DA25E29CC2B5704A0C0F55320847AA((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_Dispose_m332BE65235F93475649F1F0C6599561B9E73662B (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0066;
			}
		}

IL_0028:
		{
			Future_User_SetCompletionData_m0C64EA9F2CF782121110A34F522E004A345726F7(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_6 = ((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0054;
			}
		}

IL_003f:
		{
			((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_Future_User_m20EFC23ACBA8112502F412A598364E722614221D(L_8, /*hidden argument*/NULL);
		}

IL_0054:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_9);
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			bool L_10 = ___disposing0;
			FutureBase_Dispose_mD92D3FE1E216E3FFBE40723A1F3871452931B2AB(__this, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x80, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * Future_User_GetTask_m133E2EBC3AF45BA90DC2B4C380B1FCA032DDA4F0 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m0B54B10D1CE2F9D66BE34A6FB0790950D2221FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * V_0 = NULL;
	bool V_1 = false;
	Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_0 = (U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mD6AF96D5D63DD76B9E5B30B7FEBD216A8220D1E2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_1 = V_0;
		Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_3 = V_0;
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_4 = (TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C *)il2cpp_codegen_object_new(TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m5004FA3B1F1AC44F468F9B26A6804C2ABE06B518_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m5875B3BB003C2B23F08CB99BC79534ABB955A66D(/*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_8 = L_7->get_tcs_1();
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_9;
		L_9 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37(L_8, L_9, /*hidden argument*/TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37_RuntimeMethod_var);
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_11 = L_10->get_tcs_1();
		NullCheck(L_11);
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_12;
		L_12 = TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_inline(L_11, /*hidden argument*/TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_00a0;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_13 = V_0;
		NullCheck(L_13);
		Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_14 = L_13->get_fu_0();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_14, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_17 = V_0;
		NullCheck(L_17);
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_18 = L_17->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_19 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_19, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_18);
		TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37(L_18, L_19, /*hidden argument*/TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37_RuntimeMethod_var);
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_20 = V_0;
		NullCheck(L_20);
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_21 = L_20->get_tcs_1();
		NullCheck(L_21);
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_22;
		L_22 = TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_inline(L_21, /*hidden argument*/TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_00a0;
	}

IL_007a:
	{
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_23 = V_0;
		NullCheck(L_23);
		Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_24 = L_23->get_fu_0();
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_25 = V_0;
		Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * L_26 = (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 *)il2cpp_codegen_object_new(Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450_il2cpp_TypeInfo_var);
		Action__ctor_mF54D8810130AC4F1782F7DFEA044256BEF01FADB(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m0B54B10D1CE2F9D66BE34A6FB0790950D2221FF0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		Future_User_SetOnCompletionCallback_mBE50D5BDA584280F80FEE13B18015CCA6A74A582(L_24, L_26, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * L_27 = V_0;
		NullCheck(L_27);
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_28 = L_27->get_tcs_1();
		NullCheck(L_28);
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_29;
		L_29 = TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_inline(L_28, /*hidden argument*/TaskCompletionSource_1_get_Task_m815E7417C4E3D06DBDF2BC8FC157467EB76876F8_RuntimeMethod_var);
		V_2 = L_29;
		goto IL_00a0;
	}

IL_00a0:
	{
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_30 = V_2;
		return L_30;
	}
}
// System.Void Firebase.Auth.Future_User::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_ThrowIfDisposed_m09A3C21C9FDCE199CB7D1CD56C9E9540619F0E6C (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_ThrowIfDisposed_m09A3C21C9FDCE199CB7D1CD56C9E9540619F0E6C_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_mBE50D5BDA584280F80FEE13B18015CCA6A74A582 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1E71D8819E4ECB7B3FB43954E0436C79D617E0B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD20BAA0188D10720EB2DB64971BC276A2D31034C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Future_User_ThrowIfDisposed_m09A3C21C9FDCE199CB7D1CD56C9E9540619F0E6C(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * L_0 = __this->get_SWIG_CompletionCB_7();
		V_1 = (bool)((((RuntimeObject*)(SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * L_2 = (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_mC609626C03A348165BB23CB6795849FED04ED33C(L_2, NULL, (intptr_t)((intptr_t)Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_2);
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_2 = L_3;
		RuntimeObject * L_4 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
			Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * L_5 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_Callbacks_3();
			V_3 = (bool)((((RuntimeObject*)(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_004f;
			}
		}

IL_0043:
		{
			Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * L_7 = (Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 *)il2cpp_codegen_object_new(Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1E71D8819E4ECB7B3FB43954E0436C79D617E0B8(L_7, /*hidden argument*/Dictionary_2__ctor_m1E71D8819E4ECB7B3FB43954E0436C79D617E0B8_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
			((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->set_Callbacks_3(L_7);
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
			int32_t L_8 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_9);
			V_0 = L_9;
			Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * L_10 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_11 = V_0;
			Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * L_12 = ___userCompletionCallback0;
			NullCheck(L_10);
			Dictionary_2_set_Item_mD20BAA0188D10720EB2DB64971BC276A2D31034C(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_mD20BAA0188D10720EB2DB64971BC276A2D31034C_RuntimeMethod_var);
			IL2CPP_LEAVE(0x75, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_13 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x75, IL_0075)
	}

IL_0075:
	{
		SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * L_14 = __this->get_SWIG_CompletionCB_7();
		int32_t L_15 = V_0;
		intptr_t L_16;
		L_16 = Future_User_SWIG_OnCompletion_m4F87387C003E314EA41944E4C028B3CA2D86B4AD(__this, L_14, L_15, /*hidden argument*/NULL);
		Future_User_SetCompletionData_m0C64EA9F2CF782121110A34F522E004A345726F7(__this, (intptr_t)L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m0C64EA9F2CF782121110A34F522E004A345726F7 (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_User_ThrowIfDisposed_m09A3C21C9FDCE199CB7D1CD56C9E9540619F0E6C(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_User_SWIG_FreeCompletionData_mB483D431EE2D51344C72D759C3851F6F3A9F9C6A(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_mFF818FB0900E7B1D0786D65BA23EF530036F52E3 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9973F600F805F49379A9C365611EFB4FB4C0AD6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m024DBC01D8532732F02031EB2CC56121F256C48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		V_0 = (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
			Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * L_2 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0027;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
			Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * L_3 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_m024DBC01D8532732F02031EB2CC56121F256C48A(L_3, L_4, (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m024DBC01D8532732F02031EB2CC56121F256C48A_RuntimeMethod_var);
			G_B4_0 = ((int32_t)(L_5));
			goto IL_0028;
		}

IL_0027:
		{
			G_B4_0 = 0;
		}

IL_0028:
		{
			V_2 = (bool)G_B4_0;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
			Dictionary_2_tA71092FD54FE1B07F0F4B958D7EDE15A86ED88F8 * L_7 = ((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_8 = ___key0;
			NullCheck(L_7);
			bool L_9;
			L_9 = Dictionary_2_Remove_m9973F600F805F49379A9C365611EFB4FB4C0AD6C(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m9973F600F805F49379A9C365611EFB4FB4C0AD6C_RuntimeMethod_var);
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * L_11 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * L_13 = V_0;
		NullCheck(L_13);
		Action_Invoke_mABB8053BC7349622F1CEEC4E8C526260B52D1CC8(L_13, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m4F87387C003E314EA41944E4C028B3CA2D86B4AD (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_Future_User_SWIG_OnCompletion_mF5530C539FDC946FACE484265909C4EE3E95DB81(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_SWIG_OnCompletion_m4F87387C003E314EA41944E4C028B3CA2D86B4AD_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_7 = V_0;
		V_2 = (intptr_t)L_7;
		goto IL_0022;
	}

IL_0022:
	{
		intptr_t L_8 = V_2;
		return (intptr_t)L_8;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_mB483D431EE2D51344C72D759C3851F6F3A9F9C6A (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Future_User_SWIG_FreeCompletionData_m7184D9856585BBAB8F1DEBF4C778F02C8E520912(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_SWIG_FreeCompletionData_mB483D431EE2D51344C72D759C3851F6F3A9F9C6A_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * Future_User_GetResult_mC377EDE6BFC43F7A5F87A6BB3492547A345A614F (Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * V_1 = NULL;
	bool V_2 = false;
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * V_3 = NULL;
	FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = AuthUtilPINVOKE_Future_User_GetResult_mE1B184111A11193F4BA79EB3C154ED50865AE5A6(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_4 = V_0;
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_5 = (FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)il2cpp_codegen_object_new(FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_mAE9750F361571711C0780CF1104E8C62093C680F(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = ((FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 *)(NULL));
	}

IL_0024:
	{
		V_1 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_8;
		L_8 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_User_GetResult_mC377EDE6BFC43F7A5F87A6BB3492547A345A614F_RuntimeMethod_var)));
	}

IL_0034:
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_9 = V_1;
		V_3 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_10 = V_3;
		return L_10;
	}
}
// System.Void Firebase.Auth.Future_User::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_User__cctor_m947A667E03D1000B0C95798B600A158F8A386258 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE(int32_t ___callbackId0, intptr_t ___credential1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE(___callbackId0, ___credential1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420(int32_t ___callbackId0, char* ___error1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___error1' to managed representation
	String_t* ____error1_unmarshaled = NULL;
	____error1_unmarshaled = il2cpp_codegen_marshal_string_result(___error1);

	// Managed method invocation
	PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420(___callbackId0, ____error1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968(int32_t ___callbackId0, char* ___verificationId1, intptr_t ___token2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___verificationId1' to managed representation
	String_t* ____verificationId1_unmarshaled = NULL;
	____verificationId1_unmarshaled = il2cpp_codegen_marshal_string_result(___verificationId1);

	// Managed method invocation
	PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968(___callbackId0, ____verificationId1_unmarshaled, ___token2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B(int32_t ___callbackId0, char* ___verificationId1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___verificationId1' to managed representation
	String_t* ____verificationId1_unmarshaled = NULL;
	____verificationId1_unmarshaled = il2cpp_codegen_marshal_string_result(___verificationId1);

	// Managed method invocation
	PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B(___callbackId0, ____verificationId1_unmarshaled, NULL);

}
// System.Int32 Firebase.Auth.PhoneAuthProvider::SaveCallbacks(Firebase.Auth.PhoneAuthProvider/VerificationCompleted,Firebase.Auth.PhoneAuthProvider/VerificationFailed,Firebase.Auth.PhoneAuthProvider/CodeSent,Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhoneAuthProvider_SaveCallbacks_mD2BC1DFFA14A209A985E4ADA5A6A05628B2A68C2 (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * ___verificationCompleted0, VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * ___verificationFailed1, CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * ___codeSent2, CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * ___timeOut3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE0000EFFC79D042FC491DC280847005C58EA8FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * V_1 = NULL;
	Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_uidGenerator_0();
		int32_t L_1 = L_0;
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_uidGenerator_0(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		V_0 = L_1;
		PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_2 = (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D *)il2cpp_codegen_object_new(PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D_il2cpp_TypeInfo_var);
		PhoneAuthDelegates__ctor_mFE87E5263EEA175B9B13333C187EA7F64FF15796(L_2, /*hidden argument*/NULL);
		PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_3 = L_2;
		VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * L_4 = ___verificationCompleted0;
		NullCheck(L_3);
		L_3->set_verificationCompleted_0(L_4);
		PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_5 = L_3;
		VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * L_6 = ___verificationFailed1;
		NullCheck(L_5);
		L_5->set_verificationFailed_1(L_6);
		PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_7 = L_5;
		CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * L_8 = ___codeSent2;
		NullCheck(L_7);
		L_7->set_codeSent_2(L_8);
		PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_9 = L_7;
		CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * L_10 = ___timeOut3;
		NullCheck(L_9);
		L_9->set_timeOut_3(L_10);
		V_1 = L_9;
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_11 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
		V_2 = L_11;
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_12 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_12, /*hidden argument*/NULL);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_13 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
		int32_t L_14 = V_0;
		PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_15 = V_1;
		NullCheck(L_13);
		Dictionary_2_set_Item_mE0000EFFC79D042FC491DC280847005C58EA8FEA(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mE0000EFFC79D042FC491DC280847005C58EA8FEA_RuntimeMethod_var);
		IL2CPP_LEAVE(0x57, FINALLY_004f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_16 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		int32_t L_17 = V_0;
		V_3 = L_17;
		goto IL_005b;
	}

IL_005b:
	{
		int32_t L_18 = V_3;
		return L_18;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::VerificationCompletedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE (int32_t ___callbackId0, intptr_t ___credential1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CVerificationCompletedHandlerU3Eb__0_m5B2CF72144EB09F561A89AF169B9823F929C7FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * L_0 = (U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m9C751AE6EB66F38BE93143060D39536DC4330882(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * L_1 = V_0;
		intptr_t L_2 = ___credential1;
		NullCheck(L_1);
		L_1->set_credential_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CVerificationCompletedHandlerU3Eb__0_m5B2CF72144EB09F561A89AF169B9823F929C7FEE_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::VerificationFailedHandler(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420 (int32_t ___callbackId0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CVerificationFailedHandlerU3Eb__0_mACD07B1DB54562472F910C3F10605994357BA731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * L_0 = (U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_m0A0F9C52654A17A12C09DF2C218849E31C5417F7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * L_3 = V_0;
		String_t* L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CVerificationFailedHandlerU3Eb__0_mACD07B1DB54562472F910C3F10605994357BA731_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::CodeSentHandler(System.Int32,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968 (int32_t ___callbackId0, String_t* ___verificationId1, intptr_t ___token2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCodeSentHandlerU3Eb__0_m4E6E7246B0D981D5050D9FC83902D5DDE027EB4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * L_0 = (U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m6339FDEC8F4757277D2D59DE1E37E872EB117392(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * L_1 = V_0;
		intptr_t L_2 = ___token2;
		NullCheck(L_1);
		L_1->set_token_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * L_5 = V_0;
		String_t* L_6 = ___verificationId1;
		NullCheck(L_5);
		L_5->set_verificationId_2(L_6);
		U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CCodeSentHandlerU3Eb__0_m4E6E7246B0D981D5050D9FC83902D5DDE027EB4F_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::TimeOutHandler(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B (int32_t ___callbackId0, String_t* ___verificationId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CTimeOutHandlerU3Eb__0_mC311EE5476139BE9D5A87A405BC834A89378846A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * L_0 = (U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass14_0__ctor_m6C880E1C26074D40D6E27F1DAE36E995F5E88E23(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * L_3 = V_0;
		String_t* L_4 = ___verificationId1;
		NullCheck(L_3);
		L_3->set_verificationId_1(L_4);
		U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass14_0_U3CTimeOutHandlerU3Eb__0_mC311EE5476139BE9D5A87A405BC834A89378846A_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::InitializeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_InitializeCallbacks_m8E667B4C844DB4C59D263F52637D6BA76A605028 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		bool L_0 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_callbacksInitialized_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_callbacksInitialized_7((bool)1);
		VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * L_2 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_verificationCompletedDelegate_3();
		VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * L_3 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_verificationFailedDelegate_4();
		CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * L_4 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_codeSentDelegate_5();
		TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * L_5 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_timeOutDelegate_6();
		PhoneAuthProviderInternal_SetCallbacks_mA45D605D6DB7630316AF456F43DD7F8709D65A2F(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::VerifyPhoneNumber(System.String,System.UInt32,Firebase.Auth.ForceResendingToken,Firebase.Auth.PhoneAuthProvider/VerificationCompleted,Firebase.Auth.PhoneAuthProvider/VerificationFailed,Firebase.Auth.PhoneAuthProvider/CodeSent,Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_VerifyPhoneNumber_m3B8B0A7C46F7DE5DB63FAFD615B0B5B3C2524AB8 (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * __this, String_t* ___phoneNumber0, uint32_t ___autoVerifyTimeOutMs1, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___forceResendingToken2, VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * ___verificationCompleted3, VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * ___verificationFailed4, CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * ___codeSent5, CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * ___codeAutoRetrievalTimeOut6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * L_0 = ___verificationCompleted3;
		VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * L_1 = ___verificationFailed4;
		CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * L_2 = ___codeSent5;
		CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * L_3 = ___codeAutoRetrievalTimeOut6;
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = PhoneAuthProvider_SaveCallbacks_mD2BC1DFFA14A209A985E4ADA5A6A05628B2A68C2(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_5 = __this->get_InternalProvider_8();
		String_t* L_6 = ___phoneNumber0;
		uint32_t L_7 = ___autoVerifyTimeOutMs1;
		ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_8 = ___forceResendingToken2;
		int32_t L_9 = V_0;
		NullCheck(L_5);
		intptr_t L_10;
		L_10 = PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m3C7DA2CDE3D5F8DDC646D39DA0552E5E8B82C7BF(L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_11 = __this->get_cppListeners_2();
		V_2 = L_11;
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_12 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_12, /*hidden argument*/NULL);
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_13 = __this->get_cppListeners_2();
		int32_t L_14 = V_0;
		intptr_t L_15 = V_1;
		NullCheck(L_13);
		Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21(L_13, L_14, (intptr_t)L_15, /*hidden argument*/Dictionary_2_Add_mDB742E6EEE659035EC84EEE04C37E9AFF78C7F21_RuntimeMethod_var);
		IL2CPP_LEAVE(0x47, FINALLY_003f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_16 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::.ctor(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider__ctor_mC9D9B9B2EDAC80204FFDA3FBA2D389C2B6CA76BB (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_0 = (Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C *)il2cpp_codegen_object_new(Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059(L_0, /*hidden argument*/Dictionary_2__ctor_m72E65B431C2E7F69C13FEAFEF075E0CE5D035059_RuntimeMethod_var);
		__this->set_cppListeners_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		PhoneAuthProvider_InitializeCallbacks_m8E667B4C844DB4C59D263F52637D6BA76A605028(/*hidden argument*/NULL);
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_1 = ___auth0;
		PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_2;
		L_2 = PhoneAuthProviderInternal_GetInstance_m59674004BD90A667C8E53D39D3DBF20A6B2A6416(L_1, /*hidden argument*/NULL);
		__this->set_InternalProvider_8(L_2);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider_Dispose_m70FB1552D99860883E1AB6BA55EC0BBA1477BBB0 (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * V_0 = NULL;
	Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877  V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_0 = __this->get_cppListeners_2();
		V_0 = L_0;
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_2 = __this->get_cppListeners_2();
			NullCheck(L_2);
			ValueCollection_t43689C6E9C192BB664972EDC75B1B3EDB21DC019 * L_3;
			L_3 = Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921(L_2, /*hidden argument*/Dictionary_2_get_Values_m627F3A15A5757D449F708B76E27EEE69BB32F921_RuntimeMethod_var);
			NullCheck(L_3);
			Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877  L_4;
			L_4 = ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7(L_3, /*hidden argument*/ValueCollection_GetEnumerator_mC1A8D36555B50EB37C08679E4912C53CEE1A45E7_RuntimeMethod_var);
			V_1 = L_4;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_003b;
			}

IL_0024:
			{
				intptr_t L_5;
				L_5 = Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_inline((Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_RuntimeMethod_var);
				V_2 = (intptr_t)L_5;
				PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_6 = __this->get_InternalProvider_8();
				intptr_t L_7 = V_2;
				NullCheck(L_6);
				PhoneAuthProviderInternal_DestroyListenerImplInternal_mD78DEACD485D47657D99C436B76124FCD3BE2D13(L_6, (intptr_t)L_7, /*hidden argument*/NULL);
			}

IL_003b:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049((Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m615FC3CF5829C21A79AC1BAEE3B6B57AB2FC8049_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0024;
				}
			}

IL_0044:
			{
				IL2CPP_LEAVE(0x55, FINALLY_0046);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0046;
		}

FINALLY_0046:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A((Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m243DF97B95CAD2B495D4682B94C3B8AA6994175A_RuntimeMethod_var);
			IL2CPP_END_FINALLY(70)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(70)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x55, IL_0055)
		}

IL_0055:
		{
			Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_9 = __this->get_cppListeners_2();
			NullCheck(L_9);
			Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166(L_9, /*hidden argument*/Dictionary_2_Clear_m2D77CC1A1FCB7B437A022E5324D25D2D1A603166_RuntimeMethod_var);
			PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_10 = __this->get_InternalProvider_8();
			NullCheck(L_10);
			PhoneAuthProviderInternal_Dispose_m7CB79A779BC66D070816AC03ED987E2975FB21F3(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		Dictionary_2_t1554B896B18051EDBEF794B1CD3874DD50DE9D7C * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
	}

IL_007f:
	{
		return;
	}
}
// Firebase.Auth.PhoneAuthProvider Firebase.Auth.PhoneAuthProvider::GetInstance(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * PhoneAuthProvider_GetInstance_mB0807D64537643FCD057FCF25F8865794A329CDE (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m89F7EAA925E8B1FCE09FFC33B899A19CC6A3BD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0F68A723CB89DD21993EB3C2876E0F151C067796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * V_0 = NULL;
	PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * V_1 = NULL;
	bool V_2 = false;
	PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * L_0 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_CachedProviders_9();
		V_0 = L_0;
		Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * L_2 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_CachedProviders_9();
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_3 = ___auth0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m0F68A723CB89DD21993EB3C2876E0F151C067796(L_2, L_3, (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0F68A723CB89DD21993EB3C2876E0F151C067796_RuntimeMethod_var);
			V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0025:
		{
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_6 = ___auth0;
			PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * L_7 = (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 *)il2cpp_codegen_object_new(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			PhoneAuthProvider__ctor_mC9D9B9B2EDAC80204FFDA3FBA2D389C2B6CA76BB(L_7, L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * L_8 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_CachedProviders_9();
			FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_9 = ___auth0;
			PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * L_10 = V_1;
			NullCheck(L_8);
			Dictionary_2_Add_m89F7EAA925E8B1FCE09FFC33B899A19CC6A3BD83(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m89F7EAA925E8B1FCE09FFC33B899A19CC6A3BD83_RuntimeMethod_var);
		}

IL_003b:
		{
			PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * L_11 = V_1;
			V_3 = L_11;
			IL2CPP_LEAVE(0x47, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * L_12 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * L_13 = V_3;
		return L_13;
	}
}
// Firebase.Auth.Credential Firebase.Auth.PhoneAuthProvider::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * PhoneAuthProvider_GetCredential_m61B18306BD081335B8E40B3AEB5E2C59DFF81876 (PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3 * __this, String_t* ___verificationId0, String_t* ___verificationCode1, const RuntimeMethod* method)
{
	Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * V_0 = NULL;
	{
		PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_0 = __this->get_InternalProvider_8();
		String_t* L_1 = ___verificationId0;
		String_t* L_2 = ___verificationCode1;
		NullCheck(L_0);
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_3;
		L_3 = PhoneAuthProviderInternal_GetCredential_m5FBB8AB8F20679BA899E6ADA4496395C81AE71EA(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProvider__cctor_m699266FDBAECCF47A5EB1142CCD246F18F872F8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m306EFC8D74490C055030A2CA2B2351A948B76947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA2B5325ECE3ABEC43FC14FF9FF855CD50D53B891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_uidGenerator_0(0);
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_0 = (Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 *)il2cpp_codegen_object_new(Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m306EFC8D74490C055030A2CA2B2351A948B76947(L_0, /*hidden argument*/Dictionary_2__ctor_m306EFC8D74490C055030A2CA2B2351A948B76947_RuntimeMethod_var);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_authCallbacks_1(L_0);
		VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * L_1 = (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 *)il2cpp_codegen_object_new(VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6_il2cpp_TypeInfo_var);
		VerificationCompletedDelegate__ctor_mE641599675A073B7E8FAFD885AB57E249AEC36A5(L_1, NULL, (intptr_t)((intptr_t)PhoneAuthProvider_VerificationCompletedHandler_mB143957F152913138F01CDC8C2A62D1A521602BE_RuntimeMethod_var), /*hidden argument*/NULL);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_verificationCompletedDelegate_3(L_1);
		VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * L_2 = (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 *)il2cpp_codegen_object_new(VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87_il2cpp_TypeInfo_var);
		VerificationFailedDelegate__ctor_m74160E9BCBE04C94CBAE4ADFE644D22FDA5AF325(L_2, NULL, (intptr_t)((intptr_t)PhoneAuthProvider_VerificationFailedHandler_m12E81C7407094B7B63A9EA42B2EBED2C1FEC7420_RuntimeMethod_var), /*hidden argument*/NULL);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_verificationFailedDelegate_4(L_2);
		CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * L_3 = (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 *)il2cpp_codegen_object_new(CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56_il2cpp_TypeInfo_var);
		CodeSentDelegate__ctor_m80E139870E8E882A381E94F0F3700D901188EC5C(L_3, NULL, (intptr_t)((intptr_t)PhoneAuthProvider_CodeSentHandler_mB663869D8D6FD7B7E3344A33BE0271DE94A26968_RuntimeMethod_var), /*hidden argument*/NULL);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_codeSentDelegate_5(L_3);
		TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * L_4 = (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 *)il2cpp_codegen_object_new(TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222_il2cpp_TypeInfo_var);
		TimeOutDelegate__ctor_m84B48C02139A4720066445F51B4C6F2B4F95C10C(L_4, NULL, (intptr_t)((intptr_t)PhoneAuthProvider_TimeOutHandler_m1E96EB3DC85CA39FFD8F2EFE21D38FC78045196B_RuntimeMethod_var), /*hidden argument*/NULL);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_timeOutDelegate_6(L_4);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_callbacksInitialized_7((bool)0);
		Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 * L_5 = (Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2 *)il2cpp_codegen_object_new(Dictionary_2_tDC4011099C74E9099D5E1B3BA1E21A31482593E2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA2B5325ECE3ABEC43FC14FF9FF855CD50D53B891(L_5, /*hidden argument*/Dictionary_2__ctor_mA2B5325ECE3ABEC43FC14FF9FF855CD50D53B891_RuntimeMethod_var);
		((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->set_CachedProviders_9(L_5);
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
// System.Void Firebase.Auth.PhoneAuthProviderInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal__ctor_m0E1CE14C8FB5315C87EA3DB7B772E393381130FF (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_Finalize_m1CDC5F915511C45B930F4044A619A6992226CCC0 (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Auth.PhoneAuthProviderInternal::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_Dispose_m7CB79A779BC66D070816AC03ED987E2975FB21F3 (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Auth.PhoneAuthProviderInternal::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_Dispose_m637389BEB9989AE7A1DBEB1DC704AD0C95FDA2C2 (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0058;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0046;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6 * L_8 = (MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodAccessException_tA3EEE9A166E2EEC8FDFC4F139CF37204C16502B6_il2cpp_TypeInfo_var)));
			MethodAccessException__ctor_m32817FA677AD036178BCE835957A7C84C3096E17(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDABCE729268A676A97D9D1EC324478A8E03CD75)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhoneAuthProviderInternal_Dispose_m637389BEB9989AE7A1DBEB1DC704AD0C95FDA2C2_RuntimeMethod_var)));
		}

IL_0046:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6A, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		return;
	}
}
// Firebase.Auth.Credential Firebase.Auth.PhoneAuthProviderInternal::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * PhoneAuthProviderInternal_GetCredential_m5FBB8AB8F20679BA899E6ADA4496395C81AE71EA (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, String_t* ___verificationId0, String_t* ___verificationCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Credential_tE9C53256D21EB157C9B4F97351173344083241C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * V_0 = NULL;
	bool V_1 = false;
	Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___verificationId0;
		String_t* L_2 = ___verificationCode1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = AuthUtilPINVOKE_PhoneAuthProviderInternal_GetCredential_mB4793592FB263E129D3A81963662D9BA2C6FDDF7(L_0, L_1, L_2, /*hidden argument*/NULL);
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_4 = (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *)il2cpp_codegen_object_new(Credential_tE9C53256D21EB157C9B4F97351173344083241C2_il2cpp_TypeInfo_var);
		Credential__ctor_m0ABFDBA844553C3EF878C83763D87616455AA405(L_4, (intptr_t)L_3, (bool)1, /*hidden argument*/NULL);
		V_0 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_7;
		L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhoneAuthProviderInternal_GetCredential_m5FBB8AB8F20679BA899E6ADA4496395C81AE71EA_RuntimeMethod_var)));
	}

IL_0024:
	{
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_8 = V_0;
		V_2 = L_8;
		goto IL_0028;
	}

IL_0028:
	{
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_9 = V_2;
		return L_9;
	}
}
// Firebase.Auth.PhoneAuthProviderInternal Firebase.Auth.PhoneAuthProviderInternal::GetInstance(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * PhoneAuthProviderInternal_GetInstance_m59674004BD90A667C8E53D39D3DBF20A6B2A6416 (FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * V_0 = NULL;
	bool V_1 = false;
	PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * V_2 = NULL;
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = FirebaseAuth_getCPtr_m4E86CCDEC649579660AB7233221EF7ED0017DD07(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = AuthUtilPINVOKE_PhoneAuthProviderInternal_GetInstance_m51B72ADAEBC79E9490F5F55A8E3D6BE313BDD3AA(L_1, /*hidden argument*/NULL);
		PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_3 = (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B *)il2cpp_codegen_object_new(PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B_il2cpp_TypeInfo_var);
		PhoneAuthProviderInternal__ctor_m0E1CE14C8FB5315C87EA3DB7B772E393381130FF(L_3, (intptr_t)L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhoneAuthProviderInternal_GetInstance_m59674004BD90A667C8E53D39D3DBF20A6B2A6416_RuntimeMethod_var)));
	}

IL_0022:
	{
		PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_7 = V_0;
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * L_8 = V_2;
		return L_8;
	}
}
// System.IntPtr Firebase.Auth.PhoneAuthProviderInternal::VerifyPhoneNumberInternal(System.String,System.UInt32,Firebase.Auth.ForceResendingToken,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m3C7DA2CDE3D5F8DDC646D39DA0552E5E8B82C7BF (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, String_t* ___phone_number0, uint32_t ___auto_verify_time_out_ms1, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___token2, int32_t ___callback_id3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___phone_number0;
		uint32_t L_2 = ___auto_verify_time_out_ms1;
		ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_3 = ___token2;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		L_4 = ForceResendingToken_getCPtr_m0B79391137F6039911648A8C5C72EFAB1694F826(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___callback_id3;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = AuthUtilPINVOKE_PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m87BF98615A1B6904547BFCABE776DB7A5156702F(L_0, L_1, L_2, L_4, L_5, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_9;
		L_9 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhoneAuthProviderInternal_VerifyPhoneNumberInternal_m3C7DA2CDE3D5F8DDC646D39DA0552E5E8B82C7BF_RuntimeMethod_var)));
	}

IL_0026:
	{
		intptr_t L_10 = V_0;
		V_2 = (intptr_t)L_10;
		goto IL_002a;
	}

IL_002a:
	{
		intptr_t L_11 = V_2;
		return (intptr_t)L_11;
	}
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::DestroyListenerImplInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_DestroyListenerImplInternal_mD78DEACD485D47657D99C436B76124FCD3BE2D13 (PhoneAuthProviderInternal_t718DE3503C67693CFB8BC788C39F87478112E33B * __this, intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		intptr_t L_1 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_PhoneAuthProviderInternal_DestroyListenerImplInternal_mB858F15C97DBD7058FB332DB575455CD9F8FB40E(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhoneAuthProviderInternal_DestroyListenerImplInternal_mD78DEACD485D47657D99C436B76124FCD3BE2D13_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal::SetCallbacks(Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate,Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate,Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate,Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthProviderInternal_SetCallbacks_mA45D605D6DB7630316AF456F43DD7F8709D65A2F (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * ___completedCallback0, VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * ___failedCallback1, CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * ___sentCallback2, TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * ___timeOutCallback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * L_0 = ___completedCallback0;
		VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * L_1 = ___failedCallback1;
		CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * L_2 = ___sentCallback2;
		TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * L_3 = ___timeOutCallback3;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_PhoneAuthProviderInternal_SetCallbacks_m66DEB5E3F3A8523528B355CF9DE58D6AEF7C473B(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhoneAuthProviderInternal_SetCallbacks_mA45D605D6DB7630316AF456F43DD7F8709D65A2F_RuntimeMethod_var)));
	}

IL_001a:
	{
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
// System.Void Firebase.Auth.UserInfoInterface::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface__ctor_m5FA4B296F0CF95C555569B5B05F6003D27055976 (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Auth.UserInfoInterface::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Finalize_m92EE080DC867CCA83BD10BA46F95415D567560D0 (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Auth.UserInfoInterface::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_m8B618F0FE8B7B5204A9F143E059CFCE32E629C69 (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.UserInfoInterface::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfoInterface_Dispose_mE158FFCC6D734F5D723721C70A02FDD1F35332FE (UserInfoInterface_t4FE5C7472E65BFC76EDC08F660E2215F5B18FEDF * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_tED0EE5CA3CDD217D3F546C3201EB3FCEC81A12DF_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_delete_UserInfoInterface_m5092BAD57B3EB75470BD3C4FFE66C7540196B807(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mA7BC1526019A141C5C4867E65F6FAC176BE3F1C5 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___applicationDelegate0, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___arithmeticDelegate1, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___divideByZeroDelegate2, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___indexOutOfRangeDelegate3, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___invalidCastDelegate4, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___invalidOperationDelegate5, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___ioDelegate6, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___nullReferenceDelegate7, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___outOfMemoryDelegate8, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___overflowDelegate9, ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "SWIGRegisterExceptionCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AuthUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m87065A170CE1FBF3EFC2A1A30A740B9E88448E45 (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentDelegate0, ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "SWIGRegisterExceptionArgumentCallbacks_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_AuthUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_9 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mDA0D23DB1CB852CC9ADE3A35041E08D900B39D57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_0 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m8DB2AF6165503CFC5E29946AFEC4E0866FC7FFDD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_1 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m6D496B88FC06BD656C9C68D5F41AAC47B8A6C1D0_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_2 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m5C91920A61CCFBE241BE5E9F5EA9C68AC79C327A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_3 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD139356720818382AF58F403C2D1D606DE08FC06_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_4 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m3C586EE7CBB5BEB73D05C26621AC1096DD023171_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_5 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mB789A92FAB71A64B7277DC608AAEF448B5066E37_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_6 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m0B64D0D7E2579A202A82500E53887FF705DE5DE7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_7 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m990D3DEF29C321A382E214C5FEC720D37AFDEA28_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_8 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m544AC3C07042C251390DE9A6083EFF7089D38CEB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_9 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m0B793BDE91D29FF7E685B61AFEAD20FF3DAA9616_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_10 = (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC *)il2cpp_codegen_object_new(ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_mA6078318A8A9F0C15CF369ADB63ABD581A84BD72_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * L_11 = (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mA1FDF2A2F282AA5D7ED2E8262566F9CFE51C51EA(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mD4466B6F2E4D921A6A051020F222D87174AE20AD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * L_12 = (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mA1FDF2A2F282AA5D7ED2E8262566F9CFE51C51EA(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m643EBCBFFF3F5ADB3FB6905EE46A6E9BD7E5AFC7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * L_13 = (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mA1FDF2A2F282AA5D7ED2E8262566F9CFE51C51EA(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m028F50F4328C8D836D2E0C739AE380BB2A6C5747_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_14 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_15 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_16 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_17 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_18 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_19 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_20 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_21 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_22 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_23 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * L_24 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_mA7BC1526019A141C5C4867E65F6FAC176BE3F1C5(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * L_25 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * L_26 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * L_27 = ((SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m87065A170CE1FBF3EFC2A1A30A740B9E88448E45(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mEC45F1C1418B7AB0992D58CEF9D018BBF1BCDC2D (SWIGExceptionHelper_tA12D6D112524F82DC1A676182A23AD8A170E888E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m5875B3BB003C2B23F08CB99BC79534ABB955A66D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_001d:
	{
		bool L_4 = V_0;
		V_3 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var)));
		Exception_t * L_2 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_5 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_6 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_mFC4FD69A0AD78E1A3D705752FF395DDCD53710D1_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t * L_7 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_pendingException_0(L_7);
		RuntimeObject * L_8 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_1 = L_8;
		RuntimeObject * L_9 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x58, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		return;
	}
}
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mD82BF10563B369CC1924C69222FA46DE82DDFAAF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		Exception_t * L_4 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_4;
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeObject * L_5 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_3 = L_5;
		RuntimeObject * L_6 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_6, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		IL2CPP_LEAVE(0x4E, FINALLY_0046);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
	}

IL_004f:
	{
	}

IL_0050:
	{
		Exception_t * L_9 = V_0;
		V_4 = L_9;
		goto IL_0055;
	}

IL_0055:
	{
		Exception_t * L_10 = V_4;
		return L_10;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m7FCCEB1ABB68CE2B57FD620981425EF968FC39FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(0);
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_exceptionsLock_2(NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t1CA37CBC28208D6D24D507FB27ECC4D3E2FA4EAB_il2cpp_TypeInfo_var))->set_exceptionsLock_2(L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m371DB48C11AD3447255059440F4BCC7AF577347A (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "SWIGRegisterStringCallback_AuthUtil", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AuthUtil)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD (String_t* ___cString0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___cString0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m69B9982774CB40CC738BA36C0ED570073FCC17F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * L_0 = (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C *)il2cpp_codegen_object_new(SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m814C6775D7751AA8697CA8E0E8F0C6ECF095C707(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mB2F6891FAB9F5078526653D8197BA0B6563495DD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * L_1 = ((SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m371DB48C11AD3447255059440F4BCC7AF577347A(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m0B2A803056B8D5C03A7243D1B046D95B1BB1C01C (SWIGStringHelper_t3B8CFA185DA8590A25E9AEAF2C6F49441AA83368 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m35F9D181EAC7D74AE810D5202C2718C9914A8304 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * L_0 = (U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 *)il2cpp_codegen_object_new(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m23DF1F4B30988D3F1EE05A3A9B00CA1F7090090F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m23DF1F4B30988D3F1EE05A3A9B00CA1F7090090F (U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::<StateChangedFunction>b__23_0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStateChangedFunctionU3Eb__23_0_mB7180C7ECE81DFE300395D6A478C535CBA2D1145 (U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0->get_stateChangedImpl_7();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_3 = ((FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_3;
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_4 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_5 = ___auth0;
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_6 = ___auth0;
		NullCheck(L_6);
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_7;
		L_7 = FirebaseAuth_get_CurrentUserInternal_mB792BA9E27A67C769D02190FC052F58C27C0AAAF(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_8;
		L_8 = FirebaseAuth_UpdateCurrentUser_m02E6A70B9B9BD931CC0921C723D7EFBCB5560813(L_5, L_7, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x35, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Dictionary_2_t8D4128A1D7C837CE19F6FAF75D5767D7884E8378 * L_9 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_10 = ___auth0;
		NullCheck(L_10);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_11 = L_10->get_stateChangedImpl_7();
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_12 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_13 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_11);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0048:
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_14 = ___auth0;
		NullCheck(L_14);
		L_14->set_persistentLoaded_9((bool)1);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c::<IdTokenChangedFunction>b__24_0(Firebase.Auth.FirebaseAuth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CIdTokenChangedFunctionU3Eb__24_0_m88B524DF71B7296719E4EBE0D7B3DF6D2DDE3581 (U3CU3Ec_t10FF136BF8B025038E4071D18198044D482B2434 * __this, FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = L_0->get_idTokenChangedImpl_8();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_3 = ___auth0;
		NullCheck(L_3);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_4 = L_3->get_idTokenChangedImpl_8();
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_5 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_6 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_4);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m3D65FC66CC7BBCD9EC0F6B5555CC80FBEC89D0D9 (U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m9188EEA4979F2C10B7ADB5E41D707C175C8D1849 (U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass19_1::<GetAuth>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1_U3CGetAuthU3Eb__0_mA406FECDE947BF25735463A01E1E96FA3C1D086D (U3CU3Ec__DisplayClass19_1_t530897A3F5FE3E5D5133C4EF7A184BA26EF6E5F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		U3CU3Ec__DisplayClass19_0_t7394CA3590FF865346F67E75D432528B7CD2A6A4 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = L_1->get_app_1();
		int32_t* L_3 = __this->get_address_of_init_result_0();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B_il2cpp_TypeInfo_var);
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_4;
		L_4 = FirebaseAuth_GetAuthInternal_mBF11B5BF490AA96AB4207E582498CD6F64569727(L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_auth_0(L_4);
		int32_t L_5 = __this->get_init_result_0();
		V_0 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = __this->get_init_result_0();
		InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 * L_8 = (InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_tD2D5F83F3CF001820F246B633E36FDD6E0EDFD75_il2cpp_TypeInfo_var)));
		InitializationException__ctor_mCE6B67DCF469CF7CC9CC8A5C6C2E6CAC73D6366F(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass19_1_U3CGetAuthU3Eb__0_mA406FECDE947BF25735463A01E1E96FA3C1D086D_RuntimeMethod_var)));
	}

IL_003c:
	{
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mEC9DCF875A0BC3B693732BF1F6FA346F3FC825FC (U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_m36CE2B6D42C332A4669CE4C46210942B6A216ACC (U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass22_1::<ForwardStateChange>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1_U3CForwardStateChangeU3Eb__0_m4F901DBA8E2674E89877A286ACF4ECBC1C7B68F1 (U3CU3Ec__DisplayClass22_1_tCC5637B0967A71990738C9AD1238675C0D2E361D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF7794D0D3D424B5A625009ED7C4F144A596889FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass22_0_t99A65DA27AAA967F49945699085E65EE796998B7 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		Action_1_t68F430DA2E5C304CBA4131A01ECD89C18C4953D8 * L_1 = L_0->get_stateChangeClosure_0();
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_2 = __this->get_auth_0();
		NullCheck(L_1);
		Action_1_Invoke_mF7794D0D3D424B5A625009ED7C4F144A596889FD(L_1, L_2, /*hidden argument*/Action_1_Invoke_mF7794D0D3D424B5A625009ED7C4F144A596889FD_RuntimeMethod_var);
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
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_mEB4CA588E22FF2DF393E9538B1B32B539D264D00 (U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<>c__DisplayClass48_0::<SignInWithCredentialAsync>b__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CSignInWithCredentialAsyncU3Eb__0_mCA4A8712E8862D090E294E187C3020AE37A6D7A9 (U3CU3Ec__DisplayClass48_0_tE83961B8F91CE1BF7D531B0FC7792F4B0479E0A5 * __this, Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * ___task0, const RuntimeMethod* method)
{
	{
		FirebaseAuth_t04790EEFE2B951C755A37436920ADFC3FB4F351B * L_0 = __this->get_U3CU3E4__this_0();
		Task_1_t834A55D4E8C78949182AE72375EC05FE7CA9E51C * L_1 = ___task0;
		TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_2 = __this->get_taskCompletionSource_1();
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m7452ABAF9D569E8BE2D1C0F05EF0B5AE62B1DED8(L_0, L_1, L_2, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___authCPtr0);

}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_mB7A5D8BCB4D5788B8CA8D82E1A995895AF930353 (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_m55FFEDB2E9C6A5A4777E4434985803E32FBB92A6 (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authCPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
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
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authCPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authCPtr0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.FirebaseAuth/StateChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChangedDelegate_BeginInvoke_m36B83842646C4C4C10AC806FB4217C83F1777250 (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * __this, intptr_t ___authCPtr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authCPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangedDelegate_EndInvoke_mF05316CFDF79C1E1BFCCA56FC13C30D006134730 (StateChangedDelegate_tD11D30FE7B756045E84E0C6317BB93392FF060E5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.Future_User/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mD6AF96D5D63DD76B9E5B30B7FEBD216A8220D1E2 (U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User/<>c__DisplayClass4_0::<GetTask>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m0B54B10D1CE2F9D66BE34A6FB0790950D2221FF0 (U3CU3Ec__DisplayClass4_0_t813B6694D7ABE627AD71E8EF0CD77F9BAF5BEAA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_0, /*hidden argument*/NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0014:
		{
			TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_3 = __this->get_tcs_1();
			NullCheck(L_3);
			TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9(L_3, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m2558A79F9E9BCA06098FE33443E78C22308B9EB9_RuntimeMethod_var);
			goto IL_0074;
		}

IL_0024:
		{
			Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_4 = __this->get_fu_0();
			NullCheck(L_4);
			int32_t L_5;
			L_5 = FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03(L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			int32_t L_6 = V_1;
			V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_005a;
			}
		}

IL_0039:
		{
			TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_8 = __this->get_tcs_1();
			int32_t L_9 = V_1;
			Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_10 = __this->get_fu_0();
			NullCheck(L_10);
			String_t* L_11;
			L_11 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_10, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_12 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_12, L_9, L_11, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37(L_8, L_12, /*hidden argument*/TaskCompletionSource_1_SetException_mA8D93CA3D6678AFF792ED52897E218949DB5EF37_RuntimeMethod_var);
			goto IL_0073;
		}

IL_005a:
		{
			TaskCompletionSource_1_t4009A77A22BB190ABE039C2CC23E51EE68E62A3C * L_13 = __this->get_tcs_1();
			Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_14 = __this->get_fu_0();
			NullCheck(L_14);
			FirebaseUser_tBDC1178C275CE6B9AB769D67C40C20F36B831BF0 * L_15;
			L_15 = Future_User_GetResult_mC377EDE6BFC43F7A5F87A6BB3492547A345A614F(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4(L_13, L_15, /*hidden argument*/TaskCompletionSource_1_SetResult_m953C0B5C34DAD18D75A39DD968464AE10AAF7BA4_RuntimeMethod_var);
		}

IL_0073:
		{
		}

IL_0074:
		{
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_16 = V_3;
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_17, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		Future_User_tD0968CC0177512A2CE1AA799EA8EB9F8ED1571A8 * L_18 = __this->get_fu_0();
		NullCheck(L_18);
		FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB(L_18, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mF54D8810130AC4F1782F7DFEA044256BEF01FADB (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mABB8053BC7349622F1CEEC4E8C526260B52D1CC8 (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, const RuntimeMethod* method)
{
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.Future_User/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m12FC503D0C2FDF391F9EC4C744E8B269A0A7D342 (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.Auth.Future_User/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_m3904964BF2CD17B1FFAE62D6DE9636C3EDA6BA76 (Action_tC7B980B5A62BD9CF74A94651BE2A3212E2FD3450 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mC609626C03A348165BB23CB6795849FED04ED33C (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m2C16EEAAEF6EC222C0CEDCF24FF919B3C9B85922 (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * __this, int32_t ___index0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.Future_User/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m93677CE62C1E133AA1B5A3902A4064C7F9F547AC (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m3714D7C9B825CC2E0EA5F0DC271B4CCB4AD1A632 (SWIG_CompletionDelegate_t2E17FAD922D5DA81EB07439B3CBBC373D73BF686 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9C751AE6EB66F38BE93143060D39536DC4330882 (U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass11_0::<VerificationCompletedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CVerificationCompletedHandlerU3Eb__0_m5B2CF72144EB09F561A89AF169B9823F929C7FEE (U3CU3Ec__DisplayClass11_0_t028818F77D6AD441FFAF70D61B8FB5E93C958594 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Credential_tE9C53256D21EB157C9B4F97351173344083241C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * V_0 = NULL;
	Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * V_1 = NULL;
	PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		intptr_t L_0 = __this->get_credential_0();
		Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_1 = (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *)il2cpp_codegen_object_new(Credential_tE9C53256D21EB157C9B4F97351173344083241C2_il2cpp_TypeInfo_var);
		Credential__ctor_m0ABFDBA844553C3EF878C83763D87616455AA405(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_2 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
		V_1 = L_2;
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_4 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
			int32_t L_5 = __this->get_callbackId_1();
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360(L_4, L_5, (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_0030:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_7 = V_2;
			NullCheck(L_7);
			VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * L_8 = L_7->get_verificationCompleted_0();
			G_B4_0 = ((!(((RuntimeObject*)(VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_003c;
		}

IL_003b:
		{
			G_B4_0 = 0;
		}

IL_003c:
		{
			V_3 = (bool)G_B4_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0051;
			}
		}

IL_0040:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_10 = V_2;
			NullCheck(L_10);
			VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * L_11 = L_10->get_verificationCompleted_0();
			Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_12 = V_0;
			NullCheck(L_11);
			VerificationCompleted_Invoke_mE026B473704253E6D91136145799E33319C260F1(L_11, L_12, /*hidden argument*/NULL);
			goto IL_005a;
		}

IL_0051:
		{
			Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * L_13 = V_0;
			NullCheck(L_13);
			Credential_Dispose_m8230F895334F2724521CE94DF34A987FC26D093E(L_13, /*hidden argument*/NULL);
		}

IL_005a:
		{
			IL2CPP_LEAVE(0x65, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_14 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(93)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
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
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m0A0F9C52654A17A12C09DF2C218849E31C5417F7 (U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass12_0::<VerificationFailedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CVerificationFailedHandlerU3Eb__0_mACD07B1DB54562472F910C3F10605994357BA731 (U3CU3Ec__DisplayClass12_0_tB8B559E2604DE2E03D83461E1E49D0BFA70B8FDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * V_0 = NULL;
	PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_0 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
		V_0 = L_0;
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_2 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
			int32_t L_3 = __this->get_callbackId_0();
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360(L_2, L_3, (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0023:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_5 = V_1;
			NullCheck(L_5);
			VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * L_6 = L_5->get_verificationFailed_1();
			G_B4_0 = ((!(((RuntimeObject*)(VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_002f;
		}

IL_002e:
		{
			G_B4_0 = 0;
		}

IL_002f:
		{
			V_2 = (bool)G_B4_0;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0047;
			}
		}

IL_0033:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_8 = V_1;
			NullCheck(L_8);
			VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * L_9 = L_8->get_verificationFailed_1();
			String_t* L_10 = __this->get_error_1();
			NullCheck(L_9);
			VerificationFailed_Invoke_mA03309AF815F3AC4BD68B5642ABE32BE7141CFDC(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x52, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
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
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m6339FDEC8F4757277D2D59DE1E37E872EB117392 (U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass13_0::<CodeSentHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCodeSentHandlerU3Eb__0_m4E6E7246B0D981D5050D9FC83902D5DDE027EB4F (U3CU3Ec__DisplayClass13_0_tDBD7A7C86E068BC11DF3C1D832648E9D84BB2B82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * V_0 = NULL;
	Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * V_1 = NULL;
	PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		intptr_t L_0 = __this->get_token_0();
		ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_1 = (ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB *)il2cpp_codegen_object_new(ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB_il2cpp_TypeInfo_var);
		ForceResendingToken__ctor_m4642FF9F6048617134DFC933D55965AAE57226F2(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_2 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
		V_1 = L_2;
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_4 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
			int32_t L_5 = __this->get_callbackId_1();
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360(L_4, L_5, (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_003b;
			}
		}

IL_0030:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_7 = V_2;
			NullCheck(L_7);
			CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * L_8 = L_7->get_codeSent_2();
			G_B4_0 = ((!(((RuntimeObject*)(CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_003c;
		}

IL_003b:
		{
			G_B4_0 = 0;
		}

IL_003c:
		{
			V_3 = (bool)G_B4_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0057;
			}
		}

IL_0040:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_10 = V_2;
			NullCheck(L_10);
			CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * L_11 = L_10->get_codeSent_2();
			String_t* L_12 = __this->get_verificationId_2();
			ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_13 = V_0;
			NullCheck(L_11);
			CodeSent_Invoke_m9B46A824E02F944C90AEA0A22EBFE04FF411F027(L_11, L_12, L_13, /*hidden argument*/NULL);
			goto IL_0060;
		}

IL_0057:
		{
			ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * L_14 = V_0;
			NullCheck(L_14);
			ForceResendingToken_Dispose_mE20F2EE7269382E8E63B0E81EAAA5327BF122CF4(L_14, /*hidden argument*/NULL);
		}

IL_0060:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_15 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
	}

IL_006b:
	{
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
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m6C880E1C26074D40D6E27F1DAE36E995F5E88E23 (U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.PhoneAuthProvider/<>c__DisplayClass14_0::<TimeOutHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CTimeOutHandlerU3Eb__0_mC311EE5476139BE9D5A87A405BC834A89378846A (U3CU3Ec__DisplayClass14_0_tFDF47C5B766F5F13F2571B36BAAB10C82C39A394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * V_0 = NULL;
	PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_0 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
		V_0 = L_0;
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var);
			Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_2 = ((PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_StaticFields*)il2cpp_codegen_static_fields_for(PhoneAuthProvider_tF13AF98F4DB8779823D43E4FCC3B1EE0CB5EC7A3_il2cpp_TypeInfo_var))->get_authCallbacks_1();
			int32_t L_3 = __this->get_callbackId_0();
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360(L_2, L_3, (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m53823E21AFBF5A2B1015984C3F8D6E9C1F7D3360_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0023:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_5 = V_1;
			NullCheck(L_5);
			CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * L_6 = L_5->get_timeOut_3();
			G_B4_0 = ((!(((RuntimeObject*)(CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_002f;
		}

IL_002e:
		{
			G_B4_0 = 0;
		}

IL_002f:
		{
			V_2 = (bool)G_B4_0;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0047;
			}
		}

IL_0033:
		{
			PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * L_8 = V_1;
			NullCheck(L_8);
			CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * L_9 = L_8->get_timeOut_3();
			String_t* L_10 = __this->get_verificationId_1();
			NullCheck(L_9);
			CodeAutoRetrievalTimeOut_Invoke_m9CCDBF648B5A159EADFE8A0A1CEA56F0B2EB932E(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x52, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Dictionary_2_t6B04572002EA2628596107341C0F5ED163E8D900 * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 (CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * __this, String_t* ___verificationId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___verificationId0' to native representation
	char* ____verificationId0_marshaled = NULL;
	____verificationId0_marshaled = il2cpp_codegen_marshal_string(___verificationId0);

	// Native function invocation
	il2cppPInvokeFunc(____verificationId0_marshaled);

	// Marshaling cleanup of parameter '___verificationId0' native representation
	il2cpp_codegen_marshal_free(____verificationId0_marshaled);
	____verificationId0_marshaled = NULL;

}
// System.Void Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeAutoRetrievalTimeOut__ctor_mA6EF8EB445E38F9A9F4034BB5B6B8B186BE50A51 (CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeAutoRetrievalTimeOut_Invoke_m9CCDBF648B5A159EADFE8A0A1CEA56F0B2EB932E (CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * __this, String_t* ___verificationId0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___verificationId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___verificationId0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___verificationId0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___verificationId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___verificationId0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___verificationId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___verificationId0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___verificationId0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___verificationId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___verificationId0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___verificationId0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___verificationId0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___verificationId0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodeAutoRetrievalTimeOut_BeginInvoke_m08548FD37BFA6B826EF89F4D9517CE1EBEE2E131 (CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * __this, String_t* ___verificationId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___verificationId0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.PhoneAuthProvider/CodeAutoRetrievalTimeOut::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeAutoRetrievalTimeOut_EndInvoke_m49437797B17F48C40BA47EB0D8ABA8E851A94ED9 (CodeAutoRetrievalTimeOut_t59A4C7CEE701E56582EBC0B536523F9560DA8441 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.PhoneAuthProvider/CodeSent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSent__ctor_m55BC90B524CFF863369C76C5FD3FDF4B2C258279 (CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProvider/CodeSent::Invoke(System.String,Firebase.Auth.ForceResendingToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSent_Invoke_m9B46A824E02F944C90AEA0A22EBFE04FF411F027 (CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * __this, String_t* ___verificationId0, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___forceResendingToken1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___verificationId0, ___forceResendingToken1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___verificationId0, ___forceResendingToken1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(targetMethod, ___verificationId0, ___forceResendingToken1);
					else
						GenericVirtActionInvoker1< ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(targetMethod, ___verificationId0, ___forceResendingToken1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___verificationId0, ___forceResendingToken1);
					else
						VirtActionInvoker1< ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___verificationId0, ___forceResendingToken1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___verificationId0, ___forceResendingToken1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(targetMethod, targetThis, ___verificationId0, ___forceResendingToken1);
					else
						GenericVirtActionInvoker2< String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(targetMethod, targetThis, ___verificationId0, ___forceResendingToken1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___verificationId0, ___forceResendingToken1);
					else
						VirtActionInvoker2< String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___verificationId0, ___forceResendingToken1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___verificationId0, ___forceResendingToken1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___verificationId0, ___forceResendingToken1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProvider/CodeSent::BeginInvoke(System.String,Firebase.Auth.ForceResendingToken,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodeSent_BeginInvoke_m460AE1B4D2CD46748B039A4C9C19C05A52A3BF02 (CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * __this, String_t* ___verificationId0, ForceResendingToken_t8FF2307036E7C3D6A6D9BF2C255951E7892E4CCB * ___forceResendingToken1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___verificationId0;
	__d_args[1] = ___forceResendingToken1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Auth.PhoneAuthProvider/CodeSent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSent_EndInvoke_mAB066C0375E33CEA99823FA91B84C8DCD5A8E247 (CodeSent_t9E5AE23156710EBF0C283B5B0C76C806E621AB62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Auth.PhoneAuthProvider/PhoneAuthDelegates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhoneAuthDelegates__ctor_mFE87E5263EEA175B9B13333C187EA7F64FF15796 (PhoneAuthDelegates_t0F3496EAD801598EC8E89DA2F3981A8C4A16A99D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompleted__ctor_m253A70F7E989572933E51D55ACA8860F300078D8 (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationCompleted::Invoke(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompleted_Invoke_mE026B473704253E6D91136145799E33319C260F1 (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * __this, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___credential0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___credential0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___credential0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___credential0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___credential0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___credential0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___credential0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___credential0, targetMethod);
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
						GenericInterfaceActionInvoker1< Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * >::Invoke(targetMethod, targetThis, ___credential0);
					else
						GenericVirtActionInvoker1< Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * >::Invoke(targetMethod, targetThis, ___credential0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___credential0);
					else
						VirtActionInvoker1< Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___credential0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___credential0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___credential0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProvider/VerificationCompleted::BeginInvoke(Firebase.Auth.Credential,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerificationCompleted_BeginInvoke_mF385937A3551399A2574545C92A46E133F4861FE (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * __this, Credential_tE9C53256D21EB157C9B4F97351173344083241C2 * ___credential0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___credential0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompleted_EndInvoke_m0F23BA95FE4B8F88B65AA220CC3E9B16850A70F4 (VerificationCompleted_t22DCF2C4B28A0958E24FE8F668233C42549BE720 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C (VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationFailed::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailed__ctor_m27A76AD1B542039D027D96A4B6D33EAE41F42AE0 (VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationFailed::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailed_Invoke_mA03309AF815F3AC4BD68B5642ABE32BE7141CFDC (VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * __this, String_t* ___error0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProvider/VerificationFailed::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerificationFailed_BeginInvoke_mE3A4F753CA72EBC781E47D0E701CADC2FBF87368 (VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * __this, String_t* ___error0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.PhoneAuthProvider/VerificationFailed::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailed_EndInvoke_m97E1A9D84A2590D6846352B73DE2626C1A737345 (VerificationFailed_tF86A10CCED321DF0D5197924E43240068993799C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * __this, int32_t ___callbackId0, String_t* ___verificationId1, intptr_t ___token2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___verificationId1' to native representation
	char* ____verificationId1_marshaled = NULL;
	____verificationId1_marshaled = il2cpp_codegen_marshal_string(___verificationId1);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ____verificationId1_marshaled, ___token2);

	// Marshaling cleanup of parameter '___verificationId1' native representation
	il2cpp_codegen_marshal_free(____verificationId1_marshaled);
	____verificationId1_marshaled = NULL;

}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSentDelegate__ctor_m80E139870E8E882A381E94F0F3700D901188EC5C (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate::Invoke(System.Int32,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSentDelegate_Invoke_mD642D0C4F961C72D14A01C58D411142E3E097319 (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * __this, int32_t ___callbackId0, String_t* ___verificationId1, intptr_t ___token2, const RuntimeMethod* method)
{
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
				typedef void (*FunctionPointerType) (int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___verificationId1, ___token2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___verificationId1, ___token2, targetMethod);
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
						GenericInterfaceActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___verificationId1, ___token2);
					else
						GenericVirtActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___verificationId1, ___token2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___verificationId1, ___token2);
					else
						VirtActionInvoker3< int32_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___verificationId1, ___token2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___verificationId1, ___token2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate::BeginInvoke(System.Int32,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CodeSentDelegate_BeginInvoke_mA3A20D4B8BC22B8922A128C752CC57D78F951880 (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * __this, int32_t ___callbackId0, String_t* ___verificationId1, intptr_t ___token2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = ___verificationId1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___token2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/CodeSentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeSentDelegate_EndInvoke_mA759D761867D9B78871254B83D0301BA7ECDCCEB (CodeSentDelegate_tA7130E55CC098D765CF8ABB035821315D5726C56 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * __this, int32_t ___callbackId0, String_t* ___verificationId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___verificationId1' to native representation
	char* ____verificationId1_marshaled = NULL;
	____verificationId1_marshaled = il2cpp_codegen_marshal_string(___verificationId1);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ____verificationId1_marshaled);

	// Marshaling cleanup of parameter '___verificationId1' native representation
	il2cpp_codegen_marshal_free(____verificationId1_marshaled);
	____verificationId1_marshaled = NULL;

}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeOutDelegate__ctor_m84B48C02139A4720066445F51B4C6F2B4F95C10C (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate::Invoke(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeOutDelegate_Invoke_m0A7C2A07D44CB49EA40BFF78B5057C8764E7D5AA (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * __this, int32_t ___callbackId0, String_t* ___verificationId1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___verificationId1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___verificationId1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___verificationId1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___verificationId1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___verificationId1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___verificationId1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___verificationId1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeOutDelegate_BeginInvoke_m385981B64242C519F753414016B3577D44FE484A (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * __this, int32_t ___callbackId0, String_t* ___verificationId1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = ___verificationId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/TimeOutDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeOutDelegate_EndInvoke_m046FEA45D8C0D1B06EFA413A8FB5B951EF7F2A9E (TimeOutDelegate_tEAEFC6D8913D76E161A35C34BFC5DC415B24F222 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * __this, int32_t ___callbackId0, intptr_t ___credential1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___credential1);

}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompletedDelegate__ctor_mE641599675A073B7E8FAFD885AB57E249AEC36A5 (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompletedDelegate_Invoke_m7C82178F1555266C1F4FEA2D5C4B1211B24C1854 (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * __this, int32_t ___callbackId0, intptr_t ___credential1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___credential1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___credential1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___credential1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___credential1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___credential1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___credential1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___credential1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerificationCompletedDelegate_BeginInvoke_m8ABA8803D3DB9773D9C0C5B5F0ABC4D7A9B144F5 (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * __this, int32_t ___callbackId0, intptr_t ___credential1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___credential1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationCompletedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationCompletedDelegate_EndInvoke_m5DB616B33D8550E257506C9468E192F78DA78A4E (VerificationCompletedDelegate_tD7578BA47DBA30AA812CF35560E93F7043A7FCC6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * __this, int32_t ___callbackId0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailedDelegate__ctor_m74160E9BCBE04C94CBAE4ADFE644D22FDA5AF325 (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate::Invoke(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailedDelegate_Invoke_m76A08353FD24C7F53E9A79811BD17D9E5A78A710 (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * __this, int32_t ___callbackId0, String_t* ___error1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerificationFailedDelegate_BeginInvoke_mDF812F7C2ABB8AE5CBDDF4A7F1A8DD119A907DA9 (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * __this, int32_t ___callbackId0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Auth.PhoneAuthProviderInternal/VerificationFailedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationFailedDelegate_EndInvoke_m439DD7003EFF384DAEA19D1C44447AA86BF90FB8 (VerificationFailedDelegate_tC439E5F9AFC0A94DEBF862B98ADA0A614EFE2E87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mA1FDF2A2F282AA5D7ED2E8262566F9CFE51C51EA (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m42E723A6FFBEBD1BA4DA4010605142173E052242 (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mF2A4BFAB9D38BFCC7E397A60B5155BCBE05102BE (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m99DFF726BDDCE54F96FF9923013D10CB4C78E152 (ExceptionArgumentDelegate_t580240EFCB95C5B432EEA82A849C5BFC5642F900 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mD4883466EE962B2B74A17CC45F8DA6C583727190 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m6E8352C2E29D0E41EBF945A3BE6DC3E827242F88 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * __this, String_t* ___message0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mAE52A337279F614A72D37C149C761A1DF4A20D60 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m79EAF4DDD08C39051C332711E777251C6F7337C0 (ExceptionDelegate_t35E74867421408776C862D0E604271C9A4427DCC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m814C6775D7751AA8697CA8E0E8F0C6ECF095C707 (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mEF0C5C0035EDB38E0B426FB42CD9FA0A44797FC7 (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mC23CCF391077FB0F00744EDA57B8E214A41BE82E (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m2ADCCE950461B501996FEEB0B9594F0CF0520DEE (SWIGStringDelegate_t7B62EBD1C6AC12E93A1848747D7E1423DA66413C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Enumerator_get_Current_m6DDF0EE448B1DAA3EF82E8FEB4566472141EB0A9_gshared_inline (Enumerator_t79746B8F065861C7F7BFF32D71F3AD795116E877 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_currentValue_3();
		return (intptr_t)L_0;
	}
}
