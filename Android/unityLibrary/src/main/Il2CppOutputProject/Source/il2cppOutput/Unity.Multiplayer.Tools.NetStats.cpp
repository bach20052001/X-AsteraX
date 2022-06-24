#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,System.Object>
struct Dictionary_2_t84E9BB5155EFDE39185E74787C9E1B9DAEEA0ABC;
// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48;
// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>
struct Dictionary_2_t41F35CC65F9EDEA2EBB2AF7B75A867842561B4F8;
// System.Collections.Generic.Dictionary`2<System.Object,Unity.Collections.FixedString128Bytes>
struct Dictionary_2_tDBB3AC7B64746E3C077790477B70FC521FCE5816;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>
struct Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Func`2<System.Type,System.String>
struct Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IDictionary_2_tBCD7E0F20AB05AF269F5B7AAB15AC2D91E80371E;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IDictionary_2_tE4933B2E856849F4BD27205E5C3924A8E5CA0586;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IDictionary_2_t88B64E2D274313B1F67EA97B155BA4011E31C691;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IDictionary_2_t85925A4F0A99E235A48763D98226907468E8F496;
// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>
struct IDictionary_2_tDE001801269B60EACAF236F8DC07032AC9649675;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_tB3F4FE9423F20C9D8337F7B224FE58B3F54208E9;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IEnumerable_1_tBCBE7988CA9F9C7CBC510DA80B5231D37D2DF158;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IEnumerable_1_t5D93B842109ACBE479E8E34008B04972DA72749A;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEqualityComparer`1<Unity.Collections.FixedString128Bytes>
struct IEqualityComparer_1_t048052DC15EEA39210FC82D04F6111C9D529D17B;
// System.Collections.Generic.IEqualityComparer`1<Unity.Multiplayer.Tools.NetStats.MetricId>
struct IEqualityComparer_1_t25FE6AB80675FEC2B1E0CFBAA0F7A4A76BF7E3CC;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct IList_1_tDDA02F183759EBB391E77471AB0EA9B94DF4DEC9;
// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>
struct IMetric_1_t9969628B11EC5EA7BD7A9EE5773278B47F905CBD;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Linq.IOrderedEnumerable`1<System.Type>
struct IOrderedEnumerable_1_tA0D51EAC6ADA130389EDAAFD576F4483564B654F;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_t72D108A371510A87097A1EAC94C2E67AEFC1EE1C;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_t0F50FEF148CE67FB3F747F56D9F50C84B1DC5531;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_t4571D1C30D93A7DDC080730ED16FE0F9C9E2E7D7;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyList_1_tE93F453E71C0FB4C289B25459962BA889E2DA2E3;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyList_1_t5D70A1E02F76C9D4D918AAB6B54337A9D6E3F812;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct IReadOnlyList_1_t5D7FE3DB42D5B73F0AE382E1A057E0FB14C3281A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct KeyCollection_t568DDE1A0EBEEF5BCE6E0EAF8797F88CAEF13424;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct KeyCollection_tDA53739EBCD1CFB24EBAEDA49CB889A4AF20DFD0;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct KeyCollection_tBC89640BF8814E98FA9859C68E59AEFC3AD4C5A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct KeyCollection_t371355D247E0776614C3B78AE316E0AEA312EA9E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct KeyCollection_t458023529220EDA6F482A62999EECF9C217F2634;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.Collections.FixedString128Bytes>
struct KeyCollection_tFE2CB038684AB9152D4A06AD399FDD67263F6DEC;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>
struct ReadOnlyDictionary_2_t9F8DC88A36607E07A4077FF68008D04653461B1B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct ValueCollection_t61ADA82070AB2A56C1EAA0350BE05504729F483D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ValueCollection_t30B1FB25EAE02131E14648991C7CCD1E84E33026;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ValueCollection_t6F6D89721DA8FCDAF94507378CCB8CB319BBF58C;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ValueCollection_t948B78CE53206A68A58E791F424DF718938E99F5;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ValueCollection_t7ABF8C88B1F631CB8095C2853E94CA1B7B77ED3D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ValueCollection_t631BF4F9D4447D4CF99F0D0124168A5B340D0D3D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ValueCollection_t87521BC8E45EB986423FFA2C3B9405E63B2A3D2A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ValueCollection_t73A757A2361094F2CF3274E08A5FE9FA739C183A;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ValueCollection_tC67A64F5E3F5CFD1E0D4EDE72740526F49DBFFCF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.Collections.FixedString128Bytes>
struct ValueCollection_t2AC931FBDE046D68FA893BC848FEBD6CB3CA5696;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>[]
struct EntryU5BU5D_t1FBD11C10AA0CF978AFB525D7BFCEA6E34D58904;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>[]
struct EntryU5BU5D_tE9B91CEB6BE50905767F7DD35EC2166C9DD3F197;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>[]
struct EntryU5BU5D_t70C2A816D65A509A0E590B9E15B3CA94BC1D3330;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>[]
struct EntryU5BU5D_t754E51EF3AEF24EAB4BA03061F2E6DA332C76F92;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>[]
struct EntryU5BU5D_tF52A1D4590E9B0F227DCEFC3008EE9C2F35FD8C3;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.Collections.FixedString128Bytes>[]
struct EntryU5BU5D_t105CABD04CBD74A339B4CEF69319BD199FE9D595;
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][]
struct CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// Unity.Multiplayer.Tools.NetStats.MetricKind[][]
struct MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80;
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[]
struct CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635;
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.Multiplayer.Tools.NetStats.IEventMetric[]
struct IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06;
// Unity.Multiplayer.Tools.NetStats.IMetric[]
struct IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver[]
struct IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553;
// Unity.Multiplayer.Tools.NetStats.IResettable[]
struct IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// Unity.Multiplayer.Tools.NetStats.MetricKind[]
struct MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBB9BC2DD93CB008153B2E518DCA4D7E2D26DB21D;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher
struct IMetricDispatcher_tE98FBEDAFD09C978193C1A551821805E39326DE9;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5;
// Unity.Multiplayer.Tools.NetStats.IResettable
struct IResettable_t184C586A55775537B74420529518E3085D1D9161;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t1F8A19168162DB8B539D04520980C7E9C6E23A71;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcher
struct MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1;
// Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute
struct MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F;
// Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute
struct MetricTypeEnumAttribute_t0D19CCE78BC3D9C9B50A836BC36C64D585564162;
// System.ResolveEventHandler
struct ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Unity.Multiplayer.Tools.NetStats.MetricId/<>c
struct U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7BFFD02146B5A5A9BA5F857E75362DE3123A92C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t85925A4F0A99E235A48763D98226907468E8F496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tE4933B2E856849F4BD27205E5C3924A8E5CA0586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tDDA02F183759EBB391E77471AB0EA9B94DF4DEC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t59E5B85D0EF08A14E3655BF98668486E2E0EC1DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tC2448866BAB745333558A42C15D2C757E4EE3E7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t0F50FEF148CE67FB3F747F56D9F50C84B1DC5531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t4571D1C30D93A7DDC080730ED16FE0F9C9E2E7D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t72D108A371510A87097A1EAC94C2E67AEFC1EE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t5D7FE3DB42D5B73F0AE382E1A057E0FB14C3281A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tE93F453E71C0FB4C289B25459962BA889E2DA2E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResettable_t184C586A55775537B74420529518E3085D1D9161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Units_tAC3820CE804F1BFBCF6761A50DB58CAF9C201A58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB966BAD0EC389DCC2620A5EDB92772DF1C0C14E0____270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral96871D276C672785BE299C9D243E065BB938A648;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisType_t_m1B7F52A8BA5C8850CA3BD56DDA479E240C78EE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8C9D9E53601CAE20FB63EE88304685424CB6F142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4C4341EC5A0D6D1BF90D019347807AFC368B40A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7773DC8FF98EA6B242389CBBA3C9658FE8C3EEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m81E452AD8EEAE510878F9AEF380F583039E0471B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE1FCE5A38E4F08969F2D1085D7B77BA11AAE5483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE7FE185C2FBFE7B0BA674FE1F791C96DC2F24F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE8A85A43BDD75D9091F53100132A61FF384EAB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisMemberInfo_t_mBB446BE9BBC8046C811A37FD8F0C6972C35F6E58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisType_t_TisString_t_m785505CA4A26FB05E312F8F3838E893AB774EA19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_m34EC46BDFA9D6B7FF6FEC8531F976DF8F0530B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_mE5D209D28DDB783F4BBF900A858EA3EC4A4AA9D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA6E598F7F9229500DD78C4AA4777BB26265C5D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E12D3644F7E1EAD21100EB82F04AD28E1D691D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5AC51FB97D02E225877A5A89C0377F6201CB52DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m18D37C875E8EEE04D15649EA16219C45A16845CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m4B2A1A65CF1442A5604710E6FA3458AD8292487A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_mCD7BA9C5614585034D99A875FDD9AE9FDB055D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_mF10FD777EDA1EDDDE51ED517FEC76DEC1F9E2F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_0_mD770C0ED44B9CDE09588EEFE753AEEF648880075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_1_m39B6F0DBF3D88ECBF4DA12915BD2730847E29123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_2_m3648DD8A023828CDA9E38F6586F7577248A4E1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MetricTypeEnumAttribute_t0D19CCE78BC3D9C9B50A836BC36C64D585564162_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13;
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
struct MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80;
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635;
struct CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
struct MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD0FB94CD4C9B542C2CBBC48E55C670829BE53BC2 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>
struct Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1FBD11C10AA0CF978AFB525D7BFCEA6E34D58904* ___entries_1;
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
	KeyCollection_t568DDE1A0EBEEF5BCE6E0EAF8797F88CAEF13424 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t61ADA82070AB2A56C1EAA0350BE05504729F483D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___entries_1)); }
	inline EntryU5BU5D_t1FBD11C10AA0CF978AFB525D7BFCEA6E34D58904* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1FBD11C10AA0CF978AFB525D7BFCEA6E34D58904** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1FBD11C10AA0CF978AFB525D7BFCEA6E34D58904* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___keys_7)); }
	inline KeyCollection_t568DDE1A0EBEEF5BCE6E0EAF8797F88CAEF13424 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t568DDE1A0EBEEF5BCE6E0EAF8797F88CAEF13424 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t568DDE1A0EBEEF5BCE6E0EAF8797F88CAEF13424 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ___values_8)); }
	inline ValueCollection_t61ADA82070AB2A56C1EAA0350BE05504729F483D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t61ADA82070AB2A56C1EAA0350BE05504729F483D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t61ADA82070AB2A56C1EAA0350BE05504729F483D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE9B91CEB6BE50905767F7DD35EC2166C9DD3F197* ___entries_1;
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
	KeyCollection_tDA53739EBCD1CFB24EBAEDA49CB889A4AF20DFD0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t30B1FB25EAE02131E14648991C7CCD1E84E33026 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___entries_1)); }
	inline EntryU5BU5D_tE9B91CEB6BE50905767F7DD35EC2166C9DD3F197* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE9B91CEB6BE50905767F7DD35EC2166C9DD3F197** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE9B91CEB6BE50905767F7DD35EC2166C9DD3F197* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___keys_7)); }
	inline KeyCollection_tDA53739EBCD1CFB24EBAEDA49CB889A4AF20DFD0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDA53739EBCD1CFB24EBAEDA49CB889A4AF20DFD0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDA53739EBCD1CFB24EBAEDA49CB889A4AF20DFD0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ___values_8)); }
	inline ValueCollection_t30B1FB25EAE02131E14648991C7CCD1E84E33026 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t30B1FB25EAE02131E14648991C7CCD1E84E33026 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t30B1FB25EAE02131E14648991C7CCD1E84E33026 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t70C2A816D65A509A0E590B9E15B3CA94BC1D3330* ___entries_1;
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
	KeyCollection_tBC89640BF8814E98FA9859C68E59AEFC3AD4C5A4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t948B78CE53206A68A58E791F424DF718938E99F5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___entries_1)); }
	inline EntryU5BU5D_t70C2A816D65A509A0E590B9E15B3CA94BC1D3330* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t70C2A816D65A509A0E590B9E15B3CA94BC1D3330** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t70C2A816D65A509A0E590B9E15B3CA94BC1D3330* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___keys_7)); }
	inline KeyCollection_tBC89640BF8814E98FA9859C68E59AEFC3AD4C5A4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBC89640BF8814E98FA9859C68E59AEFC3AD4C5A4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBC89640BF8814E98FA9859C68E59AEFC3AD4C5A4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ___values_8)); }
	inline ValueCollection_t948B78CE53206A68A58E791F424DF718938E99F5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t948B78CE53206A68A58E791F424DF718938E99F5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t948B78CE53206A68A58E791F424DF718938E99F5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t754E51EF3AEF24EAB4BA03061F2E6DA332C76F92* ___entries_1;
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
	KeyCollection_t371355D247E0776614C3B78AE316E0AEA312EA9E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t631BF4F9D4447D4CF99F0D0124168A5B340D0D3D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___entries_1)); }
	inline EntryU5BU5D_t754E51EF3AEF24EAB4BA03061F2E6DA332C76F92* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t754E51EF3AEF24EAB4BA03061F2E6DA332C76F92** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t754E51EF3AEF24EAB4BA03061F2E6DA332C76F92* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___keys_7)); }
	inline KeyCollection_t371355D247E0776614C3B78AE316E0AEA312EA9E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t371355D247E0776614C3B78AE316E0AEA312EA9E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t371355D247E0776614C3B78AE316E0AEA312EA9E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ___values_8)); }
	inline ValueCollection_t631BF4F9D4447D4CF99F0D0124168A5B340D0D3D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t631BF4F9D4447D4CF99F0D0124168A5B340D0D3D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t631BF4F9D4447D4CF99F0D0124168A5B340D0D3D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF52A1D4590E9B0F227DCEFC3008EE9C2F35FD8C3* ___entries_1;
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
	KeyCollection_t458023529220EDA6F482A62999EECF9C217F2634 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t73A757A2361094F2CF3274E08A5FE9FA739C183A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___entries_1)); }
	inline EntryU5BU5D_tF52A1D4590E9B0F227DCEFC3008EE9C2F35FD8C3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF52A1D4590E9B0F227DCEFC3008EE9C2F35FD8C3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF52A1D4590E9B0F227DCEFC3008EE9C2F35FD8C3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___keys_7)); }
	inline KeyCollection_t458023529220EDA6F482A62999EECF9C217F2634 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t458023529220EDA6F482A62999EECF9C217F2634 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t458023529220EDA6F482A62999EECF9C217F2634 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ___values_8)); }
	inline ValueCollection_t73A757A2361094F2CF3274E08A5FE9FA739C183A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t73A757A2361094F2CF3274E08A5FE9FA739C183A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t73A757A2361094F2CF3274E08A5FE9FA739C183A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>
struct Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t105CABD04CBD74A339B4CEF69319BD199FE9D595* ___entries_1;
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
	KeyCollection_tFE2CB038684AB9152D4A06AD399FDD67263F6DEC * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2AC931FBDE046D68FA893BC848FEBD6CB3CA5696 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___entries_1)); }
	inline EntryU5BU5D_t105CABD04CBD74A339B4CEF69319BD199FE9D595* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t105CABD04CBD74A339B4CEF69319BD199FE9D595** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t105CABD04CBD74A339B4CEF69319BD199FE9D595* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___keys_7)); }
	inline KeyCollection_tFE2CB038684AB9152D4A06AD399FDD67263F6DEC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFE2CB038684AB9152D4A06AD399FDD67263F6DEC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFE2CB038684AB9152D4A06AD399FDD67263F6DEC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ___values_8)); }
	inline ValueCollection_t2AC931FBDE046D68FA893BC848FEBD6CB3CA5696 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2AC931FBDE046D68FA893BC848FEBD6CB3CA5696 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2AC931FBDE046D68FA893BC848FEBD6CB3CA5696 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074, ____items_1)); }
	inline IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06* get__items_1() const { return ____items_1; }
	inline IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074_StaticFields, ____emptyArray_5)); }
	inline IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEventMetricU5BU5D_t36D36C2AC4C99FA4E53FB8A712F4F79B59385C06* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221, ____items_1)); }
	inline IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2* get__items_1() const { return ____items_1; }
	inline IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221_StaticFields, ____emptyArray_5)); }
	inline IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMetricU5BU5D_tAFB30511A1FD796B887C4C7F2919CB289E3823E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646, ____items_1)); }
	inline IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553* get__items_1() const { return ____items_1; }
	inline IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646_StaticFields, ____emptyArray_5)); }
	inline IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMetricObserverU5BU5D_tB0C3517421693F316706FFAE78E314B5BBB08553* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05, ____items_1)); }
	inline IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4* get__items_1() const { return ____items_1; }
	inline IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05_StaticFields, ____emptyArray_5)); }
	inline IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IResettableU5BU5D_t6C9F7230037839C4C4E50F744D13A692778021C4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t6F6D89721DA8FCDAF94507378CCB8CB319BBF58C * ___m_values_2;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D, ___m_values_2)); }
	inline ValueCollection_t6F6D89721DA8FCDAF94507378CCB8CB319BBF58C * get_m_values_2() const { return ___m_values_2; }
	inline ValueCollection_t6F6D89721DA8FCDAF94507378CCB8CB319BBF58C ** get_address_of_m_values_2() { return &___m_values_2; }
	inline void set_m_values_2(ValueCollection_t6F6D89721DA8FCDAF94507378CCB8CB319BBF58C * value)
	{
		___m_values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_2), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t7ABF8C88B1F631CB8095C2853E94CA1B7B77ED3D * ___m_values_2;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8, ___m_values_2)); }
	inline ValueCollection_t7ABF8C88B1F631CB8095C2853E94CA1B7B77ED3D * get_m_values_2() const { return ___m_values_2; }
	inline ValueCollection_t7ABF8C88B1F631CB8095C2853E94CA1B7B77ED3D ** get_address_of_m_values_2() { return &___m_values_2; }
	inline void set_m_values_2(ValueCollection_t7ABF8C88B1F631CB8095C2853E94CA1B7B77ED3D * value)
	{
		___m_values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_2), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t87521BC8E45EB986423FFA2C3B9405E63B2A3D2A * ___m_values_2;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827, ___m_values_2)); }
	inline ValueCollection_t87521BC8E45EB986423FFA2C3B9405E63B2A3D2A * get_m_values_2() const { return ___m_values_2; }
	inline ValueCollection_t87521BC8E45EB986423FFA2C3B9405E63B2A3D2A ** get_address_of_m_values_2() { return &___m_values_2; }
	inline void set_m_values_2(ValueCollection_t87521BC8E45EB986423FFA2C3B9405E63B2A3D2A * value)
	{
		___m_values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_2), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tC67A64F5E3F5CFD1E0D4EDE72740526F49DBFFCF * ___m_values_2;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D, ___m_values_2)); }
	inline ValueCollection_tC67A64F5E3F5CFD1E0D4EDE72740526F49DBFFCF * get_m_values_2() const { return ___m_values_2; }
	inline ValueCollection_tC67A64F5E3F5CFD1E0D4EDE72740526F49DBFFCF ** get_address_of_m_values_2() { return &___m_values_2; }
	inline void set_m_values_2(ValueCollection_tC67A64F5E3F5CFD1E0D4EDE72740526F49DBFFCF * value)
	{
		___m_values_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetStats.EventMetricFactory
struct EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B  : public RuntimeObject
{
public:

public:
};

struct EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory> Unity.Multiplayer.Tools.NetStats.EventMetricFactory::k_FactoriesByName
	Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 * ___k_FactoriesByName_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes> Unity.Multiplayer.Tools.NetStats.EventMetricFactory::k_TypeNames
	Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * ___k_TypeNames_1;

public:
	inline static int32_t get_offset_of_k_FactoriesByName_0() { return static_cast<int32_t>(offsetof(EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_StaticFields, ___k_FactoriesByName_0)); }
	inline Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 * get_k_FactoriesByName_0() const { return ___k_FactoriesByName_0; }
	inline Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 ** get_address_of_k_FactoriesByName_0() { return &___k_FactoriesByName_0; }
	inline void set_k_FactoriesByName_0(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 * value)
	{
		___k_FactoriesByName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FactoriesByName_0), (void*)value);
	}

	inline static int32_t get_offset_of_k_TypeNames_1() { return static_cast<int32_t>(offsetof(EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_StaticFields, ___k_TypeNames_1)); }
	inline Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * get_k_TypeNames_1() const { return ___k_TypeNames_1; }
	inline Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 ** get_address_of_k_TypeNames_1() { return &___k_TypeNames_1; }
	inline void set_k_TypeNames_1(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * value)
	{
		___k_TypeNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_TypeNames_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_3;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_4;
	// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::<ConnectionId>k__BackingField
	uint64_t ___U3CConnectionIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Counters_0() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_Counters_0)); }
	inline RuntimeObject* get_m_Counters_0() const { return ___m_Counters_0; }
	inline RuntimeObject** get_address_of_m_Counters_0() { return &___m_Counters_0; }
	inline void set_m_Counters_0(RuntimeObject* value)
	{
		___m_Counters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Counters_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gauges_1() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_Gauges_1)); }
	inline RuntimeObject* get_m_Gauges_1() const { return ___m_Gauges_1; }
	inline RuntimeObject** get_address_of_m_Gauges_1() { return &___m_Gauges_1; }
	inline void set_m_Gauges_1(RuntimeObject* value)
	{
		___m_Gauges_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gauges_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timers_2() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_Timers_2)); }
	inline RuntimeObject* get_m_Timers_2() const { return ___m_Timers_2; }
	inline RuntimeObject** get_address_of_m_Timers_2() { return &___m_Timers_2; }
	inline void set_m_Timers_2(RuntimeObject* value)
	{
		___m_Timers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timers_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PayloadEvents_3() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___m_PayloadEvents_3)); }
	inline RuntimeObject* get_m_PayloadEvents_3() const { return ___m_PayloadEvents_3; }
	inline RuntimeObject** get_address_of_m_PayloadEvents_3() { return &___m_PayloadEvents_3; }
	inline void set_m_PayloadEvents_3(RuntimeObject* value)
	{
		___m_PayloadEvents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PayloadEvents_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetricsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___U3CMetricsU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CMetricsU3Ek__BackingField_4() const { return ___U3CMetricsU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CMetricsU3Ek__BackingField_4() { return &___U3CMetricsU3Ek__BackingField_4; }
	inline void set_U3CMetricsU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CMetricsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetricsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E, ___U3CConnectionIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CConnectionIdU3Ek__BackingField_5() const { return ___U3CConnectionIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CConnectionIdU3Ek__BackingField_5() { return &___U3CConnectionIdU3Ek__BackingField_5; }
	inline void set_U3CConnectionIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CConnectionIdU3Ek__BackingField_5 = value;
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricDispatcher
struct MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetStats.MetricCollection Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Collection
	MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___m_Collection_0;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Resettables
	RuntimeObject* ___m_Resettables_1;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_EventMetrics
	RuntimeObject* ___m_EventMetrics_2;
	// System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Observers
	RuntimeObject* ___m_Observers_3;

public:
	inline static int32_t get_offset_of_m_Collection_0() { return static_cast<int32_t>(offsetof(MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33, ___m_Collection_0)); }
	inline MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * get_m_Collection_0() const { return ___m_Collection_0; }
	inline MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E ** get_address_of_m_Collection_0() { return &___m_Collection_0; }
	inline void set_m_Collection_0(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * value)
	{
		___m_Collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resettables_1() { return static_cast<int32_t>(offsetof(MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33, ___m_Resettables_1)); }
	inline RuntimeObject* get_m_Resettables_1() const { return ___m_Resettables_1; }
	inline RuntimeObject** get_address_of_m_Resettables_1() { return &___m_Resettables_1; }
	inline void set_m_Resettables_1(RuntimeObject* value)
	{
		___m_Resettables_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resettables_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventMetrics_2() { return static_cast<int32_t>(offsetof(MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33, ___m_EventMetrics_2)); }
	inline RuntimeObject* get_m_EventMetrics_2() const { return ___m_EventMetrics_2; }
	inline RuntimeObject** get_address_of_m_EventMetrics_2() { return &___m_EventMetrics_2; }
	inline void set_m_EventMetrics_2(RuntimeObject* value)
	{
		___m_EventMetrics_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventMetrics_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_3() { return static_cast<int32_t>(offsetof(MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33, ___m_Observers_3)); }
	inline RuntimeObject* get_m_Observers_3() const { return ___m_Observers_3; }
	inline RuntimeObject** get_address_of_m_Observers_3() { return &___m_Observers_3; }
	inline void set_m_Observers_3(RuntimeObject* value)
	{
		___m_Observers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_3), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_3;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Resettables
	List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * ___m_Resettables_4;

public:
	inline static int32_t get_offset_of_m_Counters_0() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1, ___m_Counters_0)); }
	inline RuntimeObject* get_m_Counters_0() const { return ___m_Counters_0; }
	inline RuntimeObject** get_address_of_m_Counters_0() { return &___m_Counters_0; }
	inline void set_m_Counters_0(RuntimeObject* value)
	{
		___m_Counters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Counters_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gauges_1() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1, ___m_Gauges_1)); }
	inline RuntimeObject* get_m_Gauges_1() const { return ___m_Gauges_1; }
	inline RuntimeObject** get_address_of_m_Gauges_1() { return &___m_Gauges_1; }
	inline void set_m_Gauges_1(RuntimeObject* value)
	{
		___m_Gauges_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gauges_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timers_2() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1, ___m_Timers_2)); }
	inline RuntimeObject* get_m_Timers_2() const { return ___m_Timers_2; }
	inline RuntimeObject** get_address_of_m_Timers_2() { return &___m_Timers_2; }
	inline void set_m_Timers_2(RuntimeObject* value)
	{
		___m_Timers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timers_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PayloadEvents_3() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1, ___m_PayloadEvents_3)); }
	inline RuntimeObject* get_m_PayloadEvents_3() const { return ___m_PayloadEvents_3; }
	inline RuntimeObject** get_address_of_m_PayloadEvents_3() { return &___m_PayloadEvents_3; }
	inline void set_m_PayloadEvents_3(RuntimeObject* value)
	{
		___m_PayloadEvents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PayloadEvents_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resettables_4() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1, ___m_Resettables_4)); }
	inline List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * get_m_Resettables_4() const { return ___m_Resettables_4; }
	inline List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 ** get_address_of_m_Resettables_4() { return &___m_Resettables_4; }
	inline void set_m_Resettables_4(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * value)
	{
		___m_Resettables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resettables_4), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions
struct MetricsCollectionExtensions_tC278727E186187383E4C34D89633BFBB436BCB67  : public RuntimeObject
{
public:

public:
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


// Unity.Multiplayer.Tools.NetStats.UnitExtensions
struct UnitExtensions_t180C8EEEA675327F5A7ABC4709A1534B43D22050  : public RuntimeObject
{
public:

public:
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

// Unity.Multiplayer.Tools.NetStats.MetricId/<>c
struct U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields
{
public:
	// Unity.Multiplayer.Tools.NetStats.MetricId/<>c Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<>9
	U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<>9__37_2
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__37_2_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields, ___U3CU3E9__37_2_1)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__37_2_1() const { return ___U3CU3E9__37_2_1; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__37_2_1() { return &___U3CU3E9__37_2_1; }
	inline void set_U3CU3E9__37_2_1(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__37_2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_2_1), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBB9BC2DD93CB008153B2E518DCA4D7E2D26DB21D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// Unity.Collections.FixedBytes16
struct FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37__padding[16];
	};

public:
	inline static int32_t get_offset_of_byte0000_0() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0000_0)); }
	inline uint8_t get_byte0000_0() const { return ___byte0000_0; }
	inline uint8_t* get_address_of_byte0000_0() { return &___byte0000_0; }
	inline void set_byte0000_0(uint8_t value)
	{
		___byte0000_0 = value;
	}

	inline static int32_t get_offset_of_byte0001_1() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0001_1)); }
	inline uint8_t get_byte0001_1() const { return ___byte0001_1; }
	inline uint8_t* get_address_of_byte0001_1() { return &___byte0001_1; }
	inline void set_byte0001_1(uint8_t value)
	{
		___byte0001_1 = value;
	}

	inline static int32_t get_offset_of_byte0002_2() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0002_2)); }
	inline uint8_t get_byte0002_2() const { return ___byte0002_2; }
	inline uint8_t* get_address_of_byte0002_2() { return &___byte0002_2; }
	inline void set_byte0002_2(uint8_t value)
	{
		___byte0002_2 = value;
	}

	inline static int32_t get_offset_of_byte0003_3() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0003_3)); }
	inline uint8_t get_byte0003_3() const { return ___byte0003_3; }
	inline uint8_t* get_address_of_byte0003_3() { return &___byte0003_3; }
	inline void set_byte0003_3(uint8_t value)
	{
		___byte0003_3 = value;
	}

	inline static int32_t get_offset_of_byte0004_4() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0004_4)); }
	inline uint8_t get_byte0004_4() const { return ___byte0004_4; }
	inline uint8_t* get_address_of_byte0004_4() { return &___byte0004_4; }
	inline void set_byte0004_4(uint8_t value)
	{
		___byte0004_4 = value;
	}

	inline static int32_t get_offset_of_byte0005_5() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0005_5)); }
	inline uint8_t get_byte0005_5() const { return ___byte0005_5; }
	inline uint8_t* get_address_of_byte0005_5() { return &___byte0005_5; }
	inline void set_byte0005_5(uint8_t value)
	{
		___byte0005_5 = value;
	}

	inline static int32_t get_offset_of_byte0006_6() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0006_6)); }
	inline uint8_t get_byte0006_6() const { return ___byte0006_6; }
	inline uint8_t* get_address_of_byte0006_6() { return &___byte0006_6; }
	inline void set_byte0006_6(uint8_t value)
	{
		___byte0006_6 = value;
	}

	inline static int32_t get_offset_of_byte0007_7() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0007_7)); }
	inline uint8_t get_byte0007_7() const { return ___byte0007_7; }
	inline uint8_t* get_address_of_byte0007_7() { return &___byte0007_7; }
	inline void set_byte0007_7(uint8_t value)
	{
		___byte0007_7 = value;
	}

	inline static int32_t get_offset_of_byte0008_8() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0008_8)); }
	inline uint8_t get_byte0008_8() const { return ___byte0008_8; }
	inline uint8_t* get_address_of_byte0008_8() { return &___byte0008_8; }
	inline void set_byte0008_8(uint8_t value)
	{
		___byte0008_8 = value;
	}

	inline static int32_t get_offset_of_byte0009_9() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0009_9)); }
	inline uint8_t get_byte0009_9() const { return ___byte0009_9; }
	inline uint8_t* get_address_of_byte0009_9() { return &___byte0009_9; }
	inline void set_byte0009_9(uint8_t value)
	{
		___byte0009_9 = value;
	}

	inline static int32_t get_offset_of_byte0010_10() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0010_10)); }
	inline uint8_t get_byte0010_10() const { return ___byte0010_10; }
	inline uint8_t* get_address_of_byte0010_10() { return &___byte0010_10; }
	inline void set_byte0010_10(uint8_t value)
	{
		___byte0010_10 = value;
	}

	inline static int32_t get_offset_of_byte0011_11() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0011_11)); }
	inline uint8_t get_byte0011_11() const { return ___byte0011_11; }
	inline uint8_t* get_address_of_byte0011_11() { return &___byte0011_11; }
	inline void set_byte0011_11(uint8_t value)
	{
		___byte0011_11 = value;
	}

	inline static int32_t get_offset_of_byte0012_12() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0012_12)); }
	inline uint8_t get_byte0012_12() const { return ___byte0012_12; }
	inline uint8_t* get_address_of_byte0012_12() { return &___byte0012_12; }
	inline void set_byte0012_12(uint8_t value)
	{
		___byte0012_12 = value;
	}

	inline static int32_t get_offset_of_byte0013_13() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0013_13)); }
	inline uint8_t get_byte0013_13() const { return ___byte0013_13; }
	inline uint8_t* get_address_of_byte0013_13() { return &___byte0013_13; }
	inline void set_byte0013_13(uint8_t value)
	{
		___byte0013_13 = value;
	}

	inline static int32_t get_offset_of_byte0014_14() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0014_14)); }
	inline uint8_t get_byte0014_14() const { return ___byte0014_14; }
	inline uint8_t* get_address_of_byte0014_14() { return &___byte0014_14; }
	inline void set_byte0014_14(uint8_t value)
	{
		___byte0014_14 = value;
	}

	inline static int32_t get_offset_of_byte0015_15() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0015_15)); }
	inline uint8_t get_byte0015_15() const { return ___byte0015_15; }
	inline uint8_t* get_address_of_byte0015_15() { return &___byte0015_15; }
	inline void set_byte0015_15(uint8_t value)
	{
		___byte0015_15 = value;
	}
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


// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t1F8A19168162DB8B539D04520980C7E9C6E23A71  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Unity.Multiplayer.Tools.NetStats.MetricId
struct MetricId_t4457269377F602784DF155273C7A840015D8D342 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::<TypeIndex>k__BackingField
	int32_t ___U3CTypeIndexU3Ek__BackingField_0;
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::<EnumValue>k__BackingField
	int32_t ___U3CEnumValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342, ___U3CTypeIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeIndexU3Ek__BackingField_0() const { return ___U3CTypeIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeIndexU3Ek__BackingField_0() { return &___U3CTypeIndexU3Ek__BackingField_0; }
	inline void set_U3CTypeIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CEnumValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342, ___U3CEnumValueU3Ek__BackingField_1)); }
	inline int32_t get_U3CEnumValueU3Ek__BackingField_1() const { return ___U3CEnumValueU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CEnumValueU3Ek__BackingField_1() { return &___U3CEnumValueU3Ek__BackingField_1; }
	inline void set_U3CEnumValueU3Ek__BackingField_1(int32_t value)
	{
		___U3CEnumValueU3Ek__BackingField_1 = value;
	}
};

struct MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields
{
public:
	// System.Type[] Unity.Multiplayer.Tools.NetStats.MetricId::<Types>k__BackingField
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CTypesU3Ek__BackingField_2;
	// System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::<Names>k__BackingField
	StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* ___U3CNamesU3Ek__BackingField_3;
	// System.Int32[][] Unity.Multiplayer.Tools.NetStats.MetricId::<Values>k__BackingField
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___U3CValuesU3Ek__BackingField_4;
	// System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::<DisplayNames>k__BackingField
	StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* ___U3CDisplayNamesU3Ek__BackingField_5;
	// Unity.Multiplayer.Tools.NetStats.MetricKind[][] Unity.Multiplayer.Tools.NetStats.MetricId::<MetricKinds>k__BackingField
	MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* ___U3CMetricKindsU3Ek__BackingField_6;
	// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][] Unity.Multiplayer.Tools.NetStats.MetricId::<Units>k__BackingField
	CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* ___U3CUnitsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CTypesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields, ___U3CTypesU3Ek__BackingField_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_U3CTypesU3Ek__BackingField_2() const { return ___U3CTypesU3Ek__BackingField_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_U3CTypesU3Ek__BackingField_2() { return &___U3CTypesU3Ek__BackingField_2; }
	inline void set_U3CTypesU3Ek__BackingField_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___U3CTypesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNamesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields, ___U3CNamesU3Ek__BackingField_3)); }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* get_U3CNamesU3Ek__BackingField_3() const { return ___U3CNamesU3Ek__BackingField_3; }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4** get_address_of_U3CNamesU3Ek__BackingField_3() { return &___U3CNamesU3Ek__BackingField_3; }
	inline void set_U3CNamesU3Ek__BackingField_3(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* value)
	{
		___U3CNamesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNamesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields, ___U3CValuesU3Ek__BackingField_4)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get_U3CValuesU3Ek__BackingField_4() const { return ___U3CValuesU3Ek__BackingField_4; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of_U3CValuesU3Ek__BackingField_4() { return &___U3CValuesU3Ek__BackingField_4; }
	inline void set_U3CValuesU3Ek__BackingField_4(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		___U3CValuesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisplayNamesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields, ___U3CDisplayNamesU3Ek__BackingField_5)); }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* get_U3CDisplayNamesU3Ek__BackingField_5() const { return ___U3CDisplayNamesU3Ek__BackingField_5; }
	inline StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4** get_address_of_U3CDisplayNamesU3Ek__BackingField_5() { return &___U3CDisplayNamesU3Ek__BackingField_5; }
	inline void set_U3CDisplayNamesU3Ek__BackingField_5(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* value)
	{
		___U3CDisplayNamesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNamesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetricKindsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields, ___U3CMetricKindsU3Ek__BackingField_6)); }
	inline MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* get_U3CMetricKindsU3Ek__BackingField_6() const { return ___U3CMetricKindsU3Ek__BackingField_6; }
	inline MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80** get_address_of_U3CMetricKindsU3Ek__BackingField_6() { return &___U3CMetricKindsU3Ek__BackingField_6; }
	inline void set_U3CMetricKindsU3Ek__BackingField_6(MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* value)
	{
		___U3CMetricKindsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetricKindsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnitsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields, ___U3CUnitsU3Ek__BackingField_7)); }
	inline CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* get_U3CUnitsU3Ek__BackingField_7() const { return ___U3CUnitsU3Ek__BackingField_7; }
	inline CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13** get_address_of_U3CUnitsU3Ek__BackingField_7() { return &___U3CUnitsU3Ek__BackingField_7; }
	inline void set_U3CUnitsU3Ek__BackingField_7(CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* value)
	{
		___U3CUnitsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnitsU3Ek__BackingField_7), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute
struct MetricTypeEnumAttribute_t0D19CCE78BC3D9C9B50A836BC36C64D585564162  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA6C55669501A161F5A77C3A66DE717FD0E3FC68F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA6C55669501A161F5A77C3A66DE717FD0E3FC68F__padding[20];
	};

public:
};


// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::<Id>k__BackingField
	MetricId_t4457269377F602784DF155273C7A840015D8D342  ___U3CIdU3Ek__BackingField_0;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<DefaultValue>k__BackingField
	int64_t ___U3CDefaultValueU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49, ___U3CIdU3Ek__BackingField_0)); }
	inline MetricId_t4457269377F602784DF155273C7A840015D8D342  get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline MetricId_t4457269377F602784DF155273C7A840015D8D342 * get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(MetricId_t4457269377F602784DF155273C7A840015D8D342  value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49, ___U3CValueU3Ek__BackingField_1)); }
	inline int64_t get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(int64_t value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49, ___U3CDefaultValueU3Ek__BackingField_2)); }
	inline int64_t get_U3CDefaultValueU3Ek__BackingField_2() const { return ___U3CDefaultValueU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CDefaultValueU3Ek__BackingField_2() { return &___U3CDefaultValueU3Ek__BackingField_2; }
	inline void set_U3CDefaultValueU3Ek__BackingField_2(int64_t value)
	{
		___U3CDefaultValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CShouldResetOnDispatchU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49, ___U3CShouldResetOnDispatchU3Ek__BackingField_3)); }
	inline bool get_U3CShouldResetOnDispatchU3Ek__BackingField_3() const { return ___U3CShouldResetOnDispatchU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CShouldResetOnDispatchU3Ek__BackingField_3() { return &___U3CShouldResetOnDispatchU3Ek__BackingField_3; }
	inline void set_U3CShouldResetOnDispatchU3Ek__BackingField_3(bool value)
	{
		___U3CShouldResetOnDispatchU3Ek__BackingField_3 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB966BAD0EC389DCC2620A5EDB92772DF1C0C14E0  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tB966BAD0EC389DCC2620A5EDB92772DF1C0C14E0_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06
	__StaticArrayInitTypeSizeU3D20_tA6C55669501A161F5A77C3A66DE717FD0E3FC68F  ___270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0;

public:
	inline static int32_t get_offset_of_U3270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB966BAD0EC389DCC2620A5EDB92772DF1C0C14E0_StaticFields, ___270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0)); }
	inline __StaticArrayInitTypeSizeU3D20_tA6C55669501A161F5A77C3A66DE717FD0E3FC68F  get_U3270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0() const { return ___270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0; }
	inline __StaticArrayInitTypeSizeU3D20_tA6C55669501A161F5A77C3A66DE717FD0E3FC68F * get_address_of_U3270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0() { return &___270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0; }
	inline void set_U3270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0(__StaticArrayInitTypeSizeU3D20_tA6C55669501A161F5A77C3A66DE717FD0E3FC68F  value)
	{
		___270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0 = value;
	}
};


// System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_tE06B38463937F6FBCCECF4DF6519F83C1683FE0C * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___DomainUnload_13)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ProcessExit_14)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ResourceResolve_15)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___TypeResolve_16)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t1DF125A860ED9B70F24ADFA6CB0781533A23DA64 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___FirstChanceException_18)); }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t7F26BD2270AD4531F2328FD1382278E975249DF1 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_tC6827B550D5B6553B57571630B1EE01AC12A1089 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A, ___compatibility_switch_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_StaticFields, ___default_domain_10)); }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibility_switch_23;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
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

// Unity.Collections.FixedBytes126
struct FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0000
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0016
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0032
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0048
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0064
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0080
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes126::offset0096
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0112_7_OffsetPadding[112];
					// System.Byte Unity.Collections.FixedBytes126::byte0112
					uint8_t ___byte0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0112_7_OffsetPadding_forAlignmentOnly[112];
					uint8_t ___byte0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0113_8_OffsetPadding[113];
					// System.Byte Unity.Collections.FixedBytes126::byte0113
					uint8_t ___byte0113_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0113_8_OffsetPadding_forAlignmentOnly[113];
					uint8_t ___byte0113_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0114_9_OffsetPadding[114];
					// System.Byte Unity.Collections.FixedBytes126::byte0114
					uint8_t ___byte0114_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0114_9_OffsetPadding_forAlignmentOnly[114];
					uint8_t ___byte0114_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0115_10_OffsetPadding[115];
					// System.Byte Unity.Collections.FixedBytes126::byte0115
					uint8_t ___byte0115_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0115_10_OffsetPadding_forAlignmentOnly[115];
					uint8_t ___byte0115_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0116_11_OffsetPadding[116];
					// System.Byte Unity.Collections.FixedBytes126::byte0116
					uint8_t ___byte0116_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0116_11_OffsetPadding_forAlignmentOnly[116];
					uint8_t ___byte0116_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0117_12_OffsetPadding[117];
					// System.Byte Unity.Collections.FixedBytes126::byte0117
					uint8_t ___byte0117_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0117_12_OffsetPadding_forAlignmentOnly[117];
					uint8_t ___byte0117_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0118_13_OffsetPadding[118];
					// System.Byte Unity.Collections.FixedBytes126::byte0118
					uint8_t ___byte0118_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0118_13_OffsetPadding_forAlignmentOnly[118];
					uint8_t ___byte0118_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0119_14_OffsetPadding[119];
					// System.Byte Unity.Collections.FixedBytes126::byte0119
					uint8_t ___byte0119_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0119_14_OffsetPadding_forAlignmentOnly[119];
					uint8_t ___byte0119_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0120_15_OffsetPadding[120];
					// System.Byte Unity.Collections.FixedBytes126::byte0120
					uint8_t ___byte0120_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0120_15_OffsetPadding_forAlignmentOnly[120];
					uint8_t ___byte0120_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0121_16_OffsetPadding[121];
					// System.Byte Unity.Collections.FixedBytes126::byte0121
					uint8_t ___byte0121_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0121_16_OffsetPadding_forAlignmentOnly[121];
					uint8_t ___byte0121_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0122_17_OffsetPadding[122];
					// System.Byte Unity.Collections.FixedBytes126::byte0122
					uint8_t ___byte0122_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0122_17_OffsetPadding_forAlignmentOnly[122];
					uint8_t ___byte0122_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0123_18_OffsetPadding[123];
					// System.Byte Unity.Collections.FixedBytes126::byte0123
					uint8_t ___byte0123_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0123_18_OffsetPadding_forAlignmentOnly[123];
					uint8_t ___byte0123_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0124_19_OffsetPadding[124];
					// System.Byte Unity.Collections.FixedBytes126::byte0124
					uint8_t ___byte0124_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0124_19_OffsetPadding_forAlignmentOnly[124];
					uint8_t ___byte0124_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0125_20_OffsetPadding[125];
					// System.Byte Unity.Collections.FixedBytes126::byte0125
					uint8_t ___byte0125_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0125_20_OffsetPadding_forAlignmentOnly[125];
					uint8_t ___byte0125_20_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39__padding[126];
	};

public:
	inline static int32_t get_offset_of_offset0000_0() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0000_0)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0000_0() const { return ___offset0000_0; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0000_0() { return &___offset0000_0; }
	inline void set_offset0000_0(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0000_0 = value;
	}

	inline static int32_t get_offset_of_offset0016_1() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0016_1)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0016_1() const { return ___offset0016_1; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0016_1() { return &___offset0016_1; }
	inline void set_offset0016_1(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0016_1 = value;
	}

	inline static int32_t get_offset_of_offset0032_2() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0032_2)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0032_2() const { return ___offset0032_2; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0032_2() { return &___offset0032_2; }
	inline void set_offset0032_2(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0032_2 = value;
	}

	inline static int32_t get_offset_of_offset0048_3() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0048_3)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0048_3() const { return ___offset0048_3; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0048_3() { return &___offset0048_3; }
	inline void set_offset0048_3(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0048_3 = value;
	}

	inline static int32_t get_offset_of_offset0064_4() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0064_4)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0064_4() const { return ___offset0064_4; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0064_4() { return &___offset0064_4; }
	inline void set_offset0064_4(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0064_4 = value;
	}

	inline static int32_t get_offset_of_offset0080_5() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0080_5)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0080_5() const { return ___offset0080_5; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0080_5() { return &___offset0080_5; }
	inline void set_offset0080_5(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0080_5 = value;
	}

	inline static int32_t get_offset_of_offset0096_6() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___offset0096_6)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0096_6() const { return ___offset0096_6; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0096_6() { return &___offset0096_6; }
	inline void set_offset0096_6(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0096_6 = value;
	}

	inline static int32_t get_offset_of_byte0112_7() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0112_7)); }
	inline uint8_t get_byte0112_7() const { return ___byte0112_7; }
	inline uint8_t* get_address_of_byte0112_7() { return &___byte0112_7; }
	inline void set_byte0112_7(uint8_t value)
	{
		___byte0112_7 = value;
	}

	inline static int32_t get_offset_of_byte0113_8() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0113_8)); }
	inline uint8_t get_byte0113_8() const { return ___byte0113_8; }
	inline uint8_t* get_address_of_byte0113_8() { return &___byte0113_8; }
	inline void set_byte0113_8(uint8_t value)
	{
		___byte0113_8 = value;
	}

	inline static int32_t get_offset_of_byte0114_9() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0114_9)); }
	inline uint8_t get_byte0114_9() const { return ___byte0114_9; }
	inline uint8_t* get_address_of_byte0114_9() { return &___byte0114_9; }
	inline void set_byte0114_9(uint8_t value)
	{
		___byte0114_9 = value;
	}

	inline static int32_t get_offset_of_byte0115_10() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0115_10)); }
	inline uint8_t get_byte0115_10() const { return ___byte0115_10; }
	inline uint8_t* get_address_of_byte0115_10() { return &___byte0115_10; }
	inline void set_byte0115_10(uint8_t value)
	{
		___byte0115_10 = value;
	}

	inline static int32_t get_offset_of_byte0116_11() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0116_11)); }
	inline uint8_t get_byte0116_11() const { return ___byte0116_11; }
	inline uint8_t* get_address_of_byte0116_11() { return &___byte0116_11; }
	inline void set_byte0116_11(uint8_t value)
	{
		___byte0116_11 = value;
	}

	inline static int32_t get_offset_of_byte0117_12() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0117_12)); }
	inline uint8_t get_byte0117_12() const { return ___byte0117_12; }
	inline uint8_t* get_address_of_byte0117_12() { return &___byte0117_12; }
	inline void set_byte0117_12(uint8_t value)
	{
		___byte0117_12 = value;
	}

	inline static int32_t get_offset_of_byte0118_13() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0118_13)); }
	inline uint8_t get_byte0118_13() const { return ___byte0118_13; }
	inline uint8_t* get_address_of_byte0118_13() { return &___byte0118_13; }
	inline void set_byte0118_13(uint8_t value)
	{
		___byte0118_13 = value;
	}

	inline static int32_t get_offset_of_byte0119_14() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0119_14)); }
	inline uint8_t get_byte0119_14() const { return ___byte0119_14; }
	inline uint8_t* get_address_of_byte0119_14() { return &___byte0119_14; }
	inline void set_byte0119_14(uint8_t value)
	{
		___byte0119_14 = value;
	}

	inline static int32_t get_offset_of_byte0120_15() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0120_15)); }
	inline uint8_t get_byte0120_15() const { return ___byte0120_15; }
	inline uint8_t* get_address_of_byte0120_15() { return &___byte0120_15; }
	inline void set_byte0120_15(uint8_t value)
	{
		___byte0120_15 = value;
	}

	inline static int32_t get_offset_of_byte0121_16() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0121_16)); }
	inline uint8_t get_byte0121_16() const { return ___byte0121_16; }
	inline uint8_t* get_address_of_byte0121_16() { return &___byte0121_16; }
	inline void set_byte0121_16(uint8_t value)
	{
		___byte0121_16 = value;
	}

	inline static int32_t get_offset_of_byte0122_17() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0122_17)); }
	inline uint8_t get_byte0122_17() const { return ___byte0122_17; }
	inline uint8_t* get_address_of_byte0122_17() { return &___byte0122_17; }
	inline void set_byte0122_17(uint8_t value)
	{
		___byte0122_17 = value;
	}

	inline static int32_t get_offset_of_byte0123_18() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0123_18)); }
	inline uint8_t get_byte0123_18() const { return ___byte0123_18; }
	inline uint8_t* get_address_of_byte0123_18() { return &___byte0123_18; }
	inline void set_byte0123_18(uint8_t value)
	{
		___byte0123_18 = value;
	}

	inline static int32_t get_offset_of_byte0124_19() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0124_19)); }
	inline uint8_t get_byte0124_19() const { return ___byte0124_19; }
	inline uint8_t* get_address_of_byte0124_19() { return &___byte0124_19; }
	inline void set_byte0124_19(uint8_t value)
	{
		___byte0124_19 = value;
	}

	inline static int32_t get_offset_of_byte0125_20() { return static_cast<int32_t>(offsetof(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39, ___byte0125_20)); }
	inline uint8_t get_byte0125_20() const { return ___byte0125_20; }
	inline uint8_t* get_address_of_byte0125_20() { return &___byte0125_20; }
	inline void set_byte0125_20(uint8_t value)
	{
		___byte0125_20 = value;
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricKind
struct MetricKind_t8B591C05A29825F2D4CCFE298EDFA1CD0F31F92B 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetricKind_t8B591C05A29825F2D4CCFE298EDFA1CD0F31F92B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Multiplayer.Tools.NetStats.UnitPrefix
struct UnitPrefix_tD1B4DDE4143408933EB07216260D546AB45BA716 
{
public:
	// System.Byte Unity.Multiplayer.Tools.NetStats.UnitPrefix::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnitPrefix_tD1B4DDE4143408933EB07216260D546AB45BA716, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Multiplayer.Tools.NetStats.Units
struct Units_tAC3820CE804F1BFBCF6761A50DB58CAF9C201A58 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.NetStats.Units::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Units_tAC3820CE804F1BFBCF6761A50DB58CAF9C201A58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Multiplayer.Tools.NetStats.CompositeUnit
struct CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F 
{
public:
	// Unity.Multiplayer.Tools.NetStats.UnitPrefix Unity.Multiplayer.Tools.NetStats.CompositeUnit::<Prefix>k__BackingField
	uint8_t ___U3CPrefixU3Ek__BackingField_0;
	// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::<BitsExponent>k__BackingField
	int8_t ___U3CBitsExponentU3Ek__BackingField_1;
	// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::<BytesExponent>k__BackingField
	int8_t ___U3CBytesExponentU3Ek__BackingField_2;
	// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::<SecondsExponent>k__BackingField
	int8_t ___U3CSecondsExponentU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPrefixU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F, ___U3CPrefixU3Ek__BackingField_0)); }
	inline uint8_t get_U3CPrefixU3Ek__BackingField_0() const { return ___U3CPrefixU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CPrefixU3Ek__BackingField_0() { return &___U3CPrefixU3Ek__BackingField_0; }
	inline void set_U3CPrefixU3Ek__BackingField_0(uint8_t value)
	{
		___U3CPrefixU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBitsExponentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F, ___U3CBitsExponentU3Ek__BackingField_1)); }
	inline int8_t get_U3CBitsExponentU3Ek__BackingField_1() const { return ___U3CBitsExponentU3Ek__BackingField_1; }
	inline int8_t* get_address_of_U3CBitsExponentU3Ek__BackingField_1() { return &___U3CBitsExponentU3Ek__BackingField_1; }
	inline void set_U3CBitsExponentU3Ek__BackingField_1(int8_t value)
	{
		___U3CBitsExponentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesExponentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F, ___U3CBytesExponentU3Ek__BackingField_2)); }
	inline int8_t get_U3CBytesExponentU3Ek__BackingField_2() const { return ___U3CBytesExponentU3Ek__BackingField_2; }
	inline int8_t* get_address_of_U3CBytesExponentU3Ek__BackingField_2() { return &___U3CBytesExponentU3Ek__BackingField_2; }
	inline void set_U3CBytesExponentU3Ek__BackingField_2(int8_t value)
	{
		___U3CBytesExponentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSecondsExponentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F, ___U3CSecondsExponentU3Ek__BackingField_3)); }
	inline int8_t get_U3CSecondsExponentU3Ek__BackingField_3() const { return ___U3CSecondsExponentU3Ek__BackingField_3; }
	inline int8_t* get_address_of_U3CSecondsExponentU3Ek__BackingField_3() { return &___U3CSecondsExponentU3Ek__BackingField_3; }
	inline void set_U3CSecondsExponentU3Ek__BackingField_3(int8_t value)
	{
		___U3CSecondsExponentU3Ek__BackingField_3 = value;
	}
};

struct CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_StaticFields
{
public:
	// Unity.Multiplayer.Tools.NetStats.CompositeUnit Unity.Multiplayer.Tools.NetStats.CompositeUnit::<k_Hertz>k__BackingField
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  ___U3Ck_HertzU3Ek__BackingField_4;
	// System.Char[] Unity.Multiplayer.Tools.NetStats.CompositeUnit::k_Superscripts
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___k_Superscripts_5;

public:
	inline static int32_t get_offset_of_U3Ck_HertzU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_StaticFields, ___U3Ck_HertzU3Ek__BackingField_4)); }
	inline CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  get_U3Ck_HertzU3Ek__BackingField_4() const { return ___U3Ck_HertzU3Ek__BackingField_4; }
	inline CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * get_address_of_U3Ck_HertzU3Ek__BackingField_4() { return &___U3Ck_HertzU3Ek__BackingField_4; }
	inline void set_U3Ck_HertzU3Ek__BackingField_4(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  value)
	{
		___U3Ck_HertzU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_k_Superscripts_5() { return static_cast<int32_t>(offsetof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_StaticFields, ___k_Superscripts_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_k_Superscripts_5() const { return ___k_Superscripts_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_k_Superscripts_5() { return &___k_Superscripts_5; }
	inline void set_k_Superscripts_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___k_Superscripts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Superscripts_5), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE  : public Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49
{
public:

public:
};


// Unity.Collections.FixedString128Bytes
struct FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 
{
public:
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString128Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_0;
			// Unity.Collections.FixedBytes126 Unity.Collections.FixedString128Bytes::bytes
			FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39  ___bytes_1;
		};
		uint8_t FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54__padding[128];
	};

public:
	inline static int32_t get_offset_of_utf8LengthInBytes_0() { return static_cast<int32_t>(offsetof(FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54, ___utf8LengthInBytes_0)); }
	inline uint16_t get_utf8LengthInBytes_0() const { return ___utf8LengthInBytes_0; }
	inline uint16_t* get_address_of_utf8LengthInBytes_0() { return &___utf8LengthInBytes_0; }
	inline void set_utf8LengthInBytes_0(uint16_t value)
	{
		___utf8LengthInBytes_0 = value;
	}

	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54, ___bytes_1)); }
	inline FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39  get_bytes_1() const { return ___bytes_1; }
	inline FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39 * get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(FixedBytes126_t10EF6170BCD75D7F5463F602828B457A3C98EC39  value)
	{
		___bytes_1 = value;
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute
struct MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<MetricKind>k__BackingField
	int32_t ___U3CMetricKindU3Ek__BackingField_1;
	// Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::<Units>k__BackingField
	int32_t ___U3CUnitsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F, ___U3CDisplayNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_0() const { return ___U3CDisplayNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_0() { return &___U3CDisplayNameU3Ek__BackingField_0; }
	inline void set_U3CDisplayNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetricKindU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F, ___U3CMetricKindU3Ek__BackingField_1)); }
	inline int32_t get_U3CMetricKindU3Ek__BackingField_1() const { return ___U3CMetricKindU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CMetricKindU3Ek__BackingField_1() { return &___U3CMetricKindU3Ek__BackingField_1; }
	inline void set_U3CMetricKindU3Ek__BackingField_1(int32_t value)
	{
		___U3CMetricKindU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUnitsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F, ___U3CUnitsU3Ek__BackingField_2)); }
	inline int32_t get_U3CUnitsU3Ek__BackingField_2() const { return ___U3CUnitsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUnitsU3Ek__BackingField_2() { return &___U3CUnitsU3Ek__BackingField_2; }
	inline void set_U3CUnitsU3Ek__BackingField_2(int32_t value)
	{
		___U3CUnitsU3Ek__BackingField_2 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.String>
struct Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0  : public MulticastDelegate_t
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * m_Items[1];

public:
	inline Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* m_Items[1];

public:
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* m_Items[1];

public:
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.MetricKind[]
struct MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972  : public RuntimeArray
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
// Unity.Multiplayer.Tools.NetStats.MetricKind[][]
struct MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* m_Items[1];

public:
	inline MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[]
struct CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  m_Items[1];

public:
	inline CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  value)
	{
		m_Items[index] = value;
	}
};
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][]
struct CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* m_Items[1];

public:
	inline CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559_gshared (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method);
// TValue Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_gshared_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_Value(TValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_gshared_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Unity.Collections.FixedString128Bytes>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE6B6523AC10D4417B546174BFBB168FBE69B80E7_gshared (Dictionary_2_tDBB3AC7B64746E3C077790477B70FC521FCE5816 * __this, RuntimeObject * ___key0, FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCA25D369AEC8835222C0E85F59BF94D6C005B7C2_gshared (Dictionary_2_t84E9BB5155EFDE39185E74787C9E1B9DAEEA0ABC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Unity.Collections.FixedString128Bytes>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8414647786C33D82B4F5A02E01FF374A2574D552_gshared (Dictionary_2_tDBB3AC7B64746E3C077790477B70FC521FCE5816 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_gshared_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m0AED2BE1E1CF7D558F9840AC3BB8EB4D20C7E20D_gshared (ReadOnlyDictionary_2_t9F8DC88A36607E07A4077FF68008D04653461B1B * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9A0599D0476C80004EC37045C82A9B29E1CAD1B4_gshared (Dictionary_2_t41F35CC65F9EDEA2EBB2AF7B75A867842561B4F8 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mA9FB30A3B43F7494F50724CDB8A1319B62633395_gshared (RuntimeObject* ___source0, Func_2_tD457CA07229B6835F9D0AB141D4F1A7455A8AF29 * ___selector1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m6C36AE8512C83F0A810D788A4AA95C1CADBF6E78_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_mE83AB53310ED3C554CC03D01B145BED5A0EF5601_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);

// Unity.Multiplayer.Tools.NetStats.UnitPrefix Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_Prefix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_Prefix(Unity.Multiplayer.Tools.NetStats.UnitPrefix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_BitsExponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_BitsExponent(System.SByte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method);
// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_BytesExponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_BytesExponent(System.SByte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method);
// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_SecondsExponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_SecondsExponent(System.SByte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::.ctor(Unity.Multiplayer.Tools.NetStats.UnitPrefix,System.SByte,System.SByte,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, uint8_t ___prefix0, int8_t ___bitsExponent1, int8_t ___bytesExponent2, int8_t ___secondsExponent3, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.NetStats.CompositeUnit::Equals(Unity.Multiplayer.Tools.NetStats.CompositeUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.NetStats.CompositeUnit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Multiplayer.Tools.NetStats.CompositeUnit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.CompositeUnit Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetCompositeUnit(Unity.Multiplayer.Tools.NetStats.Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8 (int32_t ___units0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
inline void Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559 (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , int64_t, const RuntimeMethod*))Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559_gshared)(__this, ___metricId0, ___defaultValue1, method);
}
// TValue Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Value()
inline int64_t Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 *, const RuntimeMethod*))Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_gshared_inline)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_Value(TValue)
inline void Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 *, int64_t, const RuntimeMethod*))Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m8C9D9E53601CAE20FB63EE88304685424CB6F142 (Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * __this, Type_t * ___key0, FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 *, Type_t *, FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 *, const RuntimeMethod*))Dictionary_2_TryGetValue_mE6B6523AC10D4417B546174BFBB168FBE69B80E7_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Collections.FixedString128Bytes,Unity.Multiplayer.Tools.NetStats.EventMetricFactory/IEventMetricFactory>::.ctor()
inline void Dictionary_2__ctor_mE1FCE5A38E4F08969F2D1085D7B77BA11AAE5483 (Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 *, const RuntimeMethod*))Dictionary_2__ctor_mCA25D369AEC8835222C0E85F59BF94D6C005B7C2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.Collections.FixedString128Bytes>::.ctor()
inline void Dictionary_2__ctor_mE8A85A43BDD75D9091F53100132A61FF384EAB9E (Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 *, const RuntimeMethod*))Dictionary_2__ctor_m8414647786C33D82B4F5A02E01FF374A2574D552_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<Unity.Multiplayer.Tools.NetStats.IMetric>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Unity.Multiplayer.Tools.NetStats.IMetric>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221 * Enumerable_ToList_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_mE5D209D28DDB783F4BBF900A858EA3EC4A4AA9D5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::.ctor()
inline void List_1__ctor_m3E12D3644F7E1EAD21100EB82F04AD28E1D691D3 (List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798_inline (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Id()
inline MetricId_t4457269377F602784DF155273C7A840015D8D342  Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, const RuntimeMethod* method)
{
	return ((  MetricId_t4457269377F602784DF155273C7A840015D8D342  (*) (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 *, const RuntimeMethod*))Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>::Add(!0)
inline void List_1_Add_mA6E598F7F9229500DD78C4AA4777BB26265C5D76 (List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_m18D37C875E8EEE04D15649EA16219C45A16845CD (ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m0AED2BE1E1CF7D558F9840AC3BB8EB4D20C7E20D_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_mF10FD777EDA1EDDDE51ED517FEC76DEC1F9E2F2E (ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m0AED2BE1E1CF7D558F9840AC3BB8EB4D20C7E20D_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_m4B2A1A65CF1442A5604710E6FA3458AD8292487A (ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m0AED2BE1E1CF7D558F9840AC3BB8EB4D20C7E20D_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_mCD7BA9C5614585034D99A875FDD9AE9FDB055D65 (ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m0AED2BE1E1CF7D558F9840AC3BB8EB4D20C7E20D_gshared)(__this, ___dictionary0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, RuntimeObject* ___counters0, RuntimeObject* ___gauges1, RuntimeObject* ___timers2, RuntimeObject* ___payloadEvents3, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Unity.Multiplayer.Tools.NetStats.IEventMetric>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074 * Enumerable_ToList_TisIEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_m34EC46BDFA9D6B7FF6FEC8531F976DF8F0530B62 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC (MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, RuntimeObject* ___resettables1, RuntimeObject* ___eventMetrics2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor()
inline void Dictionary_2__ctor_m7773DC8FF98EA6B242389CBBA3C9658FE8C3EEC0 (Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608 *, const RuntimeMethod*))Dictionary_2__ctor_m9A0599D0476C80004EC37045C82A9B29E1CAD1B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor()
inline void Dictionary_2__ctor_mE7FE185C2FBFE7B0BA674FE1F791C96DC2F24F49 (Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147 *, const RuntimeMethod*))Dictionary_2__ctor_m9A0599D0476C80004EC37045C82A9B29E1CAD1B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor()
inline void Dictionary_2__ctor_m81E452AD8EEAE510878F9AEF380F583039E0471B (Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64 *, const RuntimeMethod*))Dictionary_2__ctor_m9A0599D0476C80004EC37045C82A9B29E1CAD1B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor()
inline void Dictionary_2__ctor_m4C4341EC5A0D6D1BF90D019347807AFC368B40A3 (Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48 *, const RuntimeMethod*))Dictionary_2__ctor_m9A0599D0476C80004EC37045C82A9B29E1CAD1B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>::.ctor()
inline void List_1__ctor_m5AC51FB97D02E225877A5A89C0377F6201CB52DE (List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type[] Unity.Multiplayer.Tools.NetStats.MetricId::get_Types()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline (const RuntimeMethod* method);
// System.Type Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method);
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_mA141F96AFDC64AD7020374311750DBA47BFCA8FA (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD (AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906 (Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::SelectMany<System.Reflection.Assembly,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Collections.Generic.IEnumerable`1<!!1>>)
inline RuntimeObject* Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC (RuntimeObject* ___source0, Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 *, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mA9FB30A3B43F7494F50724CDB8A1319B62633395_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Type,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1 (Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Type,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderBy_TisType_t_TisString_t_m785505CA4A26FB05E312F8F3838E893AB774EA19 (RuntimeObject* ___source0, Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m6C36AE8512C83F0A810D788A4AA95C1CADBF6E78_gshared)(___source0, ___keySelector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Names()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41_inline (const RuntimeMethod* method);
// System.Int32[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F_inline (const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C_inline (const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricKind[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_MetricKinds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2_inline (const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Units()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176_inline (const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* Type_GetMember_mEB7D8041206EF68FE90341A267957B1A16DBEAC0 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline MemberInfo_t * Enumerable_FirstOrDefault_TisMemberInfo_t_mBB446BE9BBC8046C811A37FD8F0C6972C35F6E58 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703_inline (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F_inline (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331_inline (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
inline int32_t Array_IndexOf_TisType_t_m1B7F52A8BA5C8850CA3BD56DDA479E240C78EE7B (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___array0, Type_t * ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*, Type_t *, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_mE83AB53310ED3C554CC03D01B145BED5A0EF5601_gshared)(___array0, ___value1, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, Type_t * ___enumType0, int32_t ___enumValue1, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___other0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3AA61DAB9C1066C9223D67AC0EBD27907B717477 (U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753 (RuntimeObject* ___source0, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Multiplayer.Tools.NetStats.UnitPrefix Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal UnitPrefix Prefix { get; set; }
		uint8_t L_0 = __this->get_U3CPrefixU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint8_t CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_Prefix(Unity.Multiplayer.Tools.NetStats.UnitPrefix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal UnitPrefix Prefix { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CPrefixU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_AdjustorThunk (RuntimeObject * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_inline(_thisAdjusted, ___value0, method);
}
// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_BitsExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal sbyte BitsExponent { get; set; }
		int8_t L_0 = __this->get_U3CBitsExponentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int8_t CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	int8_t _returnValue;
	_returnValue = CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_BitsExponent(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal sbyte BitsExponent { get; set; }
		int8_t L_0 = ___value0;
		__this->set_U3CBitsExponentU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_AdjustorThunk (RuntimeObject * __this, int8_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_inline(_thisAdjusted, ___value0, method);
}
// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_BytesExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal sbyte BytesExponent { get; set; }
		int8_t L_0 = __this->get_U3CBytesExponentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int8_t CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	int8_t _returnValue;
	_returnValue = CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_BytesExponent(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal sbyte BytesExponent { get; set; }
		int8_t L_0 = ___value0;
		__this->set_U3CBytesExponentU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_AdjustorThunk (RuntimeObject * __this, int8_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_inline(_thisAdjusted, ___value0, method);
}
// System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_SecondsExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal sbyte SecondsExponent { get; set; }
		int8_t L_0 = __this->get_U3CSecondsExponentU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int8_t CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	int8_t _returnValue;
	_returnValue = CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_SecondsExponent(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal sbyte SecondsExponent { get; set; }
		int8_t L_0 = ___value0;
		__this->set_U3CSecondsExponentU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_AdjustorThunk (RuntimeObject * __this, int8_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::.ctor(Unity.Multiplayer.Tools.NetStats.UnitPrefix,System.SByte,System.SByte,System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, uint8_t ___prefix0, int8_t ___bitsExponent1, int8_t ___bytesExponent2, int8_t ___secondsExponent3, const RuntimeMethod* method)
{
	{
		// Prefix = prefix;
		uint8_t L_0 = ___prefix0;
		CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, L_0, /*hidden argument*/NULL);
		// BitsExponent = bitsExponent;
		int8_t L_1 = ___bitsExponent1;
		CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, L_1, /*hidden argument*/NULL);
		// BytesExponent = bytesExponent;
		int8_t L_2 = ___bytesExponent2;
		CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, L_2, /*hidden argument*/NULL);
		// SecondsExponent = secondsExponent;
		int8_t L_3 = ___secondsExponent3;
		CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5_AdjustorThunk (RuntimeObject * __this, uint8_t ___prefix0, int8_t ___bitsExponent1, int8_t ___bytesExponent2, int8_t ___secondsExponent3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5(_thisAdjusted, ___prefix0, ___bitsExponent1, ___bytesExponent2, ___secondsExponent3, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.CompositeUnit::Equals(Unity.Multiplayer.Tools.NetStats.CompositeUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  ___other0, const RuntimeMethod* method)
{
	{
		// return Prefix == other.Prefix &&
		//        BitsExponent == other.BitsExponent &&
		//        BytesExponent == other.BytesExponent &&
		//        SecondsExponent == other.SecondsExponent;
		uint8_t L_0;
		L_0 = CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		uint8_t L_1;
		L_1 = CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_003d;
		}
	}
	{
		int8_t L_2;
		L_2 = CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		int8_t L_3;
		L_3 = CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		int8_t L_4;
		L_4 = CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		int8_t L_5;
		L_5 = CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003d;
		}
	}
	{
		int8_t L_6;
		L_6 = CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		int8_t L_7;
		L_7 = CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
	}

IL_003d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0_AdjustorThunk (RuntimeObject * __this, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	bool _returnValue;
	_returnValue = CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.CompositeUnit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1 (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is CompositeUnit other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)UnBox(L_1, CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var))));
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_2 = V_0;
		bool L_3;
		L_3 = CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	bool _returnValue;
	_returnValue = CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.CompositeUnit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// return
		//     ((byte)Prefix << 24) |
		//     ((byte)BitsExponent << 16) |
		//     ((byte)BytesExponent << 8) |
		//     (byte)SecondsExponent;
		uint8_t L_0;
		L_0 = CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		int8_t L_1;
		L_1 = CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		int8_t L_2;
		L_2 = CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		int8_t L_3;
		L_3 = CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((uint8_t)L_1))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)((int32_t)((uint8_t)L_2))<<(int32_t)8))))|(int32_t)((int32_t)((uint8_t)L_3))));
	}
}
IL2CPP_EXTERN_C  int32_t CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * _thisAdjusted = reinterpret_cast<CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeUnit__cctor_m705369BBEABEC9706A43FC6AD8802F2E473FF408 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB966BAD0EC389DCC2620A5EDB92772DF1C0C14E0____270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Units.Hertz.GetCompositeUnit();
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_0;
		L_0 = UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8(((int32_t)22), /*hidden argument*/NULL);
		((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_StaticFields*)il2cpp_codegen_static_fields_for(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var))->set_U3Ck_HertzU3Ek__BackingField_4(L_0);
		// static readonly char[] k_Superscripts = new char[]
		//     { '⁰', '¹', '²', '³', '⁴', '⁵', '⁶', '⁷', '⁸', '⁹', };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB966BAD0EC389DCC2620A5EDB92772DF1C0C14E0____270BB180B942C518452711E509518C247475D116E5458576600D281562B9DE06_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_StaticFields*)il2cpp_codegen_static_fields_for(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F_il2cpp_TypeInfo_var))->set_k_Superscripts_5(L_2);
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
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter__ctor_m34020D3116A2C65E64FBC345084D0EDC3CE6E359 (Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId0, int64_t ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(metricId, defaultValue)
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_0 = ___metricId0;
		int64_t L_1 = ___defaultValue1;
		Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559(__this, L_0, L_1, /*hidden argument*/Metric_1__ctor_m6C746D9F819346738A681F87FE207EFFC6930559_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter_Increment_m206FA1D3A051DF1FDB7A21C288DA88FA239789EB (Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * __this, int64_t ___increment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value += increment;
		int64_t L_0;
		L_0 = Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_inline(__this, /*hidden argument*/Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_RuntimeMethod_var);
		int64_t L_1 = ___increment0;
		Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_inline(__this, ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_1)), /*hidden argument*/Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_RuntimeMethod_var);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m1A50BB75A5F555C8968ADB6984C57DC62EA1069B (EmbeddedAttribute_tBB9BC2DD93CB008153B2E518DCA4D7E2D26DB21D * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricFactory::TryGetFactoryTypeName(System.Type,Unity.Collections.FixedString128Bytes&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventMetricFactory_TryGetFactoryTypeName_m0F9FDE1AD96D52F0B29AA04BFF1648D536844567 (Type_t * ___type0, FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 * ___typeName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8C9D9E53601CAE20FB63EE88304685424CB6F142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool TryGetFactoryTypeName(Type type, out FixedString128Bytes typeName) => k_TypeNames.TryGetValue(type, out typeName);
		IL2CPP_RUNTIME_CLASS_INIT(EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var);
		Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * L_0 = ((EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var))->get_k_TypeNames_1();
		Type_t * L_1 = ___type0;
		FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 * L_2 = ___typeName1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m8C9D9E53601CAE20FB63EE88304685424CB6F142(L_0, L_1, (FixedString128Bytes_t41942F5AC0A5F9C711DB52C60120242E46816A54 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m8C9D9E53601CAE20FB63EE88304685424CB6F142_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMetricFactory__cctor_mCC2CA4C9B0E50A626E02F184CD6D300949EE1BC8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE1FCE5A38E4F08969F2D1085D7B77BA11AAE5483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE8A85A43BDD75D9091F53100132A61FF384EAB9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<FixedString128Bytes, IEventMetricFactory> k_FactoriesByName = new Dictionary<FixedString128Bytes, IEventMetricFactory>();
		Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 * L_0 = (Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77 *)il2cpp_codegen_object_new(Dictionary_2_t14D6DF09ACA405A3B7F3E00049FF54F95A0B1B77_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE1FCE5A38E4F08969F2D1085D7B77BA11AAE5483(L_0, /*hidden argument*/Dictionary_2__ctor_mE1FCE5A38E4F08969F2D1085D7B77BA11AAE5483_RuntimeMethod_var);
		((EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var))->set_k_FactoriesByName_0(L_0);
		// static readonly Dictionary<Type, FixedString128Bytes> k_TypeNames = new Dictionary<Type, FixedString128Bytes>();
		Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 * L_1 = (Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3 *)il2cpp_codegen_object_new(Dictionary_2_t878A893F0ED3F5692E60A8C1080E5E7BFA3FA2E3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE8A85A43BDD75D9091F53100132A61FF384EAB9E(L_1, /*hidden argument*/Dictionary_2__ctor_mE8A85A43BDD75D9091F53100132A61FF384EAB9E_RuntimeMethod_var);
		((EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_StaticFields*)il2cpp_codegen_static_fields_for(EventMetricFactory_tE11EEF2BD2791547AC956E3C05E51508EB23CE8B_il2cpp_TypeInfo_var))->set_k_TypeNames_1(L_1);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m95D3170354BA42728491DE36D73D92AC58DAB066 (IsUnmanagedAttribute_t1F8A19168162DB8B539D04520980C7E9C6E23A71 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, RuntimeObject* ___counters0, RuntimeObject* ___gauges1, RuntimeObject* ___timers2, RuntimeObject* ___payloadEvents3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_mE5D209D28DDB783F4BBF900A858EA3EC4A4AA9D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t0F50FEF148CE67FB3F747F56D9F50C84B1DC5531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t4571D1C30D93A7DDC080730ED16FE0F9C9E2E7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t72D108A371510A87097A1EAC94C2E67AEFC1EE1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		__this->set_U3CConnectionIdU3Ek__BackingField_5(((int64_t)((int64_t)(-1))));
		// internal MetricCollection(
		//     IReadOnlyDictionary<MetricId, IMetric<long>> counters,
		//     IReadOnlyDictionary<MetricId, IMetric<double>> gauges,
		//     IReadOnlyDictionary<MetricId, IMetric<TimeSpan>> timers,
		//     IReadOnlyDictionary<MetricId, IEventMetric> payloadEvents)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Counters = counters;
		RuntimeObject* L_0 = ___counters0;
		__this->set_m_Counters_0(L_0);
		// m_Gauges = gauges;
		RuntimeObject* L_1 = ___gauges1;
		__this->set_m_Gauges_1(L_1);
		// m_Timers = timers;
		RuntimeObject* L_2 = ___timers2;
		__this->set_m_Timers_2(L_2);
		// m_PayloadEvents = payloadEvents;
		RuntimeObject* L_3 = ___payloadEvents3;
		__this->set_m_PayloadEvents_3(L_3);
		// Metrics = counters.Values
		//     .Concat<IMetric>(gauges.Values)
		//     .Concat(timers.Values)
		//     .Concat(m_PayloadEvents.Values)
		//     .ToList();
		RuntimeObject* L_4 = ___counters0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::get_Values() */, IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = ___gauges1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::get_Values() */, IReadOnlyDictionary_2_t72D108A371510A87097A1EAC94C2E67AEFC1EE1C_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8;
		L_8 = Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298(L_5, L_7, /*hidden argument*/Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298_RuntimeMethod_var);
		RuntimeObject* L_9 = ___timers2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::get_Values() */, IReadOnlyDictionary_2_t0F50FEF148CE67FB3F747F56D9F50C84B1DC5531_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11;
		L_11 = Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298(L_8, L_10, /*hidden argument*/Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298_RuntimeMethod_var);
		RuntimeObject* L_12 = __this->get_m_PayloadEvents_3();
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Values() */, IReadOnlyDictionary_2_t4571D1C30D93A7DDC080730ED16FE0F9C9E2E7D7_il2cpp_TypeInfo_var, L_12);
		RuntimeObject* L_14;
		L_14 = Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298(L_11, L_13, /*hidden argument*/Enumerable_Concat_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_m68D8BA4A3FBA639C82D3FC0794DC26E9CA188298_RuntimeMethod_var);
		List_1_tF3F4F1B61C7FD9519DECC7E4646D1DB3214A4221 * L_15;
		L_15 = Enumerable_ToList_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_mE5D209D28DDB783F4BBF900A858EA3EC4A4AA9D5(L_14, /*hidden argument*/Enumerable_ToList_TisIMetric_tCEABD96133371F1A9F115CD1E7942BAD70792A5B_mE5D209D28DDB783F4BBF900A858EA3EC4A4AA9D5_RuntimeMethod_var);
		__this->set_U3CMetricsU3Ek__BackingField_4(L_15);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId0, RuntimeObject** ___counter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Counters.TryGetValue(metricId, out counter);
		RuntimeObject* L_0 = __this->get_m_Counters_0();
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_1 = ___metricId0;
		RuntimeObject** L_2 = ___counter1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, MetricId_t4457269377F602784DF155273C7A840015D8D342 , RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::TryGetValue(!0,!1&) */, IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject**)L_2);
		return L_3;
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC (MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, RuntimeObject* ___resettables1, RuntimeObject* ___eventMetrics2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E12D3644F7E1EAD21100EB82F04AD28E1D691D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IList<IMetricObserver> m_Observers = new List<IMetricObserver>();
		List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646 * L_0 = (List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646 *)il2cpp_codegen_object_new(List_1_t5312D7F33C1BFBD19426029F8C8272B4B272F646_il2cpp_TypeInfo_var);
		List_1__ctor_m3E12D3644F7E1EAD21100EB82F04AD28E1D691D3(L_0, /*hidden argument*/List_1__ctor_m3E12D3644F7E1EAD21100EB82F04AD28E1D691D3_RuntimeMethod_var);
		__this->set_m_Observers_3(L_0);
		// internal MetricDispatcher(
		//     MetricCollection collection,
		//     IReadOnlyList<IResettable> resettables,
		//     IReadOnlyList<IEventMetric> eventMetrics)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Collection = collection;
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_1 = ___collection0;
		__this->set_m_Collection_0(L_1);
		// m_Resettables = resettables;
		RuntimeObject* L_2 = ___resettables1;
		__this->set_m_Resettables_1(L_2);
		// m_EventMetrics = eventMetrics;
		RuntimeObject* L_3 = ___eventMetrics2;
		__this->set_m_EventMetrics_2(L_3);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_RegisterObserver_m7F92DF455F2E02A1B24B4EF95D89620FF96FD096 (MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 * __this, RuntimeObject* ___observer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7BFFD02146B5A5A9BA5F857E75362DE3123A92C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Observers.Add(observer);
		RuntimeObject* L_0 = __this->get_m_Observers_3();
		RuntimeObject* L_1 = ___observer0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::Add(!0) */, ICollection_1_t7BFFD02146B5A5A9BA5F857E75362DE3123A92C2_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_SetConnectionId_m8FFA43FEE838D7D94B16012216227023504068A6 (MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 * __this, uint64_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// m_Collection.ConnectionId = connectionId;
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_0 = __this->get_m_Collection_0();
		uint64_t L_1 = ___connectionId0;
		NullCheck(L_0);
		MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_Dispatch_m89DC7BD524CF1AD09AEF3820C75AD3E9A13291BB (MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7BFFD02146B5A5A9BA5F857E75362DE3123A92C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tDDA02F183759EBB391E77471AB0EA9B94DF4DEC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t59E5B85D0EF08A14E3655BF98668486E2E0EC1DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tC2448866BAB745333558A42C15D2C757E4EE3E7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t5D7FE3DB42D5B73F0AE382E1A057E0FB14C3281A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tE93F453E71C0FB4C289B25459962BA889E2DA2E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResettable_t184C586A55775537B74420529518E3085D1D9161_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96871D276C672785BE299C9D243E065BB938A648);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var wentOverLimit = false;
		V_0 = (bool)0;
		// for (var i = 0; i < m_EventMetrics.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		// if (m_EventMetrics[i].WentOverLimit)
		RuntimeObject* L_0 = __this->get_m_EventMetrics_2();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Item(System.Int32) */, IReadOnlyList_1_tE93F453E71C0FB4C289B25459962BA889E2DA2E3_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Multiplayer.Tools.NetStats.IEventMetric::get_WentOverLimit() */, IEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// wentOverLimit = true;
		V_0 = (bool)1;
		// break;
		goto IL_002f;
	}

IL_001d:
	{
		// for (var i = 0; i < m_EventMetrics.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0021:
	{
		// for (var i = 0; i < m_EventMetrics.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = __this->get_m_EventMetrics_2();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Count() */, IReadOnlyCollection_1_tC2448866BAB745333558A42C15D2C757E4EE3E7A_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_002f:
	{
		// if (wentOverLimit)
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.LogWarning(k_ThrottlingWarning);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral96871D276C672785BE299C9D243E065BB938A648, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// for (var i = 0; i < m_Observers.Count; i++)
		V_2 = 0;
		goto IL_005b;
	}

IL_0040:
	{
		// var snapshotObserver = m_Observers[i];
		RuntimeObject* L_9 = __this->get_m_Observers_3();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::get_Item(System.Int32) */, IList_1_tDDA02F183759EBB391E77471AB0EA9B94DF4DEC9_il2cpp_TypeInfo_var, L_9, L_10);
		// snapshotObserver.Observe(m_Collection);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_12 = __this->get_m_Collection_0();
		NullCheck(L_11);
		InterfaceActionInvoker1< MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5_il2cpp_TypeInfo_var, L_11, L_12);
		// for (var i = 0; i < m_Observers.Count; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005b:
	{
		// for (var i = 0; i < m_Observers.Count; i++)
		int32_t L_14 = V_2;
		RuntimeObject* L_15 = __this->get_m_Observers_3();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::get_Count() */, ICollection_1_t7BFFD02146B5A5A9BA5F857E75362DE3123A92C2_il2cpp_TypeInfo_var, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0040;
		}
	}
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		V_3 = 0;
		goto IL_008f;
	}

IL_006d:
	{
		// var resettable = m_Resettables[i];
		RuntimeObject* L_17 = __this->get_m_Resettables_1();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>::get_Item(System.Int32) */, IReadOnlyList_1_t5D7FE3DB42D5B73F0AE382E1A057E0FB14C3281A_il2cpp_TypeInfo_var, L_17, L_18);
		V_4 = L_19;
		// if (resettable.ShouldResetOnDispatch)
		RuntimeObject* L_20 = V_4;
		NullCheck(L_20);
		bool L_21;
		L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch() */, IResettable_t184C586A55775537B74420529518E3085D1D9161_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		// resettable.Reset();
		RuntimeObject* L_22 = V_4;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset() */, IResettable_t184C586A55775537B74420529518E3085D1D9161_il2cpp_TypeInfo_var, L_22);
	}

IL_008b:
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008f:
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		int32_t L_24 = V_3;
		RuntimeObject* L_25 = __this->get_m_Resettables_1();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IResettable>::get_Count() */, IReadOnlyCollection_1_t59E5B85D0EF08A14E3655BF98668486E2E0EC1DA_il2cpp_TypeInfo_var, L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_006d;
		}
	}
	{
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
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1 * MetricDispatcherBuilder_WithCounters_m5BDE184D8E8544AEEC6EAA32CBE1E772EB5B5D70 (MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1 * __this, CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A* ___counters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tE4933B2E856849F4BD27205E5C3924A8E5CA0586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA6E598F7F9229500DD78C4AA4777BB26265C5D76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A* V_0 = NULL;
	int32_t V_1 = 0;
	Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * V_2 = NULL;
	{
		// foreach (var counter in counters)
		CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A* L_0 = ___counters0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0006:
	{
		// foreach (var counter in counters)
		CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_Counters[counter.Id] = counter;
		RuntimeObject* L_5 = __this->get_m_Counters_0();
		Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * L_6 = V_2;
		NullCheck(L_6);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_7;
		L_7 = Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_inline(L_6, /*hidden argument*/Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_RuntimeMethod_var);
		Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * L_8 = V_2;
		NullCheck(L_5);
		InterfaceActionInvoker2< MetricId_t4457269377F602784DF155273C7A840015D8D342 , RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::set_Item(!0,!1) */, IDictionary_2_tE4933B2E856849F4BD27205E5C3924A8E5CA0586_il2cpp_TypeInfo_var, L_5, L_7, L_8);
		// m_Resettables.Add(counter);
		List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * L_9 = __this->get_m_Resettables_4();
		Counter_t8D67DBAE4E748C71A6E603A96B615D68B3D46BAE * L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_mA6E598F7F9229500DD78C4AA4777BB26265C5D76(L_9, L_10, /*hidden argument*/List_1_Add_mA6E598F7F9229500DD78C4AA4777BB26265C5D76_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// foreach (var counter in counters)
		int32_t L_12 = V_1;
		CounterU5BU5D_t08F52B1770DDB0F24E519D21339FDC63B7F1516A* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricDispatcherBuilder_Build_m3090A95805D0F1896E8B0BFA12F68AA520F02BB0 (MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_m34EC46BDFA9D6B7FF6FEC8531F976DF8F0530B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t85925A4F0A99E235A48763D98226907468E8F496_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m18D37C875E8EEE04D15649EA16219C45A16845CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m4B2A1A65CF1442A5604710E6FA3458AD8292487A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_mCD7BA9C5614585034D99A875FDD9AE9FDB055D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_mF10FD777EDA1EDDDE51ED517FEC76DEC1F9E2F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MetricDispatcher(
		//     new MetricCollection(
		//         new ReadOnlyDictionary<MetricId, IMetric<long>>(m_Counters),
		//         new ReadOnlyDictionary<MetricId, IMetric<double>>(m_Gauges),
		//         new ReadOnlyDictionary<MetricId, IMetric<TimeSpan>>(m_Timers),
		//         new ReadOnlyDictionary<MetricId, IEventMetric>(m_PayloadEvents)),
		//     m_Resettables,
		//     m_PayloadEvents.Values.ToList());
		RuntimeObject* L_0 = __this->get_m_Counters_0();
		ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8 * L_1 = (ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8 *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tE19419170612E8DC36DC72AC1B1597CB645718C8_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_m18D37C875E8EEE04D15649EA16219C45A16845CD(L_1, L_0, /*hidden argument*/ReadOnlyDictionary_2__ctor_m18D37C875E8EEE04D15649EA16219C45A16845CD_RuntimeMethod_var);
		RuntimeObject* L_2 = __this->get_m_Gauges_1();
		ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D * L_3 = (ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t81D1F571414633F9330BDBF3E59000C441D9047D_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_mF10FD777EDA1EDDDE51ED517FEC76DEC1F9E2F2E(L_3, L_2, /*hidden argument*/ReadOnlyDictionary_2__ctor_mF10FD777EDA1EDDDE51ED517FEC76DEC1F9E2F2E_RuntimeMethod_var);
		RuntimeObject* L_4 = __this->get_m_Timers_2();
		ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827 * L_5 = (ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827 *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tDA6F7490D36A1AE6ECBD01363DE4030E5D91B827_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_m4B2A1A65CF1442A5604710E6FA3458AD8292487A(L_5, L_4, /*hidden argument*/ReadOnlyDictionary_2__ctor_m4B2A1A65CF1442A5604710E6FA3458AD8292487A_RuntimeMethod_var);
		RuntimeObject* L_6 = __this->get_m_PayloadEvents_3();
		ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D * L_7 = (ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t587DE6A78321B8ADFEB4E3E285207103C1A21C0D_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_mCD7BA9C5614585034D99A875FDD9AE9FDB055D65(L_7, L_6, /*hidden argument*/ReadOnlyDictionary_2__ctor_mCD7BA9C5614585034D99A875FDD9AE9FDB055D65_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_8 = (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *)il2cpp_codegen_object_new(MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E_il2cpp_TypeInfo_var);
		MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * L_9 = __this->get_m_Resettables_4();
		RuntimeObject* L_10 = __this->get_m_PayloadEvents_3();
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Values() */, IDictionary_2_t85925A4F0A99E235A48763D98226907468E8F496_il2cpp_TypeInfo_var, L_10);
		List_1_tB0E4119D1E7801157CA3371E3DDBFFDBA159A074 * L_12;
		L_12 = Enumerable_ToList_TisIEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_m34EC46BDFA9D6B7FF6FEC8531F976DF8F0530B62(L_11, /*hidden argument*/Enumerable_ToList_TisIEventMetric_t9C2B4D598E7C26CE99CEA2B3AAEB003553BEB86F_m34EC46BDFA9D6B7FF6FEC8531F976DF8F0530B62_RuntimeMethod_var);
		MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 * L_13 = (MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33 *)il2cpp_codegen_object_new(MetricDispatcher_t1B6E003B3D645F7B2E0895EE2E9EDA686B695B33_il2cpp_TypeInfo_var);
		MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC(L_13, L_8, L_9, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcherBuilder__ctor_mF480977AFB8A533D394C09EBD1E13D0A34AC2CA4 (MetricDispatcherBuilder_t4DAC1E0BCB56B8302B784CD8EEA7C6AA455115F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4C4341EC5A0D6D1BF90D019347807AFC368B40A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7773DC8FF98EA6B242389CBBA3C9658FE8C3EEC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m81E452AD8EEAE510878F9AEF380F583039E0471B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE7FE185C2FBFE7B0BA674FE1F791C96DC2F24F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5AC51FB97D02E225877A5A89C0377F6201CB52DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IDictionary<MetricId, IMetric<long>> m_Counters
		//     = new Dictionary<MetricId, IMetric<long>>();
		Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608 * L_0 = (Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608 *)il2cpp_codegen_object_new(Dictionary_2_tE283CA35CAE0E486FFB28AF16749CDCA9D51E608_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7773DC8FF98EA6B242389CBBA3C9658FE8C3EEC0(L_0, /*hidden argument*/Dictionary_2__ctor_m7773DC8FF98EA6B242389CBBA3C9658FE8C3EEC0_RuntimeMethod_var);
		__this->set_m_Counters_0(L_0);
		// readonly IDictionary<MetricId, IMetric<double>> m_Gauges
		//     = new Dictionary<MetricId, IMetric<double>>();
		Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147 * L_1 = (Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147 *)il2cpp_codegen_object_new(Dictionary_2_tBBDC1467A0B5F00E8D31505E8D1ABFE1FE1BF147_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE7FE185C2FBFE7B0BA674FE1F791C96DC2F24F49(L_1, /*hidden argument*/Dictionary_2__ctor_mE7FE185C2FBFE7B0BA674FE1F791C96DC2F24F49_RuntimeMethod_var);
		__this->set_m_Gauges_1(L_1);
		// readonly IDictionary<MetricId, IMetric<TimeSpan>> m_Timers
		//     = new Dictionary<MetricId, IMetric<TimeSpan>>();
		Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64 * L_2 = (Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64 *)il2cpp_codegen_object_new(Dictionary_2_tA27CBE7C305ED08AFEBB4DE521D95C32733C5A64_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m81E452AD8EEAE510878F9AEF380F583039E0471B(L_2, /*hidden argument*/Dictionary_2__ctor_m81E452AD8EEAE510878F9AEF380F583039E0471B_RuntimeMethod_var);
		__this->set_m_Timers_2(L_2);
		// readonly IDictionary<MetricId, IEventMetric> m_PayloadEvents
		//     = new Dictionary<MetricId, IEventMetric>();
		Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48 * L_3 = (Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48 *)il2cpp_codegen_object_new(Dictionary_2_t5F9B830DA461E5D71513232A93A062148DABCB48_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4C4341EC5A0D6D1BF90D019347807AFC368B40A3(L_3, /*hidden argument*/Dictionary_2__ctor_m4C4341EC5A0D6D1BF90D019347807AFC368B40A3_RuntimeMethod_var);
		__this->set_m_PayloadEvents_3(L_3);
		// readonly List<IResettable> m_Resettables = new List<IResettable>();
		List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 * L_4 = (List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05 *)il2cpp_codegen_object_new(List_1_t33944EC1FECCA0559AB690C68562A8681F8BEB05_il2cpp_TypeInfo_var);
		List_1__ctor_m5AC51FB97D02E225877A5A89C0377F6201CB52DE(L_4, /*hidden argument*/List_1__ctor_m5AC51FB97D02E225877A5A89C0377F6201CB52DE_RuntimeMethod_var);
		__this->set_m_Resettables_4(L_4);
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
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = __this->get_U3CTypeIndexU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTypeIndexU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = __this->get_U3CEnumValueU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CEnumValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_inline(_thisAdjusted, ___value0, method);
}
// System.Type Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Type EnumType => Types[TypeIndex];
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0;
		L_0 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Type_t * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Type_t * MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal string Name => Enum.GetName(EnumType, EnumValue);
		Type_t * L_0;
		L_0 = MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Enum_GetName_mA141F96AFDC64AD7020374311750DBA47BFCA8FA(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538(_thisAdjusted, method);
	return _returnValue;
}
// System.Type[] Unity.Multiplayer.Tools.NetStats.MetricId::get_Types()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static Type[] Types { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CTypesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string[][] Names { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CNamesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Int32[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static int[][] Values { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CValuesU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string[][] DisplayNames { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CDisplayNamesU3Ek__BackingField_5();
		return L_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricKind[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_MetricKinds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static MetricKind[][] MetricKinds { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CMetricKindsU3Ek__BackingField_6();
		return L_0;
	}
}
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static CompositeUnit[][] Units { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CUnitsU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__cctor_mDC6C7297F3D702DD1E0F42057D43FE8B2D52BD64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisMemberInfo_t_mBB446BE9BBC8046C811A37FD8F0C6972C35F6E58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisType_t_TisString_t_m785505CA4A26FB05E312F8F3838E893AB774EA19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_0_mD770C0ED44B9CDE09588EEFE753AEEF648880075_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_1_m39B6F0DBF3D88ECBF4DA12915BD2730847E29123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	RuntimeArray * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * V_6 = NULL;
	MemberInfo_t * G_B4_0 = NULL;
	MemberInfo_t * G_B3_0 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	{
		// Types = AppDomain.CurrentDomain.GetAssemblies()
		//     .SelectMany(assembly => assembly
		//         .GetTypes()
		//         .Where(type =>
		//             type.IsEnum &&
		//             type.GetEnumUnderlyingType() == typeof(Int32) &&
		//             type.GetCustomAttributes(typeof(MetricTypeEnumAttribute), true).Length > 0))
		//     .OrderBy(type => type.FullName)
		//     .ToArray();
		AppDomain_tBEB6322D51DCB12C09A56A49886C2D09BA1C1A8A * L_0;
		L_0 = AppDomain_get_CurrentDomain_mC2FE307811914289CBBDEFEFF6175FCE2E96A55E(/*hidden argument*/NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* L_1;
		L_1 = AppDomain_GetAssemblies_m7397BD0461B4D6BA76AE0974DE9FBEDAF70AEBFD(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * L_2 = ((U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * L_3 = (Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 *)il2cpp_codegen_object_new(Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412_il2cpp_TypeInfo_var);
		Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_0_mD770C0ED44B9CDE09588EEFE753AEEF648880075_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF525E1BFCBF8F3108DEAE75F57915F8E5F8F6906_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC((RuntimeObject*)(RuntimeObject*)L_1, L_3, /*hidden argument*/Enumerable_SelectMany_TisAssembly_t_TisType_t_m714BE3CD2D51FDBC0AE1C1A383B08D53E587CADC_RuntimeMethod_var);
		U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * L_5 = ((U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * L_6 = (Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 *)il2cpp_codegen_object_new(Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0_il2cpp_TypeInfo_var);
		Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_1_m39B6F0DBF3D88ECBF4DA12915BD2730847E29123_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_OrderBy_TisType_t_TisString_t_m785505CA4A26FB05E312F8F3838E893AB774EA19(L_4, L_6, /*hidden argument*/Enumerable_OrderBy_TisType_t_TisString_t_m785505CA4A26FB05E312F8F3838E893AB774EA19_RuntimeMethod_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
		L_8 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_7, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->set_U3CTypesU3Ek__BackingField_2(L_8);
		// Names = new string[Types.Length][];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9;
		L_9 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_10 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)SZArrayNew(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->set_U3CNamesU3Ek__BackingField_3(L_10);
		// Values = new int[Types.Length][];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11;
		L_11 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		NullCheck(L_11);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_12 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->set_U3CValuesU3Ek__BackingField_4(L_12);
		// DisplayNames = new string[Types.Length][];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_13;
		L_13 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_14 = (StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4*)SZArrayNew(StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->set_U3CDisplayNamesU3Ek__BackingField_5(L_14);
		// MetricKinds = new MetricKind[Types.Length][];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15;
		L_15 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		NullCheck(L_15);
		MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* L_16 = (MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80*)(MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80*)SZArrayNew(MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))));
		((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->set_U3CMetricKindsU3Ek__BackingField_6(L_16);
		// Units = new CompositeUnit[Types.Length][];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17;
		L_17 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		NullCheck(L_17);
		CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* L_18 = (CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13*)(CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13*)SZArrayNew(CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))));
		((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->set_U3CUnitsU3Ek__BackingField_7(L_18);
		// for (var i = 0; i < Types.Length; ++i)
		V_0 = 0;
		goto IL_01d0;
	}

IL_009a:
	{
		// var enumType = Types[i];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_19;
		L_19 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Type_t * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		// Names[i] = enumType.GetEnumNames();
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_23;
		L_23 = MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41_inline(/*hidden argument*/NULL);
		int32_t L_24 = V_0;
		Type_t * L_25 = V_1;
		NullCheck(L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26;
		L_26 = VirtFuncInvoker0< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(105 /* System.String[] System.Type::GetEnumNames() */, L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_26);
		// var values = enumType.GetEnumValues();
		Type_t * L_27 = V_1;
		NullCheck(L_27);
		RuntimeArray * L_28;
		L_28 = VirtFuncInvoker0< RuntimeArray * >::Invoke(106 /* System.Array System.Type::GetEnumValues() */, L_27);
		V_2 = L_28;
		// Values[i] = new int[values.Length];
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_29;
		L_29 = MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F_inline(/*hidden argument*/NULL);
		int32_t L_30 = V_0;
		RuntimeArray * L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_31, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_33);
		// DisplayNames[i] = new string[values.Length];
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_34;
		L_34 = MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C_inline(/*hidden argument*/NULL);
		int32_t L_35 = V_0;
		RuntimeArray * L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_36, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_37);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_38);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_38);
		// MetricKinds[i] = new MetricKind[values.Length];
		MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* L_39;
		L_39 = MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2_inline(/*hidden argument*/NULL);
		int32_t L_40 = V_0;
		RuntimeArray * L_41 = V_2;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_41, /*hidden argument*/NULL);
		MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* L_43 = (MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972*)(MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972*)SZArrayNew(MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972_il2cpp_TypeInfo_var, (uint32_t)L_42);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_43);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972*)L_43);
		// Units[i] = new CompositeUnit[values.Length];
		CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* L_44;
		L_44 = MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176_inline(/*hidden argument*/NULL);
		int32_t L_45 = V_0;
		RuntimeArray * L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_46, /*hidden argument*/NULL);
		CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* L_48 = (CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635*)(CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635*)SZArrayNew(CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635_il2cpp_TypeInfo_var, (uint32_t)L_47);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_48);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635*)L_48);
		// for (var j = 0; j < values.Length; ++j)
		V_3 = 0;
		goto IL_01c0;
	}

IL_0105:
	{
		// var name = Names[i][j];
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_49;
		L_49 = MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41_inline(/*hidden argument*/NULL);
		int32_t L_50 = V_0;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_3;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_4 = L_55;
		// var value = (values as IList)[j];
		RuntimeArray * L_56 = V_2;
		int32_t L_57 = V_3;
		NullCheck(L_56);
		RuntimeObject * L_58;
		L_58 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_56, L_57);
		V_5 = L_58;
		// Values[i][j] = Convert.ToInt32(value);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_59;
		L_59 = MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F_inline(/*hidden argument*/NULL);
		int32_t L_60 = V_0;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = V_3;
		RuntimeObject * L_64 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = Convert_ToInt32_mFFEDED67681E3EC8705BCA890BBC206514431B4A(L_64, /*hidden argument*/NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (int32_t)L_65);
		// var enumMemberInfo = enumType.GetMember(name).FirstOrDefault();
		Type_t * L_66 = V_1;
		String_t* L_67 = V_4;
		NullCheck(L_66);
		MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* L_68;
		L_68 = Type_GetMember_mEB7D8041206EF68FE90341A267957B1A16DBEAC0(L_66, L_67, /*hidden argument*/NULL);
		MemberInfo_t * L_69;
		L_69 = Enumerable_FirstOrDefault_TisMemberInfo_t_mBB446BE9BBC8046C811A37FD8F0C6972C35F6E58((RuntimeObject*)(RuntimeObject*)L_68, /*hidden argument*/Enumerable_FirstOrDefault_TisMemberInfo_t_mBB446BE9BBC8046C811A37FD8F0C6972C35F6E58_RuntimeMethod_var);
		// if (enumMemberInfo
		//     ?.GetCustomAttributes(typeof(MetricMetadataAttribute), false)
		//     .FirstOrDefault() is MetricMetadataAttribute metadata)
		MemberInfo_t * L_70 = L_69;
		G_B3_0 = L_70;
		if (L_70)
		{
			G_B4_0 = L_70;
			goto IL_013d;
		}
	}
	{
		G_B5_0 = NULL;
		goto IL_0152;
	}

IL_013d:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_71 = { reinterpret_cast<intptr_t> (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_72;
		L_72 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_71, /*hidden argument*/NULL);
		NullCheck(G_B4_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_73;
		L_73 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, G_B4_0, L_72, (bool)0);
		RuntimeObject * L_74;
		L_74 = Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9((RuntimeObject*)(RuntimeObject*)L_73, /*hidden argument*/Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var);
		G_B5_0 = L_74;
	}

IL_0152:
	{
		V_6 = ((MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F *)IsInstClass((RuntimeObject*)G_B5_0, MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F_il2cpp_TypeInfo_var));
		MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * L_75 = V_6;
		if (!L_75)
		{
			goto IL_0196;
		}
	}
	{
		// DisplayNames[i][j] = metadata.DisplayName;
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_76;
		L_76 = MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C_inline(/*hidden argument*/NULL);
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_3;
		MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * L_81 = V_6;
		NullCheck(L_81);
		String_t* L_82;
		L_82 = MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703_inline(L_81, /*hidden argument*/NULL);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (String_t*)L_82);
		// MetricKinds[i][j] = metadata.MetricKind;
		MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* L_83;
		L_83 = MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2_inline(/*hidden argument*/NULL);
		int32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* L_86 = (MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972*)(L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_3;
		MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * L_88 = V_6;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F_inline(L_88, /*hidden argument*/NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (int32_t)L_89);
		// Units[i][j] = metadata.Units.GetCompositeUnit();
		CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* L_90;
		L_90 = MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176_inline(/*hidden argument*/NULL);
		int32_t L_91 = V_0;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* L_93 = (CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635*)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int32_t L_94 = V_3;
		MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * L_95 = V_6;
		NullCheck(L_95);
		int32_t L_96;
		L_96 = MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331_inline(L_95, /*hidden argument*/NULL);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_97;
		L_97 = UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8(L_96, /*hidden argument*/NULL);
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F )L_97);
	}

IL_0196:
	{
		// if (MetricKinds[i][j] == MetricKind.Counter)
		MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* L_98;
		L_98 = MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2_inline(/*hidden argument*/NULL);
		int32_t L_99 = V_0;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972* L_101 = (MetricKindU5BU5D_t4F60BE915144FDB02EEF95DB0D85C0DC13730972*)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102 = V_3;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		int32_t L_104 = (int32_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		if (L_104)
		{
			goto IL_01bc;
		}
	}
	{
		// Units[i][j].SecondsExponent -= 1;
		CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* L_105;
		L_105 = MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176_inline(/*hidden argument*/NULL);
		int32_t L_106 = V_0;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635* L_108 = (CompositeUnitU5BU5D_t34DB3759CB2C1C332F5310F67E53DD25B0117635*)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = V_3;
		NullCheck(L_108);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * L_110 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_109)));
		int8_t L_111;
		L_111 = CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)L_110, /*hidden argument*/NULL);
		CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_inline((CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F *)L_110, ((int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)1)))), /*hidden argument*/NULL);
	}

IL_01bc:
	{
		// for (var j = 0; j < values.Length; ++j)
		int32_t L_112 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
	}

IL_01c0:
	{
		// for (var j = 0; j < values.Length; ++j)
		int32_t L_113 = V_3;
		RuntimeArray * L_114 = V_2;
		NullCheck(L_114);
		int32_t L_115;
		L_115 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_114, /*hidden argument*/NULL);
		if ((((int32_t)L_113) < ((int32_t)L_115)))
		{
			goto IL_0105;
		}
	}
	{
		// for (var i = 0; i < Types.Length; ++i)
		int32_t L_116 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_01d0:
	{
		// for (var i = 0; i < Types.Length; ++i)
		int32_t L_117 = V_0;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_118;
		L_118 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length))))))
		{
			goto IL_009a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, Type_t * ___enumType0, int32_t ___enumValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisType_t_m1B7F52A8BA5C8850CA3BD56DDA479E240C78EE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TypeIndex = Array.IndexOf(Types, enumType);
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0;
		L_0 = MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline(/*hidden argument*/NULL);
		Type_t * L_1 = ___enumType0;
		int32_t L_2;
		L_2 = Array_IndexOf_TisType_t_m1B7F52A8BA5C8850CA3BD56DDA479E240C78EE7B(L_0, L_1, /*hidden argument*/Array_IndexOf_TisType_t_m1B7F52A8BA5C8850CA3BD56DDA479E240C78EE7B_RuntimeMethod_var);
		MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, L_2, /*hidden argument*/NULL);
		// EnumValue = enumValue;
		int32_t L_3 = ___enumValue1;
		MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46_AdjustorThunk (RuntimeObject * __this, Type_t * ___enumType0, int32_t ___enumValue1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46(_thisAdjusted, ___enumType0, ___enumValue1, method);
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___other0, const RuntimeMethod* method)
{
	{
		// return TypeIndex == other.TypeIndex && EnumValue == other.EnumValue;
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2;
		L_2 = MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8_AdjustorThunk (RuntimeObject * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	bool _returnValue;
	_returnValue = MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(this, obj)) return true;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_1 = (*(MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_2 = L_1;
		RuntimeObject * L_3 = Box(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject * L_4 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0015;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) return true;
		return (bool)1;
	}

IL_0015:
	{
		// if (obj.GetType() != this.GetType()) return false;
		RuntimeObject * L_5 = ___obj0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_5, /*hidden argument*/NULL);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_7 = (*(MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_8 = L_7;
		RuntimeObject * L_9 = Box(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_6, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0034;
		}
	}
	{
		// if (obj.GetType() != this.GetType()) return false;
		return (bool)0;
	}

IL_0034:
	{
		// return Equals((MetricId)obj);
		RuntimeObject * L_12 = ___obj0;
		bool L_13;
		L_13 = MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, ((*(MetricId_t4457269377F602784DF155273C7A840015D8D342 *)((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)UnBox(L_12, MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	bool _returnValue;
	_returnValue = MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	{
		// return 173 * TypeIndex + 13 * EnumValue;
		int32_t L_0;
		L_0 = MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)173), (int32_t)L_0)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)13), (int32_t)L_1))));
	}
}
IL2CPP_EXTERN_C  int32_t MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914 (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	{
		// public override string ToString() => Name;
		String_t* L_0;
		L_0 = MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538((MetricId_t4457269377F602784DF155273C7A840015D8D342 *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MetricId_t4457269377F602784DF155273C7A840015D8D342 * _thisAdjusted = reinterpret_cast<MetricId_t4457269377F602784DF155273C7A840015D8D342 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914(_thisAdjusted, method);
	return _returnValue;
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
// System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703 (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->get_U3CDisplayNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_DisplayName_mB3BBDCFD30ECAE1AD2F42B1CAABA8813AE54D15A (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDisplayNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		// public MetricKind MetricKind { get; set; } = MetricKind.Counter;
		int32_t L_0 = __this->get_U3CMetricKindU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_MetricKind(Unity.Multiplayer.Tools.NetStats.MetricKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_MetricKind_m38C083F9087F7C11044E28CEAFD8BEB706A23072 (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public MetricKind MetricKind { get; set; } = MetricKind.Counter;
		int32_t L_0 = ___value0;
		__this->set_U3CMetricKindU3Ek__BackingField_1(L_0);
		return;
	}
}
// Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331 (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		// public Units Units { get; set; } = Units.None;
		int32_t L_0 = __this->get_U3CUnitsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_Units(Unity.Multiplayer.Tools.NetStats.Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute_set_Units_m6A7BBCFC74D7D98BC3F3C5D4BF4E3FD1FC8B4D98 (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Units Units { get; set; } = Units.None;
		int32_t L_0 = ___value0;
		__this->set_U3CUnitsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricMetadataAttribute__ctor_m961DA3FB66A28C97D6C619B5468B3A04D38AAFC1 (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricTypeEnumAttribute__ctor_m836FB2CB02905DA1FA4AB480C40164D195E14223 (MetricTypeEnumAttribute_t0D19CCE78BC3D9C9B50A836BC36C64D585564162 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Multiplayer.Tools.NetStats.CompositeUnit Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetCompositeUnit(Unity.Multiplayer.Tools.NetStats.Units)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8 (int32_t ___units0, const RuntimeMethod* method)
{
	CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___units0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_009b;
			}
			case 5:
			{
				goto IL_00a5;
			}
			case 6:
			{
				goto IL_00af;
			}
			case 7:
			{
				goto IL_00b9;
			}
			case 8:
			{
				goto IL_00c3;
			}
			case 9:
			{
				goto IL_00cd;
			}
			case 10:
			{
				goto IL_00d7;
			}
			case 11:
			{
				goto IL_00e1;
			}
			case 12:
			{
				goto IL_00ec;
			}
			case 13:
			{
				goto IL_00f7;
			}
			case 14:
			{
				goto IL_0102;
			}
			case 15:
			{
				goto IL_010c;
			}
			case 16:
			{
				goto IL_0116;
			}
			case 17:
			{
				goto IL_0120;
			}
			case 18:
			{
				goto IL_012a;
			}
			case 19:
			{
				goto IL_0134;
			}
			case 20:
			{
				goto IL_013e;
			}
			case 21:
			{
				goto IL_0148;
			}
			case 22:
			{
				goto IL_0152;
			}
			case 23:
			{
				goto IL_015c;
			}
			case 24:
			{
				goto IL_0166;
			}
			case 25:
			{
				goto IL_0170;
			}
		}
	}
	{
		goto IL_017a;
	}

IL_0073:
	{
		// return new CompositeUnit();
		il2cpp_codegen_initobj((&V_0), sizeof(CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F ));
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_1 = V_0;
		return L_1;
	}

IL_007d:
	{
		// return new CompositeUnit(bitsExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_2), 0, (int8_t)1, (int8_t)0, (int8_t)0, /*hidden argument*/NULL);
		return L_2;
	}

IL_0087:
	{
		// return new CompositeUnit(bitsExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_3), 0, (int8_t)1, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_3;
	}

IL_0091:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Kilo, bitsExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_4), 4, (int8_t)1, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_4;
	}

IL_009b:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Mega, bitsExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_5;
		memset((&L_5), 0, sizeof(L_5));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_5), 5, (int8_t)1, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_5;
	}

IL_00a5:
	{
		// return new CompositeUnit(bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_6), 0, (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_6;
	}

IL_00af:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Kilo, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_7;
		memset((&L_7), 0, sizeof(L_7));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_7), 4, (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_7;
	}

IL_00b9:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Mega, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_8;
		memset((&L_8), 0, sizeof(L_8));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_8), 5, (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_8;
	}

IL_00c3:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Giga, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_9;
		memset((&L_9), 0, sizeof(L_9));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_9), 6, (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_9;
	}

IL_00cd:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Tera, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_10), 7, (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_10;
	}

IL_00d7:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Kibi, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_11;
		memset((&L_11), 0, sizeof(L_11));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_11), 8, (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_11;
	}

IL_00e1:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Mebi, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_12;
		memset((&L_12), 0, sizeof(L_12));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_12), ((int32_t)9), (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_12;
	}

IL_00ec:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Gibi, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_13;
		memset((&L_13), 0, sizeof(L_13));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_13), ((int32_t)10), (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_13;
	}

IL_00f7:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Tebi, bytesExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_14;
		memset((&L_14), 0, sizeof(L_14));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_14), ((int32_t)11), (int8_t)0, (int8_t)1, (int8_t)0, /*hidden argument*/NULL);
		return L_14;
	}

IL_0102:
	{
		// return new CompositeUnit(bytesExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_15;
		memset((&L_15), 0, sizeof(L_15));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_15), 0, (int8_t)0, (int8_t)1, (int8_t)(-1), /*hidden argument*/NULL);
		return L_15;
	}

IL_010c:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Kilo, bytesExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_16;
		memset((&L_16), 0, sizeof(L_16));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_16), 4, (int8_t)0, (int8_t)1, (int8_t)(-1), /*hidden argument*/NULL);
		return L_16;
	}

IL_0116:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Mega, bytesExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_17;
		memset((&L_17), 0, sizeof(L_17));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_17), 5, (int8_t)0, (int8_t)1, (int8_t)(-1), /*hidden argument*/NULL);
		return L_17;
	}

IL_0120:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Giga, bytesExponent: 1, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_18;
		memset((&L_18), 0, sizeof(L_18));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_18), 6, (int8_t)0, (int8_t)1, (int8_t)(-1), /*hidden argument*/NULL);
		return L_18;
	}

IL_012a:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Nano, secondsExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_19;
		memset((&L_19), 0, sizeof(L_19));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_19), 1, (int8_t)0, (int8_t)0, (int8_t)1, /*hidden argument*/NULL);
		return L_19;
	}

IL_0134:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Micro, secondsExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_20;
		memset((&L_20), 0, sizeof(L_20));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_20), 2, (int8_t)0, (int8_t)0, (int8_t)1, /*hidden argument*/NULL);
		return L_20;
	}

IL_013e:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Milli, secondsExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_21;
		memset((&L_21), 0, sizeof(L_21));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_21), 3, (int8_t)0, (int8_t)0, (int8_t)1, /*hidden argument*/NULL);
		return L_21;
	}

IL_0148:
	{
		// return new CompositeUnit(secondsExponent: 1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_22;
		memset((&L_22), 0, sizeof(L_22));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_22), 0, (int8_t)0, (int8_t)0, (int8_t)1, /*hidden argument*/NULL);
		return L_22;
	}

IL_0152:
	{
		// return new CompositeUnit(secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_23;
		memset((&L_23), 0, sizeof(L_23));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_23), 0, (int8_t)0, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_23;
	}

IL_015c:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Kilo, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_24;
		memset((&L_24), 0, sizeof(L_24));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_24), 4, (int8_t)0, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_24;
	}

IL_0166:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Mega, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_25;
		memset((&L_25), 0, sizeof(L_25));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_25), 5, (int8_t)0, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_25;
	}

IL_0170:
	{
		// return new CompositeUnit(prefix: UnitPrefix.Giga, secondsExponent: -1);
		CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F  L_26;
		memset((&L_26), 0, sizeof(L_26));
		CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5((&L_26), 6, (int8_t)0, (int8_t)0, (int8_t)(-1), /*hidden argument*/NULL);
		return L_26;
	}

IL_017a:
	{
		// throw new ArgumentOutOfRangeException(nameof(units), units, null);
		int32_t L_27 = ___units0;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Units_tAC3820CE804F1BFBCF6761A50DB58CAF9C201A58_il2cpp_TypeInfo_var)), &L_28);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_30 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4)), L_29, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8_RuntimeMethod_var)));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAF0B66C26921291ACB70CFCCFDF1D978648C9E0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * L_0 = (U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 *)il2cpp_codegen_object_new(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3AA61DAB9C1066C9223D67AC0EBD27907B717477(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricId/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3AA61DAB9C1066C9223D67AC0EBD27907B717477 (U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<.cctor>b__37_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__37_0_mD770C0ED44B9CDE09588EEFE753AEEF648880075 (U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__37_2_m3648DD8A023828CDA9E38F6586F7577248A4E1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B2_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B2_1 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B1_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B1_1 = NULL;
	{
		// .SelectMany(assembly => assembly
		//     .GetTypes()
		//     .Where(type =>
		//         type.IsEnum &&
		//         type.GetEnumUnderlyingType() == typeof(Int32) &&
		//         type.GetCustomAttributes(typeof(MetricTypeEnumAttribute), true).Length > 0))
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(15 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_2 = ((U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var))->get_U3CU3E9__37_2_1();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var);
		U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * L_4 = ((U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_5 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_2_m3648DD8A023828CDA9E38F6586F7577248A4E1DF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_6 = L_5;
		((U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738_il2cpp_TypeInfo_var))->set_U3CU3E9__37_2_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		return L_7;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<.cctor>b__37_2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__37_2_m3648DD8A023828CDA9E38F6586F7577248A4E1DF (U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricTypeEnumAttribute_t0D19CCE78BC3D9C9B50A836BC36C64D585564162_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type.IsEnum &&
		// type.GetEnumUnderlyingType() == typeof(Int32) &&
		// type.GetCustomAttributes(typeof(MetricTypeEnumAttribute), true).Length > 0))
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(73 /* System.Boolean System.Type::get_IsEnum() */, L_0);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(107 /* System.Type System.Type::GetEnumUnderlyingType() */, L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_7 = ___type0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (MetricTypeEnumAttribute_t0D19CCE78BC3D9C9B50A836BC36C64D585564162_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10;
		L_10 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_7, L_9, (bool)1);
		NullCheck(L_10);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_10)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<.cctor>b__37_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_cctorU3Eb__37_1_m39B6F0DBF3D88ECBF4DA12915BD2730847E29123 (U3CU3Ec_tE0ABFE9EA3E86FDEE54E77D3A049592483AA8738 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// .OrderBy(type => type.FullName)
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal UnitPrefix Prefix { get; set; }
		uint8_t L_0 = __this->get_U3CPrefixU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal UnitPrefix Prefix { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CPrefixU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal sbyte BitsExponent { get; set; }
		int8_t L_0 = __this->get_U3CBitsExponentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal sbyte BitsExponent { get; set; }
		int8_t L_0 = ___value0;
		__this->set_U3CBitsExponentU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal sbyte BytesExponent { get; set; }
		int8_t L_0 = __this->get_U3CBytesExponentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal sbyte BytesExponent { get; set; }
		int8_t L_0 = ___value0;
		__this->set_U3CBytesExponentU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, const RuntimeMethod* method)
{
	{
		// internal sbyte SecondsExponent { get; set; }
		int8_t L_0 = __this->get_U3CSecondsExponentU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_inline (CompositeUnit_tFFF3B8A0A3FDBD513020D896FD21B8CD769B215F * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		// internal sbyte SecondsExponent { get; set; }
		int8_t L_0 = ___value0;
		__this->set_U3CSecondsExponentU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798_inline (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = __this->get_U3CTypeIndexU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int TypeIndex { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTypeIndexU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, const RuntimeMethod* method)
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = __this->get_U3CEnumValueU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_inline (MetricId_t4457269377F602784DF155273C7A840015D8D342 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int EnumValue { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CEnumValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static Type[] Types { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CTypesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string[][] Names { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CNamesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static int[][] Values { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CValuesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static string[][] DisplayNames { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CDisplayNamesU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static MetricKind[][] MetricKinds { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CMetricKindsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static CompositeUnit[][] Units { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13* L_0 = ((MetricId_t4457269377F602784DF155273C7A840015D8D342_StaticFields*)il2cpp_codegen_static_fields_for(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var))->get_U3CUnitsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703_inline (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->get_U3CDisplayNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F_inline (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		// public MetricKind MetricKind { get; set; } = MetricKind.Counter;
		int32_t L_0 = __this->get_U3CMetricKindU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331_inline (MetricMetadataAttribute_tED24C86E466EC4DB4AA5C470E7617968C0FF4A1F * __this, const RuntimeMethod* method)
{
	{
		// public Units Units { get; set; } = Units.None;
		int32_t L_0 = __this->get_U3CUnitsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Metric_1_get_Value_m64187F25A1F484D3FA5D5678A6E5AB946AEA735D_gshared_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, const RuntimeMethod* method)
{
	{
		// public TValue Value { get; protected set; }
		int64_t L_0 = (int64_t)__this->get_U3CValueU3Ek__BackingField_1();
		return (int64_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m9817EE938E4C2707365B8F8FC960A2AD7B7B1070_gshared_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public TValue Value { get; protected set; }
		int64_t L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  Metric_1_get_Id_m37490A9FC6AED054D25C4F1CE61266F5E7E73642_gshared_inline (Metric_1_t7F6E3615BF99E65C9F22B237F2A86D8FC8DACC49 * __this, const RuntimeMethod* method)
{
	{
		// public MetricId Id { get; }
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_0 = (MetricId_t4457269377F602784DF155273C7A840015D8D342 )__this->get_U3CIdU3Ek__BackingField_0();
		return (MetricId_t4457269377F602784DF155273C7A840015D8D342 )L_0;
	}
}
