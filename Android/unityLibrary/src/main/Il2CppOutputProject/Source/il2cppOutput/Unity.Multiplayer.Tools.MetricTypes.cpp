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

// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>
struct Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.IEqualityComparer`1<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType>
struct IEqualityComparer_1_tFE1F6AA7E60B944197C024EFB23D7407CE3BA313;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>
struct KeyCollection_t44B02468BE0F6047662D51503E96340D9064B3FD;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>
struct ValueCollection_t1F13E838FD5CF1B57467716D9153C3660FB9ABA8;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>[]
struct EntryU5BU5D_tDE881B7ED6ADE5BA733D56D6596C91D989B94B58;
// Unity.Multiplayer.Tools.NetStats.CompositeUnit[][]
struct CompositeUnitU5BU5DU5BU5D_t2F57FF8891AB6C0C6FEAB811F91B7CCA30C90B13;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// Unity.Multiplayer.Tools.NetStats.MetricKind[][]
struct MetricKindU5BU5DU5BU5D_t9337CFEE1B4366CC4DC8B3FAB32923BA9185CB80;
// System.String[][]
struct StringU5BU5DU5BU5D_tDF8811E06560B155BA7C7BAC1356632E71C291F4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// Unity.Multiplayer.Tools.MetricTypes.MetricType[]
struct MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3;
// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection[]
struct NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtil_GetValues_TisMetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_m95A9E8965482DE764380C53EDFF7DBED1D563823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtil_GetValues_TisNetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_m12A049C512D5C4005EE6EAE68FA6FAE88FE11B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricId_Create_TisDirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875_m0812F0F8BAEFE6A203D74CB021F2AE2EB99B3269_RuntimeMethod_var;

struct MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3;
struct NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t34117B41A024441CCCA75A4F70FE79FEB78AE291 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>
struct Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDE881B7ED6ADE5BA733D56D6596C91D989B94B58* ___entries_1;
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
	KeyCollection_t44B02468BE0F6047662D51503E96340D9064B3FD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1F13E838FD5CF1B57467716D9153C3660FB9ABA8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___entries_1)); }
	inline EntryU5BU5D_tDE881B7ED6ADE5BA733D56D6596C91D989B94B58* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDE881B7ED6ADE5BA733D56D6596C91D989B94B58** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDE881B7ED6ADE5BA733D56D6596C91D989B94B58* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___keys_7)); }
	inline KeyCollection_t44B02468BE0F6047662D51503E96340D9064B3FD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t44B02468BE0F6047662D51503E96340D9064B3FD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t44B02468BE0F6047662D51503E96340D9064B3FD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ___values_8)); }
	inline ValueCollection_t1F13E838FD5CF1B57467716D9153C3660FB9ABA8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1F13E838FD5CF1B57467716D9153C3660FB9ABA8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1F13E838FD5CF1B57467716D9153C3660FB9ABA8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions
struct DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99  : public RuntimeObject
{
public:

public:
};

struct DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String> Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::s_Identifiers
	Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * ___s_Identifiers_0;
	// System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String> Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::s_DisplayNames
	Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * ___s_DisplayNames_1;

public:
	inline static int32_t get_offset_of_s_Identifiers_0() { return static_cast<int32_t>(offsetof(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields, ___s_Identifiers_0)); }
	inline Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * get_s_Identifiers_0() const { return ___s_Identifiers_0; }
	inline Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D ** get_address_of_s_Identifiers_0() { return &___s_Identifiers_0; }
	inline void set_s_Identifiers_0(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * value)
	{
		___s_Identifiers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Identifiers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_DisplayNames_1() { return static_cast<int32_t>(offsetof(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields, ___s_DisplayNames_1)); }
	inline Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * get_s_DisplayNames_1() const { return ___s_DisplayNames_1; }
	inline Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D ** get_address_of_s_DisplayNames_1() { return &___s_DisplayNames_1; }
	inline void set_s_DisplayNames_1(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * value)
	{
		___s_DisplayNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DisplayNames_1), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricTypeExtensions
struct MetricTypeExtensions_tA848C864A80F699ECA1969214303C90049434E92  : public RuntimeObject
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


// Unity.Multiplayer.Tools.MetricTypes.StringConversionUtility
struct StringConversionUtility_t61A93BC12F119691648510CB2A349CA68BCE85E6  : public RuntimeObject
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


// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo
struct ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 
{
public:
	// System.UInt64 Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::<Id>k__BackingField
	uint64_t ___U3CIdU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4, ___U3CIdU3Ek__BackingField_0)); }
	inline uint64_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(uint64_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
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


// Unity.Collections.CopyError
struct CopyError_t9A2DF846CABAC29E28045C48768153E905DA2F89 
{
public:
	// System.Int32 Unity.Collections.CopyError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CopyError_t9A2DF846CABAC29E28045C48768153E905DA2F89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Unity.Collections.FixedBytes62
struct FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72 
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
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0000
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
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0016
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
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes62::offset0032
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
					char ___byte0048_3_OffsetPadding[48];
					// System.Byte Unity.Collections.FixedBytes62::byte0048
					uint8_t ___byte0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0048_3_OffsetPadding_forAlignmentOnly[48];
					uint8_t ___byte0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0049_4_OffsetPadding[49];
					// System.Byte Unity.Collections.FixedBytes62::byte0049
					uint8_t ___byte0049_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0049_4_OffsetPadding_forAlignmentOnly[49];
					uint8_t ___byte0049_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0050_5_OffsetPadding[50];
					// System.Byte Unity.Collections.FixedBytes62::byte0050
					uint8_t ___byte0050_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0050_5_OffsetPadding_forAlignmentOnly[50];
					uint8_t ___byte0050_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0051_6_OffsetPadding[51];
					// System.Byte Unity.Collections.FixedBytes62::byte0051
					uint8_t ___byte0051_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0051_6_OffsetPadding_forAlignmentOnly[51];
					uint8_t ___byte0051_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0052_7_OffsetPadding[52];
					// System.Byte Unity.Collections.FixedBytes62::byte0052
					uint8_t ___byte0052_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0052_7_OffsetPadding_forAlignmentOnly[52];
					uint8_t ___byte0052_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0053_8_OffsetPadding[53];
					// System.Byte Unity.Collections.FixedBytes62::byte0053
					uint8_t ___byte0053_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0053_8_OffsetPadding_forAlignmentOnly[53];
					uint8_t ___byte0053_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0054_9_OffsetPadding[54];
					// System.Byte Unity.Collections.FixedBytes62::byte0054
					uint8_t ___byte0054_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0054_9_OffsetPadding_forAlignmentOnly[54];
					uint8_t ___byte0054_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0055_10_OffsetPadding[55];
					// System.Byte Unity.Collections.FixedBytes62::byte0055
					uint8_t ___byte0055_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0055_10_OffsetPadding_forAlignmentOnly[55];
					uint8_t ___byte0055_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0056_11_OffsetPadding[56];
					// System.Byte Unity.Collections.FixedBytes62::byte0056
					uint8_t ___byte0056_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0056_11_OffsetPadding_forAlignmentOnly[56];
					uint8_t ___byte0056_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0057_12_OffsetPadding[57];
					// System.Byte Unity.Collections.FixedBytes62::byte0057
					uint8_t ___byte0057_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0057_12_OffsetPadding_forAlignmentOnly[57];
					uint8_t ___byte0057_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0058_13_OffsetPadding[58];
					// System.Byte Unity.Collections.FixedBytes62::byte0058
					uint8_t ___byte0058_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0058_13_OffsetPadding_forAlignmentOnly[58];
					uint8_t ___byte0058_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0059_14_OffsetPadding[59];
					// System.Byte Unity.Collections.FixedBytes62::byte0059
					uint8_t ___byte0059_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0059_14_OffsetPadding_forAlignmentOnly[59];
					uint8_t ___byte0059_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0060_15_OffsetPadding[60];
					// System.Byte Unity.Collections.FixedBytes62::byte0060
					uint8_t ___byte0060_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0060_15_OffsetPadding_forAlignmentOnly[60];
					uint8_t ___byte0060_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0061_16_OffsetPadding[61];
					// System.Byte Unity.Collections.FixedBytes62::byte0061
					uint8_t ___byte0061_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0061_16_OffsetPadding_forAlignmentOnly[61];
					uint8_t ___byte0061_16_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72__padding[62];
	};

public:
	inline static int32_t get_offset_of_offset0000_0() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___offset0000_0)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0000_0() const { return ___offset0000_0; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0000_0() { return &___offset0000_0; }
	inline void set_offset0000_0(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0000_0 = value;
	}

	inline static int32_t get_offset_of_offset0016_1() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___offset0016_1)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0016_1() const { return ___offset0016_1; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0016_1() { return &___offset0016_1; }
	inline void set_offset0016_1(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0016_1 = value;
	}

	inline static int32_t get_offset_of_offset0032_2() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___offset0032_2)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0032_2() const { return ___offset0032_2; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0032_2() { return &___offset0032_2; }
	inline void set_offset0032_2(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0032_2 = value;
	}

	inline static int32_t get_offset_of_byte0048_3() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0048_3)); }
	inline uint8_t get_byte0048_3() const { return ___byte0048_3; }
	inline uint8_t* get_address_of_byte0048_3() { return &___byte0048_3; }
	inline void set_byte0048_3(uint8_t value)
	{
		___byte0048_3 = value;
	}

	inline static int32_t get_offset_of_byte0049_4() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0049_4)); }
	inline uint8_t get_byte0049_4() const { return ___byte0049_4; }
	inline uint8_t* get_address_of_byte0049_4() { return &___byte0049_4; }
	inline void set_byte0049_4(uint8_t value)
	{
		___byte0049_4 = value;
	}

	inline static int32_t get_offset_of_byte0050_5() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0050_5)); }
	inline uint8_t get_byte0050_5() const { return ___byte0050_5; }
	inline uint8_t* get_address_of_byte0050_5() { return &___byte0050_5; }
	inline void set_byte0050_5(uint8_t value)
	{
		___byte0050_5 = value;
	}

	inline static int32_t get_offset_of_byte0051_6() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0051_6)); }
	inline uint8_t get_byte0051_6() const { return ___byte0051_6; }
	inline uint8_t* get_address_of_byte0051_6() { return &___byte0051_6; }
	inline void set_byte0051_6(uint8_t value)
	{
		___byte0051_6 = value;
	}

	inline static int32_t get_offset_of_byte0052_7() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0052_7)); }
	inline uint8_t get_byte0052_7() const { return ___byte0052_7; }
	inline uint8_t* get_address_of_byte0052_7() { return &___byte0052_7; }
	inline void set_byte0052_7(uint8_t value)
	{
		___byte0052_7 = value;
	}

	inline static int32_t get_offset_of_byte0053_8() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0053_8)); }
	inline uint8_t get_byte0053_8() const { return ___byte0053_8; }
	inline uint8_t* get_address_of_byte0053_8() { return &___byte0053_8; }
	inline void set_byte0053_8(uint8_t value)
	{
		___byte0053_8 = value;
	}

	inline static int32_t get_offset_of_byte0054_9() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0054_9)); }
	inline uint8_t get_byte0054_9() const { return ___byte0054_9; }
	inline uint8_t* get_address_of_byte0054_9() { return &___byte0054_9; }
	inline void set_byte0054_9(uint8_t value)
	{
		___byte0054_9 = value;
	}

	inline static int32_t get_offset_of_byte0055_10() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0055_10)); }
	inline uint8_t get_byte0055_10() const { return ___byte0055_10; }
	inline uint8_t* get_address_of_byte0055_10() { return &___byte0055_10; }
	inline void set_byte0055_10(uint8_t value)
	{
		___byte0055_10 = value;
	}

	inline static int32_t get_offset_of_byte0056_11() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0056_11)); }
	inline uint8_t get_byte0056_11() const { return ___byte0056_11; }
	inline uint8_t* get_address_of_byte0056_11() { return &___byte0056_11; }
	inline void set_byte0056_11(uint8_t value)
	{
		___byte0056_11 = value;
	}

	inline static int32_t get_offset_of_byte0057_12() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0057_12)); }
	inline uint8_t get_byte0057_12() const { return ___byte0057_12; }
	inline uint8_t* get_address_of_byte0057_12() { return &___byte0057_12; }
	inline void set_byte0057_12(uint8_t value)
	{
		___byte0057_12 = value;
	}

	inline static int32_t get_offset_of_byte0058_13() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0058_13)); }
	inline uint8_t get_byte0058_13() const { return ___byte0058_13; }
	inline uint8_t* get_address_of_byte0058_13() { return &___byte0058_13; }
	inline void set_byte0058_13(uint8_t value)
	{
		___byte0058_13 = value;
	}

	inline static int32_t get_offset_of_byte0059_14() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0059_14)); }
	inline uint8_t get_byte0059_14() const { return ___byte0059_14; }
	inline uint8_t* get_address_of_byte0059_14() { return &___byte0059_14; }
	inline void set_byte0059_14(uint8_t value)
	{
		___byte0059_14 = value;
	}

	inline static int32_t get_offset_of_byte0060_15() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0060_15)); }
	inline uint8_t get_byte0060_15() const { return ___byte0060_15; }
	inline uint8_t* get_address_of_byte0060_15() { return &___byte0060_15; }
	inline void set_byte0060_15(uint8_t value)
	{
		___byte0060_15 = value;
	}

	inline static int32_t get_offset_of_byte0061_16() { return static_cast<int32_t>(offsetof(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72, ___byte0061_16)); }
	inline uint8_t get_byte0061_16() const { return ___byte0061_16; }
	inline uint8_t* get_address_of_byte0061_16() { return &___byte0061_16; }
	inline void set_byte0061_16(uint8_t value)
	{
		___byte0061_16 = value;
	}
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


// Unity.Multiplayer.Tools.MetricTypes.LogLevel
struct LogLevel_tC399F8C40E771CF8A00609FB663C8B6F7959B5D9 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.MetricTypes.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tC399F8C40E771CF8A00609FB663C8B6F7959B5D9, ___value___2)); }
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


// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection
struct NetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.MetricTypes.NetworkDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent
struct UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F, ___U3CBytesCountU3Ek__BackingField_1)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_1() const { return ___U3CBytesCountU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_1() { return &___U3CBytesCountU3Ek__BackingField_1; }
	inline void set_U3CBytesCountU3Ek__BackingField_1(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_1 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo
struct DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::<DirectedMetricType>k__BackingField
	int32_t ___U3CDirectedMetricTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDirectedMetricTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5, ___U3CDirectedMetricTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CDirectedMetricTypeU3Ek__BackingField_0() const { return ___U3CDirectedMetricTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CDirectedMetricTypeU3Ek__BackingField_0() { return &___U3CDirectedMetricTypeU3Ek__BackingField_0; }
	inline void set_U3CDirectedMetricTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CDirectedMetricTypeU3Ek__BackingField_0 = value;
	}
};


// Unity.Collections.FixedString64Bytes
struct FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 
{
public:
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString64Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_0;
			// Unity.Collections.FixedBytes62 Unity.Collections.FixedString64Bytes::bytes
			FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72  ___bytes_1;
		};
		uint8_t FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005__padding[64];
	};

public:
	inline static int32_t get_offset_of_utf8LengthInBytes_0() { return static_cast<int32_t>(offsetof(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005, ___utf8LengthInBytes_0)); }
	inline uint16_t get_utf8LengthInBytes_0() const { return ___utf8LengthInBytes_0; }
	inline uint16_t* get_address_of_utf8LengthInBytes_0() { return &___utf8LengthInBytes_0; }
	inline void set_utf8LengthInBytes_0(uint16_t value)
	{
		___utf8LengthInBytes_0 = value;
	}

	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005, ___bytes_1)); }
	inline FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72  get_bytes_1() const { return ___bytes_1; }
	inline FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72 * get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72  value)
	{
		___bytes_1 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent
struct ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.LogLevel Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::<LogLevel>k__BackingField
	int32_t ___U3CLogLevelU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLogLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9, ___U3CLogLevelU3Ek__BackingField_1)); }
	inline int32_t get_U3CLogLevelU3Ek__BackingField_1() const { return ___U3CLogLevelU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLogLevelU3Ek__BackingField_1() { return &___U3CLogLevelU3Ek__BackingField_1; }
	inline void set_U3CLogLevelU3Ek__BackingField_1(int32_t value)
	{
		___U3CLogLevelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9, ___U3CBytesCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_2() const { return ___U3CBytesCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_2() { return &___U3CBytesCountU3Ek__BackingField_2; }
	inline void set_U3CBytesCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent
struct NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::<Name>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNameU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23, ___U3CNameU3Ek__BackingField_1)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23, ___U3CBytesCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_2() const { return ___U3CBytesCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_2() { return &___U3CBytesCountU3Ek__BackingField_2; }
	inline void set_U3CBytesCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent
struct NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::<Name>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNameU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A, ___U3CNameU3Ek__BackingField_1)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A, ___U3CBytesCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_2() const { return ___U3CBytesCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_2() { return &___U3CBytesCountU3Ek__BackingField_2; }
	inline void set_U3CBytesCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes
struct NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713  : public RuntimeObject
{
public:

public:
};

struct NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkMessageSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___NetworkMessageSent_0;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkMessageReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___NetworkMessageReceived_1;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::TotalBytesSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___TotalBytesSent_2;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::TotalBytesReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___TotalBytesReceived_3;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RpcSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___RpcSent_4;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RpcReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___RpcReceived_5;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NamedMessageSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___NamedMessageSent_6;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NamedMessageReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___NamedMessageReceived_7;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::UnnamedMessageSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___UnnamedMessageSent_8;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::UnnamedMessageReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___UnnamedMessageReceived_9;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkVariableDeltaSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___NetworkVariableDeltaSent_10;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkVariableDeltaReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___NetworkVariableDeltaReceived_11;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectSpawnedSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___ObjectSpawnedSent_12;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectSpawnedReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___ObjectSpawnedReceived_13;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectDestroyedSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___ObjectDestroyedSent_14;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectDestroyedReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___ObjectDestroyedReceived_15;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::OwnershipChangeSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___OwnershipChangeSent_16;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::OwnershipChangeReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___OwnershipChangeReceived_17;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ServerLogSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___ServerLogSent_18;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ServerLogReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___ServerLogReceived_19;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::SceneEventSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___SceneEventSent_20;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::SceneEventReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___SceneEventReceived_21;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::PacketsSent
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___PacketsSent_22;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::PacketsReceived
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___PacketsReceived_23;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RttToServer
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  ___RttToServer_24;

public:
	inline static int32_t get_offset_of_NetworkMessageSent_0() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___NetworkMessageSent_0)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_NetworkMessageSent_0() const { return ___NetworkMessageSent_0; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_NetworkMessageSent_0() { return &___NetworkMessageSent_0; }
	inline void set_NetworkMessageSent_0(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___NetworkMessageSent_0 = value;
	}

	inline static int32_t get_offset_of_NetworkMessageReceived_1() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___NetworkMessageReceived_1)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_NetworkMessageReceived_1() const { return ___NetworkMessageReceived_1; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_NetworkMessageReceived_1() { return &___NetworkMessageReceived_1; }
	inline void set_NetworkMessageReceived_1(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___NetworkMessageReceived_1 = value;
	}

	inline static int32_t get_offset_of_TotalBytesSent_2() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___TotalBytesSent_2)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_TotalBytesSent_2() const { return ___TotalBytesSent_2; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_TotalBytesSent_2() { return &___TotalBytesSent_2; }
	inline void set_TotalBytesSent_2(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___TotalBytesSent_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesReceived_3() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___TotalBytesReceived_3)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_TotalBytesReceived_3() const { return ___TotalBytesReceived_3; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_TotalBytesReceived_3() { return &___TotalBytesReceived_3; }
	inline void set_TotalBytesReceived_3(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___TotalBytesReceived_3 = value;
	}

	inline static int32_t get_offset_of_RpcSent_4() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___RpcSent_4)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_RpcSent_4() const { return ___RpcSent_4; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_RpcSent_4() { return &___RpcSent_4; }
	inline void set_RpcSent_4(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___RpcSent_4 = value;
	}

	inline static int32_t get_offset_of_RpcReceived_5() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___RpcReceived_5)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_RpcReceived_5() const { return ___RpcReceived_5; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_RpcReceived_5() { return &___RpcReceived_5; }
	inline void set_RpcReceived_5(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___RpcReceived_5 = value;
	}

	inline static int32_t get_offset_of_NamedMessageSent_6() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___NamedMessageSent_6)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_NamedMessageSent_6() const { return ___NamedMessageSent_6; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_NamedMessageSent_6() { return &___NamedMessageSent_6; }
	inline void set_NamedMessageSent_6(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___NamedMessageSent_6 = value;
	}

	inline static int32_t get_offset_of_NamedMessageReceived_7() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___NamedMessageReceived_7)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_NamedMessageReceived_7() const { return ___NamedMessageReceived_7; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_NamedMessageReceived_7() { return &___NamedMessageReceived_7; }
	inline void set_NamedMessageReceived_7(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___NamedMessageReceived_7 = value;
	}

	inline static int32_t get_offset_of_UnnamedMessageSent_8() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___UnnamedMessageSent_8)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_UnnamedMessageSent_8() const { return ___UnnamedMessageSent_8; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_UnnamedMessageSent_8() { return &___UnnamedMessageSent_8; }
	inline void set_UnnamedMessageSent_8(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___UnnamedMessageSent_8 = value;
	}

	inline static int32_t get_offset_of_UnnamedMessageReceived_9() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___UnnamedMessageReceived_9)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_UnnamedMessageReceived_9() const { return ___UnnamedMessageReceived_9; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_UnnamedMessageReceived_9() { return &___UnnamedMessageReceived_9; }
	inline void set_UnnamedMessageReceived_9(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___UnnamedMessageReceived_9 = value;
	}

	inline static int32_t get_offset_of_NetworkVariableDeltaSent_10() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___NetworkVariableDeltaSent_10)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_NetworkVariableDeltaSent_10() const { return ___NetworkVariableDeltaSent_10; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_NetworkVariableDeltaSent_10() { return &___NetworkVariableDeltaSent_10; }
	inline void set_NetworkVariableDeltaSent_10(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___NetworkVariableDeltaSent_10 = value;
	}

	inline static int32_t get_offset_of_NetworkVariableDeltaReceived_11() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___NetworkVariableDeltaReceived_11)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_NetworkVariableDeltaReceived_11() const { return ___NetworkVariableDeltaReceived_11; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_NetworkVariableDeltaReceived_11() { return &___NetworkVariableDeltaReceived_11; }
	inline void set_NetworkVariableDeltaReceived_11(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___NetworkVariableDeltaReceived_11 = value;
	}

	inline static int32_t get_offset_of_ObjectSpawnedSent_12() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___ObjectSpawnedSent_12)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_ObjectSpawnedSent_12() const { return ___ObjectSpawnedSent_12; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_ObjectSpawnedSent_12() { return &___ObjectSpawnedSent_12; }
	inline void set_ObjectSpawnedSent_12(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___ObjectSpawnedSent_12 = value;
	}

	inline static int32_t get_offset_of_ObjectSpawnedReceived_13() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___ObjectSpawnedReceived_13)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_ObjectSpawnedReceived_13() const { return ___ObjectSpawnedReceived_13; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_ObjectSpawnedReceived_13() { return &___ObjectSpawnedReceived_13; }
	inline void set_ObjectSpawnedReceived_13(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___ObjectSpawnedReceived_13 = value;
	}

	inline static int32_t get_offset_of_ObjectDestroyedSent_14() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___ObjectDestroyedSent_14)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_ObjectDestroyedSent_14() const { return ___ObjectDestroyedSent_14; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_ObjectDestroyedSent_14() { return &___ObjectDestroyedSent_14; }
	inline void set_ObjectDestroyedSent_14(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___ObjectDestroyedSent_14 = value;
	}

	inline static int32_t get_offset_of_ObjectDestroyedReceived_15() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___ObjectDestroyedReceived_15)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_ObjectDestroyedReceived_15() const { return ___ObjectDestroyedReceived_15; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_ObjectDestroyedReceived_15() { return &___ObjectDestroyedReceived_15; }
	inline void set_ObjectDestroyedReceived_15(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___ObjectDestroyedReceived_15 = value;
	}

	inline static int32_t get_offset_of_OwnershipChangeSent_16() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___OwnershipChangeSent_16)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_OwnershipChangeSent_16() const { return ___OwnershipChangeSent_16; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_OwnershipChangeSent_16() { return &___OwnershipChangeSent_16; }
	inline void set_OwnershipChangeSent_16(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___OwnershipChangeSent_16 = value;
	}

	inline static int32_t get_offset_of_OwnershipChangeReceived_17() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___OwnershipChangeReceived_17)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_OwnershipChangeReceived_17() const { return ___OwnershipChangeReceived_17; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_OwnershipChangeReceived_17() { return &___OwnershipChangeReceived_17; }
	inline void set_OwnershipChangeReceived_17(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___OwnershipChangeReceived_17 = value;
	}

	inline static int32_t get_offset_of_ServerLogSent_18() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___ServerLogSent_18)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_ServerLogSent_18() const { return ___ServerLogSent_18; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_ServerLogSent_18() { return &___ServerLogSent_18; }
	inline void set_ServerLogSent_18(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___ServerLogSent_18 = value;
	}

	inline static int32_t get_offset_of_ServerLogReceived_19() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___ServerLogReceived_19)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_ServerLogReceived_19() const { return ___ServerLogReceived_19; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_ServerLogReceived_19() { return &___ServerLogReceived_19; }
	inline void set_ServerLogReceived_19(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___ServerLogReceived_19 = value;
	}

	inline static int32_t get_offset_of_SceneEventSent_20() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___SceneEventSent_20)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_SceneEventSent_20() const { return ___SceneEventSent_20; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_SceneEventSent_20() { return &___SceneEventSent_20; }
	inline void set_SceneEventSent_20(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___SceneEventSent_20 = value;
	}

	inline static int32_t get_offset_of_SceneEventReceived_21() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___SceneEventReceived_21)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_SceneEventReceived_21() const { return ___SceneEventReceived_21; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_SceneEventReceived_21() { return &___SceneEventReceived_21; }
	inline void set_SceneEventReceived_21(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___SceneEventReceived_21 = value;
	}

	inline static int32_t get_offset_of_PacketsSent_22() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___PacketsSent_22)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_PacketsSent_22() const { return ___PacketsSent_22; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_PacketsSent_22() { return &___PacketsSent_22; }
	inline void set_PacketsSent_22(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___PacketsSent_22 = value;
	}

	inline static int32_t get_offset_of_PacketsReceived_23() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___PacketsReceived_23)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_PacketsReceived_23() const { return ___PacketsReceived_23; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_PacketsReceived_23() { return &___PacketsReceived_23; }
	inline void set_PacketsReceived_23(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___PacketsReceived_23 = value;
	}

	inline static int32_t get_offset_of_RttToServer_24() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields, ___RttToServer_24)); }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  get_RttToServer_24() const { return ___RttToServer_24; }
	inline DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * get_address_of_RttToServer_24() { return &___RttToServer_24; }
	inline void set_RttToServer_24(DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  value)
	{
		___RttToServer_24 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier
struct NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 
{
public:
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::<Name>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNameU3Ek__BackingField_0;
	// System.UInt64 Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::<NetworkId>k__BackingField
	uint64_t ___U3CNetworkIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82, ___U3CNameU3Ek__BackingField_0)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82, ___U3CNetworkIdU3Ek__BackingField_1)); }
	inline uint64_t get_U3CNetworkIdU3Ek__BackingField_1() const { return ___U3CNetworkIdU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CNetworkIdU3Ek__BackingField_1() { return &___U3CNetworkIdU3Ek__BackingField_1; }
	inline void set_U3CNetworkIdU3Ek__BackingField_1(uint64_t value)
	{
		___U3CNetworkIdU3Ek__BackingField_1 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric
struct SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<SceneEventType>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CSceneEventTypeU3Ek__BackingField_1;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<SceneName>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CSceneNameU3Ek__BackingField_2;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSceneEventTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB, ___U3CSceneEventTypeU3Ek__BackingField_1)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CSceneEventTypeU3Ek__BackingField_1() const { return ___U3CSceneEventTypeU3Ek__BackingField_1; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CSceneEventTypeU3Ek__BackingField_1() { return &___U3CSceneEventTypeU3Ek__BackingField_1; }
	inline void set_U3CSceneEventTypeU3Ek__BackingField_1(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CSceneEventTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSceneNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB, ___U3CSceneNameU3Ek__BackingField_2)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CSceneNameU3Ek__BackingField_2() const { return ___U3CSceneNameU3Ek__BackingField_2; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CSceneNameU3Ek__BackingField_2() { return &___U3CSceneNameU3Ek__BackingField_2; }
	inline void set_U3CSceneNameU3Ek__BackingField_2(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CSceneNameU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB, ___U3CBytesCountU3Ek__BackingField_3)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_3() const { return ___U3CBytesCountU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_3() { return &___U3CBytesCountU3Ek__BackingField_3; }
	inline void set_U3CBytesCountU3Ek__BackingField_3(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_3 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent
struct NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___U3CNetworkIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<Name>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNameU3Ek__BackingField_2;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<NetworkBehaviourName>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNetworkBehaviourNameU3Ek__BackingField_3;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66, ___U3CNetworkIdU3Ek__BackingField_1)); }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  get_U3CNetworkIdU3Ek__BackingField_1() const { return ___U3CNetworkIdU3Ek__BackingField_1; }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * get_address_of_U3CNetworkIdU3Ek__BackingField_1() { return &___U3CNetworkIdU3Ek__BackingField_1; }
	inline void set_U3CNetworkIdU3Ek__BackingField_1(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  value)
	{
		___U3CNetworkIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66, ___U3CNameU3Ek__BackingField_2)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkBehaviourNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66, ___U3CNetworkBehaviourNameU3Ek__BackingField_3)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNetworkBehaviourNameU3Ek__BackingField_3() const { return ___U3CNetworkBehaviourNameU3Ek__BackingField_3; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNetworkBehaviourNameU3Ek__BackingField_3() { return &___U3CNetworkBehaviourNameU3Ek__BackingField_3; }
	inline void set_U3CNetworkBehaviourNameU3Ek__BackingField_3(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNetworkBehaviourNameU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66, ___U3CBytesCountU3Ek__BackingField_4)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_4() const { return ___U3CBytesCountU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_4() { return &___U3CBytesCountU3Ek__BackingField_4; }
	inline void set_U3CBytesCountU3Ek__BackingField_4(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_4 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent
struct ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___U3CNetworkIdU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6, ___U3CNetworkIdU3Ek__BackingField_1)); }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  get_U3CNetworkIdU3Ek__BackingField_1() const { return ___U3CNetworkIdU3Ek__BackingField_1; }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * get_address_of_U3CNetworkIdU3Ek__BackingField_1() { return &___U3CNetworkIdU3Ek__BackingField_1; }
	inline void set_U3CNetworkIdU3Ek__BackingField_1(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  value)
	{
		___U3CNetworkIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6, ___U3CBytesCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_2() const { return ___U3CBytesCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_2() { return &___U3CBytesCountU3Ek__BackingField_2; }
	inline void set_U3CBytesCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent
struct ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___U3CNetworkIdU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE, ___U3CNetworkIdU3Ek__BackingField_1)); }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  get_U3CNetworkIdU3Ek__BackingField_1() const { return ___U3CNetworkIdU3Ek__BackingField_1; }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * get_address_of_U3CNetworkIdU3Ek__BackingField_1() { return &___U3CNetworkIdU3Ek__BackingField_1; }
	inline void set_U3CNetworkIdU3Ek__BackingField_1(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  value)
	{
		___U3CNetworkIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE, ___U3CBytesCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_2() const { return ___U3CBytesCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_2() { return &___U3CBytesCountU3Ek__BackingField_2; }
	inline void set_U3CBytesCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent
struct OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___U3CNetworkIdU3Ek__BackingField_1;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495, ___U3CNetworkIdU3Ek__BackingField_1)); }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  get_U3CNetworkIdU3Ek__BackingField_1() const { return ___U3CNetworkIdU3Ek__BackingField_1; }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * get_address_of_U3CNetworkIdU3Ek__BackingField_1() { return &___U3CNetworkIdU3Ek__BackingField_1; }
	inline void set_U3CNetworkIdU3Ek__BackingField_1(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  value)
	{
		___U3CNetworkIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495, ___U3CBytesCountU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_2() const { return ___U3CBytesCountU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_2() { return &___U3CBytesCountU3Ek__BackingField_2; }
	inline void set_U3CBytesCountU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.RpcEvent
struct RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<Connection>k__BackingField
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___U3CConnectionU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<NetworkId>k__BackingField
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___U3CNetworkIdU3Ek__BackingField_1;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<Name>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNameU3Ek__BackingField_2;
	// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<NetworkBehaviourName>k__BackingField
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___U3CNetworkBehaviourNameU3Ek__BackingField_3;
	// System.Int64 Unity.Multiplayer.Tools.MetricTypes.RpcEvent::<BytesCount>k__BackingField
	int64_t ___U3CBytesCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0, ___U3CConnectionU3Ek__BackingField_0)); }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0, ___U3CNetworkIdU3Ek__BackingField_1)); }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  get_U3CNetworkIdU3Ek__BackingField_1() const { return ___U3CNetworkIdU3Ek__BackingField_1; }
	inline NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * get_address_of_U3CNetworkIdU3Ek__BackingField_1() { return &___U3CNetworkIdU3Ek__BackingField_1; }
	inline void set_U3CNetworkIdU3Ek__BackingField_1(NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  value)
	{
		___U3CNetworkIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0, ___U3CNameU3Ek__BackingField_2)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkBehaviourNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0, ___U3CNetworkBehaviourNameU3Ek__BackingField_3)); }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  get_U3CNetworkBehaviourNameU3Ek__BackingField_3() const { return ___U3CNetworkBehaviourNameU3Ek__BackingField_3; }
	inline FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * get_address_of_U3CNetworkBehaviourNameU3Ek__BackingField_3() { return &___U3CNetworkBehaviourNameU3Ek__BackingField_3; }
	inline void set_U3CNetworkBehaviourNameU3Ek__BackingField_3(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  value)
	{
		___U3CNetworkBehaviourNameU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBytesCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0, ___U3CBytesCountU3Ek__BackingField_4)); }
	inline int64_t get_U3CBytesCountU3Ek__BackingField_4() const { return ___U3CBytesCountU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CBytesCountU3Ek__BackingField_4() { return &___U3CBytesCountU3Ek__BackingField_4; }
	inline void set_U3CBytesCountU3Ek__BackingField_4(int64_t value)
	{
		___U3CBytesCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection[]
struct NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB  : public RuntimeArray
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
// Unity.Multiplayer.Tools.MetricTypes.MetricType[]
struct MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3  : public RuntimeArray
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// !!0[] Unity.Multiplayer.Tools.Util.EnumUtil::GetValues<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* EnumUtil_GetValues_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mEE31F224622919AC46032290BE4883DD2E87EC85_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricId::Create<System.Int32Enum>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  MetricId_Create_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m7669C119737C74706998C143C56188F03F1CFC98_gshared (int32_t ___value0, const RuntimeMethod* method);

// System.Void Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::.ctor(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionInfo__ctor_mA23CB5D1AD276E728AD95DFFACA50C4631EB80CB_inline (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, uint64_t ___id0, const RuntimeMethod* method);
// System.UInt64 Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_inline (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::Equals(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionInfo_Equals_mAA77D76974768DA1102101E29A8DD0F757192203 (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionInfo_Equals_m84CA6151C043537EB99CC807422C9076A13707AF (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionInfo_GetHashCode_mC3A51EB3AA7375C1AB1BB9AB9C60DA13C59B16E2 (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>::.ctor()
inline void Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3 (Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// !!0[] Unity.Multiplayer.Tools.Util.EnumUtil::GetValues<Unity.Multiplayer.Tools.MetricTypes.MetricType>()
inline MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3* EnumUtil_GetValues_TisMetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_m95A9E8965482DE764380C53EDFF7DBED1D563823 (const RuntimeMethod* method)
{
	return ((  MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3* (*) (const RuntimeMethod*))EnumUtil_GetValues_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mEE31F224622919AC46032290BE4883DD2E87EC85_gshared)(method);
}
// !!0[] Unity.Multiplayer.Tools.Util.EnumUtil::GetValues<Unity.Multiplayer.Tools.MetricTypes.NetworkDirection>()
inline NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* EnumUtil_GetValues_TisNetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_m12A049C512D5C4005EE6EAE68FA6FAE88FE11B25 (const RuntimeMethod* method)
{
	return ((  NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* (*) (const RuntimeMethod*))EnumUtil_GetValues_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mEE31F224622919AC46032290BE4883DD2E87EC85_gshared)(method);
}
// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetDirectedMetric(Unity.Multiplayer.Tools.MetricTypes.MetricType,Unity.Multiplayer.Tools.MetricTypes.NetworkDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DirectedMetricTypeExtensions_GetDirectedMetric_mBB7F1BE65941DD85A4913EB27218B300C8B8D639 (int32_t ___metricType0, int32_t ___direction1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F (Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mC449D95AD9E22FF5C5DAF2268E883678E14052D9_gshared)(__this, ___key0, ___value1, method);
}
// System.String Unity.Multiplayer.Tools.Util.StringUtil::AddSpacesToCamelCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtil_AddSpacesToCamelCase_mDB185F70365CE276CEE97A92D631A5953D017301 (String_t* ___s0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricId::Create<Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType>(!!0)
inline MetricId_t4457269377F602784DF155273C7A840015D8D342  MetricId_Create_TisDirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875_m0812F0F8BAEFE6A203D74CB021F2AE2EB99B3269 (int32_t ___value0, const RuntimeMethod* method)
{
	return ((  MetricId_t4457269377F602784DF155273C7A840015D8D342  (*) (int32_t, const RuntimeMethod*))MetricId_Create_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m7669C119737C74706998C143C56188F03F1CFC98_gshared)(___value0, method);
}
// System.Void Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::.ctor(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, int32_t ___directedMetricType0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::get_DirectedMetricType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DirectionalMetricInfo_get_DirectedMetricType_mECDC69E1E200665D64439A70DE555A0BD56B0CF1_inline (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetId(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E (int32_t ___directedMetric0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  DirectionalMetricInfo_get_Id_m62485B47A2E8087D4A344DE2A4700572A7F8C5A8 (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeExtensions::GetDisplayNameString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeExtensions_GetDisplayNameString_m4ECFDD5E6B9545B18327C0E513AD43D415F21363 (String_t* ___metricType0, const RuntimeMethod* method);
// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.StringConversionUtility::ConvertToFixedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessageEvent__ctor_m6EA077F1C93D9D651E8EA9B0EEBDE563D737B8BD (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessageEvent__ctor_m97000E467DB64E45A56B62648F45F244E6A36567 (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___name1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NamedMessageEvent_get_BytesCount_mB759B57AEB733E97C76685CCD5A0306036A315F6_inline (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageEvent__ctor_mEE29AA2A3C03E015043B9F6561775D27F878B4BD (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageEvent__ctor_mFBDA2790AB50972BCEFF3B20BF25511F8631A2C8 (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___name1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NetworkMessageEvent_get_BytesCount_m1FFA0A656A500555E540BEE47CCE48187F57B58F_inline (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::.ctor(Unity.Collections.FixedString64Bytes,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectIdentifier__ctor_m0B75E2B53C205F7700DA44916B53EDFE0B8FC951 (NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * __this, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name0, uint64_t ___networkId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::.ctor(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectIdentifier__ctor_m7399525650D1602F1D1AADBA1F60844184623907 (NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * __this, String_t* ___name0, uint64_t ___networkId1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,Unity.Collections.FixedString64Bytes,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableEvent__ctor_mE032CA6607D6528D92E6DBBA5F3692FDD3A10DD4 (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name2, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___networkBehaviourName3, int64_t ___bytesCount4, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableEvent__ctor_m7E5D1DF336088615CCE3E9E5836DDDB1E5F1FAEB (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, String_t* ___name2, String_t* ___networkBehaviourName3, int64_t ___bytesCount4, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NetworkVariableEvent_get_BytesCount_mC671E8F041D8EC1D2F9C538A678CE1DFDDF00DED_inline (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyedEvent__ctor_m46F9E2C2F70DE15EE993679AB7FA0F5DDB020C6E (ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ObjectDestroyedEvent_get_BytesCount_m0D85DFB30012B4BF2475878EF4D2B43B2F4E24B9_inline (ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnedEvent__ctor_m6FE8E96799D600F9C3966B627207BCDB03925CC3 (ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ObjectSpawnedEvent_get_BytesCount_mBB3227417185EE1B41D7E523F32B8E53CE84A872_inline (ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnershipChangeEvent__ctor_mC180AEFF3DF835894329F6C31A6350334E4A2109 (OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t OwnershipChangeEvent_get_BytesCount_m5D75AE8191A65D23CFE6A351732DE700C46A3432_inline (OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * __this, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.RpcEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t RpcEvent_get_BytesCount_mB7711BC3C2B8E2E3D80EC313E11B656298B033E5_inline (RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Collections.FixedString64Bytes,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMetric__ctor_m1B9123496401855ECE04B82BC82825D29D650742 (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___sceneEventType1, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___sceneName2, int64_t ___bytesCount3, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMetric__ctor_mAB1873EB8250CE509C05F2584E49B0B01278EF79 (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___sceneEventType1, String_t* ___sceneName2, int64_t ___bytesCount3, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SceneEventMetric_get_BytesCount_mB58F0473D5216F08D71FCCE964B703250E9E0032_inline (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.LogLevel,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLogEvent__ctor_mC93CE12035A5D9E703F20D5EAAEE9F42014022A8 (ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, int32_t ___logLevel1, int64_t ___bytesCount2, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ServerLogEvent_get_BytesCount_m929D7A3571C67DAFDB458157ACE18ABDD7E96D72_inline (ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * __this, const RuntimeMethod* method);
// Unity.Collections.FixedString64Bytes Unity.Collections.FixedString64Bytes::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  FixedString64Bytes_op_Implicit_mBF6C9735F7C6560E3165856874C9397D27CADAE6 (String_t* ___b0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.FixedString64Bytes::get_UTF8MaxLengthInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedString64Bytes_get_UTF8MaxLengthInBytes_m01CAAC36023B77017B6624BD1B996455BEF188D9 (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42 (const RuntimeMethod* method);
// System.Byte* Unity.Collections.FixedString64Bytes::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_inline (FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * __this, const RuntimeMethod* method);
// Unity.Collections.CopyError Unity.Collections.UTF8ArrayUnsafeUtility::Copy(System.Byte*,System.Int32&,System.Int32,System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UTF8ArrayUnsafeUtility_Copy_m9E6745760C827B15565DD1D24E58AC4570E0447F (uint8_t* ___dest0, int32_t* ___destLength1, int32_t ___destUTF8MaxLengthInBytes2, Il2CppChar* ___src3, int32_t ___srcLength4, const RuntimeMethod* method);
// System.Void Unity.Collections.FixedString64Bytes::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF (FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageEvent__ctor_m1615AC8E726C6A2B200B28C994E83D7C77FFCF17 (UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, int64_t ___bytesCount1, const RuntimeMethod* method);
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::get_BytesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnnamedMessageEvent_get_BytesCount_m2DB793B65C9DF0FCBBD3B7F4F46C60E2C0CD552D_inline (UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * __this, const RuntimeMethod* method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionInfo__ctor_mA23CB5D1AD276E728AD95DFFACA50C4631EB80CB (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, uint64_t ___id0, const RuntimeMethod* method)
{
	{
		// Id = id;
		uint64_t L_0 = ___id0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionInfo__ctor_mA23CB5D1AD276E728AD95DFFACA50C4631EB80CB_AdjustorThunk (RuntimeObject * __this, uint64_t ___id0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * _thisAdjusted = reinterpret_cast<ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *>(__this + _offset);
	ConnectionInfo__ctor_mA23CB5D1AD276E728AD95DFFACA50C4631EB80CB_inline(_thisAdjusted, ___id0, method);
}
// System.UInt64 Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, const RuntimeMethod* method)
{
	{
		// public ulong Id { get; }
		uint64_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * _thisAdjusted = reinterpret_cast<ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::Equals(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionInfo_Equals_mAA77D76974768DA1102101E29A8DD0F757192203 (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___other0, const RuntimeMethod* method)
{
	{
		// return Id == other.Id;
		uint64_t L_0;
		L_0 = ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_inline((ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *)__this, /*hidden argument*/NULL);
		uint64_t L_1;
		L_1 = ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_inline((ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ConnectionInfo_Equals_mAA77D76974768DA1102101E29A8DD0F757192203_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * _thisAdjusted = reinterpret_cast<ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConnectionInfo_Equals_mAA77D76974768DA1102101E29A8DD0F757192203(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionInfo_Equals_m84CA6151C043537EB99CC807422C9076A13707AF (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return obj is ConnectionInfo other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *)((ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *)UnBox(L_1, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4_il2cpp_TypeInfo_var))));
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_2 = V_0;
		bool L_3;
		L_3 = ConnectionInfo_Equals_mAA77D76974768DA1102101E29A8DD0F757192203((ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConnectionInfo_Equals_m84CA6151C043537EB99CC807422C9076A13707AF_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * _thisAdjusted = reinterpret_cast<ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConnectionInfo_Equals_m84CA6151C043537EB99CC807422C9076A13707AF(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionInfo_GetHashCode_mC3A51EB3AA7375C1AB1BB9AB9C60DA13C59B16E2 (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// return Id.GetHashCode();
		uint64_t L_0;
		L_0 = ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_inline((ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionInfo_GetHashCode_mC3A51EB3AA7375C1AB1BB9AB9C60DA13C59B16E2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * _thisAdjusted = reinterpret_cast<ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionInfo_GetHashCode_mC3A51EB3AA7375C1AB1BB9AB9C60DA13C59B16E2(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectedMetricTypeExtensions__cctor_m3717CDC04DFB08D94E2006078FA29E8C64D705D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtil_GetValues_TisMetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_m95A9E8965482DE764380C53EDFF7DBED1D563823_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtil_GetValues_TisNetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_m12A049C512D5C4005EE6EAE68FA6FAE88FE11B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* V_0 = NULL;
	MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	{
		// static readonly Dictionary<DirectedMetricType, string> s_Identifiers =
		//     new Dictionary<DirectedMetricType, string>();
		Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * L_0 = (Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D *)il2cpp_codegen_object_new(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3(L_0, /*hidden argument*/Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3_RuntimeMethod_var);
		((DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields*)il2cpp_codegen_static_fields_for(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var))->set_s_Identifiers_0(L_0);
		// static readonly Dictionary<DirectedMetricType, string> s_DisplayNames =
		//     new Dictionary<DirectedMetricType, string>();
		Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * L_1 = (Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D *)il2cpp_codegen_object_new(Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3(L_1, /*hidden argument*/Dictionary_2__ctor_m601812832922CAB9318705814F4A9FF78123F5A3_RuntimeMethod_var);
		((DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields*)il2cpp_codegen_static_fields_for(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var))->set_s_DisplayNames_1(L_1);
		// var metricTypes = EnumUtil.GetValues<MetricType>();
		MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3* L_2;
		L_2 = EnumUtil_GetValues_TisMetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_m95A9E8965482DE764380C53EDFF7DBED1D563823(/*hidden argument*/EnumUtil_GetValues_TisMetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_m95A9E8965482DE764380C53EDFF7DBED1D563823_RuntimeMethod_var);
		// var networkDirections = EnumUtil.GetValues<NetworkDirection>();
		NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* L_3;
		L_3 = EnumUtil_GetValues_TisNetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_m12A049C512D5C4005EE6EAE68FA6FAE88FE11B25(/*hidden argument*/EnumUtil_GetValues_TisNetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_m12A049C512D5C4005EE6EAE68FA6FAE88FE11B25_RuntimeMethod_var);
		V_0 = L_3;
		// foreach (var metricType in metricTypes)
		V_1 = L_2;
		V_2 = 0;
		goto IL_0095;
	}

IL_0024:
	{
		// foreach (var metricType in metricTypes)
		MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// foreach (var networkDirection in networkDirections)
		NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* L_8 = V_0;
		V_4 = L_8;
		V_5 = 0;
		goto IL_0089;
	}

IL_0030:
	{
		// foreach (var networkDirection in networkDirections)
		NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (int32_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		// var directedMetricType = metricType.GetDirectedMetric(networkDirection);
		int32_t L_13 = V_3;
		int32_t L_14 = V_6;
		int32_t L_15;
		L_15 = DirectedMetricTypeExtensions_GetDirectedMetric_mBB7F1BE65941DD85A4913EB27218B300C8B8D639(L_13, L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		// var combinedName = metricType.ToString() + networkDirection.ToString();
		RuntimeObject * L_16 = Box(MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_3 = *(int32_t*)UnBox(L_16);
		RuntimeObject * L_18 = Box(NetworkDirection_tAC466DE8B303E434AB1B3DF6AA7A28E56AAC95B1_il2cpp_TypeInfo_var, (&V_6));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		V_6 = *(int32_t*)UnBox(L_18);
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		// s_Identifiers[directedMetricType] = combinedName;
		Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * L_21 = ((DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields*)il2cpp_codegen_static_fields_for(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var))->get_s_Identifiers_0();
		int32_t L_22 = V_7;
		String_t* L_23 = V_8;
		NullCheck(L_21);
		Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F(L_21, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F_RuntimeMethod_var);
		// s_DisplayNames[directedMetricType] = StringUtil.AddSpacesToCamelCase(combinedName);
		Dictionary_2_t126B1B4B3F7111CD6F74894CAFED8B63EBC9072D * L_24 = ((DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_StaticFields*)il2cpp_codegen_static_fields_for(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var))->get_s_DisplayNames_1();
		int32_t L_25 = V_7;
		String_t* L_26 = V_8;
		String_t* L_27;
		L_27 = StringUtil_AddSpacesToCamelCase_mDB185F70365CE276CEE97A92D631A5953D017301(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F(L_24, L_25, L_27, /*hidden argument*/Dictionary_2_set_Item_m36806D95CDBA4DD0704673CF0181E2603A46993F_RuntimeMethod_var);
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0089:
	{
		// foreach (var networkDirection in networkDirections)
		int32_t L_29 = V_5;
		NetworkDirectionU5BU5D_t4069A112E3CEDCC9D7423C82F5C47DFA71D2F3DB* L_30 = V_4;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0095:
	{
		// foreach (var metricType in metricTypes)
		int32_t L_32 = V_2;
		MetricTypeU5BU5D_tF93D440F281181B1F6EF8E42AA7208C18D9365D3* L_33 = V_1;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetDirectedMetric(Unity.Multiplayer.Tools.MetricTypes.MetricType,Unity.Multiplayer.Tools.MetricTypes.NetworkDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DirectedMetricTypeExtensions_GetDirectedMetric_mBB7F1BE65941DD85A4913EB27218B300C8B8D639 (int32_t ___metricType0, int32_t ___direction1, const RuntimeMethod* method)
{
	{
		// return (DirectedMetricType)(
		//     ((int)metricType << NetworkDirectionConstants.k_BitWidth) |
		//     ((int)direction  &  NetworkDirectionConstants.k_Mask));
		int32_t L_0 = ___metricType0;
		int32_t L_1 = ___direction1;
		return (int32_t)(((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)2))|(int32_t)((int32_t)((int32_t)L_1&(int32_t)3)))));
	}
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectedMetricTypeExtensions::GetId(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E (int32_t ___directedMetric0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_Create_TisDirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875_m0812F0F8BAEFE6A203D74CB021F2AE2EB99B3269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MetricId.Create(directedMetric);
		int32_t L_0 = ___directedMetric0;
		IL2CPP_RUNTIME_CLASS_INIT(MetricId_t4457269377F602784DF155273C7A840015D8D342_il2cpp_TypeInfo_var);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_1;
		L_1 = MetricId_Create_TisDirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875_m0812F0F8BAEFE6A203D74CB021F2AE2EB99B3269(L_0, /*hidden argument*/MetricId_Create_TisDirectedMetricType_t6082E713E88CF4E87794C13128F009955C2CB875_m0812F0F8BAEFE6A203D74CB021F2AE2EB99B3269_RuntimeMethod_var);
		return L_1;
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::.ctor(Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2 (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, int32_t ___directedMetricType0, const RuntimeMethod* method)
{
	{
		// DirectedMetricType = directedMetricType;
		int32_t L_0 = ___directedMetricType0;
		__this->set_U3CDirectedMetricTypeU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_AdjustorThunk (RuntimeObject * __this, int32_t ___directedMetricType0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * _thisAdjusted = reinterpret_cast<DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 *>(__this + _offset);
	DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline(_thisAdjusted, ___directedMetricType0, method);
}
// Unity.Multiplayer.Tools.MetricTypes.DirectedMetricType Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::get_DirectedMetricType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DirectionalMetricInfo_get_DirectedMetricType_mECDC69E1E200665D64439A70DE555A0BD56B0CF1 (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, const RuntimeMethod* method)
{
	{
		// internal DirectedMetricType DirectedMetricType { get; }
		int32_t L_0 = __this->get_U3CDirectedMetricTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DirectionalMetricInfo_get_DirectedMetricType_mECDC69E1E200665D64439A70DE555A0BD56B0CF1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * _thisAdjusted = reinterpret_cast<DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DirectionalMetricInfo_get_DirectedMetricType_mECDC69E1E200665D64439A70DE555A0BD56B0CF1_inline(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricId_t4457269377F602784DF155273C7A840015D8D342  DirectionalMetricInfo_get_Id_m62485B47A2E8087D4A344DE2A4700572A7F8C5A8 (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal MetricId Id => DirectedMetricType.GetId();
		int32_t L_0;
		L_0 = DirectionalMetricInfo_get_DirectedMetricType_mECDC69E1E200665D64439A70DE555A0BD56B0CF1_inline((DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DirectedMetricTypeExtensions_t6556C2C42DF54E91C3823EDA7F41775A7CA0AE99_il2cpp_TypeInfo_var);
		MetricId_t4457269377F602784DF155273C7A840015D8D342  L_1;
		L_1 = DirectedMetricTypeExtensions_GetId_m58425D96DED04D5C1481461C2B7991586370A61E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  MetricId_t4457269377F602784DF155273C7A840015D8D342  DirectionalMetricInfo_get_Id_m62485B47A2E8087D4A344DE2A4700572A7F8C5A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * _thisAdjusted = reinterpret_cast<DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 *>(__this + _offset);
	MetricId_t4457269377F602784DF155273C7A840015D8D342  _returnValue;
	_returnValue = DirectionalMetricInfo_get_Id_m62485B47A2E8087D4A344DE2A4700572A7F8C5A8(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeExtensions::GetDisplayNameString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeExtensions_GetDisplayNameString_m4ECFDD5E6B9545B18327C0E513AD43D415F21363 (String_t* ___metricType0, const RuntimeMethod* method)
{
	{
		// return StringUtil.AddSpacesToCamelCase(metricType);
		String_t* L_0 = ___metricType0;
		String_t* L_1;
		L_1 = StringUtil_AddSpacesToCamelCase_mDB185F70365CE276CEE97A92D631A5953D017301(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Unity.Multiplayer.Tools.NetStats.MetricTypeExtensions::GetDisplayNameString(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeExtensions_GetDisplayNameString_mC810E7FBE65916C25D152B608210F34C531A8366 (int32_t ___metricType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetDisplayNameString(metricType.ToString());
		RuntimeObject * L_0 = Box(MetricType_tE5808BBAA2A00293A4AD9F020C95EADA3EF7FDEB_il2cpp_TypeInfo_var, (&___metricType0));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___metricType0 = *(int32_t*)UnBox(L_0);
		String_t* L_2;
		L_2 = MetricTypeExtensions_GetDisplayNameString_m4ECFDD5E6B9545B18327C0E513AD43D415F21363(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessageEvent__ctor_m97000E467DB64E45A56B62648F45F244E6A36567 (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// : this(connection, StringConversionUtility.ConvertToFixedString(name), bytesCount)
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		String_t* L_1 = ___name1;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_2;
		L_2 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_1, /*hidden argument*/NULL);
		int64_t L_3 = ___bytesCount2;
		NamedMessageEvent__ctor_m6EA077F1C93D9D651E8EA9B0EEBDE563D737B8BD((NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 *)__this, L_0, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NamedMessageEvent__ctor_m97000E467DB64E45A56B62648F45F244E6A36567_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * _thisAdjusted = reinterpret_cast<NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 *>(__this + _offset);
	NamedMessageEvent__ctor_m97000E467DB64E45A56B62648F45F244E6A36567(_thisAdjusted, ___connection0, ___name1, ___bytesCount2, method);
}
// System.Void Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedMessageEvent__ctor_m6EA077F1C93D9D651E8EA9B0EEBDE563D737B8BD (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// Name = name;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_1 = ___name1;
		__this->set_U3CNameU3Ek__BackingField_1(L_1);
		// BytesCount = bytesCount;
		int64_t L_2 = ___bytesCount2;
		__this->set_U3CBytesCountU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NamedMessageEvent__ctor_m6EA077F1C93D9D651E8EA9B0EEBDE563D737B8BD_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * _thisAdjusted = reinterpret_cast<NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 *>(__this + _offset);
	NamedMessageEvent__ctor_m6EA077F1C93D9D651E8EA9B0EEBDE563D737B8BD(_thisAdjusted, ___connection0, ___name1, ___bytesCount2, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NamedMessageEvent_get_BytesCount_mB759B57AEB733E97C76685CCD5A0306036A315F6 (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NamedMessageEvent_get_BytesCount_mB759B57AEB733E97C76685CCD5A0306036A315F6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * _thisAdjusted = reinterpret_cast<NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NamedMessageEvent_get_BytesCount_mB759B57AEB733E97C76685CCD5A0306036A315F6_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageEvent__ctor_mFBDA2790AB50972BCEFF3B20BF25511F8631A2C8 (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// : this(connection, StringConversionUtility.ConvertToFixedString(name), bytesCount)
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		String_t* L_1 = ___name1;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_2;
		L_2 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_1, /*hidden argument*/NULL);
		int64_t L_3 = ___bytesCount2;
		NetworkMessageEvent__ctor_mEE29AA2A3C03E015043B9F6561775D27F878B4BD((NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A *)__this, L_0, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkMessageEvent__ctor_mFBDA2790AB50972BCEFF3B20BF25511F8631A2C8_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * _thisAdjusted = reinterpret_cast<NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A *>(__this + _offset);
	NetworkMessageEvent__ctor_mFBDA2790AB50972BCEFF3B20BF25511F8631A2C8(_thisAdjusted, ___connection0, ___name1, ___bytesCount2, method);
}
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageEvent__ctor_mEE29AA2A3C03E015043B9F6561775D27F878B4BD (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// Name = name;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_1 = ___name1;
		__this->set_U3CNameU3Ek__BackingField_1(L_1);
		// BytesCount = bytesCount;
		int64_t L_2 = ___bytesCount2;
		__this->set_U3CBytesCountU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkMessageEvent__ctor_mEE29AA2A3C03E015043B9F6561775D27F878B4BD_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * _thisAdjusted = reinterpret_cast<NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A *>(__this + _offset);
	NetworkMessageEvent__ctor_mEE29AA2A3C03E015043B9F6561775D27F878B4BD(_thisAdjusted, ___connection0, ___name1, ___bytesCount2, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetworkMessageEvent_get_BytesCount_m1FFA0A656A500555E540BEE47CCE48187F57B58F (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NetworkMessageEvent_get_BytesCount_m1FFA0A656A500555E540BEE47CCE48187F57B58F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * _thisAdjusted = reinterpret_cast<NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NetworkMessageEvent_get_BytesCount_m1FFA0A656A500555E540BEE47CCE48187F57B58F_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMetricTypes__cctor_mD58622AD38FD1F76754272BC1430BED30AA0E281 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly DirectionalMetricInfo NetworkMessageSent =
		//     new DirectionalMetricInfo(DirectedMetricType.NetworkMessageSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_0), ((int32_t)46), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_NetworkMessageSent_0(L_0);
		// public static readonly DirectionalMetricInfo NetworkMessageReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.NetworkMessageReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_1;
		memset((&L_1), 0, sizeof(L_1));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_1), ((int32_t)45), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_NetworkMessageReceived_1(L_1);
		// public static readonly DirectionalMetricInfo TotalBytesSent =
		//     new DirectionalMetricInfo(DirectedMetricType.TotalBytesSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_2;
		memset((&L_2), 0, sizeof(L_2));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_2), 6, /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_TotalBytesSent_2(L_2);
		// public static readonly DirectionalMetricInfo TotalBytesReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.TotalBytesReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_3;
		memset((&L_3), 0, sizeof(L_3));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_3), 5, /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_TotalBytesReceived_3(L_3);
		// public static readonly DirectionalMetricInfo RpcSent =
		//     new DirectionalMetricInfo(DirectedMetricType.RpcSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_4), ((int32_t)10), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_RpcSent_4(L_4);
		// public static readonly DirectionalMetricInfo RpcReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.RpcReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_5;
		memset((&L_5), 0, sizeof(L_5));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_5), ((int32_t)9), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_RpcReceived_5(L_5);
		// public static readonly DirectionalMetricInfo NamedMessageSent =
		//     new DirectionalMetricInfo(DirectedMetricType.NamedMessageSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_6;
		memset((&L_6), 0, sizeof(L_6));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_6), ((int32_t)14), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_NamedMessageSent_6(L_6);
		// public static readonly DirectionalMetricInfo NamedMessageReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.NamedMessageReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_7;
		memset((&L_7), 0, sizeof(L_7));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_7), ((int32_t)13), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_NamedMessageReceived_7(L_7);
		// public static readonly DirectionalMetricInfo UnnamedMessageSent =
		//     new DirectionalMetricInfo(DirectedMetricType.UnnamedMessageSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_8;
		memset((&L_8), 0, sizeof(L_8));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_8), ((int32_t)18), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_UnnamedMessageSent_8(L_8);
		// public static readonly DirectionalMetricInfo UnnamedMessageReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.UnnamedMessageReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_9;
		memset((&L_9), 0, sizeof(L_9));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_9), ((int32_t)17), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_UnnamedMessageReceived_9(L_9);
		// public static readonly DirectionalMetricInfo NetworkVariableDeltaSent =
		//     new DirectionalMetricInfo(DirectedMetricType.NetworkVariableDeltaSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_10;
		memset((&L_10), 0, sizeof(L_10));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_10), ((int32_t)22), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_NetworkVariableDeltaSent_10(L_10);
		// public static readonly DirectionalMetricInfo NetworkVariableDeltaReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.NetworkVariableDeltaReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_11;
		memset((&L_11), 0, sizeof(L_11));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_11), ((int32_t)21), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_NetworkVariableDeltaReceived_11(L_11);
		// public static readonly DirectionalMetricInfo ObjectSpawnedSent =
		//     new DirectionalMetricInfo(DirectedMetricType.ObjectSpawnedSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_12;
		memset((&L_12), 0, sizeof(L_12));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_12), ((int32_t)26), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_ObjectSpawnedSent_12(L_12);
		// public static readonly DirectionalMetricInfo ObjectSpawnedReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.ObjectSpawnedReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_13;
		memset((&L_13), 0, sizeof(L_13));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_13), ((int32_t)25), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_ObjectSpawnedReceived_13(L_13);
		// public static readonly DirectionalMetricInfo ObjectDestroyedSent =
		//     new DirectionalMetricInfo(DirectedMetricType.ObjectDestroyedSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_14;
		memset((&L_14), 0, sizeof(L_14));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_14), ((int32_t)30), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_ObjectDestroyedSent_14(L_14);
		// public static readonly DirectionalMetricInfo ObjectDestroyedReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.ObjectDestroyedReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_15;
		memset((&L_15), 0, sizeof(L_15));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_15), ((int32_t)29), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_ObjectDestroyedReceived_15(L_15);
		// public static readonly DirectionalMetricInfo OwnershipChangeSent =
		//     new DirectionalMetricInfo(DirectedMetricType.OwnershipChangeSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_16;
		memset((&L_16), 0, sizeof(L_16));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_16), ((int32_t)34), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_OwnershipChangeSent_16(L_16);
		// public static readonly DirectionalMetricInfo OwnershipChangeReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.OwnershipChangeReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_17;
		memset((&L_17), 0, sizeof(L_17));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_17), ((int32_t)33), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_OwnershipChangeReceived_17(L_17);
		// public static readonly DirectionalMetricInfo ServerLogSent =
		//     new DirectionalMetricInfo(DirectedMetricType.ServerLogSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_18;
		memset((&L_18), 0, sizeof(L_18));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_18), ((int32_t)38), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_ServerLogSent_18(L_18);
		// public static readonly DirectionalMetricInfo ServerLogReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.ServerLogReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_19;
		memset((&L_19), 0, sizeof(L_19));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_19), ((int32_t)37), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_ServerLogReceived_19(L_19);
		// public static readonly DirectionalMetricInfo SceneEventSent =
		//     new DirectionalMetricInfo(DirectedMetricType.SceneEventSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_20;
		memset((&L_20), 0, sizeof(L_20));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_20), ((int32_t)42), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_SceneEventSent_20(L_20);
		// public static readonly DirectionalMetricInfo SceneEventReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.SceneEventReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_21;
		memset((&L_21), 0, sizeof(L_21));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_21), ((int32_t)41), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_SceneEventReceived_21(L_21);
		// public static readonly DirectionalMetricInfo PacketsSent =
		//     new DirectionalMetricInfo(DirectedMetricType.PacketsSent);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_22;
		memset((&L_22), 0, sizeof(L_22));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_22), ((int32_t)50), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_PacketsSent_22(L_22);
		// public static readonly DirectionalMetricInfo PacketsReceived =
		//     new DirectionalMetricInfo(DirectedMetricType.PacketsReceived);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_23;
		memset((&L_23), 0, sizeof(L_23));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_23), ((int32_t)49), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_PacketsReceived_23(L_23);
		// public static readonly DirectionalMetricInfo RttToServer =
		//     new DirectionalMetricInfo(DirectedMetricType.RttToServer);
		DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5  L_24;
		memset((&L_24), 0, sizeof(L_24));
		DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline((&L_24), ((int32_t)55), /*hidden argument*/NULL);
		((NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_tDF64CBD402BCC0075AB5376E4161E6BDBE34B713_il2cpp_TypeInfo_var))->set_RttToServer_24(L_24);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::.ctor(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectIdentifier__ctor_m7399525650D1602F1D1AADBA1F60844184623907 (NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * __this, String_t* ___name0, uint64_t ___networkId1, const RuntimeMethod* method)
{
	{
		// : this(StringConversionUtility.ConvertToFixedString(name), networkId)
		String_t* L_0 = ___name0;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_1;
		L_1 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_0, /*hidden argument*/NULL);
		uint64_t L_2 = ___networkId1;
		NetworkObjectIdentifier__ctor_m0B75E2B53C205F7700DA44916B53EDFE0B8FC951((NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 *)__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkObjectIdentifier__ctor_m7399525650D1602F1D1AADBA1F60844184623907_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, uint64_t ___networkId1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * _thisAdjusted = reinterpret_cast<NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 *>(__this + _offset);
	NetworkObjectIdentifier__ctor_m7399525650D1602F1D1AADBA1F60844184623907(_thisAdjusted, ___name0, ___networkId1, method);
}
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier::.ctor(Unity.Collections.FixedString64Bytes,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObjectIdentifier__ctor_m0B75E2B53C205F7700DA44916B53EDFE0B8FC951 (NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * __this, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name0, uint64_t ___networkId1, const RuntimeMethod* method)
{
	{
		// Name = name;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_0 = ___name0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		// NetworkId = networkId;
		uint64_t L_1 = ___networkId1;
		__this->set_U3CNetworkIdU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkObjectIdentifier__ctor_m0B75E2B53C205F7700DA44916B53EDFE0B8FC951_AdjustorThunk (RuntimeObject * __this, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name0, uint64_t ___networkId1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 * _thisAdjusted = reinterpret_cast<NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82 *>(__this + _offset);
	NetworkObjectIdentifier__ctor_m0B75E2B53C205F7700DA44916B53EDFE0B8FC951(_thisAdjusted, ___name0, ___networkId1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableEvent__ctor_m7E5D1DF336088615CCE3E9E5836DDDB1E5F1FAEB (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, String_t* ___name2, String_t* ___networkBehaviourName3, int64_t ___bytesCount4, const RuntimeMethod* method)
{
	{
		// : this(connection, networkId, StringConversionUtility.ConvertToFixedString(name), StringConversionUtility.ConvertToFixedString(networkBehaviourName), bytesCount)
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  L_1 = ___networkId1;
		String_t* L_2 = ___name2;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_3;
		L_3 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___networkBehaviourName3;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_5;
		L_5 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_4, /*hidden argument*/NULL);
		int64_t L_6 = ___bytesCount4;
		NetworkVariableEvent__ctor_mE032CA6607D6528D92E6DBBA5F3692FDD3A10DD4((NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 *)__this, L_0, L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkVariableEvent__ctor_m7E5D1DF336088615CCE3E9E5836DDDB1E5F1FAEB_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, String_t* ___name2, String_t* ___networkBehaviourName3, int64_t ___bytesCount4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * _thisAdjusted = reinterpret_cast<NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 *>(__this + _offset);
	NetworkVariableEvent__ctor_m7E5D1DF336088615CCE3E9E5836DDDB1E5F1FAEB(_thisAdjusted, ___connection0, ___networkId1, ___name2, ___networkBehaviourName3, ___bytesCount4, method);
}
// System.Void Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,Unity.Collections.FixedString64Bytes,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableEvent__ctor_mE032CA6607D6528D92E6DBBA5F3692FDD3A10DD4 (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name2, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___networkBehaviourName3, int64_t ___bytesCount4, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// NetworkId = networkId;
		NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  L_1 = ___networkId1;
		__this->set_U3CNetworkIdU3Ek__BackingField_1(L_1);
		// Name = name;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_2 = ___name2;
		__this->set_U3CNameU3Ek__BackingField_2(L_2);
		// NetworkBehaviourName = networkBehaviourName;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_3 = ___networkBehaviourName3;
		__this->set_U3CNetworkBehaviourNameU3Ek__BackingField_3(L_3);
		// BytesCount = bytesCount;
		int64_t L_4 = ___bytesCount4;
		__this->set_U3CBytesCountU3Ek__BackingField_4(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkVariableEvent__ctor_mE032CA6607D6528D92E6DBBA5F3692FDD3A10DD4_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___name2, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___networkBehaviourName3, int64_t ___bytesCount4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * _thisAdjusted = reinterpret_cast<NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 *>(__this + _offset);
	NetworkVariableEvent__ctor_mE032CA6607D6528D92E6DBBA5F3692FDD3A10DD4(_thisAdjusted, ___connection0, ___networkId1, ___name2, ___networkBehaviourName3, ___bytesCount4, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NetworkVariableEvent_get_BytesCount_mC671E8F041D8EC1D2F9C538A678CE1DFDDF00DED (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t NetworkVariableEvent_get_BytesCount_mC671E8F041D8EC1D2F9C538A678CE1DFDDF00DED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * _thisAdjusted = reinterpret_cast<NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NetworkVariableEvent_get_BytesCount_mC671E8F041D8EC1D2F9C538A678CE1DFDDF00DED_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyedEvent__ctor_m46F9E2C2F70DE15EE993679AB7FA0F5DDB020C6E (ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// NetworkId = networkId;
		NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  L_1 = ___networkId1;
		__this->set_U3CNetworkIdU3Ek__BackingField_1(L_1);
		// BytesCount = bytesCount;
		int64_t L_2 = ___bytesCount2;
		__this->set_U3CBytesCountU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectDestroyedEvent__ctor_m46F9E2C2F70DE15EE993679AB7FA0F5DDB020C6E_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * _thisAdjusted = reinterpret_cast<ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 *>(__this + _offset);
	ObjectDestroyedEvent__ctor_m46F9E2C2F70DE15EE993679AB7FA0F5DDB020C6E(_thisAdjusted, ___connection0, ___networkId1, ___bytesCount2, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ObjectDestroyedEvent_get_BytesCount_m0D85DFB30012B4BF2475878EF4D2B43B2F4E24B9 (ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ObjectDestroyedEvent_get_BytesCount_m0D85DFB30012B4BF2475878EF4D2B43B2F4E24B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * _thisAdjusted = reinterpret_cast<ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ObjectDestroyedEvent_get_BytesCount_m0D85DFB30012B4BF2475878EF4D2B43B2F4E24B9_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnedEvent__ctor_m6FE8E96799D600F9C3966B627207BCDB03925CC3 (ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// NetworkId = networkId;
		NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  L_1 = ___networkId1;
		__this->set_U3CNetworkIdU3Ek__BackingField_1(L_1);
		// BytesCount = bytesCount;
		int64_t L_2 = ___bytesCount2;
		__this->set_U3CBytesCountU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectSpawnedEvent__ctor_m6FE8E96799D600F9C3966B627207BCDB03925CC3_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * _thisAdjusted = reinterpret_cast<ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE *>(__this + _offset);
	ObjectSpawnedEvent__ctor_m6FE8E96799D600F9C3966B627207BCDB03925CC3(_thisAdjusted, ___connection0, ___networkId1, ___bytesCount2, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ObjectSpawnedEvent_get_BytesCount_mBB3227417185EE1B41D7E523F32B8E53CE84A872 (ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ObjectSpawnedEvent_get_BytesCount_mBB3227417185EE1B41D7E523F32B8E53CE84A872_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * _thisAdjusted = reinterpret_cast<ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ObjectSpawnedEvent_get_BytesCount_mBB3227417185EE1B41D7E523F32B8E53CE84A872_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.NetworkObjectIdentifier,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnershipChangeEvent__ctor_mC180AEFF3DF835894329F6C31A6350334E4A2109 (OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// NetworkId = networkId;
		NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  L_1 = ___networkId1;
		__this->set_U3CNetworkIdU3Ek__BackingField_1(L_1);
		// BytesCount = bytesCount;
		int64_t L_2 = ___bytesCount2;
		__this->set_U3CBytesCountU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OwnershipChangeEvent__ctor_mC180AEFF3DF835894329F6C31A6350334E4A2109_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, NetworkObjectIdentifier_t8898AAE530DFF9F9C9DA1CFC7C9F578D7E22CF82  ___networkId1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * _thisAdjusted = reinterpret_cast<OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 *>(__this + _offset);
	OwnershipChangeEvent__ctor_mC180AEFF3DF835894329F6C31A6350334E4A2109(_thisAdjusted, ___connection0, ___networkId1, ___bytesCount2, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t OwnershipChangeEvent_get_BytesCount_m5D75AE8191A65D23CFE6A351732DE700C46A3432 (OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t OwnershipChangeEvent_get_BytesCount_m5D75AE8191A65D23CFE6A351732DE700C46A3432_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * _thisAdjusted = reinterpret_cast<OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = OwnershipChangeEvent_get_BytesCount_m5D75AE8191A65D23CFE6A351732DE700C46A3432_inline(_thisAdjusted, method);
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
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.RpcEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RpcEvent_get_BytesCount_mB7711BC3C2B8E2E3D80EC313E11B656298B033E5 (RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t RpcEvent_get_BytesCount_mB7711BC3C2B8E2E3D80EC313E11B656298B033E5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0 * _thisAdjusted = reinterpret_cast<RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = RpcEvent_get_BytesCount_mB7711BC3C2B8E2E3D80EC313E11B656298B033E5_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.String,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMetric__ctor_mAB1873EB8250CE509C05F2584E49B0B01278EF79 (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___sceneEventType1, String_t* ___sceneName2, int64_t ___bytesCount3, const RuntimeMethod* method)
{
	{
		// : this(connection, StringConversionUtility.ConvertToFixedString(sceneEventType), StringConversionUtility.ConvertToFixedString(sceneName), bytesCount)
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		String_t* L_1 = ___sceneEventType1;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_2;
		L_2 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___sceneName2;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_4;
		L_4 = StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499(L_3, /*hidden argument*/NULL);
		int64_t L_5 = ___bytesCount3;
		SceneEventMetric__ctor_m1B9123496401855ECE04B82BC82825D29D650742((SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB *)__this, L_0, L_2, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SceneEventMetric__ctor_mAB1873EB8250CE509C05F2584E49B0B01278EF79_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, String_t* ___sceneEventType1, String_t* ___sceneName2, int64_t ___bytesCount3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * _thisAdjusted = reinterpret_cast<SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB *>(__this + _offset);
	SceneEventMetric__ctor_mAB1873EB8250CE509C05F2584E49B0B01278EF79(_thisAdjusted, ___connection0, ___sceneEventType1, ___sceneName2, ___bytesCount3, method);
}
// System.Void Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Collections.FixedString64Bytes,Unity.Collections.FixedString64Bytes,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventMetric__ctor_m1B9123496401855ECE04B82BC82825D29D650742 (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___sceneEventType1, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___sceneName2, int64_t ___bytesCount3, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// SceneEventType = sceneEventType;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_1 = ___sceneEventType1;
		__this->set_U3CSceneEventTypeU3Ek__BackingField_1(L_1);
		// SceneName = sceneName;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_2 = ___sceneName2;
		__this->set_U3CSceneNameU3Ek__BackingField_2(L_2);
		// BytesCount = bytesCount;
		int64_t L_3 = ___bytesCount3;
		__this->set_U3CBytesCountU3Ek__BackingField_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SceneEventMetric__ctor_m1B9123496401855ECE04B82BC82825D29D650742_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___sceneEventType1, FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  ___sceneName2, int64_t ___bytesCount3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * _thisAdjusted = reinterpret_cast<SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB *>(__this + _offset);
	SceneEventMetric__ctor_m1B9123496401855ECE04B82BC82825D29D650742(_thisAdjusted, ___connection0, ___sceneEventType1, ___sceneName2, ___bytesCount3, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SceneEventMetric_get_BytesCount_mB58F0473D5216F08D71FCCE964B703250E9E0032 (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t SceneEventMetric_get_BytesCount_mB58F0473D5216F08D71FCCE964B703250E9E0032_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * _thisAdjusted = reinterpret_cast<SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = SceneEventMetric_get_BytesCount_mB58F0473D5216F08D71FCCE964B703250E9E0032_inline(_thisAdjusted, method);
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,Unity.Multiplayer.Tools.MetricTypes.LogLevel,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLogEvent__ctor_mC93CE12035A5D9E703F20D5EAAEE9F42014022A8 (ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, int32_t ___logLevel1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// LogLevel = logLevel;
		int32_t L_1 = ___logLevel1;
		__this->set_U3CLogLevelU3Ek__BackingField_1(L_1);
		// BytesCount = bytesCount;
		int64_t L_2 = ___bytesCount2;
		__this->set_U3CBytesCountU3Ek__BackingField_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ServerLogEvent__ctor_mC93CE12035A5D9E703F20D5EAAEE9F42014022A8_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, int32_t ___logLevel1, int64_t ___bytesCount2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * _thisAdjusted = reinterpret_cast<ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 *>(__this + _offset);
	ServerLogEvent__ctor_mC93CE12035A5D9E703F20D5EAAEE9F42014022A8(_thisAdjusted, ___connection0, ___logLevel1, ___bytesCount2, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ServerLogEvent_get_BytesCount_m929D7A3571C67DAFDB458157ACE18ABDD7E96D72 (ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t ServerLogEvent_get_BytesCount_m929D7A3571C67DAFDB458157ACE18ABDD7E96D72_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * _thisAdjusted = reinterpret_cast<ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ServerLogEvent_get_BytesCount_m929D7A3571C67DAFDB458157ACE18ABDD7E96D72_inline(_thisAdjusted, method);
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
// Unity.Collections.FixedString64Bytes Unity.Multiplayer.Tools.MetricTypes.StringConversionUtility::ConvertToFixedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  StringConversionUtility_ConvertToFixedString_m8806C6DD5488EEC80A5D3F0DDFDDBF9335F98499 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (value == null)
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_2;
		L_2 = FixedString64Bytes_op_Implicit_mBF6C9735F7C6560E3165856874C9397D27CADAE6(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// if (FixedString64Bytes.UTF8MaxLengthInBytes < value.Length)
		int32_t L_3;
		L_3 = FixedString64Bytes_get_UTF8MaxLengthInBytes_m01CAAC36023B77017B6624BD1B996455BEF188D9(/*hidden argument*/NULL);
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_005a;
		}
	}
	{
		// var fixedString = new FixedString64Bytes();
		il2cpp_codegen_initobj((&V_0), sizeof(FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 ));
		// {
		String_t* L_6 = ___value0;
		V_2 = L_6;
		// fixed (char* chars = value)
		String_t* L_7 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_7);
		Il2CppChar* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar* L_9 = V_1;
		int32_t L_10;
		L_10 = RuntimeHelpers_get_OffsetToStringData_mEB8E6EAEBAFAB7CD7F7A915B3081785AABB9FC42(/*hidden argument*/NULL);
		V_1 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)L_10));
	}

IL_0033:
	{
		// UTF8ArrayUnsafeUtility.Copy(fixedString.GetUnsafePtr(), out var copiedLength, FixedString64Bytes.UTF8MaxLengthInBytes, chars, value.Length);
		uint8_t* L_11;
		L_11 = FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_inline((FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = FixedString64Bytes_get_UTF8MaxLengthInBytes_m01CAAC36023B77017B6624BD1B996455BEF188D9(/*hidden argument*/NULL);
		Il2CppChar* L_13 = V_1;
		String_t* L_14 = ___value0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = UTF8ArrayUnsafeUtility_Copy_m9E6745760C827B15565DD1D24E58AC4570E0447F((uint8_t*)(uint8_t*)L_11, (int32_t*)(&V_3), L_12, (Il2CppChar*)(Il2CppChar*)L_13, L_15, /*hidden argument*/NULL);
		// fixedString.Length = copiedLength;
		int32_t L_17 = V_3;
		FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF((FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 *)(&V_0), L_17, /*hidden argument*/NULL);
		V_2 = (String_t*)NULL;
		// return fixedString;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_18 = V_0;
		return L_18;
	}

IL_005a:
	{
		// return value;
		String_t* L_19 = ___value0;
		FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005  L_20;
		L_20 = FixedString64Bytes_op_Implicit_mBF6C9735F7C6560E3165856874C9397D27CADAE6(L_19, /*hidden argument*/NULL);
		return L_20;
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
// System.Void Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::.ctor(Unity.Multiplayer.Tools.MetricTypes.ConnectionInfo,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageEvent__ctor_m1615AC8E726C6A2B200B28C994E83D7C77FFCF17 (UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, int64_t ___bytesCount1, const RuntimeMethod* method)
{
	{
		// Connection = connection;
		ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  L_0 = ___connection0;
		__this->set_U3CConnectionU3Ek__BackingField_0(L_0);
		// BytesCount = bytesCount;
		int64_t L_1 = ___bytesCount1;
		__this->set_U3CBytesCountU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnnamedMessageEvent__ctor_m1615AC8E726C6A2B200B28C994E83D7C77FFCF17_AdjustorThunk (RuntimeObject * __this, ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4  ___connection0, int64_t ___bytesCount1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * _thisAdjusted = reinterpret_cast<UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F *>(__this + _offset);
	UnnamedMessageEvent__ctor_m1615AC8E726C6A2B200B28C994E83D7C77FFCF17(_thisAdjusted, ___connection0, ___bytesCount1, method);
}
// System.Int64 Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent::get_BytesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnnamedMessageEvent_get_BytesCount_m2DB793B65C9DF0FCBBD3B7F4F46C60E2C0CD552D (UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t UnnamedMessageEvent_get_BytesCount_m2DB793B65C9DF0FCBBD3B7F4F46C60E2C0CD552D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * _thisAdjusted = reinterpret_cast<UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F *>(__this + _offset);
	int64_t _returnValue;
	_returnValue = UnnamedMessageEvent_get_BytesCount_m2DB793B65C9DF0FCBBD3B7F4F46C60E2C0CD552D_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionInfo__ctor_mA23CB5D1AD276E728AD95DFFACA50C4631EB80CB_inline (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, uint64_t ___id0, const RuntimeMethod* method)
{
	{
		// Id = id;
		uint64_t L_0 = ___id0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConnectionInfo_get_Id_m088F732765A2F3C2AEA51860A51287A8BDE2D48C_inline (ConnectionInfo_tE23D822AEAA7522F5E1AE1BDD7A9898F75C380D4 * __this, const RuntimeMethod* method)
{
	{
		// public ulong Id { get; }
		uint64_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DirectionalMetricInfo__ctor_m0F2AB236F8D99F062D5D2C8C9FAF230135468ED2_inline (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, int32_t ___directedMetricType0, const RuntimeMethod* method)
{
	{
		// DirectedMetricType = directedMetricType;
		int32_t L_0 = ___directedMetricType0;
		__this->set_U3CDirectedMetricTypeU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DirectionalMetricInfo_get_DirectedMetricType_mECDC69E1E200665D64439A70DE555A0BD56B0CF1_inline (DirectionalMetricInfo_t3E8D21430863806753A5940D12028B9EE13E93D5 * __this, const RuntimeMethod* method)
{
	{
		// internal DirectedMetricType DirectedMetricType { get; }
		int32_t L_0 = __this->get_U3CDirectedMetricTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NamedMessageEvent_get_BytesCount_mB759B57AEB733E97C76685CCD5A0306036A315F6_inline (NamedMessageEvent_t9C8E517E1300ECA38F43845E5D7292784023CC23 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NetworkMessageEvent_get_BytesCount_m1FFA0A656A500555E540BEE47CCE48187F57B58F_inline (NetworkMessageEvent_tE2FD193D1437C70B038D20BBA33B14667AAA0F7A * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t NetworkVariableEvent_get_BytesCount_mC671E8F041D8EC1D2F9C538A678CE1DFDDF00DED_inline (NetworkVariableEvent_t711671284F67F84F0FDF074161F1882076DAAC66 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ObjectDestroyedEvent_get_BytesCount_m0D85DFB30012B4BF2475878EF4D2B43B2F4E24B9_inline (ObjectDestroyedEvent_t06BBB28E021468BDB5D511C044B0987670E947C6 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ObjectSpawnedEvent_get_BytesCount_mBB3227417185EE1B41D7E523F32B8E53CE84A872_inline (ObjectSpawnedEvent_t2B88E974DCB3EB65A5893D9B70067A791A9946DE * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t OwnershipChangeEvent_get_BytesCount_m5D75AE8191A65D23CFE6A351732DE700C46A3432_inline (OwnershipChangeEvent_tD5406F2AE66A1E2585DD8AE0583EF8B02EBB5495 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t RpcEvent_get_BytesCount_mB7711BC3C2B8E2E3D80EC313E11B656298B033E5_inline (RpcEvent_t05020C6857FEDE50928F4973D377331333D978C0 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SceneEventMetric_get_BytesCount_mB58F0473D5216F08D71FCCE964B703250E9E0032_inline (SceneEventMetric_tEC45AE6441DDDE69BACEAD387ABC039CFC534FAB * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ServerLogEvent_get_BytesCount_m929D7A3571C67DAFDB458157ACE18ABDD7E96D72_inline (ServerLogEvent_t1D91C8F71041A39D1E2EAF44BAFD0039A6D4B8A9 * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_inline (FixedString64Bytes_t463D8E5BD5195A611BEC8CE9CB2640CB26EA3005 * __this, const RuntimeMethod* method)
{
	{
		// return (byte*) UnsafeUtility.AddressOf(ref bytes);
		FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72 * L_0 = __this->get_address_of_bytes_1();
		void* L_1;
		L_1 = il2cpp_codegen_unsafe_cast((FixedBytes62_tC77E73BB842294F4F9A4807C0857B8F332D52A72 *)L_0);
		return (uint8_t*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnnamedMessageEvent_get_BytesCount_m2DB793B65C9DF0FCBBD3B7F4F46C60E2C0CD552D_inline (UnnamedMessageEvent_t033C5C353A01399EC731E436B304D0CB57A63B2F * __this, const RuntimeMethod* method)
{
	{
		// public long BytesCount { get; }
		int64_t L_0 = __this->get_U3CBytesCountU3Ek__BackingField_1();
		return L_0;
	}
}
