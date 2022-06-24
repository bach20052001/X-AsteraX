#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>
struct IMetric_1_t9969628B11EC5EA7BD7A9EE5773278B47F905CBD;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_t72D108A371510A87097A1EAC94C2E67AEFC1EE1C;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_tCC588BD9FC49C62ED0FE74D76DFCBB9CB3AC0826;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_t0F50FEF148CE67FB3F747F56D9F50C84B1DC5531;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_t4571D1C30D93A7DDC080730ED16FE0F9C9E2E7D7;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyList_1_t5D70A1E02F76C9D4D918AAB6B54337A9D6E3F812;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>
struct IReadOnlyList_1_tA059DB4E4DF8AC92B0FED505E3C08B7D79AFDA00;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>
struct IReadOnlyList_1_tABCDCB25ACCD5F342FE1E85B677C80A439881724;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>
struct IReadOnlyList_1_tA5E741FB38023EC52D4040E8849A0817BCBF4CE6;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>
struct IReadOnlyList_1_t800F86D51B18216C3AF8503A6AB6995AE9EE3359;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>
struct IReadOnlyList_1_t7116CEEEAB201B9FCD9715D5B2D771665F33CDE5;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>
struct IReadOnlyList_1_t3E2C8FF8F1790740FA120745BAE5F25F5DB4735B;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>
struct IReadOnlyList_1_t75DC1693254A8DA559DAA85BBB2010CDD9F998E6;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>
struct IReadOnlyList_1_tAF5C869B89D574480B8376E9C905110CD21148A8;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>
struct IReadOnlyList_1_t52F2A7FDFEFC5113CACDDF1A60BB9CB9F959FC7B;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>
struct IReadOnlyList_1_t4E0C2EBDDED1D41F9571AAF9E1912853351F26FD;
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][]
struct CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// Unity.Multiplayer.Tools.NetStats.MetricKind[][]
struct MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80;
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory
struct ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper
struct CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory
struct EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter
struct ICounter_t09C5FC37E47A13A1E049C9B94594A4D8FA90769E;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory
struct ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_tE7C56283153031145DFA6FE40A0CCD84EEAA13E5;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver
struct LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters
struct MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters
struct MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters
struct MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters
struct ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICounter_t09C5FC37E47A13A1E049C9B94594A4D8FA90769E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetric_1_t9969628B11EC5EA7BD7A9EE5773278B47F905CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1538A07424430301B159B5CE5821E6993791EE42;
IL2CPP_EXTERN_C String_t* _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67;
IL2CPP_EXTERN_C String_t* _stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0C79B2914E1F1A10CE74882465237DDA1F78F29D 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory
struct ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory
struct EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver
struct LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters
struct MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::m_SentCounter
	RuntimeObject* ___m_SentCounter_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::m_ReceivedCounter
	RuntimeObject* ___m_ReceivedCounter_1;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::<Sent>k__BackingField
	String_t* ___U3CSentU3Ek__BackingField_2;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::<Received>k__BackingField
	String_t* ___U3CReceivedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_SentCounter_0() { return static_cast<int32_t>(offsetof(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0, ___m_SentCounter_0)); }
	inline RuntimeObject* get_m_SentCounter_0() const { return ___m_SentCounter_0; }
	inline RuntimeObject** get_address_of_m_SentCounter_0() { return &___m_SentCounter_0; }
	inline void set_m_SentCounter_0(RuntimeObject* value)
	{
		___m_SentCounter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SentCounter_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedCounter_1() { return static_cast<int32_t>(offsetof(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0, ___m_ReceivedCounter_1)); }
	inline RuntimeObject* get_m_ReceivedCounter_1() const { return ___m_ReceivedCounter_1; }
	inline RuntimeObject** get_address_of_m_ReceivedCounter_1() { return &___m_ReceivedCounter_1; }
	inline void set_m_ReceivedCounter_1(RuntimeObject* value)
	{
		___m_ReceivedCounter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReceivedCounter_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0, ___U3CSentU3Ek__BackingField_2)); }
	inline String_t* get_U3CSentU3Ek__BackingField_2() const { return ___U3CSentU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSentU3Ek__BackingField_2() { return &___U3CSentU3Ek__BackingField_2; }
	inline void set_U3CSentU3Ek__BackingField_2(String_t* value)
	{
		___U3CSentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceivedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0, ___U3CReceivedU3Ek__BackingField_3)); }
	inline String_t* get_U3CReceivedU3Ek__BackingField_3() const { return ___U3CReceivedU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CReceivedU3Ek__BackingField_3() { return &___U3CReceivedU3Ek__BackingField_3; }
	inline void set_U3CReceivedU3Ek__BackingField_3(String_t* value)
	{
		___U3CReceivedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceivedU3Ek__BackingField_3), (void*)value);
	}
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


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters
struct MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Bytes
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * ___Bytes_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Events
	MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * ___Events_1;

public:
	inline static int32_t get_offset_of_Bytes_0() { return static_cast<int32_t>(offsetof(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C, ___Bytes_0)); }
	inline MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * get_Bytes_0() const { return ___Bytes_0; }
	inline MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 ** get_address_of_Bytes_0() { return &___Bytes_0; }
	inline void set_Bytes_0(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * value)
	{
		___Bytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_Events_1() { return static_cast<int32_t>(offsetof(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C, ___Events_1)); }
	inline MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * get_Events_1() const { return ___Events_1; }
	inline MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 ** get_address_of_Events_1() { return &___Events_1; }
	inline void set_Events_1(MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * value)
	{
		___Events_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Events_1), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters
struct MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618  : public RuntimeObject
{
public:
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::<Sent>k__BackingField
	String_t* ___U3CSentU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::m_SentCounter
	RuntimeObject* ___m_SentCounter_1;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::<Received>k__BackingField
	String_t* ___U3CReceivedU3Ek__BackingField_2;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::m_ReceivedCounter
	RuntimeObject* ___m_ReceivedCounter_3;

public:
	inline static int32_t get_offset_of_U3CSentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618, ___U3CSentU3Ek__BackingField_0)); }
	inline String_t* get_U3CSentU3Ek__BackingField_0() const { return ___U3CSentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSentU3Ek__BackingField_0() { return &___U3CSentU3Ek__BackingField_0; }
	inline void set_U3CSentU3Ek__BackingField_0(String_t* value)
	{
		___U3CSentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSentU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SentCounter_1() { return static_cast<int32_t>(offsetof(MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618, ___m_SentCounter_1)); }
	inline RuntimeObject* get_m_SentCounter_1() const { return ___m_SentCounter_1; }
	inline RuntimeObject** get_address_of_m_SentCounter_1() { return &___m_SentCounter_1; }
	inline void set_m_SentCounter_1(RuntimeObject* value)
	{
		___m_SentCounter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SentCounter_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceivedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618, ___U3CReceivedU3Ek__BackingField_2)); }
	inline String_t* get_U3CReceivedU3Ek__BackingField_2() const { return ___U3CReceivedU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CReceivedU3Ek__BackingField_2() { return &___U3CReceivedU3Ek__BackingField_2; }
	inline void set_U3CReceivedU3Ek__BackingField_2(String_t* value)
	{
		___U3CReceivedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceivedU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedCounter_3() { return static_cast<int32_t>(offsetof(MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618, ___m_ReceivedCounter_3)); }
	inline RuntimeObject* get_m_ReceivedCounter_3() const { return ___m_ReceivedCounter_3; }
	inline RuntimeObject** get_address_of_m_ReceivedCounter_3() { return &___m_ReceivedCounter_3; }
	inline void set_m_ReceivedCounter_3(RuntimeObject* value)
	{
		___m_ReceivedCounter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReceivedCounter_3), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters
struct ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::totalBytes
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * ___totalBytes_1;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::rpc
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___rpc_2;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::namedMessage
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___namedMessage_3;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::unnamedMessage
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___unnamedMessage_4;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::networkVariableDelta
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___networkVariableDelta_5;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::objectSpawned
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___objectSpawned_6;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::objectDestroyed
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___objectDestroyed_7;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::serverLog
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___serverLog_8;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::sceneEvent
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___sceneEvent_9;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ownershipChange
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___ownershipChange_10;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::customMessage
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___customMessage_11;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::networkMessage
	MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ___networkMessage_12;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::m_ByteCounterFactory
	RuntimeObject* ___m_ByteCounterFactory_13;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::m_EventCounterFactory
	RuntimeObject* ___m_EventCounterFactory_14;

public:
	inline static int32_t get_offset_of_totalBytes_1() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___totalBytes_1)); }
	inline MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * get_totalBytes_1() const { return ___totalBytes_1; }
	inline MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 ** get_address_of_totalBytes_1() { return &___totalBytes_1; }
	inline void set_totalBytes_1(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * value)
	{
		___totalBytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalBytes_1), (void*)value);
	}

	inline static int32_t get_offset_of_rpc_2() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___rpc_2)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_rpc_2() const { return ___rpc_2; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_rpc_2() { return &___rpc_2; }
	inline void set_rpc_2(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___rpc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpc_2), (void*)value);
	}

	inline static int32_t get_offset_of_namedMessage_3() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___namedMessage_3)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_namedMessage_3() const { return ___namedMessage_3; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_namedMessage_3() { return &___namedMessage_3; }
	inline void set_namedMessage_3(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___namedMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedMessage_3), (void*)value);
	}

	inline static int32_t get_offset_of_unnamedMessage_4() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___unnamedMessage_4)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_unnamedMessage_4() const { return ___unnamedMessage_4; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_unnamedMessage_4() { return &___unnamedMessage_4; }
	inline void set_unnamedMessage_4(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___unnamedMessage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unnamedMessage_4), (void*)value);
	}

	inline static int32_t get_offset_of_networkVariableDelta_5() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___networkVariableDelta_5)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_networkVariableDelta_5() const { return ___networkVariableDelta_5; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_networkVariableDelta_5() { return &___networkVariableDelta_5; }
	inline void set_networkVariableDelta_5(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___networkVariableDelta_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkVariableDelta_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectSpawned_6() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___objectSpawned_6)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_objectSpawned_6() const { return ___objectSpawned_6; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_objectSpawned_6() { return &___objectSpawned_6; }
	inline void set_objectSpawned_6(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___objectSpawned_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectSpawned_6), (void*)value);
	}

	inline static int32_t get_offset_of_objectDestroyed_7() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___objectDestroyed_7)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_objectDestroyed_7() const { return ___objectDestroyed_7; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_objectDestroyed_7() { return &___objectDestroyed_7; }
	inline void set_objectDestroyed_7(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___objectDestroyed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectDestroyed_7), (void*)value);
	}

	inline static int32_t get_offset_of_serverLog_8() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___serverLog_8)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_serverLog_8() const { return ___serverLog_8; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_serverLog_8() { return &___serverLog_8; }
	inline void set_serverLog_8(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___serverLog_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverLog_8), (void*)value);
	}

	inline static int32_t get_offset_of_sceneEvent_9() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___sceneEvent_9)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_sceneEvent_9() const { return ___sceneEvent_9; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_sceneEvent_9() { return &___sceneEvent_9; }
	inline void set_sceneEvent_9(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___sceneEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_ownershipChange_10() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___ownershipChange_10)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_ownershipChange_10() const { return ___ownershipChange_10; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_ownershipChange_10() { return &___ownershipChange_10; }
	inline void set_ownershipChange_10(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___ownershipChange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownershipChange_10), (void*)value);
	}

	inline static int32_t get_offset_of_customMessage_11() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___customMessage_11)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_customMessage_11() const { return ___customMessage_11; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_customMessage_11() { return &___customMessage_11; }
	inline void set_customMessage_11(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___customMessage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMessage_11), (void*)value);
	}

	inline static int32_t get_offset_of_networkMessage_12() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___networkMessage_12)); }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * get_networkMessage_12() const { return ___networkMessage_12; }
	inline MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C ** get_address_of_networkMessage_12() { return &___networkMessage_12; }
	inline void set_networkMessage_12(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * value)
	{
		___networkMessage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkMessage_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ByteCounterFactory_13() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___m_ByteCounterFactory_13)); }
	inline RuntimeObject* get_m_ByteCounterFactory_13() const { return ___m_ByteCounterFactory_13; }
	inline RuntimeObject** get_address_of_m_ByteCounterFactory_13() { return &___m_ByteCounterFactory_13; }
	inline void set_m_ByteCounterFactory_13(RuntimeObject* value)
	{
		___m_ByteCounterFactory_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ByteCounterFactory_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventCounterFactory_14() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8, ___m_EventCounterFactory_14)); }
	inline RuntimeObject* get_m_EventCounterFactory_14() const { return ___m_EventCounterFactory_14; }
	inline RuntimeObject** get_address_of_m_EventCounterFactory_14() { return &___m_EventCounterFactory_14; }
	inline void set_m_EventCounterFactory_14(RuntimeObject* value)
	{
		___m_EventCounterFactory_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventCounterFactory_14), (void*)value);
	}
};

struct ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_StaticFields
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::s_Singleton
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * ___s_Singleton_0;

public:
	inline static int32_t get_offset_of_s_Singleton_0() { return static_cast<int32_t>(offsetof(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_StaticFields, ___s_Singleton_0)); }
	inline ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * get_s_Singleton_0() const { return ___s_Singleton_0; }
	inline ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 ** get_address_of_s_Singleton_0() { return &___s_Singleton_0; }
	inline void set_s_Singleton_0(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * value)
	{
		___s_Singleton_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Singleton_0), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory
struct ProfilerMetricObserverFactory_tF1C87E2D0663B1D0DCA931858D21F3CC6C024CC5  : public RuntimeObject
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

// Unity.Profiling.ProfilerCounter`1<System.Int64>
struct ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D 
{
public:

public:
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


// Unity.Profiling.ProfilerCategory
struct ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544 
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
					// System.UInt16 Unity.Profiling.ProfilerCategory::m_CategoryId
					uint16_t ___m_CategoryId_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_CategoryId_0_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544__padding[2];
	};

public:
	inline static int32_t get_offset_of_m_CategoryId_0() { return static_cast<int32_t>(offsetof(ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544, ___m_CategoryId_0)); }
	inline uint16_t get_m_CategoryId_0() const { return ___m_CategoryId_0; }
	inline uint16_t* get_address_of_m_CategoryId_0() { return &___m_CategoryId_0; }
	inline void set_m_CategoryId_0(uint16_t value)
	{
		___m_CategoryId_0 = value;
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


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper
struct CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709  : public RuntimeObject
{
public:
	// Unity.Profiling.ProfilerCounter`1<System.Int64> Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::m_Counter
	ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  ___m_Counter_0;

public:
	inline static int32_t get_offset_of_m_Counter_0() { return static_cast<int32_t>(offsetof(CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709, ___m_Counter_0)); }
	inline ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  get_m_Counter_0() const { return ___m_Counter_0; }
	inline ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * get_address_of_m_Counter_0() { return &___m_Counter_0; }
	inline void set_m_Counter_0(ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  value)
	{
		___m_Counter_0 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType
struct DirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.MetricType
struct MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.MetricTypes.MetricType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarkerDataUnit
struct ProfilerMarkerDataUnit_tC1180A8356A6095894583DC4D5493802A1898005 
{
public:
	// System.Byte Unity.Profiling.ProfilerMarkerDataUnit::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProfilerMarkerDataUnit_tC1180A8356A6095894583DC4D5493802A1898005, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Unity.Profiling.ProfilerCounter`1<System.Int64>::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_gshared_inline (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * __this, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C_gshared (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68_gshared (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);

// Unity.Profiling.ProfilerCategory Unity.Profiling.ProfilerCategory::get_Network()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ProfilerCategory_get_Network_mEC2B961D8511B28369BFA9EFF87D7B07E82BBCE2 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerCounter`1<System.Int64>::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit)
inline void ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_inline (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * __this, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method)
{
	((  void (*) (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D *, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544 , String_t*, uint8_t, const RuntimeMethod*))ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_gshared_inline)(__this, ___category0, ___name1, ___dataUnit2, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::.ctor(Unity.Profiling.ProfilerCounter`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper__ctor_m67B3DCC2CF64D7A4528D42EB1AA8A7A2E9A66BD2 (CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 * __this, ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  ___counter0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * ProfilerCounters_get_Instance_mEB38D1458C8276EC807EAC0E1EC7CB30669BA946 (const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::UpdateFromMetrics(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters_UpdateFromMetrics_mC3A89100CEC06E4BFE15C8DF9939A2D090B38A9D (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mA2B724E05B3366EA7CD6A2241B8557C37EEC3685_inline (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_mFCE005184C71DC1464A54963C1F47A6FDCD572A3_inline (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters__ctor_mA1ABE9104783736EBDB1C63EA1E3905164596580 (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricEventCounters__ctor_m1F8E9F5C542D7E62BBACA6C4AE44F03EAD564C7F (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m5B90B71760C8C7B2FC171C2CE9EF167B8BFECBFE_inline (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_mD4EF4485878844670D40412278CD9992F42FD43B_inline (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::.ctor(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters__ctor_mEA9DDF09F04C1144E2D580C0EDD89F6DE0779C4C (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, RuntimeObject* ___byteCounterFactory0, RuntimeObject* ___eventCounterFactory1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCounterFactory__ctor_m48A85C05A25FB64CE2D4AF773D2966A1B6CE7516 (ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCounterFactory__ctor_m57619F5B9E23C4D59CEAE3654C453178AD03BA79 (EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956 * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricByteCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * ProfilerCounters_ConstructMetricByteCounters_m39F270F5808A93D18C1F62A30C5FF8651A14A094 (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, String_t* ___name0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, int32_t ___metricType0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ProfilerCounters_ConstructMetricCounters_mC247EC5DAED608EF22EDA4B5A26B05C761FF121C (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeExtensions::GetDisplayNameString(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeExtensions_GetDisplayNameString_mC810E7FBE65916C25D152B608210F34C531A8366 (int32_t ___metricType0, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters__ctor_m50FC9432AA7E13513CE56A52489763F594FFC5E9 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, String_t* ___displayName0, RuntimeObject* ___byteCounterFactory1, RuntimeObject* ___eventCounterFactory2, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetId(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E (int32_t ___directedMetric0, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * __this, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId0, RuntimeObject** ___counter1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::Sample(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters_Sample_m59C03C041E26B02C9E20FC8FE6BBF17C80254B12 (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9 (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, MetricId_t4457269377F602784DF155273C7A840015D8D342  ___metricId1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E *, MetricId_t4457269377F602784DF155273C7A840015D8D342 , const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C_gshared)(___collection0, ___metricId1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68_gshared)(__this, ___sent0, ___received1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyProfilerMetricObserver__ctor_mB3AF5E9474AF5FF77C8C1C0BB9C934CAEDF9317E (LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28 * __this, const RuntimeMethod* method);
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::Construct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteCounterFactory_Construct_m49EADBD28A58C4257B2FCD40BF690C3A1DE01CB9 (ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new CounterWrapper(
		//     new ProfilerCounter<long>(
		//         ProfilerCategory.Network, name, ProfilerMarkerDataUnit.Bytes));
		ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  L_0;
		L_0 = ProfilerCategory_get_Network_mEC2B961D8511B28369BFA9EFF87D7B07E82BBCE2(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_inline((&L_2), L_0, L_1, 2, /*hidden argument*/ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 * L_3 = (CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 *)il2cpp_codegen_object_new(CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709_il2cpp_TypeInfo_var);
		CounterWrapper__ctor_m67B3DCC2CF64D7A4528D42EB1AA8A7A2E9A66BD2(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCounterFactory__ctor_m48A85C05A25FB64CE2D4AF773D2966A1B6CE7516 (ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F * __this, const RuntimeMethod* method)
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::.ctor(Unity.Profiling.ProfilerCounter`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper__ctor_m67B3DCC2CF64D7A4528D42EB1AA8A7A2E9A66BD2 (CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 * __this, ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  ___counter0, const RuntimeMethod* method)
{
	{
		// public CounterWrapper(ProfilerCounter<long> counter)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Counter = counter;
		ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  L_0 = ___counter0;
		__this->set_m_Counter_0(L_0);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::Sample(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper_Sample_m2426CBDC42B9313A7B58FB06F1C0862FDF918872 (CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 * __this, int64_t ___inValue0, const RuntimeMethod* method)
{
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::Construct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventCounterFactory_Construct_mF72F8765CC0F1B554B32F467C08AEFC6D776C06D (EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new CounterWrapper(
		//     new ProfilerCounter<long>(
		//         ProfilerCategory.Network, name, ProfilerMarkerDataUnit.Count));
		ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  L_0;
		L_0 = ProfilerCategory_get_Network_mEC2B961D8511B28369BFA9EFF87D7B07E82BBCE2(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_inline((&L_2), L_0, L_1, 3, /*hidden argument*/ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 * L_3 = (CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709 *)il2cpp_codegen_object_new(CounterWrapper_tCE4D33C74432ED009B465FE24BF823595BE75709_il2cpp_TypeInfo_var);
		CounterWrapper__ctor_m67B3DCC2CF64D7A4528D42EB1AA8A7A2E9A66BD2(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCounterFactory__ctor_m57619F5B9E23C4D59CEAE3654C453178AD03BA79 (EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956 * __this, const RuntimeMethod* method)
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyProfilerMetricObserver_Observe_m784EE3A979A55B2D4204336F5542AF2D0E251E68 (LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, const RuntimeMethod* method)
{
	{
		// ProfilerCounters.Instance.UpdateFromMetrics(collection);
		ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * L_0;
		L_0 = ProfilerCounters_get_Instance_mEB38D1458C8276EC807EAC0E1EC7CB30669BA946(/*hidden argument*/NULL);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_1 = ___collection0;
		NullCheck(L_0);
		ProfilerCounters_UpdateFromMetrics_mC3A89100CEC06E4BFE15C8DF9939A2D090B38A9D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyProfilerMetricObserver__ctor_mB3AF5E9474AF5FF77C8C1C0BB9C934CAEDF9317E (LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28 * __this, const RuntimeMethod* method)
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters__ctor_mA1ABE9104783736EBDB1C63EA1E3905164596580 (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricByteCounters(string displayName, ICounterFactory counterFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Sent = $"{displayName} Bytes Sent";
		String_t* L_0 = ___displayName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2, /*hidden argument*/NULL);
		__this->set_U3CSentU3Ek__BackingField_2(L_1);
		// Received = $"{displayName} Bytes Received";
		String_t* L_2 = ___displayName0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10, /*hidden argument*/NULL);
		__this->set_U3CReceivedU3Ek__BackingField_3(L_3);
		// m_SentCounter = counterFactory.Construct(Sent);
		RuntimeObject* L_4 = ___counterFactory1;
		String_t* L_5;
		L_5 = MetricByteCounters_get_Sent_mA2B724E05B3366EA7CD6A2241B8557C37EEC3685_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var, L_4, L_5);
		__this->set_m_SentCounter_0(L_6);
		// m_ReceivedCounter = counterFactory.Construct(Received);
		RuntimeObject* L_7 = ___counterFactory1;
		String_t* L_8;
		L_8 = MetricByteCounters_get_Received_mFCE005184C71DC1464A54963C1F47A6FDCD572A3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var, L_7, L_8);
		__this->set_m_ReceivedCounter_1(L_9);
		// }
		return;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mA2B724E05B3366EA7CD6A2241B8557C37EEC3685 (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_2();
		return L_0;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_mFCE005184C71DC1464A54963C1F47A6FDCD572A3 (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::Sample(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters_Sample_m59C03C041E26B02C9E20FC8FE6BBF17C80254B12 (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounter_t09C5FC37E47A13A1E049C9B94594A4D8FA90769E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SentCounter.Sample(sent);
		RuntimeObject* L_0 = __this->get_m_SentCounter_0();
		int64_t L_1 = ___sent0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter::Sample(System.Int64) */, ICounter_t09C5FC37E47A13A1E049C9B94594A4D8FA90769E_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ReceivedCounter.Sample(received);
		RuntimeObject* L_2 = __this->get_m_ReceivedCounter_1();
		int64_t L_3 = ___received1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter::Sample(System.Int64) */, ICounter_t09C5FC37E47A13A1E049C9B94594A4D8FA90769E_il2cpp_TypeInfo_var, L_2, L_3);
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters__ctor_m50FC9432AA7E13513CE56A52489763F594FFC5E9 (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * __this, String_t* ___displayName0, RuntimeObject* ___byteCounterFactory1, RuntimeObject* ___eventCounterFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricCounters(
		//     string displayName,
		//     ICounterFactory byteCounterFactory,
		//     ICounterFactory eventCounterFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Bytes = new MetricByteCounters(displayName, byteCounterFactory);
		String_t* L_0 = ___displayName0;
		RuntimeObject* L_1 = ___byteCounterFactory1;
		MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * L_2 = (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 *)il2cpp_codegen_object_new(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0_il2cpp_TypeInfo_var);
		MetricByteCounters__ctor_mA1ABE9104783736EBDB1C63EA1E3905164596580(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_Bytes_0(L_2);
		// Events = new MetricEventCounters(displayName, eventCounterFactory);
		String_t* L_3 = ___displayName0;
		RuntimeObject* L_4 = ___eventCounterFactory2;
		MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * L_5 = (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 *)il2cpp_codegen_object_new(MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618_il2cpp_TypeInfo_var);
		MetricEventCounters__ctor_m1F8E9F5C542D7E62BBACA6C4AE44F03EAD564C7F(L_5, L_3, L_4, /*hidden argument*/NULL);
		__this->set_Events_1(L_5);
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
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m5B90B71760C8C7B2FC171C2CE9EF167B8BFECBFE (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_mD4EF4485878844670D40412278CD9992F42FD43B (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricEventCounters__ctor_m1F8E9F5C542D7E62BBACA6C4AE44F03EAD564C7F (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1538A07424430301B159B5CE5821E6993791EE42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricEventCounters(string displayName, ICounterFactory counterFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Sent = $"{displayName} Sent";
		String_t* L_0 = ___displayName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral1538A07424430301B159B5CE5821E6993791EE42, /*hidden argument*/NULL);
		__this->set_U3CSentU3Ek__BackingField_0(L_1);
		// Received = $"{displayName} Received";
		String_t* L_2 = ___displayName0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274, /*hidden argument*/NULL);
		__this->set_U3CReceivedU3Ek__BackingField_2(L_3);
		// m_SentCounter = counterFactory.Construct(Sent);
		RuntimeObject* L_4 = ___counterFactory1;
		String_t* L_5;
		L_5 = MetricEventCounters_get_Sent_m5B90B71760C8C7B2FC171C2CE9EF167B8BFECBFE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var, L_4, L_5);
		__this->set_m_SentCounter_1(L_6);
		// m_ReceivedCounter = counterFactory.Construct(Received);
		RuntimeObject* L_7 = ___counterFactory1;
		String_t* L_8;
		L_8 = MetricEventCounters_get_Received_mD4EF4485878844670D40412278CD9992F42FD43B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_t08FEE0F4F527B1FA669C3D7D74DF41487992EAB2_il2cpp_TypeInfo_var, L_7, L_8);
		__this->set_m_ReceivedCounter_3(L_9);
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * ProfilerCounters_get_Instance_mEB38D1458C8276EC807EAC0E1EC7CB30669BA946 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * G_B2_0 = NULL;
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * G_B1_0 = NULL;
	{
		// public static ProfilerCounters Instance => s_Singleton ??= new ProfilerCounters();
		ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * L_0 = ((ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_il2cpp_TypeInfo_var))->get_s_Singleton_0();
		ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * L_2 = (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 *)il2cpp_codegen_object_new(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_il2cpp_TypeInfo_var);
		ProfilerCounters__ctor_mEA9DDF09F04C1144E2D580C0EDD89F6DE0779C4C(L_2, (RuntimeObject*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * L_3 = L_2;
		((ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8_il2cpp_TypeInfo_var))->set_s_Singleton_0(L_3);
		G_B2_0 = L_3;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::.ctor(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters__ctor_mEA9DDF09F04C1144E2D580C0EDD89F6DE0779C4C (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, RuntimeObject* ___byteCounterFactory0, RuntimeObject* ___eventCounterFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * G_B1_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * G_B3_1 = NULL;
	{
		// public ProfilerCounters(
		//     ICounterFactory byteCounterFactory = null,
		//     ICounterFactory eventCounterFactory = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_ByteCounterFactory = byteCounterFactory ?? new ByteCounterFactory();
		RuntimeObject* L_0 = ___byteCounterFactory0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F * L_2 = (ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F *)il2cpp_codegen_object_new(ByteCounterFactory_t9BBF4E588EB54894A0CBC631EE81991B6D3C5B3F_il2cpp_TypeInfo_var);
		ByteCounterFactory__ctor_m48A85C05A25FB64CE2D4AF773D2966A1B6CE7516(L_2, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_m_ByteCounterFactory_13(G_B2_0);
		// m_EventCounterFactory = eventCounterFactory ?? new EventCounterFactory();
		RuntimeObject* L_3 = ___eventCounterFactory1;
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0021;
		}
	}
	{
		EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956 * L_5 = (EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956 *)il2cpp_codegen_object_new(EventCounterFactory_t6EC0ED670BA4F11CC477AC06486FCBDC340B8956_il2cpp_TypeInfo_var);
		EventCounterFactory__ctor_m57619F5B9E23C4D59CEAE3654C453178AD03BA79(L_5, /*hidden argument*/NULL);
		G_B4_0 = ((RuntimeObject*)(L_5));
		G_B4_1 = G_B3_1;
	}

IL_0021:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_m_EventCounterFactory_14(G_B4_0);
		// totalBytes = ConstructMetricByteCounters("Total");
		MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * L_6;
		L_6 = ProfilerCounters_ConstructMetricByteCounters_m39F270F5808A93D18C1F62A30C5FF8651A14A094(__this, _stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67, /*hidden argument*/NULL);
		__this->set_totalBytes_1(L_6);
		// rpc = ConstructMetricCounters(MetricType.Rpc);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_7;
		L_7 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, 2, /*hidden argument*/NULL);
		__this->set_rpc_2(L_7);
		// namedMessage = ConstructMetricCounters(MetricType.NamedMessage);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_8;
		L_8 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, 3, /*hidden argument*/NULL);
		__this->set_namedMessage_3(L_8);
		// unnamedMessage = ConstructMetricCounters(MetricType.UnnamedMessage);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_9;
		L_9 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, 4, /*hidden argument*/NULL);
		__this->set_unnamedMessage_4(L_9);
		// networkVariableDelta = ConstructMetricCounters("Network Variable");
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_10;
		L_10 = ProfilerCounters_ConstructMetricCounters_mC247EC5DAED608EF22EDA4B5A26B05C761FF121C(__this, _stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8, /*hidden argument*/NULL);
		__this->set_networkVariableDelta_5(L_10);
		// objectSpawned = ConstructMetricCounters(MetricType.ObjectSpawned);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_11;
		L_11 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, 6, /*hidden argument*/NULL);
		__this->set_objectSpawned_6(L_11);
		// objectDestroyed = ConstructMetricCounters(MetricType.ObjectDestroyed);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_12;
		L_12 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, 7, /*hidden argument*/NULL);
		__this->set_objectDestroyed_7(L_12);
		// serverLog = ConstructMetricCounters(MetricType.ServerLog);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_13;
		L_13 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_serverLog_8(L_13);
		// sceneEvent = ConstructMetricCounters(MetricType.SceneEvent);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_14;
		L_14 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_sceneEvent_9(L_14);
		// ownershipChange = ConstructMetricCounters(MetricType.OwnershipChange);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_15;
		L_15 = ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF(__this, 8, /*hidden argument*/NULL);
		__this->set_ownershipChange_10(L_15);
		// customMessage = ConstructMetricCounters("Custom");
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_16;
		L_16 = ProfilerCounters_ConstructMetricCounters_mC247EC5DAED608EF22EDA4B5A26B05C761FF121C(__this, _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA, /*hidden argument*/NULL);
		__this->set_customMessage_11(L_16);
		// networkMessage = ConstructMetricCounters("Network Messages");
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_17;
		L_17 = ProfilerCounters_ConstructMetricCounters_mC247EC5DAED608EF22EDA4B5A26B05C761FF121C(__this, _stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC, /*hidden argument*/NULL);
		__this->set_networkMessage_12(L_17);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricByteCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * ProfilerCounters_ConstructMetricByteCounters_m39F270F5808A93D18C1F62A30C5FF8651A14A094 (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new MetricByteCounters(
		//     name,
		//     m_ByteCounterFactory);
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->get_m_ByteCounterFactory_13();
		MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * L_2 = (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 *)il2cpp_codegen_object_new(MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0_il2cpp_TypeInfo_var);
		MetricByteCounters__ctor_mA1ABE9104783736EBDB1C63EA1E3905164596580(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ProfilerCounters_ConstructMetricCounters_m94EA53FE07DED7D6E0B35F864777241BA924D7CF (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, int32_t ___metricType0, const RuntimeMethod* method)
{
	{
		// => ConstructMetricCounters(metricType.GetDisplayNameString());
		int32_t L_0 = ___metricType0;
		String_t* L_1;
		L_1 = MetricTypeExtensions_GetDisplayNameString_mC810E7FBE65916C25D152B608210F34C531A8366(L_0, /*hidden argument*/NULL);
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_2;
		L_2 = ProfilerCounters_ConstructMetricCounters_mC247EC5DAED608EF22EDA4B5A26B05C761FF121C(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * ProfilerCounters_ConstructMetricCounters_mC247EC5DAED608EF22EDA4B5A26B05C761FF121C (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new MetricCounters(name, m_ByteCounterFactory, m_EventCounterFactory);
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->get_m_ByteCounterFactory_13();
		RuntimeObject* L_2 = __this->get_m_EventCounterFactory_14();
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_3 = (MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C *)il2cpp_codegen_object_new(MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C_il2cpp_TypeInfo_var);
		MetricCounters__ctor_m50FC9432AA7E13513CE56A52489763F594FFC5E9(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::UpdateFromMetrics(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters_UpdateFromMetrics_mC3A89100CEC06E4BFE15C8DF9939A2D090B38A9D (ProfilerCounters_t58544AB2BF691147AB9C364C7FFB1FADA3D292B8 * __this, MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_1_t9969628B11EC5EA7BD7A9EE5773278B47F905CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * G_B2_0 = NULL;
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * G_B1_0 = NULL;
	int64_t G_B3_0 = 0;
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * G_B3_1 = NULL;
	int64_t G_B5_0 = 0;
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * G_B5_1 = NULL;
	int64_t G_B4_0 = 0;
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * G_B4_1 = NULL;
	int64_t G_B6_0 = 0;
	int64_t G_B6_1 = 0;
	MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * G_B6_2 = NULL;
	{
		// totalBytes.Sample(
		//     collection.TryGetCounter(DirectedMetricType.TotalBytesSent.GetId(), out var bytesSent)
		//         ? bytesSent.Value
		//         : 0L,
		//     collection.TryGetCounter(DirectedMetricType.TotalBytesReceived.GetId(), out var bytesReceived)
		//         ? bytesReceived.Value
		//         : 0L);
		MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * L_0 = __this->get_totalBytes_1();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_1 = ___collection0;
		IL2CPP_RUNTIME_CLASS_INIT(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_2;
		L_2 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(6, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D(L_1, L_2, (RuntimeObject**)(&V_0), /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>::get_Value() */, IMetric_1_t9969628B11EC5EA7BD7A9EE5773278B47F905CBD_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_6 = ___collection0;
		IL2CPP_RUNTIME_CLASS_INIT(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_7;
		L_7 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8;
		L_8 = MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D(L_6, L_7, (RuntimeObject**)(&V_1), /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0034;
		}
	}
	{
		G_B6_0 = ((int64_t)((int64_t)0));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_003a;
	}

IL_0034:
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>::get_Value() */, IMetric_1_t9969628B11EC5EA7BD7A9EE5773278B47F905CBD_il2cpp_TypeInfo_var, L_9);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_003a:
	{
		NullCheck(G_B6_2);
		MetricByteCounters_Sample_m59C03C041E26B02C9E20FC8FE6BBF17C80254B12(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// rpc.Sample(
		//     collection.GetEventValues<RpcEvent>(DirectedMetricType.RpcSent.GetId()),
		//     collection.GetEventValues<RpcEvent>(DirectedMetricType.RpcReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_11 = __this->get_rpc_2();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_12 = ___collection0;
		IL2CPP_RUNTIME_CLASS_INIT(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_13;
		L_13 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)10), /*hidden argument*/NULL);
		RuntimeObject* L_14;
		L_14 = MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612(L_12, L_13, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_15 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_16;
		L_16 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)9), /*hidden argument*/NULL);
		RuntimeObject* L_17;
		L_17 = MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612(L_15, L_16, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_m43C89B0DEBBDD3B72DF04B2C4D580E5C96B09612_RuntimeMethod_var);
		NullCheck(L_11);
		MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD(L_11, L_14, L_17, /*hidden argument*/MetricCounters_Sample_TisRpcEvent_t05020C6857FEDE50928F4973D377331333D978C0_mFAD20B569E92272EDC375ADBA151DA6A8A9464FD_RuntimeMethod_var);
		// namedMessage.Sample(
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageSent.GetId()),
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_18 = __this->get_namedMessage_3();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_19 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_20;
		L_20 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)14), /*hidden argument*/NULL);
		RuntimeObject* L_21;
		L_21 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5(L_19, L_20, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_22 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_23;
		L_23 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)13), /*hidden argument*/NULL);
		RuntimeObject* L_24;
		L_24 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5(L_22, L_23, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_RuntimeMethod_var);
		NullCheck(L_18);
		MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121(L_18, L_21, L_24, /*hidden argument*/MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121_RuntimeMethod_var);
		// unnamedMessage.Sample(
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageSent.GetId()),
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_25 = __this->get_unnamedMessage_4();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_26 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_27;
		L_27 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)18), /*hidden argument*/NULL);
		RuntimeObject* L_28;
		L_28 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28(L_26, L_27, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_29 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_30;
		L_30 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)17), /*hidden argument*/NULL);
		RuntimeObject* L_31;
		L_31 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28(L_29, L_30, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_RuntimeMethod_var);
		NullCheck(L_25);
		MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED(L_25, L_28, L_31, /*hidden argument*/MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED_RuntimeMethod_var);
		// customMessage.Sample(
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageSent.GetId()),
		//     collection.GetEventValues<NamedMessageEvent>(DirectedMetricType.NamedMessageReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_32 = __this->get_customMessage_11();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_33 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_34;
		L_34 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)14), /*hidden argument*/NULL);
		RuntimeObject* L_35;
		L_35 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5(L_33, L_34, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_36 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_37;
		L_37 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)13), /*hidden argument*/NULL);
		RuntimeObject* L_38;
		L_38 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5(L_36, L_37, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m2DEE75D74E977B6C7E720ED066F710CD9976C0A5_RuntimeMethod_var);
		NullCheck(L_32);
		MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121(L_32, L_35, L_38, /*hidden argument*/MetricCounters_Sample_TisNamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23_m7F372C7E5F64FA54533ECFE6AB7EF475CFA64121_RuntimeMethod_var);
		// customMessage.Sample(
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageSent.GetId()),
		//     collection.GetEventValues<UnnamedMessageEvent>(DirectedMetricType.UnnamedMessageReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_39 = __this->get_customMessage_11();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_40 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_41;
		L_41 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)18), /*hidden argument*/NULL);
		RuntimeObject* L_42;
		L_42 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28(L_40, L_41, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_43 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_44;
		L_44 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)17), /*hidden argument*/NULL);
		RuntimeObject* L_45;
		L_45 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28(L_43, L_44, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m72B01362DA394F2B642C45F4EDC9A57A49ABBB28_RuntimeMethod_var);
		NullCheck(L_39);
		MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED(L_39, L_42, L_45, /*hidden argument*/MetricCounters_Sample_TisUnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F_m59F37C49B3AD18A7E8779F4F772EA718F2AD42ED_RuntimeMethod_var);
		// networkVariableDelta.Sample(
		//     collection.GetEventValues<NetworkVariableEvent>(DirectedMetricType.NetworkVariableDeltaSent.GetId()),
		//     collection.GetEventValues<NetworkVariableEvent>(DirectedMetricType.NetworkVariableDeltaReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_46 = __this->get_networkVariableDelta_5();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_47 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_48;
		L_48 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)22), /*hidden argument*/NULL);
		RuntimeObject* L_49;
		L_49 = MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2(L_47, L_48, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_50 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_51;
		L_51 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)21), /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2(L_50, L_51, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m4C2EB253E0DE55270505A006CAE6C23D4585EAD2_RuntimeMethod_var);
		NullCheck(L_46);
		MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635(L_46, L_49, L_52, /*hidden argument*/MetricCounters_Sample_TisNetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66_m48A5B486F577FAB70A2847A0FA23FB432A341635_RuntimeMethod_var);
		// objectSpawned.Sample(
		//     collection.GetEventValues<ObjectSpawnedEvent>(DirectedMetricType.ObjectSpawnedSent.GetId()),
		//     collection.GetEventValues<ObjectSpawnedEvent>(DirectedMetricType.ObjectSpawnedReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_53 = __this->get_objectSpawned_6();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_54 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_55;
		L_55 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)26), /*hidden argument*/NULL);
		RuntimeObject* L_56;
		L_56 = MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646(L_54, L_55, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_57 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_58;
		L_58 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)25), /*hidden argument*/NULL);
		RuntimeObject* L_59;
		L_59 = MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646(L_57, L_58, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_mEC2D02BAA0F1EAFF5EF25890CB67089A4BF71646_RuntimeMethod_var);
		NullCheck(L_53);
		MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0(L_53, L_56, L_59, /*hidden argument*/MetricCounters_Sample_TisObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE_m607F5C1D213DE210FED24FF9FE5F71BA75F919C0_RuntimeMethod_var);
		// objectDestroyed.Sample(
		//     collection.GetEventValues<ObjectDestroyedEvent>(DirectedMetricType.ObjectDestroyedSent.GetId()),
		//     collection.GetEventValues<ObjectDestroyedEvent>(DirectedMetricType.ObjectDestroyedReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_60 = __this->get_objectDestroyed_7();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_61 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_62;
		L_62 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)30), /*hidden argument*/NULL);
		RuntimeObject* L_63;
		L_63 = MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651(L_61, L_62, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_64 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_65;
		L_65 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)29), /*hidden argument*/NULL);
		RuntimeObject* L_66;
		L_66 = MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651(L_64, L_65, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_m46A13A4946BA45C7CE75C55EDFAEFA68513C6651_RuntimeMethod_var);
		NullCheck(L_60);
		MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2(L_60, L_63, L_66, /*hidden argument*/MetricCounters_Sample_TisObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6_mBE3CF90DC66F0DBEDE01BB76CC5366F9024C29C2_RuntimeMethod_var);
		// serverLog.Sample(
		//     collection.GetEventValues<ServerLogEvent>(DirectedMetricType.ServerLogSent.GetId()),
		//     collection.GetEventValues<ServerLogEvent>(DirectedMetricType.ServerLogReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_67 = __this->get_serverLog_8();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_68 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_69;
		L_69 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)38), /*hidden argument*/NULL);
		RuntimeObject* L_70;
		L_70 = MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B(L_68, L_69, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_71 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_72;
		L_72 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)37), /*hidden argument*/NULL);
		RuntimeObject* L_73;
		L_73 = MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B(L_71, L_72, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m183C5677110CEFC85E1DEE25A8DD46A9CC61CB5B_RuntimeMethod_var);
		NullCheck(L_67);
		MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2(L_67, L_70, L_73, /*hidden argument*/MetricCounters_Sample_TisServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9_m2AEBA61EB2755310F90200B23E9A8122A93154D2_RuntimeMethod_var);
		// sceneEvent.Sample(
		//     collection.GetEventValues<SceneEventMetric>(DirectedMetricType.SceneEventSent.GetId()),
		//     collection.GetEventValues<SceneEventMetric>(DirectedMetricType.SceneEventReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_74 = __this->get_sceneEvent_9();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_75 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_76;
		L_76 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)42), /*hidden argument*/NULL);
		RuntimeObject* L_77;
		L_77 = MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9(L_75, L_76, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_78 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_79;
		L_79 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)41), /*hidden argument*/NULL);
		RuntimeObject* L_80;
		L_80 = MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9(L_78, L_79, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mDB94B5A7184860DFB07EB45D82EC4F49841C88F9_RuntimeMethod_var);
		NullCheck(L_74);
		MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9(L_74, L_77, L_80, /*hidden argument*/MetricCounters_Sample_TisSceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB_mD18977710BC282D35C2E4064F07EFC4EBE5EA4E9_RuntimeMethod_var);
		// ownershipChange.Sample(
		//     collection.GetEventValues<OwnershipChangeEvent>(DirectedMetricType.OwnershipChangeSent.GetId()),
		//     collection.GetEventValues<OwnershipChangeEvent>(DirectedMetricType.OwnershipChangeReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_81 = __this->get_ownershipChange_10();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_82 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_83;
		L_83 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)34), /*hidden argument*/NULL);
		RuntimeObject* L_84;
		L_84 = MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B(L_82, L_83, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_85 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_86;
		L_86 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)33), /*hidden argument*/NULL);
		RuntimeObject* L_87;
		L_87 = MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B(L_85, L_86, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m6C0664FA5F0290EE6152F14CC4A005088330655B_RuntimeMethod_var);
		NullCheck(L_81);
		MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB(L_81, L_84, L_87, /*hidden argument*/MetricCounters_Sample_TisOwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495_m8BCB9197939687C8E284F3B204E4A4D0078C48CB_RuntimeMethod_var);
		// networkMessage.Sample(
		//     collection.GetEventValues<NetworkMessageEvent>(DirectedMetricType.NetworkMessageSent.GetId()),
		//     collection.GetEventValues<NetworkMessageEvent>(DirectedMetricType.NetworkMessageReceived.GetId()));
		MetricCounters_t1CCBBC9008222C827003E315E2D717AC06A5FB8C * L_88 = __this->get_networkMessage_12();
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_89 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_90;
		L_90 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)46), /*hidden argument*/NULL);
		RuntimeObject* L_91;
		L_91 = MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C(L_89, L_90, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C_RuntimeMethod_var);
		MetricCollection_t490C05BE20AC86136ABA4A9CFD3D445AA476304E * L_92 = ___collection0;
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_93;
		L_93 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(((int32_t)45), /*hidden argument*/NULL);
		RuntimeObject* L_94;
		L_94 = MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C(L_92, L_93, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m6FFC7CB16436CF5C561425DF45688723934D897C_RuntimeMethod_var);
		NullCheck(L_88);
		MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68(L_88, L_91, L_94, /*hidden argument*/MetricCounters_Sample_TisNetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A_m489702394FD564B04C8D6422C32A692765320A68_RuntimeMethod_var);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_mA1AEA0E5080D6BD05CF4D5CFFF6CC16F2F40E5D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LegacyProfilerMetricObserver();
		LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28 * L_0 = (LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28 *)il2cpp_codegen_object_new(LegacyProfilerMetricObserver_t6945D3DFC633F48CA9AB35AF6FBABC5293523F28_il2cpp_TypeInfo_var);
		LegacyProfilerMetricObserver__ctor_mB3AF5E9474AF5FF77C8C1C0BB9C934CAEDF9317E(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mA2B724E05B3366EA7CD6A2241B8557C37EEC3685_inline (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_mFCE005184C71DC1464A54963C1F47A6FDCD572A3_inline (MetricByteCounters_t34B7F314BFC872D6E83BFDA58B0116E797CFABA0 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m5B90B71760C8C7B2FC171C2CE9EF167B8BFECBFE_inline (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_mD4EF4485878844670D40412278CD9992F42FD43B_inline (MetricEventCounters_t0EEC02710D79E511DA0012CB8B7D1F80D490D618 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_gshared_inline (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * __this, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
