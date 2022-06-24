#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_m1A50BB75A5F555C8968ADB6984C57DC62EA1069B (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m95D3170354BA42728491DE36D73D92AC58DAB066 (void);
// 0x00000003 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
// 0x00000004 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::SetConnectionId(System.UInt64)
// 0x00000005 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::Dispatch()
// 0x00000006 System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
// 0x00000007 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4 (void);
// 0x00000008 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
extern void MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798 (void);
// 0x00000009 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
extern void MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D (void);
// 0x0000000A System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetEvent(Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<TEvent>&)
// 0x0000000B System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC (void);
// 0x0000000C System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
extern void MetricDispatcher_RegisterObserver_m7F92DF455F2E02A1B24B4EF95D89620FF96FD096 (void);
// 0x0000000D System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
extern void MetricDispatcher_SetConnectionId_m8FFA43FEE838D7D94B16012216227023504068A6 (void);
// 0x0000000E System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
extern void MetricDispatcher_Dispatch_m89DC7BD524CF1AD09AEF3820C75AD3E9A13291BB (void);
// 0x0000000F Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
extern void MetricDispatcherBuilder_WithCounters_m5BDE184D8E8544AEEC6EAA32CBE1E772EB5B5D70 (void);
// 0x00000010 Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
// 0x00000011 Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
extern void MetricDispatcherBuilder_Build_m3090A95805D0F1896E8B0BFA12F68AA520F02BB0 (void);
// 0x00000012 System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
extern void MetricDispatcherBuilder__ctor_mF480977AFB8A533D394C09EBD1E13D0A34AC2CA4 (void);
// 0x00000013 System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
extern void Counter__ctor_m34020D3116A2C65E64FBC345084D0EDC3CE6E359 (void);
// 0x00000014 System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
extern void Counter_Increment_m206FA1D3A051DF1FDB7A21C288DA88FA239789EB (void);
// 0x00000015 System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
// 0x00000016 Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_Id()
// 0x00000017 System.Collections.Generic.IReadOnlyList`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_Values()
// 0x00000018 System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_ShouldResetOnDispatch()
// 0x00000019 System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_MaxNumberOfValues()
// 0x0000001A System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_WentOverLimit()
// 0x0000001B System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::set_WentOverLimit(System.Boolean)
// 0x0000001C System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::Mark(TValue)
// 0x0000001D System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::Reset()
// 0x0000001E System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricFactory::TryGetFactoryTypeName(System.Type,Unity.Collections.FixedString128Bytes&)
extern void EventMetricFactory_TryGetFactoryTypeName_m0F9FDE1AD96D52F0B29AA04BFF1648D536844567 (void);
// 0x0000001F System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType()
// 0x00000020 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.cctor()
extern void EventMetricFactory__cctor_mCC2CA4C9B0E50A626E02F184CD6D300949EE1BC8 (void);
// 0x00000021 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory/EventMetricFactoryImpl`1::.ctor()
// 0x00000022 System.Boolean Unity.Multiplayer.Tools.NetStats.IEventMetric::get_WentOverLimit()
// 0x00000023 System.Collections.Generic.IReadOnlyList`1<TValue> Unity.Multiplayer.Tools.NetStats.IEventMetric`1::get_Values()
// 0x00000024 TValue Unity.Multiplayer.Tools.NetStats.IMetric`1::get_Value()
// 0x00000025 System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch()
// 0x00000026 System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset()
// 0x00000027 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
// 0x00000028 Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::get_Id()
// 0x00000029 TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_Value()
// 0x0000002A System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_Value(TValue)
// 0x0000002B TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_DefaultValue()
// 0x0000002C System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::get_ShouldResetOnDispatch()
// 0x0000002D System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_ShouldResetOnDispatch(System.Boolean)
// 0x0000002E System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::Reset()
// 0x0000002F Unity.Multiplayer.Tools.NetStats.UnitPrefix Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_Prefix()
extern void CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446 (void);
// 0x00000030 System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_Prefix(Unity.Multiplayer.Tools.NetStats.UnitPrefix)
extern void CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579 (void);
// 0x00000031 System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_BitsExponent()
extern void CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2 (void);
// 0x00000032 System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_BitsExponent(System.SByte)
extern void CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976 (void);
// 0x00000033 System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_BytesExponent()
extern void CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D (void);
// 0x00000034 System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_BytesExponent(System.SByte)
extern void CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016 (void);
// 0x00000035 System.SByte Unity.Multiplayer.Tools.NetStats.CompositeUnit::get_SecondsExponent()
extern void CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678 (void);
// 0x00000036 System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::set_SecondsExponent(System.SByte)
extern void CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6 (void);
// 0x00000037 System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::.ctor(Unity.Multiplayer.Tools.NetStats.UnitPrefix,System.SByte,System.SByte,System.SByte)
extern void CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5 (void);
// 0x00000038 System.Boolean Unity.Multiplayer.Tools.NetStats.CompositeUnit::Equals(Unity.Multiplayer.Tools.NetStats.CompositeUnit)
extern void CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0 (void);
// 0x00000039 System.Boolean Unity.Multiplayer.Tools.NetStats.CompositeUnit::Equals(System.Object)
extern void CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1 (void);
// 0x0000003A System.Int32 Unity.Multiplayer.Tools.NetStats.CompositeUnit::GetHashCode()
extern void CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE (void);
// 0x0000003B System.Void Unity.Multiplayer.Tools.NetStats.CompositeUnit::.cctor()
extern void CompositeUnit__cctor_m705369BBEABEC9706A43FC6AD8802F2E473FF408 (void);
// 0x0000003C System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
extern void MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2 (void);
// 0x0000003D System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
extern void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316 (void);
// 0x0000003E System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
extern void MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949 (void);
// 0x0000003F System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
extern void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E (void);
// 0x00000040 System.Type Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumType()
extern void MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8 (void);
// 0x00000041 System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
extern void MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538 (void);
// 0x00000042 System.Type[] Unity.Multiplayer.Tools.NetStats.MetricId::get_Types()
extern void MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17 (void);
// 0x00000043 System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Names()
extern void MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41 (void);
// 0x00000044 System.Int32[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Values()
extern void MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F (void);
// 0x00000045 System.String[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_DisplayNames()
extern void MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C (void);
// 0x00000046 Unity.Multiplayer.Tools.NetStats.MetricKind[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_MetricKinds()
extern void MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2 (void);
// 0x00000047 Unity.Multiplayer.Tools.NetStats.CompositeUnit[][] Unity.Multiplayer.Tools.NetStats.MetricId::get_Units()
extern void MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176 (void);
// 0x00000048 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.cctor()
extern void MetricId__cctor_mDC6C7297F3D702DD1E0F42057D43FE8B2D52BD64 (void);
// 0x00000049 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
extern void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46 (void);
// 0x0000004A Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricId::Create(T)
// 0x0000004B System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
extern void MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8 (void);
// 0x0000004C System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
extern void MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B (void);
// 0x0000004D System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
extern void MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872 (void);
// 0x0000004E System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
extern void MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914 (void);
// 0x0000004F System.Void Unity.Multiplayer.Tools.NetStats.MetricId/<>c::.cctor()
extern void U3CU3Ec__cctor_mAF0B66C26921291ACB70CFCCFDF1D978648C9E0B (void);
// 0x00000050 System.Void Unity.Multiplayer.Tools.NetStats.MetricId/<>c::.ctor()
extern void U3CU3Ec__ctor_m3AA61DAB9C1066C9223D67AC0EBD27907B717477 (void);
// 0x00000051 System.Collections.Generic.IEnumerable`1<System.Type> Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<.cctor>b__37_0(System.Reflection.Assembly)
extern void U3CU3Ec_U3C_cctorU3Eb__37_0_mD770C0ED44B9CDE09588EEFE753AEEF648880075 (void);
// 0x00000052 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<.cctor>b__37_2(System.Type)
extern void U3CU3Ec_U3C_cctorU3Eb__37_2_m3648DD8A023828CDA9E38F6586F7577248A4E1DF (void);
// 0x00000053 System.String Unity.Multiplayer.Tools.NetStats.MetricId/<>c::<.cctor>b__37_1(System.Type)
extern void U3CU3Ec_U3C_cctorU3Eb__37_1_m39B6F0DBF3D88ECBF4DA12915BD2730847E29123 (void);
// 0x00000054 System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
extern void MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703 (void);
// 0x00000055 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayName(System.String)
extern void MetricMetadataAttribute_set_DisplayName_mB3BBDCFD30ECAE1AD2F42B1CAABA8813AE54D15A (void);
// 0x00000056 Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
extern void MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F (void);
// 0x00000057 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_MetricKind(Unity.Multiplayer.Tools.NetStats.MetricKind)
extern void MetricMetadataAttribute_set_MetricKind_m38C083F9087F7C11044E28CEAFD8BEB706A23072 (void);
// 0x00000058 Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
extern void MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331 (void);
// 0x00000059 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_Units(Unity.Multiplayer.Tools.NetStats.Units)
extern void MetricMetadataAttribute_set_Units_m6A7BBCFC74D7D98BC3F3C5D4BF4E3FD1FC8B4D98 (void);
// 0x0000005A System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::.ctor()
extern void MetricMetadataAttribute__ctor_m961DA3FB66A28C97D6C619B5468B3A04D38AAFC1 (void);
// 0x0000005B System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::.ctor()
extern void MetricTypeEnumAttribute__ctor_m836FB2CB02905DA1FA4AB480C40164D195E14223 (void);
// 0x0000005C Unity.Multiplayer.Tools.NetStats.CompositeUnit Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetCompositeUnit(Unity.Multiplayer.Tools.NetStats.Units)
extern void UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8 (void);
// 0x0000005D System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues(Unity.Multiplayer.Tools.NetStats.MetricCollection,Unity.Multiplayer.Tools.NetStats.MetricId)
static Il2CppMethodPointer s_methodPointers[93] = 
{
	EmbeddedAttribute__ctor_m1A50BB75A5F555C8968ADB6984C57DC62EA1069B,
	IsUnmanagedAttribute__ctor_m95D3170354BA42728491DE36D73D92AC58DAB066,
	NULL,
	NULL,
	NULL,
	NULL,
	MetricCollection__ctor_m3EEFCAB26EFDF3C0651CE7277CAC66F35FF33CC4,
	MetricCollection_set_ConnectionId_m234B3D6EC6CE42E53DB8959567889F0DBEA49798,
	MetricCollection_TryGetCounter_mD94B33BAF0ED4D0B774597800ACA6AC45214230D,
	NULL,
	MetricDispatcher__ctor_m28B86E71944BAC620D312D2F42316D3A5338FADC,
	MetricDispatcher_RegisterObserver_m7F92DF455F2E02A1B24B4EF95D89620FF96FD096,
	MetricDispatcher_SetConnectionId_m8FFA43FEE838D7D94B16012216227023504068A6,
	MetricDispatcher_Dispatch_m89DC7BD524CF1AD09AEF3820C75AD3E9A13291BB,
	MetricDispatcherBuilder_WithCounters_m5BDE184D8E8544AEEC6EAA32CBE1E772EB5B5D70,
	NULL,
	MetricDispatcherBuilder_Build_m3090A95805D0F1896E8B0BFA12F68AA520F02BB0,
	MetricDispatcherBuilder__ctor_mF480977AFB8A533D394C09EBD1E13D0A34AC2CA4,
	Counter__ctor_m34020D3116A2C65E64FBC345084D0EDC3CE6E359,
	Counter_Increment_m206FA1D3A051DF1FDB7A21C288DA88FA239789EB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	EventMetricFactory_TryGetFactoryTypeName_m0F9FDE1AD96D52F0B29AA04BFF1648D536844567,
	NULL,
	EventMetricFactory__cctor_mCC2CA4C9B0E50A626E02F184CD6D300949EE1BC8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446,
	CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579,
	CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2,
	CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976,
	CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D,
	CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016,
	CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678,
	CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6,
	CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5,
	CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0,
	CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1,
	CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE,
	CompositeUnit__cctor_m705369BBEABEC9706A43FC6AD8802F2E473FF408,
	MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2,
	MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316,
	MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949,
	MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E,
	MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8,
	MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538,
	MetricId_get_Types_m76D296A09DA2432DCF7EA73FFB3744DB84C74F17,
	MetricId_get_Names_m6D5A4FB19A20134EBAF5897E49A7B3CA348CFE41,
	MetricId_get_Values_mB84A7EE8E51C5E91EACB6B2BBC95ED1A37C9254F,
	MetricId_get_DisplayNames_mAAD031307051CE208CA9630ECF6F577E37AD896C,
	MetricId_get_MetricKinds_mC3ADF61984EB021B492505435A43722D3DE157F2,
	MetricId_get_Units_m06EB7E50CD94EA02E1CA5065DD3AB29ED9FC4176,
	MetricId__cctor_mDC6C7297F3D702DD1E0F42057D43FE8B2D52BD64,
	MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46,
	NULL,
	MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8,
	MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B,
	MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872,
	MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914,
	U3CU3Ec__cctor_mAF0B66C26921291ACB70CFCCFDF1D978648C9E0B,
	U3CU3Ec__ctor_m3AA61DAB9C1066C9223D67AC0EBD27907B717477,
	U3CU3Ec_U3C_cctorU3Eb__37_0_mD770C0ED44B9CDE09588EEFE753AEEF648880075,
	U3CU3Ec_U3C_cctorU3Eb__37_2_m3648DD8A023828CDA9E38F6586F7577248A4E1DF,
	U3CU3Ec_U3C_cctorU3Eb__37_1_m39B6F0DBF3D88ECBF4DA12915BD2730847E29123,
	MetricMetadataAttribute_get_DisplayName_m6A734721829A018646FB2413F0649E5D23399703,
	MetricMetadataAttribute_set_DisplayName_mB3BBDCFD30ECAE1AD2F42B1CAABA8813AE54D15A,
	MetricMetadataAttribute_get_MetricKind_m0CF8CE2AE613BB85D4F373AB0C8B734E9B94D19F,
	MetricMetadataAttribute_set_MetricKind_m38C083F9087F7C11044E28CEAFD8BEB706A23072,
	MetricMetadataAttribute_get_Units_m25F92CE37664463460011164824D5E5CE07DA331,
	MetricMetadataAttribute_set_Units_m6A7BBCFC74D7D98BC3F3C5D4BF4E3FD1FC8B4D98,
	MetricMetadataAttribute__ctor_m961DA3FB66A28C97D6C619B5468B3A04D38AAFC1,
	MetricTypeEnumAttribute__ctor_m836FB2CB02905DA1FA4AB480C40164D195E14223,
	UnitExtensions_GetCompositeUnit_m09BB31B6FD65B80813D78F43EFA6FA38E7FB90E8,
	NULL,
};
extern void CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_AdjustorThunk (void);
extern void CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_AdjustorThunk (void);
extern void CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_AdjustorThunk (void);
extern void CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_AdjustorThunk (void);
extern void CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_AdjustorThunk (void);
extern void CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_AdjustorThunk (void);
extern void CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_AdjustorThunk (void);
extern void CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_AdjustorThunk (void);
extern void CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5_AdjustorThunk (void);
extern void CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0_AdjustorThunk (void);
extern void CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1_AdjustorThunk (void);
extern void CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE_AdjustorThunk (void);
extern void MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_AdjustorThunk (void);
extern void MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_AdjustorThunk (void);
extern void MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_AdjustorThunk (void);
extern void MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_AdjustorThunk (void);
extern void MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8_AdjustorThunk (void);
extern void MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538_AdjustorThunk (void);
extern void MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46_AdjustorThunk (void);
extern void MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8_AdjustorThunk (void);
extern void MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B_AdjustorThunk (void);
extern void MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872_AdjustorThunk (void);
extern void MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[23] = 
{
	{ 0x0600002F, CompositeUnit_get_Prefix_m826440491A0FC3ACB7FF1C9C991A73B9E229A446_AdjustorThunk },
	{ 0x06000030, CompositeUnit_set_Prefix_m049F08445D7119D14AF6C25ABC08DE7CC3F47579_AdjustorThunk },
	{ 0x06000031, CompositeUnit_get_BitsExponent_m3D05B8633FA34E2635B967C02B88605E4DFA3DB2_AdjustorThunk },
	{ 0x06000032, CompositeUnit_set_BitsExponent_mCA76A517B3A3F840A171F5AB75A67D4F2E6D1976_AdjustorThunk },
	{ 0x06000033, CompositeUnit_get_BytesExponent_mE4350ED49EF8DE3FDA2C62D7542319C2C5F9357D_AdjustorThunk },
	{ 0x06000034, CompositeUnit_set_BytesExponent_m84EEDA3FD421610265AA9EB65809D4C6A78BA016_AdjustorThunk },
	{ 0x06000035, CompositeUnit_get_SecondsExponent_m1BD0070F48098F94562B816926B70177056CA678_AdjustorThunk },
	{ 0x06000036, CompositeUnit_set_SecondsExponent_mD9597725DCB8CE1DBCDD7F86426BABF45AFE04E6_AdjustorThunk },
	{ 0x06000037, CompositeUnit__ctor_m91197E814A54ABE773CC706612A5CFD4C37E5DC5_AdjustorThunk },
	{ 0x06000038, CompositeUnit_Equals_mCD4B3B189CAB6FE645A5CE5A6119FBEAFCADC4D0_AdjustorThunk },
	{ 0x06000039, CompositeUnit_Equals_m423E12CE4D1BADBBF6F71CDBFDFB906F6444C3F1_AdjustorThunk },
	{ 0x0600003A, CompositeUnit_GetHashCode_mEFFEAF417DF063EE332359F4777D1B6DF6A751BE_AdjustorThunk },
	{ 0x0600003C, MetricId_get_TypeIndex_m2BCB2E4949F65B1760240B1A0CDB9B44E15CF1D2_AdjustorThunk },
	{ 0x0600003D, MetricId_set_TypeIndex_mAC9DA10DAB9FDC1D1CB28142FA3D57781A4C2316_AdjustorThunk },
	{ 0x0600003E, MetricId_get_EnumValue_m322B246418CAE040B5B0932E2C67BAD3A65D9949_AdjustorThunk },
	{ 0x0600003F, MetricId_set_EnumValue_m45AD5DD6613D6D657C83F81B1C6BAD4101EBA82E_AdjustorThunk },
	{ 0x06000040, MetricId_get_EnumType_m30061C72978F71122978424822218CAFD055F6A8_AdjustorThunk },
	{ 0x06000041, MetricId_get_Name_mB7FB04F0B3361F6350D1375EA554403E059E0538_AdjustorThunk },
	{ 0x06000049, MetricId__ctor_m5C9A08C428BDD9C1A14BB98875BA3573358BAA46_AdjustorThunk },
	{ 0x0600004B, MetricId_Equals_mCD082A093E6F7BA4C383C45BBC651CDFBB9ECBF8_AdjustorThunk },
	{ 0x0600004C, MetricId_Equals_m7E1641625966F7C53CF769CB7D90A1B881FC8A7B_AdjustorThunk },
	{ 0x0600004D, MetricId_GetHashCode_m1F491EB5BBED580DC9D06EE60EB37A4EA6592872_AdjustorThunk },
	{ 0x0600004E, MetricId_ToString_m1E4C105CA8DD0D7C416E3403C57679F5D8497914_AdjustorThunk },
};
static const int32_t s_InvokerIndices[93] = 
{
	4810,
	4810,
	3945,
	3919,
	4810,
	3945,
	934,
	3919,
	1777,
	-1,
	1392,
	3945,
	3919,
	4810,
	3015,
	-1,
	4739,
	4810,
	2271,
	3919,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6407,
	-1,
	7267,
	-1,
	4775,
	-1,
	-1,
	4775,
	4810,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4775,
	3975,
	4775,
	3975,
	4775,
	3975,
	4775,
	3975,
	980,
	3361,
	3421,
	4711,
	7267,
	4711,
	3918,
	4711,
	3918,
	4739,
	4739,
	7236,
	7236,
	7236,
	7236,
	7236,
	7236,
	7267,
	2290,
	-1,
	3414,
	3421,
	4711,
	4739,
	7267,
	4810,
	3015,
	3421,
	3015,
	4739,
	3945,
	4711,
	3918,
	4711,
	3918,
	4810,
	4810,
	6783,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x0200000A, { 2, 8 } },
	{ 0x02000013, { 13, 2 } },
	{ 0x0600000A, { 0, 1 } },
	{ 0x06000010, { 1, 1 } },
	{ 0x0600001F, { 10, 3 } },
	{ 0x0600004A, { 15, 2 } },
	{ 0x0600005D, { 17, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[20] = 
{
	{ (Il2CppRGCTXDataType)2, 3915 },
	{ (Il2CppRGCTXDataType)3, 11455 },
	{ (Il2CppRGCTXDataType)2, 4305 },
	{ (Il2CppRGCTXDataType)3, 16253 },
	{ (Il2CppRGCTXDataType)1, 659 },
	{ (Il2CppRGCTXDataType)3, 16256 },
	{ (Il2CppRGCTXDataType)3, 11456 },
	{ (Il2CppRGCTXDataType)3, 11457 },
	{ (Il2CppRGCTXDataType)3, 16254 },
	{ (Il2CppRGCTXDataType)3, 16255 },
	{ (Il2CppRGCTXDataType)1, 186 },
	{ (Il2CppRGCTXDataType)2, 2636 },
	{ (Il2CppRGCTXDataType)3, 11444 },
	{ (Il2CppRGCTXDataType)3, 21342 },
	{ (Il2CppRGCTXDataType)3, 21341 },
	{ (Il2CppRGCTXDataType)1, 325 },
	{ (Il2CppRGCTXDataType)2, 325 },
	{ (Il2CppRGCTXDataType)3, 35214 },
	{ (Il2CppRGCTXDataType)3, 30479 },
	{ (Il2CppRGCTXDataType)2, 3916 },
};
extern const CustomAttributesCacheGenerator g_Unity_Multiplayer_Tools_NetStats_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetStats_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetStats_CodeGenModule = 
{
	"Unity.Multiplayer.Tools.NetStats.dll",
	93,
	s_methodPointers,
	23,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	7,
	s_rgctxIndices,
	20,
	s_rgctxValues,
	NULL,
	g_Unity_Multiplayer_Tools_NetStats_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
