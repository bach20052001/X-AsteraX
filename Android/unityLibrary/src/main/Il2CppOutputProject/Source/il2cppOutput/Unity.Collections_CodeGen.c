#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE_RuntimeMethod_var;
extern const RuntimeMethod* RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43 (void);
// 0x00000003 Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager::AllocateBlock(T&,System.Int32,System.Int32,System.Int32)
// 0x00000004 System.Void* Unity.Collections.AllocatorManager::Allocate(T&,System.Int32,System.Int32,System.Int32)
// 0x00000005 U* Unity.Collections.AllocatorManager::Allocate(T&,U,System.Int32)
// 0x00000006 System.Void Unity.Collections.AllocatorManager::FreeBlock(T&,Unity.Collections.AllocatorManager/Block&)
// 0x00000007 System.Void Unity.Collections.AllocatorManager::Free(T&,System.Void*,System.Int32,System.Int32,System.Int32)
// 0x00000008 System.Void Unity.Collections.AllocatorManager::Free(T&,U*,System.Int32)
// 0x00000009 System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
// 0x0000000A System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
extern void AllocatorManager_CheckDelegate_m2034F06B2464A4A27E2B24F536B2F2244CFDC603 (void);
// 0x0000000B System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
extern void AllocatorManager_UseDelegate_m502251BCD61C58A4C55C3B51DC6DBC56B2F86981 (void);
// 0x0000000C System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_allocate_block_mF37B0FD92BC1BF98C2A5C765E4F2AB9532300EE7 (void);
// 0x0000000D System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
extern void AllocatorManager_forward_mono_allocate_block_m490B419D75E5521086A86698341989DD47CBD8B6 (void);
// 0x0000000E Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_LegacyOf_m9F8300F5AEED87F3B9FCD28C81A52B53D58B697B (void);
// 0x0000000F System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_TryLegacy_m7086EEBC033BDCAB24CAC49D695180EF1BA46895 (void);
// 0x00000010 System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_Try_m67E1175F6B4340CF45D552DDC90CDFE0DA1912E3 (void);
// 0x00000011 System.Void Unity.Collections.AllocatorManager::.cctor()
extern void AllocatorManager__cctor_m704686DC15590B3752449701AC79493E5DBB4681 (void);
// 0x00000012 System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
extern void TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0 (void);
// 0x00000013 System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE (void);
// 0x00000014 System.IAsyncResult Unity.Collections.AllocatorManager/TryFunction::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2 (void);
// 0x00000015 System.Int32 Unity.Collections.AllocatorManager/TryFunction::EndInvoke(Unity.Collections.AllocatorManager/Block&,System.IAsyncResult)
extern void TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44 (void);
// 0x00000016 Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
extern void AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D (void);
// 0x00000017 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
extern void AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060 (void);
// 0x00000018 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
extern void AllocatorHandle_op_Implicit_m63D8E96033A00071E8FDEC80D6956ADBE627067C (void);
// 0x00000019 System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
extern void AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B (void);
// 0x0000001A System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148 (void);
// 0x0000001B Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
extern void AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E (void);
// 0x0000001C Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
extern void AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF (void);
// 0x0000001D System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
extern void AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1 (void);
// 0x0000001E System.Void Unity.Collections.AllocatorManager/Range::Dispose()
extern void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42 (void);
// 0x0000001F System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
extern void Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA (void);
// 0x00000020 System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
extern void Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907 (void);
// 0x00000021 System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
extern void Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF (void);
// 0x00000022 System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
extern void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730 (void);
// 0x00000023 System.Void Unity.Collections.AllocatorManager/Block::Dispose()
extern void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9 (void);
// 0x00000024 System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
extern void Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1 (void);
// 0x00000025 System.Int32 Unity.Collections.AllocatorManager/IAllocator::Try(Unity.Collections.AllocatorManager/Block&)
// 0x00000026 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/IAllocator::get_Handle()
// 0x00000027 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
extern void StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED (void);
// 0x00000028 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D (void);
// 0x00000029 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B (void);
// 0x0000002A System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
extern void StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678 (void);
// 0x0000002B System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B (void);
// 0x0000002C System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000097EU24PostfixBurstDelegate__ctor_m504885BF6ADB4F3C4D9DB901B586FC8D37E1C54F (void);
// 0x0000002D System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097EU24PostfixBurstDelegate_Invoke_m969960AA1D8972249606C39F798D25FFF8AB5254 (void);
// 0x0000002E System.IAsyncResult Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_0000097EU24PostfixBurstDelegate_BeginInvoke_m6A924CE6B3AD2751322C65624F09AA57468F05FE (void);
// 0x0000002F System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_0000097EU24PostfixBurstDelegate_EndInvoke_m4E30CD485D141D41E778A712E9D02DF66DCF10D1 (void);
// 0x00000030 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000097EU24BurstDirectCall_GetFunctionPointerDiscard_mD8691D1D53A6A06BFB4D9E3A5F2B5BF8EE7660A0 (void);
// 0x00000031 System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::GetFunctionPointer()
extern void Try_0000097EU24BurstDirectCall_GetFunctionPointer_m2546CD618A6D86194D9CBE25869613157B6DBB2B (void);
// 0x00000032 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Constructor()
extern void Try_0000097EU24BurstDirectCall_Constructor_mE1D2E07900495FF8C4A16B39CF1C0EAB8C45CADA (void);
// 0x00000033 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Initialize()
extern void Try_0000097EU24BurstDirectCall_Initialize_mB57EEBBC32A6F898A61A458C0AB74EBF4CD886B8 (void);
// 0x00000034 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::.cctor()
extern void Try_0000097EU24BurstDirectCall__cctor_m479435E8814DF388359ECEEAFEC6590A0B7AE17E (void);
// 0x00000035 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_0000097E$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000097EU24BurstDirectCall_Invoke_mA7D18CBCFD60012746EFF0B23C5D764BB4BA3ECE (void);
// 0x00000036 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
extern void SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7 (void);
// 0x00000037 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
extern void SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685 (void);
// 0x00000038 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3 (void);
// 0x00000039 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8 (void);
// 0x0000003A System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
extern void SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F (void);
// 0x0000003B System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5 (void);
// 0x0000003C System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000098CU24PostfixBurstDelegate__ctor_mD9A3FBE0D58FA939FD032F91578154AAC3270F4B (void);
// 0x0000003D System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098CU24PostfixBurstDelegate_Invoke_m6C830BBF3B6B6A60B4347B78481AAD5E2646E0FD (void);
// 0x0000003E System.IAsyncResult Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_0000098CU24PostfixBurstDelegate_BeginInvoke_m5B36C2A5F2543D5FABC92D5297E7606FCAF37E33 (void);
// 0x0000003F System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_0000098CU24PostfixBurstDelegate_EndInvoke_mD86258A382E78F3247E9141D40388FEFA7AA99D3 (void);
// 0x00000040 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000098CU24BurstDirectCall_GetFunctionPointerDiscard_m7990211BD6A841393FB9EE197366AD5C97893EAD (void);
// 0x00000041 System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::GetFunctionPointer()
extern void Try_0000098CU24BurstDirectCall_GetFunctionPointer_mE76FC80C8FC02D13CDFC609BAC8CD64B49B3AE42 (void);
// 0x00000042 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Constructor()
extern void Try_0000098CU24BurstDirectCall_Constructor_mF6DF3F0E8777FEA36094BA30C215844B4DE65D4D (void);
// 0x00000043 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Initialize()
extern void Try_0000098CU24BurstDirectCall_Initialize_mDE87456BDA3F8B020C696329BE0646E52A5DCC1A (void);
// 0x00000044 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::.cctor()
extern void Try_0000098CU24BurstDirectCall__cctor_mDDC7372BEEC4ABA3BC86F703C00A6288F92A0A5D (void);
// 0x00000045 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000098C$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000098CU24BurstDirectCall_Invoke_m6CB833252789663642F37FF43DE29817FC7CBBAE (void);
// 0x00000046 System.Int32 Unity.Collections.AllocatorManager/Array32768`1::get_Length()
// 0x00000047 T& Unity.Collections.AllocatorManager/Array32768`1::ElementAt(System.Int32)
// 0x00000048 System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
extern void TableEntry__cctor_m4E930B1CD3F5349C2EE468379393D62B7F40908F (void);
// 0x00000049 System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
extern void Managed__cctor_mDB5004E87DDAA2A1039890601B936875DECCD4EE (void);
// 0x0000004A System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
extern void CreatePropertyAttribute__ctor_mE5AD2035801359532F3ABA06B2E67CB664930A68 (void);
// 0x0000004B System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
extern void BurstCompatibleAttribute_set_GenericTypeArguments_mEEF019AFEFB1DCC2C6DC2E33C7BE33DECCD8DD5A (void);
// 0x0000004C System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
extern void BurstCompatibleAttribute__ctor_m5D7D5245014D5EF879BB02B137717AADED72CA4C (void);
// 0x0000004D System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
extern void NotBurstCompatibleAttribute__ctor_m1A03DFE74AB05DBB234C15F707ABD0AC4C91ED63 (void);
// 0x0000004E System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
extern void CollectionHelper_Hash_m8132774EA770BB87BF148F3B4900F64CCA47F576 (void);
// 0x0000004F System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void CollectionHelper_ShouldDeallocate_m41C16802B8B5846A4C78633AA05B2FF04D733234 (void);
// 0x00000050 System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
extern void CollectionHelper_AssumePositive_mD8785D4C9E69993993EA9982A5F6F2ADAFE5B110 (void);
// 0x00000051 System.Int32 Unity.Collections.FixedList::PaddingBytes()
// 0x00000052 System.Int32 Unity.Collections.FixedList32Bytes`1::get_Length()
// 0x00000053 System.Int32 Unity.Collections.FixedList32Bytes`1::get_LengthInBytes()
// 0x00000054 System.Byte* Unity.Collections.FixedList32Bytes`1::get_Buffer()
// 0x00000055 System.Int32 Unity.Collections.FixedList32Bytes`1::GetHashCode()
// 0x00000056 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000057 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000058 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000059 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000005A System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000005B System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000005C System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000005D System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000005E System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000005F System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000060 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(System.Object)
// 0x00000061 System.Collections.IEnumerator Unity.Collections.FixedList32Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList32Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000063 System.Int32 Unity.Collections.FixedList64Bytes`1::get_Length()
// 0x00000064 System.Int32 Unity.Collections.FixedList64Bytes`1::get_LengthInBytes()
// 0x00000065 System.Byte* Unity.Collections.FixedList64Bytes`1::get_Buffer()
// 0x00000066 System.Int32 Unity.Collections.FixedList64Bytes`1::GetHashCode()
// 0x00000067 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000068 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000069 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000006A System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000006B System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000006C System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000006D System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000006E System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000006F System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000070 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000071 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(System.Object)
// 0x00000072 System.Collections.IEnumerator Unity.Collections.FixedList64Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList64Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000074 System.Int32 Unity.Collections.FixedList128Bytes`1::get_Length()
// 0x00000075 System.Int32 Unity.Collections.FixedList128Bytes`1::get_LengthInBytes()
// 0x00000076 System.Byte* Unity.Collections.FixedList128Bytes`1::get_Buffer()
// 0x00000077 System.Int32 Unity.Collections.FixedList128Bytes`1::GetHashCode()
// 0x00000078 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000079 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000007A System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000007B System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000007C System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000007D System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000007E System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000007F System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000080 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000081 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000082 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(System.Object)
// 0x00000083 System.Collections.IEnumerator Unity.Collections.FixedList128Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000084 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList128Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000085 System.Int32 Unity.Collections.FixedList512Bytes`1::get_Length()
// 0x00000086 System.Int32 Unity.Collections.FixedList512Bytes`1::get_LengthInBytes()
// 0x00000087 System.Byte* Unity.Collections.FixedList512Bytes`1::get_Buffer()
// 0x00000088 System.Int32 Unity.Collections.FixedList512Bytes`1::GetHashCode()
// 0x00000089 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000008A System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000008B System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000008C System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000008D System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000008E System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000008F System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000090 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000091 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000092 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000093 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(System.Object)
// 0x00000094 System.Collections.IEnumerator Unity.Collections.FixedList512Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000095 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList512Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000096 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Length()
// 0x00000097 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_LengthInBytes()
// 0x00000098 System.Byte* Unity.Collections.FixedList4096Bytes`1::get_Buffer()
// 0x00000099 T Unity.Collections.FixedList4096Bytes`1::get_Item(System.Int32)
// 0x0000009A System.Void Unity.Collections.FixedList4096Bytes`1::set_Item(System.Int32,T)
// 0x0000009B System.Int32 Unity.Collections.FixedList4096Bytes`1::GetHashCode()
// 0x0000009C System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000009D System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x0000009E System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x0000009F System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000A0 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000A1 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000A2 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000A3 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000A4 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000A5 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000A6 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(System.Object)
// 0x000000A7 System.Collections.IEnumerator Unity.Collections.FixedList4096Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A8 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList4096Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A9 System.Byte* Unity.Collections.FixedString32Bytes::GetUnsafePtr()
extern void FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E (void);
// 0x000000AA System.Int32 Unity.Collections.FixedString32Bytes::get_Length()
extern void FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A (void);
// 0x000000AB System.Void Unity.Collections.FixedString32Bytes::set_Length(System.Int32)
extern void FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA (void);
// 0x000000AC System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(System.String)
extern void FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F (void);
// 0x000000AD System.Boolean Unity.Collections.FixedString32Bytes::Equals(System.String)
extern void FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF (void);
// 0x000000AE System.Void Unity.Collections.FixedString32Bytes::.ctor(System.String)
extern void FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198 (void);
// 0x000000AF System.Int32 Unity.Collections.FixedString32Bytes::Initialize(System.String)
extern void FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553 (void);
// 0x000000B0 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A (void);
// 0x000000B1 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString32Bytes_op_Equality_m6200431F2E9997239948F5B8B78A7E2554AC5E13 (void);
// 0x000000B2 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0 (void);
// 0x000000B3 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876 (void);
// 0x000000B4 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString32Bytes_op_Equality_m61DC33C9775D2D28B0FF8D93E3B2B64C740E16C0 (void);
// 0x000000B5 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3 (void);
// 0x000000B6 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259 (void);
// 0x000000B7 System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString32Bytes_op_Equality_mEB45958E4453F7D9DBFCE36CE75D9E1318B82BA9 (void);
// 0x000000B8 System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA (void);
// 0x000000B9 System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0 (void);
// 0x000000BA System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString32Bytes_op_Equality_mD70F3C08B16D60851ED1D3776DF62F5E2602E8D9 (void);
// 0x000000BB System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C (void);
// 0x000000BC System.Int32 Unity.Collections.FixedString32Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF (void);
// 0x000000BD System.Boolean Unity.Collections.FixedString32Bytes::op_Equality(Unity.Collections.FixedString32Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString32Bytes_op_Equality_mE406D2503A1EF5973A639009406BBD9308CEA257 (void);
// 0x000000BE System.Boolean Unity.Collections.FixedString32Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E (void);
// 0x000000BF System.String Unity.Collections.FixedString32Bytes::ToString()
extern void FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D (void);
// 0x000000C0 System.Int32 Unity.Collections.FixedString32Bytes::GetHashCode()
extern void FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201 (void);
// 0x000000C1 System.Boolean Unity.Collections.FixedString32Bytes::Equals(System.Object)
extern void FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD (void);
// 0x000000C2 System.Int32 Unity.Collections.FixedString64Bytes::get_UTF8MaxLengthInBytes()
extern void FixedString64Bytes_get_UTF8MaxLengthInBytes_m01CAAC36023B77017B6624BD1B996455BEF188D9 (void);
// 0x000000C3 System.Byte* Unity.Collections.FixedString64Bytes::GetUnsafePtr()
extern void FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823 (void);
// 0x000000C4 System.Int32 Unity.Collections.FixedString64Bytes::get_Length()
extern void FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338 (void);
// 0x000000C5 System.Void Unity.Collections.FixedString64Bytes::set_Length(System.Int32)
extern void FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF (void);
// 0x000000C6 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(System.String)
extern void FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672 (void);
// 0x000000C7 System.Boolean Unity.Collections.FixedString64Bytes::Equals(System.String)
extern void FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD (void);
// 0x000000C8 System.Void Unity.Collections.FixedString64Bytes::.ctor(System.String)
extern void FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA (void);
// 0x000000C9 System.Int32 Unity.Collections.FixedString64Bytes::Initialize(System.String)
extern void FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A (void);
// 0x000000CA System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC (void);
// 0x000000CB System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString64Bytes_op_Equality_m1B2D832CEB0DBB7566D52A4C8DDF53C1902517A8 (void);
// 0x000000CC System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF (void);
// 0x000000CD System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6 (void);
// 0x000000CE System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString64Bytes_op_Equality_mA767C41B026EB7DDB59C43F03EF975F10DC0A892 (void);
// 0x000000CF System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993 (void);
// 0x000000D0 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894 (void);
// 0x000000D1 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString64Bytes_op_Equality_m13C70774DE08BCFA0ACF37D2386A190C0E3557F5 (void);
// 0x000000D2 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639 (void);
// 0x000000D3 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38 (void);
// 0x000000D4 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString64Bytes_op_Equality_m93144C38EFDAA1ED706E641E4D14CCB1F2EDD813 (void);
// 0x000000D5 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3 (void);
// 0x000000D6 System.Int32 Unity.Collections.FixedString64Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12 (void);
// 0x000000D7 System.Boolean Unity.Collections.FixedString64Bytes::op_Equality(Unity.Collections.FixedString64Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString64Bytes_op_Equality_m724D1CB44E26B8E76994892C74FE2CEA509EAB45 (void);
// 0x000000D8 System.Boolean Unity.Collections.FixedString64Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E (void);
// 0x000000D9 Unity.Collections.FixedString64Bytes Unity.Collections.FixedString64Bytes::op_Implicit(System.String)
extern void FixedString64Bytes_op_Implicit_mBF6C9735F7C6560E3165856874C9397D27CADAE6 (void);
// 0x000000DA System.String Unity.Collections.FixedString64Bytes::ToString()
extern void FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0 (void);
// 0x000000DB System.Int32 Unity.Collections.FixedString64Bytes::GetHashCode()
extern void FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD (void);
// 0x000000DC System.Boolean Unity.Collections.FixedString64Bytes::Equals(System.Object)
extern void FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC (void);
// 0x000000DD System.Byte* Unity.Collections.FixedString128Bytes::GetUnsafePtr()
extern void FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0 (void);
// 0x000000DE System.Int32 Unity.Collections.FixedString128Bytes::get_Length()
extern void FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3 (void);
// 0x000000DF System.Void Unity.Collections.FixedString128Bytes::set_Length(System.Int32)
extern void FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D (void);
// 0x000000E0 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(System.String)
extern void FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92 (void);
// 0x000000E1 System.Boolean Unity.Collections.FixedString128Bytes::Equals(System.String)
extern void FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430 (void);
// 0x000000E2 System.Void Unity.Collections.FixedString128Bytes::.ctor(System.String)
extern void FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535 (void);
// 0x000000E3 System.Int32 Unity.Collections.FixedString128Bytes::Initialize(System.String)
extern void FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895 (void);
// 0x000000E4 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3 (void);
// 0x000000E5 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString128Bytes_op_Equality_m73ED3C0C7CD96065F26F47266276F92A34F4AE9D (void);
// 0x000000E6 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4 (void);
// 0x000000E7 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2 (void);
// 0x000000E8 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString128Bytes_op_Equality_mFC0E73921EA9A4143D2B2D370E497F8EF49A4994 (void);
// 0x000000E9 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC (void);
// 0x000000EA System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0 (void);
// 0x000000EB System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString128Bytes_op_Equality_m14F573ED8B3002748ADC82B8C5BE80901FA9CB40 (void);
// 0x000000EC System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B (void);
// 0x000000ED System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B (void);
// 0x000000EE System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString128Bytes_op_Equality_m4F53C965BD0FB43D9211231724EA9E6551464AD3 (void);
// 0x000000EF System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560 (void);
// 0x000000F0 System.Int32 Unity.Collections.FixedString128Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE (void);
// 0x000000F1 System.Boolean Unity.Collections.FixedString128Bytes::op_Equality(Unity.Collections.FixedString128Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString128Bytes_op_Equality_m02DDFD8E997A0767B14C0FA5C58BDCB9851D4C7C (void);
// 0x000000F2 System.Boolean Unity.Collections.FixedString128Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880 (void);
// 0x000000F3 Unity.Collections.FixedString128Bytes Unity.Collections.FixedString128Bytes::op_Implicit(System.String)
extern void FixedString128Bytes_op_Implicit_m08556F52E2183D6761C3CB1FF3B393212273625C (void);
// 0x000000F4 System.String Unity.Collections.FixedString128Bytes::ToString()
extern void FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5 (void);
// 0x000000F5 System.Int32 Unity.Collections.FixedString128Bytes::GetHashCode()
extern void FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27 (void);
// 0x000000F6 System.Boolean Unity.Collections.FixedString128Bytes::Equals(System.Object)
extern void FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35 (void);
// 0x000000F7 System.Byte* Unity.Collections.FixedString512Bytes::GetUnsafePtr()
extern void FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594 (void);
// 0x000000F8 System.Int32 Unity.Collections.FixedString512Bytes::get_Length()
extern void FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E (void);
// 0x000000F9 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(System.String)
extern void FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D (void);
// 0x000000FA System.Boolean Unity.Collections.FixedString512Bytes::Equals(System.String)
extern void FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729 (void);
// 0x000000FB System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941 (void);
// 0x000000FC System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString512Bytes_op_Equality_mD7B8261B2123227CC53926315A19F1D0C70FCE75 (void);
// 0x000000FD System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9 (void);
// 0x000000FE System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590 (void);
// 0x000000FF System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString512Bytes_op_Equality_m3F110E55B4DF9E79D1162713C09CA3C96F3FECE1 (void);
// 0x00000100 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D (void);
// 0x00000101 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6 (void);
// 0x00000102 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString512Bytes_op_Equality_mAD066BB74CB0845D4AE0BC9AD0A24863BF2B171A (void);
// 0x00000103 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF (void);
// 0x00000104 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD (void);
// 0x00000105 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString512Bytes_op_Equality_m8373EFB9966D8780E4EB1D11B551188F3881FC9F (void);
// 0x00000106 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B (void);
// 0x00000107 System.Int32 Unity.Collections.FixedString512Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28 (void);
// 0x00000108 System.Boolean Unity.Collections.FixedString512Bytes::op_Equality(Unity.Collections.FixedString512Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString512Bytes_op_Equality_mEB324D69F30C656C93C59BEDA632B646AFFBBF22 (void);
// 0x00000109 System.Boolean Unity.Collections.FixedString512Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741 (void);
// 0x0000010A System.String Unity.Collections.FixedString512Bytes::ToString()
extern void FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3 (void);
// 0x0000010B System.Int32 Unity.Collections.FixedString512Bytes::GetHashCode()
extern void FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B (void);
// 0x0000010C System.Boolean Unity.Collections.FixedString512Bytes::Equals(System.Object)
extern void FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0 (void);
// 0x0000010D System.Byte* Unity.Collections.FixedString4096Bytes::GetUnsafePtr()
extern void FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14 (void);
// 0x0000010E System.Int32 Unity.Collections.FixedString4096Bytes::get_Length()
extern void FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79 (void);
// 0x0000010F System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(System.String)
extern void FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423 (void);
// 0x00000110 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(System.String)
extern void FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1 (void);
// 0x00000111 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString32Bytes)
extern void FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250 (void);
// 0x00000112 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString32Bytes&)
extern void FixedString4096Bytes_op_Equality_mA9F8EA7FC1A1D69ABDCA8535D7307252D118AE69 (void);
// 0x00000113 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString32Bytes)
extern void FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6 (void);
// 0x00000114 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString64Bytes)
extern void FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E (void);
// 0x00000115 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString64Bytes&)
extern void FixedString4096Bytes_op_Equality_mB3620EEAB46F3A530F98220A701507D9FCE4D4AA (void);
// 0x00000116 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString64Bytes)
extern void FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56 (void);
// 0x00000117 System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString128Bytes)
extern void FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88 (void);
// 0x00000118 System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString128Bytes&)
extern void FixedString4096Bytes_op_Equality_mBF220EC75E215B9C9FF09562683B780ECCE0951C (void);
// 0x00000119 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString128Bytes)
extern void FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560 (void);
// 0x0000011A System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString512Bytes)
extern void FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20 (void);
// 0x0000011B System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString512Bytes&)
extern void FixedString4096Bytes_op_Equality_mCCBF5F7EEBCBC4E02CE6DF3A198BF62562DD7D51 (void);
// 0x0000011C System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString512Bytes)
extern void FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A (void);
// 0x0000011D System.Int32 Unity.Collections.FixedString4096Bytes::CompareTo(Unity.Collections.FixedString4096Bytes)
extern void FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E (void);
// 0x0000011E System.Boolean Unity.Collections.FixedString4096Bytes::op_Equality(Unity.Collections.FixedString4096Bytes&,Unity.Collections.FixedString4096Bytes&)
extern void FixedString4096Bytes_op_Equality_m133322B984EC76D175FABAA3BEFCE6B2B9F9A460 (void);
// 0x0000011F System.Boolean Unity.Collections.FixedString4096Bytes::Equals(Unity.Collections.FixedString4096Bytes)
extern void FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A (void);
// 0x00000120 System.String Unity.Collections.FixedString4096Bytes::ToString()
extern void FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1 (void);
// 0x00000121 System.Int32 Unity.Collections.FixedString4096Bytes::GetHashCode()
extern void FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F (void);
// 0x00000122 System.Boolean Unity.Collections.FixedString4096Bytes::Equals(System.Object)
extern void FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950 (void);
// 0x00000123 System.Int32 Unity.Collections.FixedStringMethods::CompareTo(T&,System.Byte*,System.Int32)
// 0x00000124 System.Int32 Unity.Collections.FixedStringMethods::CompareTo(T&,T2&)
// 0x00000125 System.String Unity.Collections.FixedStringMethods::ConvertToString(T&)
// 0x00000126 System.Int32 Unity.Collections.FixedStringMethods::ComputeHashCode(T&)
// 0x00000127 System.Byte* Unity.Collections.IUTF8Bytes::GetUnsafePtr()
// 0x00000128 System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Allocate_mE42F0479C571BE76773614A408329CFCB51FB7F5 (void);
// 0x00000129 System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Free_mE141FBBD8FC68C23121409BD2187EDDAB7849045 (void);
// 0x0000012A System.Void Unity.Collections.Memory/Unmanaged::Free(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000012B System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Array_IsCustom_m5553247492EBFB5ECECF39E326F1EC5C3F7FA892 (void);
// 0x0000012C System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_CustomResize_mD9B4173A8E9495BECF4359DE1B09E72428F2C521 (void);
// 0x0000012D System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_Resize_m7334DEAC65445477E1D278AC2DFEBD53C06C2C1B (void);
// 0x0000012E T* Unity.Collections.Memory/Unmanaged/Array::Resize(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x0000012F System.Int32 Unity.Collections.IIndexable`1::get_Length()
// 0x00000130 System.Void Unity.Collections.NativeList`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000131 System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x00000132 System.Void Unity.Collections.NativeList`1::Initialize(System.Int32,U&,System.Int32)
// 0x00000133 System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x00000134 T& Unity.Collections.NativeList`1::ElementAt(System.Int32)
// 0x00000135 System.Int32 Unity.Collections.NativeList`1::get_Length()
// 0x00000136 System.Void Unity.Collections.NativeList`1::Add(T&)
// 0x00000137 System.Void Unity.Collections.NativeList`1::Dispose()
// 0x00000138 System.Void Unity.Collections.NativeList`1::Clear()
// 0x00000139 Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::AsArray()
// 0x0000013A Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1::GetEnumerator()
// 0x0000013B System.Collections.IEnumerator Unity.Collections.NativeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000013C System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000013D System.Void Unity.Collections.Spinner::Lock()
extern void Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1 (void);
// 0x0000013E System.Void Unity.Collections.Spinner::Unlock()
extern void Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32 (void);
// 0x0000013F System.Void Unity.Collections.UnmanagedArray`1::Dispose()
// 0x00000140 T& Unity.Collections.UnmanagedArray`1::get_Item(System.Int32)
// 0x00000141 System.Void Unity.Collections.RewindableAllocator::Rewind()
extern void RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580 (void);
// 0x00000142 System.Void Unity.Collections.RewindableAllocator::Dispose()
extern void RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678 (void);
// 0x00000143 System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE (void);
// 0x00000144 System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066 (void);
// 0x00000145 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
extern void RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F (void);
// 0x00000146 System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE (void);
// 0x00000147 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
extern void MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3 (void);
// 0x00000148 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
extern void MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958 (void);
// 0x00000149 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
extern void MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF (void);
// 0x0000014A System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
extern void MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F (void);
// 0x0000014B System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
extern void MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB (void);
// 0x0000014C System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_000006E6U24PostfixBurstDelegate__ctor_m3A9C2FE7315BDB57F01C7F55536464D6435C0DAA (void);
// 0x0000014D System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E6U24PostfixBurstDelegate_Invoke_mCC226CA8779D0B0A5F66658C054D0BA7E85AD276 (void);
// 0x0000014E System.IAsyncResult Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_000006E6U24PostfixBurstDelegate_BeginInvoke_m2C74F27C8BFAB8F8DD07D265D6C5310814A267BC (void);
// 0x0000014F System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_000006E6U24PostfixBurstDelegate_EndInvoke_m9DED072776678A5D3E722C03DEB10D2BD6BDE8F2 (void);
// 0x00000150 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_000006E6U24BurstDirectCall_GetFunctionPointerDiscard_mF59A52BF122C719EE650360B525062190F516106 (void);
// 0x00000151 System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::GetFunctionPointer()
extern void Try_000006E6U24BurstDirectCall_GetFunctionPointer_mA0373C866292973811EED32DB5AE428A31A8A024 (void);
// 0x00000152 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Constructor()
extern void Try_000006E6U24BurstDirectCall_Constructor_m9D470E3EAFC0E6CF4245EE9FB5083AF4DBFB91AA (void);
// 0x00000153 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Initialize()
extern void Try_000006E6U24BurstDirectCall_Initialize_m23404AAD62059A0F41239213893888589E1D1A40 (void);
// 0x00000154 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::.cctor()
extern void Try_000006E6U24BurstDirectCall__cctor_mB712367FA3032AB3B376C47A35D12B792FA95958 (void);
// 0x00000155 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006E6$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006E6U24BurstDirectCall_Invoke_m37BDF8D71A4501D616FB95441C7896D37D7D2B40 (void);
// 0x00000156 Unity.Collections.CopyError Unity.Collections.UTF8ArrayUnsafeUtility::Copy(System.Byte*,System.Int32&,System.Int32,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_Copy_m9E6745760C827B15565DD1D24E58AC4570E0447F (void);
// 0x00000157 Unity.Collections.CopyError Unity.Collections.UTF8ArrayUnsafeUtility::Copy(System.Byte*,System.UInt16&,System.UInt16,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_Copy_mE6D70F84F8DD4CA85BB28BE67C3A1B78F35F15F5 (void);
// 0x00000158 System.Int32 Unity.Collections.UTF8ArrayUnsafeUtility::StrCmp(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void UTF8ArrayUnsafeUtility_StrCmp_m11275E7395DF91C0495CF4FE7DD92E144367D57C (void);
// 0x00000159 System.Boolean Unity.Collections.UTF8ArrayUnsafeUtility::EqualsUTF8Bytes(System.Byte*,System.Int32,System.Byte*,System.Int32)
extern void UTF8ArrayUnsafeUtility_EqualsUTF8Bytes_m8DE3FBB1E621F539B34F97E3A42B46D8D1972AC3 (void);
// 0x0000015A System.Int32 Unity.Collections.UTF8ArrayUnsafeUtility::StrCmp(System.Byte*,System.Int32,System.Char*,System.Int32)
extern void UTF8ArrayUnsafeUtility_StrCmp_m67313D8F6BE6FF69F652D81A747A1103BC20806A (void);
// 0x0000015B System.Void Unity.Collections.UTF8ArrayUnsafeUtility/Comparison::.ctor(Unity.Collections.Unicode/Rune,Unity.Collections.ConversionError,Unity.Collections.Unicode/Rune,Unity.Collections.ConversionError)
extern void Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B (void);
// 0x0000015C System.Boolean Unity.Collections.Unicode::IsValidCodePoint(System.Int32)
extern void Unicode_IsValidCodePoint_mA5ABC1748BA77655BB14B6CE5A08E3AD900BFC65 (void);
// 0x0000015D System.Boolean Unity.Collections.Unicode::NotTrailer(System.Byte)
extern void Unicode_NotTrailer_m6F4DC3FD2127DF0B548013689D074439002228CD (void);
// 0x0000015E Unity.Collections.Unicode/Rune Unity.Collections.Unicode::get_ReplacementCharacter()
extern void Unicode_get_ReplacementCharacter_m9377C03CB3368A7CE47382E145083FCD92E9E3A5 (void);
// 0x0000015F Unity.Collections.ConversionError Unity.Collections.Unicode::Utf8ToUcs(Unity.Collections.Unicode/Rune&,System.Byte*,System.Int32&,System.Int32)
extern void Unicode_Utf8ToUcs_m90897A41F2D2867E3D12450E2615ACABBE34394B (void);
// 0x00000160 System.Boolean Unity.Collections.Unicode::IsLeadingSurrogate(System.Char)
extern void Unicode_IsLeadingSurrogate_m5F30E149CB7CE4CA739DE71387498D76C84E00E0 (void);
// 0x00000161 System.Boolean Unity.Collections.Unicode::IsTrailingSurrogate(System.Char)
extern void Unicode_IsTrailingSurrogate_m9E7F542BB762B89A2D636D854DB1CD9D720F518C (void);
// 0x00000162 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf16ToUcs(Unity.Collections.Unicode/Rune&,System.Char*,System.Int32&,System.Int32)
extern void Unicode_Utf16ToUcs_mB25CC956B27F1516D8256B8240FFC7761D08971E (void);
// 0x00000163 Unity.Collections.ConversionError Unity.Collections.Unicode::UcsToUtf8(System.Byte*,System.Int32&,System.Int32,Unity.Collections.Unicode/Rune)
extern void Unicode_UcsToUtf8_m623EAE6C57FAFEA183FE149E76558A2C1955AF97 (void);
// 0x00000164 Unity.Collections.ConversionError Unity.Collections.Unicode::UcsToUtf16(System.Char*,System.Int32&,System.Int32,Unity.Collections.Unicode/Rune)
extern void Unicode_UcsToUtf16_m2E6DBE12EA2B10B420B4B262A7558A1936EB7737 (void);
// 0x00000165 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf16ToUtf8(System.Char*,System.Int32,System.Byte*,System.Int32&,System.Int32)
extern void Unicode_Utf16ToUtf8_m234085CD1F8B7797A462B166A05D7AA77CF2767E (void);
// 0x00000166 Unity.Collections.ConversionError Unity.Collections.Unicode::Utf8ToUtf16(System.Byte*,System.Int32,System.Char*,System.Int32&,System.Int32)
extern void Unicode_Utf8ToUtf16_m5B93532CBC12B1F14915903F61B15FD1531B7835 (void);
// 0x00000167 System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_Avx2HashLongInternalLoop_mCCB0DF801328F7B4907CCD550BA0E9C2A971E4AF (void);
// 0x00000168 System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_Avx2ScrambleAcc_mA6DBBF7E016635A901F80FC07FF1851618D6C3D5 (void);
// 0x00000169 System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B (void);
// 0x0000016A System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
extern void xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7 (void);
// 0x0000016B System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64Long_mEEEA1DD334FF23CABC570F75866691BF29CA0CD7 (void);
// 0x0000016C System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Long_m869E4682C4C9265FCFB625F57197A9B48B11675D (void);
// 0x0000016D Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
extern void xxHash3_ToUint4_m8417C90298E7430A8DCD51069984F8AE71C9FB56 (void);
// 0x0000016E System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
extern void xxHash3_Read64LE_m215CF04016BB327534223E32E2D4B451DDA1AACC (void);
// 0x0000016F System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
extern void xxHash3_Write64LE_mA44006BF77A500B0ADF6E3B2FC4CF238E7939E5D (void);
// 0x00000170 System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
extern void xxHash3_Mul32To64_m8E59492BD1C7B9C66F5F907D165C27255EFC5A8F (void);
// 0x00000171 System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
extern void xxHash3_XorShift64_m14CFB98B253542B96241F24A1BAA59BC660F10C2 (void);
// 0x00000172 System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
extern void xxHash3_Mul128Fold64_mE4D677D2E0DACC2DAB3E33B876928A61E4E66036 (void);
// 0x00000173 System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
extern void xxHash3_Avalanche_m8AB7E61594297A37DDBEB74555B9B6E937CD91B9 (void);
// 0x00000174 System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
extern void xxHash3_Mix2Acc_mCC33F3919D7C753AC9997592EA6D6F95D35D72C3 (void);
// 0x00000175 System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
extern void xxHash3_MergeAcc_mF5CA25B12DC5478CDA428FDDD8EDEA7B070B1CDD (void);
// 0x00000176 System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_DefaultHashLongInternalLoop_m25D46D5E62D5A75BF6B18D459552A4F639D7B070 (void);
// 0x00000177 System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9 (void);
// 0x00000178 System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
extern void xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253 (void);
// 0x00000179 System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_DefaultScrambleAcc_m5F9168BDE58B95E6C98B107B341D0D822AAAEC37 (void);
// 0x0000017A System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64LongU24BurstManaged_m9385EE12B31C1382FF320BCDBE32657220250568 (void);
// 0x0000017B System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128LongU24BurstManaged_mCC1E11085C5906FEAF9C4151C7A410701166563D (void);
// 0x0000017C System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash64Long_0000071DU24PostfixBurstDelegate__ctor_m7DA2D245ECF9A782F00AA87116B64F4E144D842F (void);
// 0x0000017D System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071DU24PostfixBurstDelegate_Invoke_mE01BFC9D2CDCB1C6F97E201DBEDE4767757408A2 (void);
// 0x0000017E System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.AsyncCallback,System.Object)
extern void Hash64Long_0000071DU24PostfixBurstDelegate_BeginInvoke_m77A130DF875DC1F1B6A3D21D16F9199C024D7E97 (void);
// 0x0000017F System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Hash64Long_0000071DU24PostfixBurstDelegate_EndInvoke_mD6875CE0209009C0EAC52A794D45CAC6408D3337 (void);
// 0x00000180 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointerDiscard_m6A03405863DC4AFDCBC09E139220DC3B6EA515C6 (void);
// 0x00000181 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::GetFunctionPointer()
extern void Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointer_mFD9CA7DBEC3ADCAE74C41FB22E552FC92C172FD5 (void);
// 0x00000182 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Constructor()
extern void Hash64Long_0000071DU24BurstDirectCall_Constructor_m76503A512483A33CB995C2773E75A092BD13EB2F (void);
// 0x00000183 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Initialize()
extern void Hash64Long_0000071DU24BurstDirectCall_Initialize_m4EE46AA07EF8464E7B3CC290109332C1951F73BC (void);
// 0x00000184 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::.cctor()
extern void Hash64Long_0000071DU24BurstDirectCall__cctor_m1A0D3B7739E8C9877FF86CA98AD606BB8D842F1A (void);
// 0x00000185 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_0000071D$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_0000071DU24BurstDirectCall_Invoke_mA96D34B7A49A3C2345DC6875BFAFFA3D77879FC0 (void);
// 0x00000186 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash128Long_00000724U24PostfixBurstDelegate__ctor_m1861109159B41D666E3343F5A458F22663FF3110 (void);
// 0x00000187 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000724U24PostfixBurstDelegate_Invoke_m528C62D77B2E68FD18929B3B6D1779F2C17BF094 (void);
// 0x00000188 System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&,System.AsyncCallback,System.Object)
extern void Hash128Long_00000724U24PostfixBurstDelegate_BeginInvoke_mEF0FA5FA9D1BC72FACF19E7A01407E881FA0120F (void);
// 0x00000189 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Hash128Long_00000724U24PostfixBurstDelegate_EndInvoke_m3A1E0747D245840108931ABFFE837DEDC0DE2832 (void);
// 0x0000018A System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash128Long_00000724U24BurstDirectCall_GetFunctionPointerDiscard_m9528BB69B33F4C1676911E162AAF8428289C29EB (void);
// 0x0000018B System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::GetFunctionPointer()
extern void Hash128Long_00000724U24BurstDirectCall_GetFunctionPointer_m21816823A676E88DD109ADE5A7962C66006EC3C8 (void);
// 0x0000018C System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Constructor()
extern void Hash128Long_00000724U24BurstDirectCall_Constructor_mEFB42E32FE9BE66B9BDC7FF41A0D9732E8E9A828 (void);
// 0x0000018D System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Initialize()
extern void Hash128Long_00000724U24BurstDirectCall_Initialize_mBFAA80181622924629CDABD5886E2C487A8F0894 (void);
// 0x0000018E System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::.cctor()
extern void Hash128Long_00000724U24BurstDirectCall__cctor_m953A33867FABDB7EB4DC652C1A34CD5BEB2396FB (void);
// 0x0000018F System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000724$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000724U24BurstDirectCall_Invoke_mA2105EFD1882E79E3059322C1AA5A869B74D1182 (void);
// 0x00000190 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Length()
// 0x00000191 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Capacity()
// 0x00000192 T& Unity.Collections.LowLevel.Unsafe.UnsafeList`1::ElementAt(System.Int32)
// 0x00000193 Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Create(System.Int32,U&,Unity.Collections.NativeArrayOptions)
// 0x00000194 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Destroy(Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>*)
// 0x00000195 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Dispose()
// 0x00000196 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Clear()
// 0x00000197 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x00000198 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Realloc(U&,System.Int32)
// 0x00000199 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(U&,System.Int32)
// 0x0000019A System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(System.Int32)
// 0x0000019B System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Add(T&)
// 0x0000019C System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000019D System.Collections.Generic.IEnumerator`1<T> Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000019E System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AddressOf(T&)
// 0x0000019F T& Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AsRef(T&)
// 0x000001A0 System.Void $BurstDirectCallInitializer::Initialize()
extern void U24BurstDirectCallInitializer_Initialize_mF922D4BC3A94E7362E69F29E806794E7BBB6972C (void);
static Il2CppMethodPointer s_methodPointers[416] = 
{
	EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D,
	IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AllocatorManager_CheckDelegate_m2034F06B2464A4A27E2B24F536B2F2244CFDC603,
	AllocatorManager_UseDelegate_m502251BCD61C58A4C55C3B51DC6DBC56B2F86981,
	AllocatorManager_allocate_block_mF37B0FD92BC1BF98C2A5C765E4F2AB9532300EE7,
	AllocatorManager_forward_mono_allocate_block_m490B419D75E5521086A86698341989DD47CBD8B6,
	AllocatorManager_LegacyOf_m9F8300F5AEED87F3B9FCD28C81A52B53D58B697B,
	AllocatorManager_TryLegacy_m7086EEBC033BDCAB24CAC49D695180EF1BA46895,
	AllocatorManager_Try_m67E1175F6B4340CF45D552DDC90CDFE0DA1912E3,
	AllocatorManager__cctor_m704686DC15590B3752449701AC79493E5DBB4681,
	TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0,
	TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE,
	TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2,
	TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44,
	AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D,
	AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060,
	AllocatorHandle_op_Implicit_m63D8E96033A00071E8FDEC80D6956ADBE627067C,
	AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B,
	AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148,
	AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E,
	AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF,
	AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1,
	Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42,
	Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA,
	Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907,
	Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF,
	Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730,
	Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9,
	Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1,
	NULL,
	NULL,
	StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED,
	StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D,
	StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B,
	StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678,
	StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B,
	Try_0000097EU24PostfixBurstDelegate__ctor_m504885BF6ADB4F3C4D9DB901B586FC8D37E1C54F,
	Try_0000097EU24PostfixBurstDelegate_Invoke_m969960AA1D8972249606C39F798D25FFF8AB5254,
	Try_0000097EU24PostfixBurstDelegate_BeginInvoke_m6A924CE6B3AD2751322C65624F09AA57468F05FE,
	Try_0000097EU24PostfixBurstDelegate_EndInvoke_m4E30CD485D141D41E778A712E9D02DF66DCF10D1,
	Try_0000097EU24BurstDirectCall_GetFunctionPointerDiscard_mD8691D1D53A6A06BFB4D9E3A5F2B5BF8EE7660A0,
	Try_0000097EU24BurstDirectCall_GetFunctionPointer_m2546CD618A6D86194D9CBE25869613157B6DBB2B,
	Try_0000097EU24BurstDirectCall_Constructor_mE1D2E07900495FF8C4A16B39CF1C0EAB8C45CADA,
	Try_0000097EU24BurstDirectCall_Initialize_mB57EEBBC32A6F898A61A458C0AB74EBF4CD886B8,
	Try_0000097EU24BurstDirectCall__cctor_m479435E8814DF388359ECEEAFEC6590A0B7AE17E,
	Try_0000097EU24BurstDirectCall_Invoke_mA7D18CBCFD60012746EFF0B23C5D764BB4BA3ECE,
	SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7,
	SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685,
	SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3,
	SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8,
	SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F,
	SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5,
	Try_0000098CU24PostfixBurstDelegate__ctor_mD9A3FBE0D58FA939FD032F91578154AAC3270F4B,
	Try_0000098CU24PostfixBurstDelegate_Invoke_m6C830BBF3B6B6A60B4347B78481AAD5E2646E0FD,
	Try_0000098CU24PostfixBurstDelegate_BeginInvoke_m5B36C2A5F2543D5FABC92D5297E7606FCAF37E33,
	Try_0000098CU24PostfixBurstDelegate_EndInvoke_mD86258A382E78F3247E9141D40388FEFA7AA99D3,
	Try_0000098CU24BurstDirectCall_GetFunctionPointerDiscard_m7990211BD6A841393FB9EE197366AD5C97893EAD,
	Try_0000098CU24BurstDirectCall_GetFunctionPointer_mE76FC80C8FC02D13CDFC609BAC8CD64B49B3AE42,
	Try_0000098CU24BurstDirectCall_Constructor_mF6DF3F0E8777FEA36094BA30C215844B4DE65D4D,
	Try_0000098CU24BurstDirectCall_Initialize_mDE87456BDA3F8B020C696329BE0646E52A5DCC1A,
	Try_0000098CU24BurstDirectCall__cctor_mDDC7372BEEC4ABA3BC86F703C00A6288F92A0A5D,
	Try_0000098CU24BurstDirectCall_Invoke_m6CB833252789663642F37FF43DE29817FC7CBBAE,
	NULL,
	NULL,
	TableEntry__cctor_m4E930B1CD3F5349C2EE468379393D62B7F40908F,
	Managed__cctor_mDB5004E87DDAA2A1039890601B936875DECCD4EE,
	CreatePropertyAttribute__ctor_mE5AD2035801359532F3ABA06B2E67CB664930A68,
	BurstCompatibleAttribute_set_GenericTypeArguments_mEEF019AFEFB1DCC2C6DC2E33C7BE33DECCD8DD5A,
	BurstCompatibleAttribute__ctor_m5D7D5245014D5EF879BB02B137717AADED72CA4C,
	NotBurstCompatibleAttribute__ctor_m1A03DFE74AB05DBB234C15F707ABD0AC4C91ED63,
	CollectionHelper_Hash_m8132774EA770BB87BF148F3B4900F64CCA47F576,
	CollectionHelper_ShouldDeallocate_m41C16802B8B5846A4C78633AA05B2FF04D733234,
	CollectionHelper_AssumePositive_mD8785D4C9E69993993EA9982A5F6F2ADAFE5B110,
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
	NULL,
	NULL,
	NULL,
	NULL,
	FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E,
	FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A,
	FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA,
	FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F,
	FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF,
	FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198,
	FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553,
	FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A,
	FixedString32Bytes_op_Equality_m6200431F2E9997239948F5B8B78A7E2554AC5E13,
	FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0,
	FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876,
	FixedString32Bytes_op_Equality_m61DC33C9775D2D28B0FF8D93E3B2B64C740E16C0,
	FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3,
	FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259,
	FixedString32Bytes_op_Equality_mEB45958E4453F7D9DBFCE36CE75D9E1318B82BA9,
	FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA,
	FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0,
	FixedString32Bytes_op_Equality_mD70F3C08B16D60851ED1D3776DF62F5E2602E8D9,
	FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C,
	FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF,
	FixedString32Bytes_op_Equality_mE406D2503A1EF5973A639009406BBD9308CEA257,
	FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E,
	FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D,
	FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201,
	FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD,
	FixedString64Bytes_get_UTF8MaxLengthInBytes_m01CAAC36023B77017B6624BD1B996455BEF188D9,
	FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823,
	FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338,
	FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF,
	FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672,
	FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD,
	FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA,
	FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A,
	FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC,
	FixedString64Bytes_op_Equality_m1B2D832CEB0DBB7566D52A4C8DDF53C1902517A8,
	FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF,
	FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6,
	FixedString64Bytes_op_Equality_mA767C41B026EB7DDB59C43F03EF975F10DC0A892,
	FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993,
	FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894,
	FixedString64Bytes_op_Equality_m13C70774DE08BCFA0ACF37D2386A190C0E3557F5,
	FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639,
	FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38,
	FixedString64Bytes_op_Equality_m93144C38EFDAA1ED706E641E4D14CCB1F2EDD813,
	FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3,
	FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12,
	FixedString64Bytes_op_Equality_m724D1CB44E26B8E76994892C74FE2CEA509EAB45,
	FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E,
	FixedString64Bytes_op_Implicit_mBF6C9735F7C6560E3165856874C9397D27CADAE6,
	FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0,
	FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD,
	FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC,
	FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0,
	FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3,
	FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D,
	FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92,
	FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430,
	FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535,
	FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895,
	FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3,
	FixedString128Bytes_op_Equality_m73ED3C0C7CD96065F26F47266276F92A34F4AE9D,
	FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4,
	FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2,
	FixedString128Bytes_op_Equality_mFC0E73921EA9A4143D2B2D370E497F8EF49A4994,
	FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC,
	FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0,
	FixedString128Bytes_op_Equality_m14F573ED8B3002748ADC82B8C5BE80901FA9CB40,
	FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B,
	FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B,
	FixedString128Bytes_op_Equality_m4F53C965BD0FB43D9211231724EA9E6551464AD3,
	FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560,
	FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE,
	FixedString128Bytes_op_Equality_m02DDFD8E997A0767B14C0FA5C58BDCB9851D4C7C,
	FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880,
	FixedString128Bytes_op_Implicit_m08556F52E2183D6761C3CB1FF3B393212273625C,
	FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5,
	FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27,
	FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35,
	FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594,
	FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E,
	FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D,
	FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729,
	FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941,
	FixedString512Bytes_op_Equality_mD7B8261B2123227CC53926315A19F1D0C70FCE75,
	FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9,
	FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590,
	FixedString512Bytes_op_Equality_m3F110E55B4DF9E79D1162713C09CA3C96F3FECE1,
	FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D,
	FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6,
	FixedString512Bytes_op_Equality_mAD066BB74CB0845D4AE0BC9AD0A24863BF2B171A,
	FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF,
	FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD,
	FixedString512Bytes_op_Equality_m8373EFB9966D8780E4EB1D11B551188F3881FC9F,
	FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B,
	FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28,
	FixedString512Bytes_op_Equality_mEB324D69F30C656C93C59BEDA632B646AFFBBF22,
	FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741,
	FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3,
	FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B,
	FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0,
	FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14,
	FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79,
	FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423,
	FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1,
	FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250,
	FixedString4096Bytes_op_Equality_mA9F8EA7FC1A1D69ABDCA8535D7307252D118AE69,
	FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6,
	FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E,
	FixedString4096Bytes_op_Equality_mB3620EEAB46F3A530F98220A701507D9FCE4D4AA,
	FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56,
	FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88,
	FixedString4096Bytes_op_Equality_mBF220EC75E215B9C9FF09562683B780ECCE0951C,
	FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560,
	FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20,
	FixedString4096Bytes_op_Equality_mCCBF5F7EEBCBC4E02CE6DF3A198BF62562DD7D51,
	FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A,
	FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E,
	FixedString4096Bytes_op_Equality_m133322B984EC76D175FABAA3BEFCE6B2B9F9A460,
	FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A,
	FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1,
	FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F,
	FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unmanaged_Allocate_mE42F0479C571BE76773614A408329CFCB51FB7F5,
	Unmanaged_Free_mE141FBBD8FC68C23121409BD2187EDDAB7849045,
	NULL,
	Array_IsCustom_m5553247492EBFB5ECECF39E326F1EC5C3F7FA892,
	Array_CustomResize_mD9B4173A8E9495BECF4359DE1B09E72428F2C521,
	Array_Resize_m7334DEAC65445477E1D278AC2DFEBD53C06C2C1B,
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
	NULL,
	Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1,
	Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32,
	NULL,
	NULL,
	RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580,
	RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678,
	RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE,
	RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066,
	RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F,
	RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE,
	MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3,
	MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958,
	MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF,
	MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F,
	MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB,
	Try_000006E6U24PostfixBurstDelegate__ctor_m3A9C2FE7315BDB57F01C7F55536464D6435C0DAA,
	Try_000006E6U24PostfixBurstDelegate_Invoke_mCC226CA8779D0B0A5F66658C054D0BA7E85AD276,
	Try_000006E6U24PostfixBurstDelegate_BeginInvoke_m2C74F27C8BFAB8F8DD07D265D6C5310814A267BC,
	Try_000006E6U24PostfixBurstDelegate_EndInvoke_m9DED072776678A5D3E722C03DEB10D2BD6BDE8F2,
	Try_000006E6U24BurstDirectCall_GetFunctionPointerDiscard_mF59A52BF122C719EE650360B525062190F516106,
	Try_000006E6U24BurstDirectCall_GetFunctionPointer_mA0373C866292973811EED32DB5AE428A31A8A024,
	Try_000006E6U24BurstDirectCall_Constructor_m9D470E3EAFC0E6CF4245EE9FB5083AF4DBFB91AA,
	Try_000006E6U24BurstDirectCall_Initialize_m23404AAD62059A0F41239213893888589E1D1A40,
	Try_000006E6U24BurstDirectCall__cctor_mB712367FA3032AB3B376C47A35D12B792FA95958,
	Try_000006E6U24BurstDirectCall_Invoke_m37BDF8D71A4501D616FB95441C7896D37D7D2B40,
	UTF8ArrayUnsafeUtility_Copy_m9E6745760C827B15565DD1D24E58AC4570E0447F,
	UTF8ArrayUnsafeUtility_Copy_mE6D70F84F8DD4CA85BB28BE67C3A1B78F35F15F5,
	UTF8ArrayUnsafeUtility_StrCmp_m11275E7395DF91C0495CF4FE7DD92E144367D57C,
	UTF8ArrayUnsafeUtility_EqualsUTF8Bytes_m8DE3FBB1E621F539B34F97E3A42B46D8D1972AC3,
	UTF8ArrayUnsafeUtility_StrCmp_m67313D8F6BE6FF69F652D81A747A1103BC20806A,
	Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B,
	Unicode_IsValidCodePoint_mA5ABC1748BA77655BB14B6CE5A08E3AD900BFC65,
	Unicode_NotTrailer_m6F4DC3FD2127DF0B548013689D074439002228CD,
	Unicode_get_ReplacementCharacter_m9377C03CB3368A7CE47382E145083FCD92E9E3A5,
	Unicode_Utf8ToUcs_m90897A41F2D2867E3D12450E2615ACABBE34394B,
	Unicode_IsLeadingSurrogate_m5F30E149CB7CE4CA739DE71387498D76C84E00E0,
	Unicode_IsTrailingSurrogate_m9E7F542BB762B89A2D636D854DB1CD9D720F518C,
	Unicode_Utf16ToUcs_mB25CC956B27F1516D8256B8240FFC7761D08971E,
	Unicode_UcsToUtf8_m623EAE6C57FAFEA183FE149E76558A2C1955AF97,
	Unicode_UcsToUtf16_m2E6DBE12EA2B10B420B4B262A7558A1936EB7737,
	Unicode_Utf16ToUtf8_m234085CD1F8B7797A462B166A05D7AA77CF2767E,
	Unicode_Utf8ToUtf16_m5B93532CBC12B1F14915903F61B15FD1531B7835,
	xxHash3_Avx2HashLongInternalLoop_mCCB0DF801328F7B4907CCD550BA0E9C2A971E4AF,
	xxHash3_Avx2ScrambleAcc_mA6DBBF7E016635A901F80FC07FF1851618D6C3D5,
	xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B,
	xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7,
	xxHash3_Hash64Long_mEEEA1DD334FF23CABC570F75866691BF29CA0CD7,
	xxHash3_Hash128Long_m869E4682C4C9265FCFB625F57197A9B48B11675D,
	xxHash3_ToUint4_m8417C90298E7430A8DCD51069984F8AE71C9FB56,
	xxHash3_Read64LE_m215CF04016BB327534223E32E2D4B451DDA1AACC,
	xxHash3_Write64LE_mA44006BF77A500B0ADF6E3B2FC4CF238E7939E5D,
	xxHash3_Mul32To64_m8E59492BD1C7B9C66F5F907D165C27255EFC5A8F,
	xxHash3_XorShift64_m14CFB98B253542B96241F24A1BAA59BC660F10C2,
	xxHash3_Mul128Fold64_mE4D677D2E0DACC2DAB3E33B876928A61E4E66036,
	xxHash3_Avalanche_m8AB7E61594297A37DDBEB74555B9B6E937CD91B9,
	xxHash3_Mix2Acc_mCC33F3919D7C753AC9997592EA6D6F95D35D72C3,
	xxHash3_MergeAcc_mF5CA25B12DC5478CDA428FDDD8EDEA7B070B1CDD,
	xxHash3_DefaultHashLongInternalLoop_m25D46D5E62D5A75BF6B18D459552A4F639D7B070,
	xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9,
	xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253,
	xxHash3_DefaultScrambleAcc_m5F9168BDE58B95E6C98B107B341D0D822AAAEC37,
	xxHash3_Hash64LongU24BurstManaged_m9385EE12B31C1382FF320BCDBE32657220250568,
	xxHash3_Hash128LongU24BurstManaged_mCC1E11085C5906FEAF9C4151C7A410701166563D,
	Hash64Long_0000071DU24PostfixBurstDelegate__ctor_m7DA2D245ECF9A782F00AA87116B64F4E144D842F,
	Hash64Long_0000071DU24PostfixBurstDelegate_Invoke_mE01BFC9D2CDCB1C6F97E201DBEDE4767757408A2,
	Hash64Long_0000071DU24PostfixBurstDelegate_BeginInvoke_m77A130DF875DC1F1B6A3D21D16F9199C024D7E97,
	Hash64Long_0000071DU24PostfixBurstDelegate_EndInvoke_mD6875CE0209009C0EAC52A794D45CAC6408D3337,
	Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointerDiscard_m6A03405863DC4AFDCBC09E139220DC3B6EA515C6,
	Hash64Long_0000071DU24BurstDirectCall_GetFunctionPointer_mFD9CA7DBEC3ADCAE74C41FB22E552FC92C172FD5,
	Hash64Long_0000071DU24BurstDirectCall_Constructor_m76503A512483A33CB995C2773E75A092BD13EB2F,
	Hash64Long_0000071DU24BurstDirectCall_Initialize_m4EE46AA07EF8464E7B3CC290109332C1951F73BC,
	Hash64Long_0000071DU24BurstDirectCall__cctor_m1A0D3B7739E8C9877FF86CA98AD606BB8D842F1A,
	Hash64Long_0000071DU24BurstDirectCall_Invoke_mA96D34B7A49A3C2345DC6875BFAFFA3D77879FC0,
	Hash128Long_00000724U24PostfixBurstDelegate__ctor_m1861109159B41D666E3343F5A458F22663FF3110,
	Hash128Long_00000724U24PostfixBurstDelegate_Invoke_m528C62D77B2E68FD18929B3B6D1779F2C17BF094,
	Hash128Long_00000724U24PostfixBurstDelegate_BeginInvoke_mEF0FA5FA9D1BC72FACF19E7A01407E881FA0120F,
	Hash128Long_00000724U24PostfixBurstDelegate_EndInvoke_m3A1E0747D245840108931ABFFE837DEDC0DE2832,
	Hash128Long_00000724U24BurstDirectCall_GetFunctionPointerDiscard_m9528BB69B33F4C1676911E162AAF8428289C29EB,
	Hash128Long_00000724U24BurstDirectCall_GetFunctionPointer_m21816823A676E88DD109ADE5A7962C66006EC3C8,
	Hash128Long_00000724U24BurstDirectCall_Constructor_mEFB42E32FE9BE66B9BDC7FF41A0D9732E8E9A828,
	Hash128Long_00000724U24BurstDirectCall_Initialize_mBFAA80181622924629CDABD5886E2C487A8F0894,
	Hash128Long_00000724U24BurstDirectCall__cctor_m953A33867FABDB7EB4DC652C1A34CD5BEB2396FB,
	Hash128Long_00000724U24BurstDirectCall_Invoke_mA2105EFD1882E79E3059322C1AA5A869B74D1182,
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
	NULL,
	NULL,
	U24BurstDirectCallInitializer_Initialize_mF922D4BC3A94E7362E69F29E806794E7BBB6972C,
};
extern void AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D_AdjustorThunk (void);
extern void AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060_AdjustorThunk (void);
extern void AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B_AdjustorThunk (void);
extern void AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148_AdjustorThunk (void);
extern void AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E_AdjustorThunk (void);
extern void AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF_AdjustorThunk (void);
extern void AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1_AdjustorThunk (void);
extern void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk (void);
extern void Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk (void);
extern void Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907_AdjustorThunk (void);
extern void Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk (void);
extern void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk (void);
extern void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk (void);
extern void Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk (void);
extern void StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED_AdjustorThunk (void);
extern void StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D_AdjustorThunk (void);
extern void StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678_AdjustorThunk (void);
extern void SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7_AdjustorThunk (void);
extern void SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685_AdjustorThunk (void);
extern void SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3_AdjustorThunk (void);
extern void SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F_AdjustorThunk (void);
extern void FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E_AdjustorThunk (void);
extern void FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A_AdjustorThunk (void);
extern void FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF_AdjustorThunk (void);
extern void FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198_AdjustorThunk (void);
extern void FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C_AdjustorThunk (void);
extern void FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E_AdjustorThunk (void);
extern void FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D_AdjustorThunk (void);
extern void FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201_AdjustorThunk (void);
extern void FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD_AdjustorThunk (void);
extern void FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_AdjustorThunk (void);
extern void FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338_AdjustorThunk (void);
extern void FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD_AdjustorThunk (void);
extern void FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA_AdjustorThunk (void);
extern void FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3_AdjustorThunk (void);
extern void FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E_AdjustorThunk (void);
extern void FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0_AdjustorThunk (void);
extern void FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD_AdjustorThunk (void);
extern void FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC_AdjustorThunk (void);
extern void FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0_AdjustorThunk (void);
extern void FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3_AdjustorThunk (void);
extern void FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430_AdjustorThunk (void);
extern void FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535_AdjustorThunk (void);
extern void FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560_AdjustorThunk (void);
extern void FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880_AdjustorThunk (void);
extern void FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5_AdjustorThunk (void);
extern void FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27_AdjustorThunk (void);
extern void FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35_AdjustorThunk (void);
extern void FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594_AdjustorThunk (void);
extern void FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B_AdjustorThunk (void);
extern void FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741_AdjustorThunk (void);
extern void FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3_AdjustorThunk (void);
extern void FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B_AdjustorThunk (void);
extern void FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0_AdjustorThunk (void);
extern void FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14_AdjustorThunk (void);
extern void FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A_AdjustorThunk (void);
extern void FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A_AdjustorThunk (void);
extern void FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1_AdjustorThunk (void);
extern void FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F_AdjustorThunk (void);
extern void FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950_AdjustorThunk (void);
extern void Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1_AdjustorThunk (void);
extern void Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32_AdjustorThunk (void);
extern void RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580_AdjustorThunk (void);
extern void RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678_AdjustorThunk (void);
extern void RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE_AdjustorThunk (void);
extern void RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F_AdjustorThunk (void);
extern void MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3_AdjustorThunk (void);
extern void MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958_AdjustorThunk (void);
extern void MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF_AdjustorThunk (void);
extern void MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F_AdjustorThunk (void);
extern void MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB_AdjustorThunk (void);
extern void Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[127] = 
{
	{ 0x06000016, AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D_AdjustorThunk },
	{ 0x06000017, AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060_AdjustorThunk },
	{ 0x06000019, AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B_AdjustorThunk },
	{ 0x0600001A, AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148_AdjustorThunk },
	{ 0x0600001B, AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E_AdjustorThunk },
	{ 0x0600001C, AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF_AdjustorThunk },
	{ 0x0600001D, AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1_AdjustorThunk },
	{ 0x0600001E, Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk },
	{ 0x0600001F, Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk },
	{ 0x06000020, Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907_AdjustorThunk },
	{ 0x06000021, Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk },
	{ 0x06000022, Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk },
	{ 0x06000023, Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk },
	{ 0x06000024, Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk },
	{ 0x06000027, StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED_AdjustorThunk },
	{ 0x06000028, StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D_AdjustorThunk },
	{ 0x0600002A, StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678_AdjustorThunk },
	{ 0x06000036, SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7_AdjustorThunk },
	{ 0x06000037, SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685_AdjustorThunk },
	{ 0x06000038, SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3_AdjustorThunk },
	{ 0x0600003A, SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F_AdjustorThunk },
	{ 0x060000A9, FixedString32Bytes_GetUnsafePtr_mC5ECAFEFC8B46192D40E7343B05E5E30E0CB7E3E_AdjustorThunk },
	{ 0x060000AA, FixedString32Bytes_get_Length_m5BC3BD52F24399E2AABD131E4301DD073308674A_AdjustorThunk },
	{ 0x060000AB, FixedString32Bytes_set_Length_m1BEEECA46CB0DE1A9D72828C079F776D9EA4D8BA_AdjustorThunk },
	{ 0x060000AC, FixedString32Bytes_CompareTo_mF178913F9D6CB2E3D6BD34ABF448683B3906781F_AdjustorThunk },
	{ 0x060000AD, FixedString32Bytes_Equals_m7BFD13BE12B020CF1CEF69C02F6DFEC001DF6FFF_AdjustorThunk },
	{ 0x060000AE, FixedString32Bytes__ctor_mC97DF326CAB40CB1B7105B805CD2A83C2484F198_AdjustorThunk },
	{ 0x060000AF, FixedString32Bytes_Initialize_m558E56F9BB87AC90C26907859B66357CE06E9553_AdjustorThunk },
	{ 0x060000B0, FixedString32Bytes_CompareTo_mF5834EEF9A96EFF22DD73C42B9D3CC4728DDE96A_AdjustorThunk },
	{ 0x060000B2, FixedString32Bytes_Equals_m35066BEF893D842074A1E6BD9A5C72D9DABADFF0_AdjustorThunk },
	{ 0x060000B3, FixedString32Bytes_CompareTo_m455F0190A3BFCDF60F4BA8CE2E41BAE0660BB876_AdjustorThunk },
	{ 0x060000B5, FixedString32Bytes_Equals_mA6D03C1A9E302D3427624450E4A209DD524238B3_AdjustorThunk },
	{ 0x060000B6, FixedString32Bytes_CompareTo_m4327D9074FF49D2CC5A9EC6E1BB51ACE90C34259_AdjustorThunk },
	{ 0x060000B8, FixedString32Bytes_Equals_m5148C5014FB447963C9452ECDFD2FAA4FCB2B0AA_AdjustorThunk },
	{ 0x060000B9, FixedString32Bytes_CompareTo_mDD8F261148EF43BC134C4404510225C05B4A51E0_AdjustorThunk },
	{ 0x060000BB, FixedString32Bytes_Equals_m50A3B4996CD9406FAAC0E60C1DED2CF1FC4D9F4C_AdjustorThunk },
	{ 0x060000BC, FixedString32Bytes_CompareTo_m208A5443E037D9890D1B7D020B618E17273364EF_AdjustorThunk },
	{ 0x060000BE, FixedString32Bytes_Equals_m765AAAE165047691F090847EC353D1E6ADB64F4E_AdjustorThunk },
	{ 0x060000BF, FixedString32Bytes_ToString_mBC0B0105B79BFA9D11EA0AF4DF33FD5C02AD8A3D_AdjustorThunk },
	{ 0x060000C0, FixedString32Bytes_GetHashCode_m78001276F05EDD1C4D13D517F4CE8F4C62FDD201_AdjustorThunk },
	{ 0x060000C1, FixedString32Bytes_Equals_m0E8DB505E1FAC97C090F8275D5815CFCD0DA22DD_AdjustorThunk },
	{ 0x060000C3, FixedString64Bytes_GetUnsafePtr_m6D16ED9500A89629B80BE451B7656A049A141823_AdjustorThunk },
	{ 0x060000C4, FixedString64Bytes_get_Length_mF9D0BE029ED4BEF8D744A3B0DDCBA458D7789338_AdjustorThunk },
	{ 0x060000C5, FixedString64Bytes_set_Length_m6FF424E0B4F134E47BF7CB6C29A3512A54920ADF_AdjustorThunk },
	{ 0x060000C6, FixedString64Bytes_CompareTo_m4E3A4A02BE8625C7848F0103EC51166F2EBF6672_AdjustorThunk },
	{ 0x060000C7, FixedString64Bytes_Equals_m63C23CD49D4CCF2F297770FCB0F13AC2C6148EBD_AdjustorThunk },
	{ 0x060000C8, FixedString64Bytes__ctor_m6F181B5C4D61586DD44AC5B320F75C47165C9ECA_AdjustorThunk },
	{ 0x060000C9, FixedString64Bytes_Initialize_mB9814E606566EF9010DCEA62AD3E9182EF9B4F2A_AdjustorThunk },
	{ 0x060000CA, FixedString64Bytes_CompareTo_m627CA84B4D8145636DDF330BFC7AB6B26C1B78EC_AdjustorThunk },
	{ 0x060000CC, FixedString64Bytes_Equals_m14019A582997CB9B1B4DFA3288DB5B21F203BCCF_AdjustorThunk },
	{ 0x060000CD, FixedString64Bytes_CompareTo_m21F888FA1CF25CA055F9A7288E65F10DBD6095B6_AdjustorThunk },
	{ 0x060000CF, FixedString64Bytes_Equals_mBFB24484A72865892C7BC60D9022817271B9C993_AdjustorThunk },
	{ 0x060000D0, FixedString64Bytes_CompareTo_m27BBDFF353C19DACD6EFC8886E98106FD46E8894_AdjustorThunk },
	{ 0x060000D2, FixedString64Bytes_Equals_m0D3B6AB690F57CF418004B220261538D1E83B639_AdjustorThunk },
	{ 0x060000D3, FixedString64Bytes_CompareTo_mB9951AA5E49E2C3B91301B4BDA0A3D287A356D38_AdjustorThunk },
	{ 0x060000D5, FixedString64Bytes_Equals_m54DA742A366E1BAFC35800BD2657FD440CFF60E3_AdjustorThunk },
	{ 0x060000D6, FixedString64Bytes_CompareTo_mE128DBB33E12D7B8276A50D86C34D2925CC75E12_AdjustorThunk },
	{ 0x060000D8, FixedString64Bytes_Equals_m62FB328FF94AE463BDB22F8C10ABE46E3C78898E_AdjustorThunk },
	{ 0x060000DA, FixedString64Bytes_ToString_m9A95BFBD08C8131BE663E28F78C59A387EC4D0C0_AdjustorThunk },
	{ 0x060000DB, FixedString64Bytes_GetHashCode_mEE673AF20F2034075FD973EDC8708AF0B0E240BD_AdjustorThunk },
	{ 0x060000DC, FixedString64Bytes_Equals_mE67C9A0F7A76E525EAA873AB7A87E9F5746DBCEC_AdjustorThunk },
	{ 0x060000DD, FixedString128Bytes_GetUnsafePtr_m5D5721F234226666FBC6AE692983EEC26E9679B0_AdjustorThunk },
	{ 0x060000DE, FixedString128Bytes_get_Length_mB44B48F688A770EBD1D89BFB9441839F05E99BE3_AdjustorThunk },
	{ 0x060000DF, FixedString128Bytes_set_Length_m6D6AE2962D72D9F45A1F1831786F16976DB60E1D_AdjustorThunk },
	{ 0x060000E0, FixedString128Bytes_CompareTo_mD467A78A95C3BB1F288BC3C9FBA690A9495BFC92_AdjustorThunk },
	{ 0x060000E1, FixedString128Bytes_Equals_m88DC61CFEDB1D2154A1A49342E897B06F9824430_AdjustorThunk },
	{ 0x060000E2, FixedString128Bytes__ctor_m0495F2C2FD757248BED63BD13E30F00B7D21A535_AdjustorThunk },
	{ 0x060000E3, FixedString128Bytes_Initialize_mF7DCBEC7A74580F93F2F391DE17D8C016776E895_AdjustorThunk },
	{ 0x060000E4, FixedString128Bytes_CompareTo_mBD0FA3114A4A8974E8EFD6B74C6CD555FE424ED3_AdjustorThunk },
	{ 0x060000E6, FixedString128Bytes_Equals_m0B98DDEBA4C0909B3A34B20211609D9CDDF17BD4_AdjustorThunk },
	{ 0x060000E7, FixedString128Bytes_CompareTo_m84D1B08ED43A55442CC0A964ACB16088C35AA4E2_AdjustorThunk },
	{ 0x060000E9, FixedString128Bytes_Equals_m028BAAF6672E3E8C18FCD2A36E554194AA03B8DC_AdjustorThunk },
	{ 0x060000EA, FixedString128Bytes_CompareTo_m66F5769D0ADC3B31E4980495D2691182C647A4A0_AdjustorThunk },
	{ 0x060000EC, FixedString128Bytes_Equals_m8B29A1963BA2994BEEB6DC6D2ACB5F85F4169C9B_AdjustorThunk },
	{ 0x060000ED, FixedString128Bytes_CompareTo_mC9A052A1DC9890BC9F8ED3997E0966141D134A6B_AdjustorThunk },
	{ 0x060000EF, FixedString128Bytes_Equals_mC127962FC9AD86D88A301110F1DE6891D73A7560_AdjustorThunk },
	{ 0x060000F0, FixedString128Bytes_CompareTo_m4690FA70BE7546784FE808AD836134A862EE30CE_AdjustorThunk },
	{ 0x060000F2, FixedString128Bytes_Equals_mF2F489FEBE264F851A46A49F34E552B93CBE1880_AdjustorThunk },
	{ 0x060000F4, FixedString128Bytes_ToString_m5D0F997EE98FE5E2FD75C67A9EB750EA2A19ECA5_AdjustorThunk },
	{ 0x060000F5, FixedString128Bytes_GetHashCode_m0DEBE20E271BB796331438C159F91B8834E3AE27_AdjustorThunk },
	{ 0x060000F6, FixedString128Bytes_Equals_mD1488F0494260130EA71B36F7F2235BBE6A4FC35_AdjustorThunk },
	{ 0x060000F7, FixedString512Bytes_GetUnsafePtr_mC217ABC503C34C4A9505D3BD8184772A6957B594_AdjustorThunk },
	{ 0x060000F8, FixedString512Bytes_get_Length_m70416F6C123F83B82723F71E137672507CEF8E1E_AdjustorThunk },
	{ 0x060000F9, FixedString512Bytes_CompareTo_m04A7A314B42FFA9602958449016B60F210C3210D_AdjustorThunk },
	{ 0x060000FA, FixedString512Bytes_Equals_m5D845EB2C13E708265F8ED7E0EA20B7CBC346729_AdjustorThunk },
	{ 0x060000FB, FixedString512Bytes_CompareTo_m95DEE74C2D0BD5B60B25F90D6BA58ACAEA7A1941_AdjustorThunk },
	{ 0x060000FD, FixedString512Bytes_Equals_m8F548901D593718D4E2535B84D89972D4E7E6BE9_AdjustorThunk },
	{ 0x060000FE, FixedString512Bytes_CompareTo_m0DEEF2359E2F1BF27604E76EEE2DADF257E94590_AdjustorThunk },
	{ 0x06000100, FixedString512Bytes_Equals_m11D223E18049AF2276EB099D85BE50952CC3624D_AdjustorThunk },
	{ 0x06000101, FixedString512Bytes_CompareTo_mA7CF8872D14E6E5F2E920D0FFEE3AA0C82F347E6_AdjustorThunk },
	{ 0x06000103, FixedString512Bytes_Equals_m8A06C174B2115E83EE8704B02D6ADC27B8AA09DF_AdjustorThunk },
	{ 0x06000104, FixedString512Bytes_CompareTo_m7428FB6E2AC9137F8A74FD0C5349F2FAE30B05CD_AdjustorThunk },
	{ 0x06000106, FixedString512Bytes_Equals_m13E5ED0B742535959E3FF065EB7463151156937B_AdjustorThunk },
	{ 0x06000107, FixedString512Bytes_CompareTo_m1CEBDC6E092AE5F41AC99A3555BE147B58F0AB28_AdjustorThunk },
	{ 0x06000109, FixedString512Bytes_Equals_mBA5CFEFCA3D9F726BDF9221B1E1B7C763186F741_AdjustorThunk },
	{ 0x0600010A, FixedString512Bytes_ToString_m3507A4F76408A6AEEC02A081227E82C724E788A3_AdjustorThunk },
	{ 0x0600010B, FixedString512Bytes_GetHashCode_m7471BCB4E4BFFB14334B86C731F8A7EEE8808C0B_AdjustorThunk },
	{ 0x0600010C, FixedString512Bytes_Equals_m56F0D84282853BE0F8EB9C384E8A6BC6DCF704B0_AdjustorThunk },
	{ 0x0600010D, FixedString4096Bytes_GetUnsafePtr_mD7BB5BC41DC121917EACD3208B09F7FBA47E9B14_AdjustorThunk },
	{ 0x0600010E, FixedString4096Bytes_get_Length_m4A6C18A7FF02C0B37966A4BF6A6C62FE5BD8AA79_AdjustorThunk },
	{ 0x0600010F, FixedString4096Bytes_CompareTo_m56A2BDBABB6EC15C2F06F310C77834ABB2E6E423_AdjustorThunk },
	{ 0x06000110, FixedString4096Bytes_Equals_mB8B543E697D5B9FE4A99B162080F424C070C67B1_AdjustorThunk },
	{ 0x06000111, FixedString4096Bytes_CompareTo_mDF19D52C9733F1C2AC4A5C6E57523640EB762250_AdjustorThunk },
	{ 0x06000113, FixedString4096Bytes_Equals_m50449CEA376EE67883DAA4A53B7A96657C0ABFC6_AdjustorThunk },
	{ 0x06000114, FixedString4096Bytes_CompareTo_m98DB83C45659AA502D3EF4C09CFDFCF7EE6AAD7E_AdjustorThunk },
	{ 0x06000116, FixedString4096Bytes_Equals_m7A31B6F07E4FF5391793F3A2E570D249FC28BC56_AdjustorThunk },
	{ 0x06000117, FixedString4096Bytes_CompareTo_m98AFBA57DD74ED48BB9DC93F0EA3D371AC232D88_AdjustorThunk },
	{ 0x06000119, FixedString4096Bytes_Equals_m6630735E9757A96BBACAB07882404AB206787560_AdjustorThunk },
	{ 0x0600011A, FixedString4096Bytes_CompareTo_mAEDF7046DC4122FE355E855D489BE117FE71AE20_AdjustorThunk },
	{ 0x0600011C, FixedString4096Bytes_Equals_mAA8DADE086517F8985B18B396F739A4119E3974A_AdjustorThunk },
	{ 0x0600011D, FixedString4096Bytes_CompareTo_mBD907BBDC18CA4598C6C284FD38A682FF3D9272E_AdjustorThunk },
	{ 0x0600011F, FixedString4096Bytes_Equals_m524817609813745DF01EAD53A606803206074B5A_AdjustorThunk },
	{ 0x06000120, FixedString4096Bytes_ToString_mE581B44C1FD3E2B439149546143D51020BF22EF1_AdjustorThunk },
	{ 0x06000121, FixedString4096Bytes_GetHashCode_m6017478A2A1E62CB9F8072684F3D27F71CA73D6F_AdjustorThunk },
	{ 0x06000122, FixedString4096Bytes_Equals_m901B3A08DF0A1847030310153BFA484A35000950_AdjustorThunk },
	{ 0x0600013D, Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1_AdjustorThunk },
	{ 0x0600013E, Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32_AdjustorThunk },
	{ 0x06000141, RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580_AdjustorThunk },
	{ 0x06000142, RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678_AdjustorThunk },
	{ 0x06000143, RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE_AdjustorThunk },
	{ 0x06000145, RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F_AdjustorThunk },
	{ 0x06000147, MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3_AdjustorThunk },
	{ 0x06000148, MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958_AdjustorThunk },
	{ 0x06000149, MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF_AdjustorThunk },
	{ 0x0600014A, MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F_AdjustorThunk },
	{ 0x0600014B, MemoryBlock_Contains_m93E7B8DC04D2AD9AFDD8589FFC7CD205031C90BB_AdjustorThunk },
	{ 0x0600015B, Comparison__ctor_m532F7CEEC53619D47639FF9483D6CE0F7282807B_AdjustorThunk },
};
static const int32_t s_InvokerIndices[416] = 
{
	4810,
	4810,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7149,
	7250,
	6840,
	6565,
	6861,
	6840,
	6840,
	7267,
	2292,
	1535,
	693,
	1502,
	4662,
	4810,
	7183,
	4711,
	2751,
	4836,
	4711,
	4810,
	4810,
	4712,
	4712,
	4711,
	3918,
	4810,
	4711,
	2751,
	4836,
	4836,
	2751,
	6200,
	4810,
	6200,
	2292,
	1535,
	693,
	2812,
	7149,
	7227,
	7267,
	7267,
	7267,
	6200,
	4836,
	4711,
	2751,
	6200,
	4810,
	6200,
	2292,
	1535,
	693,
	2812,
	7149,
	7227,
	7267,
	7267,
	7267,
	6200,
	-1,
	-1,
	7267,
	7267,
	4810,
	3945,
	4810,
	4810,
	6185,
	7037,
	6850,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4662,
	4711,
	3918,
	2812,
	3421,
	3945,
	2812,
	2781,
	6338,
	3382,
	2784,
	6338,
	3385,
	2780,
	6338,
	3381,
	2783,
	6338,
	3384,
	2782,
	6338,
	3383,
	4739,
	4711,
	3421,
	7225,
	4662,
	4711,
	3918,
	2812,
	3421,
	3945,
	2812,
	2781,
	6338,
	3382,
	2784,
	6338,
	3385,
	2780,
	6338,
	3381,
	2783,
	6338,
	3384,
	2782,
	6338,
	3383,
	6823,
	4739,
	4711,
	3421,
	4662,
	4711,
	3918,
	2812,
	3421,
	3945,
	2812,
	2781,
	6338,
	3382,
	2784,
	6338,
	3385,
	2780,
	6338,
	3381,
	2783,
	6338,
	3384,
	2782,
	6338,
	3383,
	6822,
	4739,
	4711,
	3421,
	4662,
	4711,
	2812,
	3421,
	2781,
	6338,
	3382,
	2784,
	6338,
	3385,
	2780,
	6338,
	3381,
	2783,
	6338,
	3384,
	2782,
	6338,
	3383,
	4739,
	4711,
	3421,
	4662,
	4711,
	2812,
	3421,
	2781,
	6338,
	3382,
	2784,
	6338,
	3385,
	2780,
	6338,
	3381,
	2783,
	6338,
	3384,
	2782,
	6338,
	3383,
	4739,
	4711,
	3421,
	-1,
	-1,
	-1,
	-1,
	4662,
	5714,
	6573,
	-1,
	7037,
	5009,
	5009,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4810,
	4810,
	-1,
	-1,
	4810,
	4810,
	2751,
	6200,
	4836,
	6200,
	3919,
	4810,
	4810,
	2751,
	3398,
	2292,
	1535,
	693,
	2812,
	7149,
	7227,
	7267,
	7267,
	7267,
	6200,
	5112,
	5111,
	5365,
	5551,
	5365,
	992,
	7020,
	7026,
	7289,
	5363,
	7019,
	7019,
	5363,
	5364,
	5364,
	5114,
	5114,
	5068,
	6565,
	5067,
	5607,
	5459,
	5309,
	6648,
	6862,
	6568,
	6221,
	6222,
	6223,
	6870,
	5785,
	5779,
	5068,
	5067,
	5306,
	6565,
	5459,
	5309,
	2292,
	649,
	179,
	2951,
	7149,
	7227,
	7267,
	7267,
	7267,
	5459,
	2292,
	377,
	114,
	3945,
	7149,
	7227,
	7267,
	7267,
	7267,
	5309,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7267,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x06000029, 32,  (void**)&StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var, 0 },
	{ 0x0600002B, 33,  (void**)&StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var, 0 },
	{ 0x06000039, 30,  (void**)&SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var, 0 },
	{ 0x0600003B, 31,  (void**)&SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var, 0 },
	{ 0x06000144, 17,  (void**)&RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066_RuntimeMethod_var, 0 },
	{ 0x06000146, 18,  (void**)&RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[29] = 
{
	{ 0x02000014, { 11, 2 } },
	{ 0x0200001D, { 14, 25 } },
	{ 0x0200001F, { 39, 25 } },
	{ 0x02000021, { 64, 25 } },
	{ 0x02000023, { 89, 25 } },
	{ 0x02000025, { 114, 27 } },
	{ 0x02000039, { 150, 12 } },
	{ 0x0200003C, { 164, 2 } },
	{ 0x0200004C, { 166, 11 } },
	{ 0x06000003, { 0, 1 } },
	{ 0x06000004, { 1, 1 } },
	{ 0x06000005, { 2, 3 } },
	{ 0x06000006, { 5, 1 } },
	{ 0x06000007, { 6, 1 } },
	{ 0x06000008, { 7, 3 } },
	{ 0x06000009, { 10, 1 } },
	{ 0x06000051, { 13, 1 } },
	{ 0x06000123, { 141, 1 } },
	{ 0x06000124, { 142, 3 } },
	{ 0x06000125, { 145, 1 } },
	{ 0x06000126, { 146, 1 } },
	{ 0x0600012A, { 147, 1 } },
	{ 0x0600012E, { 148, 2 } },
	{ 0x06000132, { 162, 2 } },
	{ 0x06000193, { 177, 3 } },
	{ 0x06000198, { 180, 2 } },
	{ 0x06000199, { 182, 1 } },
	{ 0x0600019E, { 183, 1 } },
	{ 0x0600019F, { 184, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[185] = 
{
	{ (Il2CppRGCTXDataType)2, 8 },
	{ (Il2CppRGCTXDataType)3, 30282 },
	{ (Il2CppRGCTXDataType)3, 36113 },
	{ (Il2CppRGCTXDataType)3, 35993 },
	{ (Il2CppRGCTXDataType)3, 30280 },
	{ (Il2CppRGCTXDataType)2, 6 },
	{ (Il2CppRGCTXDataType)3, 30302 },
	{ (Il2CppRGCTXDataType)3, 36112 },
	{ (Il2CppRGCTXDataType)3, 35992 },
	{ (Il2CppRGCTXDataType)3, 30300 },
	{ (Il2CppRGCTXDataType)3, 30293 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)3, 36038 },
	{ (Il2CppRGCTXDataType)3, 36093 },
	{ (Il2CppRGCTXDataType)3, 11772 },
	{ (Il2CppRGCTXDataType)3, 36105 },
	{ (Il2CppRGCTXDataType)3, 34755 },
	{ (Il2CppRGCTXDataType)3, 11771 },
	{ (Il2CppRGCTXDataType)3, 11773 },
	{ (Il2CppRGCTXDataType)2, 670 },
	{ (Il2CppRGCTXDataType)3, 11762 },
	{ (Il2CppRGCTXDataType)3, 11865 },
	{ (Il2CppRGCTXDataType)3, 11765 },
	{ (Il2CppRGCTXDataType)3, 11739 },
	{ (Il2CppRGCTXDataType)3, 11761 },
	{ (Il2CppRGCTXDataType)3, 11831 },
	{ (Il2CppRGCTXDataType)3, 11764 },
	{ (Il2CppRGCTXDataType)3, 11795 },
	{ (Il2CppRGCTXDataType)3, 11763 },
	{ (Il2CppRGCTXDataType)2, 2701 },
	{ (Il2CppRGCTXDataType)3, 11767 },
	{ (Il2CppRGCTXDataType)2, 2717 },
	{ (Il2CppRGCTXDataType)3, 11770 },
	{ (Il2CppRGCTXDataType)2, 2696 },
	{ (Il2CppRGCTXDataType)3, 11766 },
	{ (Il2CppRGCTXDataType)2, 2712 },
	{ (Il2CppRGCTXDataType)3, 11769 },
	{ (Il2CppRGCTXDataType)2, 2706 },
	{ (Il2CppRGCTXDataType)3, 11768 },
	{ (Il2CppRGCTXDataType)3, 11879 },
	{ (Il2CppRGCTXDataType)3, 36108 },
	{ (Il2CppRGCTXDataType)3, 34758 },
	{ (Il2CppRGCTXDataType)3, 11878 },
	{ (Il2CppRGCTXDataType)3, 11880 },
	{ (Il2CppRGCTXDataType)3, 11776 },
	{ (Il2CppRGCTXDataType)2, 673 },
	{ (Il2CppRGCTXDataType)3, 11869 },
	{ (Il2CppRGCTXDataType)3, 11872 },
	{ (Il2CppRGCTXDataType)3, 11742 },
	{ (Il2CppRGCTXDataType)3, 11868 },
	{ (Il2CppRGCTXDataType)3, 11846 },
	{ (Il2CppRGCTXDataType)3, 11871 },
	{ (Il2CppRGCTXDataType)3, 11810 },
	{ (Il2CppRGCTXDataType)3, 11870 },
	{ (Il2CppRGCTXDataType)2, 2704 },
	{ (Il2CppRGCTXDataType)3, 11874 },
	{ (Il2CppRGCTXDataType)2, 2720 },
	{ (Il2CppRGCTXDataType)3, 11877 },
	{ (Il2CppRGCTXDataType)2, 2699 },
	{ (Il2CppRGCTXDataType)3, 11873 },
	{ (Il2CppRGCTXDataType)2, 2715 },
	{ (Il2CppRGCTXDataType)3, 11876 },
	{ (Il2CppRGCTXDataType)2, 2709 },
	{ (Il2CppRGCTXDataType)3, 11875 },
	{ (Il2CppRGCTXDataType)3, 11737 },
	{ (Il2CppRGCTXDataType)3, 36104 },
	{ (Il2CppRGCTXDataType)3, 34754 },
	{ (Il2CppRGCTXDataType)3, 11736 },
	{ (Il2CppRGCTXDataType)3, 11738 },
	{ (Il2CppRGCTXDataType)3, 11760 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)3, 11727 },
	{ (Il2CppRGCTXDataType)3, 11864 },
	{ (Il2CppRGCTXDataType)3, 11730 },
	{ (Il2CppRGCTXDataType)3, 11726 },
	{ (Il2CppRGCTXDataType)3, 11830 },
	{ (Il2CppRGCTXDataType)3, 11729 },
	{ (Il2CppRGCTXDataType)3, 11794 },
	{ (Il2CppRGCTXDataType)3, 11728 },
	{ (Il2CppRGCTXDataType)2, 2700 },
	{ (Il2CppRGCTXDataType)3, 11732 },
	{ (Il2CppRGCTXDataType)2, 2716 },
	{ (Il2CppRGCTXDataType)3, 11735 },
	{ (Il2CppRGCTXDataType)2, 2695 },
	{ (Il2CppRGCTXDataType)3, 11731 },
	{ (Il2CppRGCTXDataType)2, 2711 },
	{ (Il2CppRGCTXDataType)3, 11734 },
	{ (Il2CppRGCTXDataType)2, 2705 },
	{ (Il2CppRGCTXDataType)3, 11733 },
	{ (Il2CppRGCTXDataType)3, 11844 },
	{ (Il2CppRGCTXDataType)3, 36107 },
	{ (Il2CppRGCTXDataType)3, 34757 },
	{ (Il2CppRGCTXDataType)3, 11843 },
	{ (Il2CppRGCTXDataType)3, 11845 },
	{ (Il2CppRGCTXDataType)3, 11775 },
	{ (Il2CppRGCTXDataType)2, 672 },
	{ (Il2CppRGCTXDataType)3, 11834 },
	{ (Il2CppRGCTXDataType)3, 11867 },
	{ (Il2CppRGCTXDataType)3, 11837 },
	{ (Il2CppRGCTXDataType)3, 11741 },
	{ (Il2CppRGCTXDataType)3, 11833 },
	{ (Il2CppRGCTXDataType)3, 11836 },
	{ (Il2CppRGCTXDataType)3, 11809 },
	{ (Il2CppRGCTXDataType)3, 11835 },
	{ (Il2CppRGCTXDataType)2, 2703 },
	{ (Il2CppRGCTXDataType)3, 11839 },
	{ (Il2CppRGCTXDataType)2, 2719 },
	{ (Il2CppRGCTXDataType)3, 11842 },
	{ (Il2CppRGCTXDataType)2, 2698 },
	{ (Il2CppRGCTXDataType)3, 11838 },
	{ (Il2CppRGCTXDataType)2, 2714 },
	{ (Il2CppRGCTXDataType)3, 11841 },
	{ (Il2CppRGCTXDataType)2, 2708 },
	{ (Il2CppRGCTXDataType)3, 11840 },
	{ (Il2CppRGCTXDataType)3, 11807 },
	{ (Il2CppRGCTXDataType)3, 36106 },
	{ (Il2CppRGCTXDataType)3, 34756 },
	{ (Il2CppRGCTXDataType)3, 11806 },
	{ (Il2CppRGCTXDataType)3, 36045 },
	{ (Il2CppRGCTXDataType)3, 36202 },
	{ (Il2CppRGCTXDataType)3, 11808 },
	{ (Il2CppRGCTXDataType)3, 11774 },
	{ (Il2CppRGCTXDataType)2, 671 },
	{ (Il2CppRGCTXDataType)3, 11797 },
	{ (Il2CppRGCTXDataType)3, 11866 },
	{ (Il2CppRGCTXDataType)3, 11800 },
	{ (Il2CppRGCTXDataType)3, 11740 },
	{ (Il2CppRGCTXDataType)3, 11796 },
	{ (Il2CppRGCTXDataType)3, 11832 },
	{ (Il2CppRGCTXDataType)3, 11799 },
	{ (Il2CppRGCTXDataType)3, 11798 },
	{ (Il2CppRGCTXDataType)2, 2702 },
	{ (Il2CppRGCTXDataType)3, 11802 },
	{ (Il2CppRGCTXDataType)2, 2718 },
	{ (Il2CppRGCTXDataType)3, 11805 },
	{ (Il2CppRGCTXDataType)2, 2697 },
	{ (Il2CppRGCTXDataType)3, 11801 },
	{ (Il2CppRGCTXDataType)2, 2713 },
	{ (Il2CppRGCTXDataType)3, 11804 },
	{ (Il2CppRGCTXDataType)2, 2707 },
	{ (Il2CppRGCTXDataType)3, 11803 },
	{ (Il2CppRGCTXDataType)2, 227 },
	{ (Il2CppRGCTXDataType)3, 36250 },
	{ (Il2CppRGCTXDataType)2, 1030 },
	{ (Il2CppRGCTXDataType)3, 34785 },
	{ (Il2CppRGCTXDataType)2, 229 },
	{ (Il2CppRGCTXDataType)2, 228 },
	{ (Il2CppRGCTXDataType)3, 36458 },
	{ (Il2CppRGCTXDataType)3, 36103 },
	{ (Il2CppRGCTXDataType)3, 35989 },
	{ (Il2CppRGCTXDataType)3, 22074 },
	{ (Il2CppRGCTXDataType)2, 5659 },
	{ (Il2CppRGCTXDataType)3, 22073 },
	{ (Il2CppRGCTXDataType)3, 29193 },
	{ (Il2CppRGCTXDataType)3, 29194 },
	{ (Il2CppRGCTXDataType)3, 29190 },
	{ (Il2CppRGCTXDataType)3, 29192 },
	{ (Il2CppRGCTXDataType)3, 29191 },
	{ (Il2CppRGCTXDataType)3, 35329 },
	{ (Il2CppRGCTXDataType)3, 22075 },
	{ (Il2CppRGCTXDataType)2, 2517 },
	{ (Il2CppRGCTXDataType)3, 8590 },
	{ (Il2CppRGCTXDataType)3, 29189 },
	{ (Il2CppRGCTXDataType)2, 334 },
	{ (Il2CppRGCTXDataType)3, 36390 },
	{ (Il2CppRGCTXDataType)2, 837 },
	{ (Il2CppRGCTXDataType)2, 838 },
	{ (Il2CppRGCTXDataType)2, 5660 },
	{ (Il2CppRGCTXDataType)3, 29201 },
	{ (Il2CppRGCTXDataType)3, 29198 },
	{ (Il2CppRGCTXDataType)3, 30285 },
	{ (Il2CppRGCTXDataType)3, 30284 },
	{ (Il2CppRGCTXDataType)3, 29200 },
	{ (Il2CppRGCTXDataType)3, 35991 },
	{ (Il2CppRGCTXDataType)3, 29197 },
	{ (Il2CppRGCTXDataType)3, 29199 },
	{ (Il2CppRGCTXDataType)3, 36204 },
	{ (Il2CppRGCTXDataType)3, 30275 },
	{ (Il2CppRGCTXDataType)2, 468 },
	{ (Il2CppRGCTXDataType)3, 29196 },
	{ (Il2CppRGCTXDataType)3, 30279 },
	{ (Il2CppRGCTXDataType)3, 30292 },
	{ (Il2CppRGCTXDataType)3, 29195 },
	{ (Il2CppRGCTXDataType)3, 34943 },
	{ (Il2CppRGCTXDataType)3, 34949 },
};
extern const CustomAttributesCacheGenerator g_Unity_Collections_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule = 
{
	"Unity.Collections.dll",
	416,
	s_methodPointers,
	127,
	s_adjustorThunks,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	29,
	s_rgctxIndices,
	185,
	s_rgctxValues,
	NULL,
	g_Unity_Collections_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
