﻿#include "pch-cpp.hpp"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>
struct EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>
struct ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>
struct ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>
struct Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Object>
struct Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XAttribute>
struct Func_3_t470E20942568C704061B02E02AEA7628339BF3C5;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XElement>
struct Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>
struct IEnumerable_1_tD70F1F8A055E4C430F02E84FEFA79A4AB50C1B35;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t70F856D4968B925F9EDFA9EB3A403F5B672FE7D2;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>
struct IEnumerable_1_t21FD747F2BF1B215864956D166D3B2DA85207214;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XObjectChangeAnnotation>
struct IEnumerable_1_t219CF7E6B53DF4B8CCAE5F34E61812D526A436AC;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>
struct IEnumerator_1_tBF0A4C0309DD6C17E06E972B1CC2A4715F9AB2E6;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement>
struct IEnumerator_1_tBB768286D73592EAD62B2400AE4B604477758148;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>
struct IEnumerator_1_t0EB06B71D3A5651429398C327E9E99BFAACB3F8A;
// System.Collections.Generic.List`1<System.Xml.XmlQualifiedName>
struct List_1_t3C367DB0980625D829CD027696F8FA0EA0C60B2D;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>
struct XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement>
struct XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Object>
struct XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute>
struct XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement>
struct XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.WeakReference>
struct XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Xml.Linq.XName>
struct XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37;
// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD;
// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F;
// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>
struct XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA;
// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XAttribute,System.String>
struct XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6;
// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>
struct XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72;
// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Object>
struct XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2;
// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.String>
struct XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF;
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_tB0898679563E52C130FE9EE5ECE3B3490570A7B2;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C;
// System.Xml.Linq.BaseUriAnnotation
struct BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Xml.IDtdInfo
struct IDtdInfo_tE42B4037BF3433A4F16173CE199CFF87E32A07C6;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Xml.Linq.LineInfoAnnotation
struct LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483;
// System.Xml.Linq.LineInfoEndElementAnnotation
struct LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Xml.Linq.NameSerializer
struct NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45;
// System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// System.Xml.Linq.XAttribute
struct XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7;
// MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor
struct XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB;
// System.Xml.Linq.XCData
struct XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF;
// System.Xml.Linq.XComment
struct XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9;
// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090;
// System.Xml.Linq.XDocument
struct XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF;
// System.Xml.Linq.XDocumentType
struct XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892;
// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5;
// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
struct XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73;
// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor
struct XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor
struct XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor
struct XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6;
// MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
struct XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F;
// MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor
struct XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9;
// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956;
// System.Xml.Linq.XNamespace
struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7;
// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99;
// System.Xml.Linq.XObject
struct XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6;
// System.Xml.Linq.XObjectChangeAnnotation
struct XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762;
// System.Xml.Linq.XObjectChangeEventArgs
struct XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352;
// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75;
// System.Xml.Linq.XStreamingElement
struct XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34;
// System.Xml.Linq.XText
struct XText_t14C82CC828138F000842E6611CBE05281260A3FC;
// System.Xml.XmlDocument
struct XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F;
// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138;
// System.Xml.Schema.XmlSchema
struct XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t915BE34D1ECD2020C14B87B702FAAE8A757C0CB5;
// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8;
// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration
struct NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9;
// System.Xml.Linq.XContainer/<GetDescendants>d__39
struct U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1;
// System.Xml.Linq.XContainer/<GetElements>d__40
struct U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC;
// System.Xml.Linq.XContainer/<Nodes>d__18
struct U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF;
// System.Xml.Linq.XElement/<GetAttributes>d__105
struct U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977;
// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c
struct U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9;
// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c
struct U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c
struct U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c
struct U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t470E20942568C704061B02E02AEA7628339BF3C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0585B1F8C119DD15D843D55F7CCBF9D9162B9AC8;
IL2CPP_EXTERN_C String_t* _stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABEBB01305DAD5CDC4ABC544CFEBCFEB1290EFC;
IL2CPP_EXTERN_C String_t* _stringLiteral0B4CED4F11B72FCE6659A7C377C251E9B13FA94E;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE0357577FE6BDD9E51A23B11B887B73877D0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral11680B2FB0D0FC01D9AFDF475517284900ACFB79;
IL2CPP_EXTERN_C String_t* _stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6;
IL2CPP_EXTERN_C String_t* _stringLiteral145ACF7B0AD8FB6FCA89E2F74EED12E94EC3A7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75;
IL2CPP_EXTERN_C String_t* _stringLiteral1A80D09E42ECF83939C0550908D8E7889359C8D8;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91;
IL2CPP_EXTERN_C String_t* _stringLiteral284BB8EA8CC921896C74586B4CEC5337B1525FC9;
IL2CPP_EXTERN_C String_t* _stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715;
IL2CPP_EXTERN_C String_t* _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917;
IL2CPP_EXTERN_C String_t* _stringLiteral38C66D82074221F9BF474E266F4485F93490FF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral3AFC0DE819870B50AA0F59F4823CD7064A39BC72;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1FEDF0C4DF52130C3B66237FAB6509FA39A38D;
IL2CPP_EXTERN_C String_t* _stringLiteral3C775B23554B97CFD8879DFA281939C311427192;
IL2CPP_EXTERN_C String_t* _stringLiteral3E06E7E4F8ED38905491595BD31A52DEEA86DBAF;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA1556EC2451041F02B5E24CC1259B4F9C88E56;
IL2CPP_EXTERN_C String_t* _stringLiteral40DFE531C71AB1B6488AD63BCB2AAA4843D9C24F;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4CF69E50664676AF96974413A4F4F427000D9619;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49;
IL2CPP_EXTERN_C String_t* _stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0;
IL2CPP_EXTERN_C String_t* _stringLiteral51E076C77A20C01FCA9E7EFBD613E0CE099CD99E;
IL2CPP_EXTERN_C String_t* _stringLiteral538ED4DB2714E63F1702E3DC7ED7111FE51CB075;
IL2CPP_EXTERN_C String_t* _stringLiteral57307604A13D96EA752170A81E5BBA1A66E7DD27;
IL2CPP_EXTERN_C String_t* _stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B;
IL2CPP_EXTERN_C String_t* _stringLiteral5951FDB2957BF41EA4FB9A27A477F9E1CE0B841B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2E3906078083B3F6EF50D81DCCBA5FBE0099F0;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral65151EF1CE2870155EB1F4CF50191C136CBF7C27;
IL2CPP_EXTERN_C String_t* _stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB;
IL2CPP_EXTERN_C String_t* _stringLiteral6C80BE31B3A7206EDCC7D55B9B8DC0407E7A87EB;
IL2CPP_EXTERN_C String_t* _stringLiteral751B5F3E33CE57A71852A78FFD92E0813DACD5C0;
IL2CPP_EXTERN_C String_t* _stringLiteral763B440B89C2BEAB56B575C7128AED7D0BF0D02D;
IL2CPP_EXTERN_C String_t* _stringLiteral79F2854B5115F837632CEA50C217D0F077D292CF;
IL2CPP_EXTERN_C String_t* _stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075;
IL2CPP_EXTERN_C String_t* _stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49;
IL2CPP_EXTERN_C String_t* _stringLiteral7C0D11305C4CE4883C53D10C917D9FEC585923B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA684079C4910A68C26112D31B4F30B7602EED6;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral8410460AD56D52600FC1FDB68F42DAC9B13253F9;
IL2CPP_EXTERN_C String_t* _stringLiteral850779CE1C493FE4BB82FD830D211C5DC080E111;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteral8C4D13815C4A9C6CE0C71EC81D9AEAA15F07F052;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB0D0A6E34E903191ED08A3028F75FBFA429DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B;
IL2CPP_EXTERN_C String_t* _stringLiteral9070F650E803F95AAF7F0424AC3CD59B848708B7;
IL2CPP_EXTERN_C String_t* _stringLiteral935ED84C03CE19EFAE29DD6987A405F64591906A;
IL2CPP_EXTERN_C String_t* _stringLiteral93ACD1E94819C250C280A5D433EB81D487EA36C6;
IL2CPP_EXTERN_C String_t* _stringLiteral9415A429F11852DD4CCC80868C382788D76BD744;
IL2CPP_EXTERN_C String_t* _stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9E601A048BDE14CE54D8454BBD9B9A6EFB0EA02D;
IL2CPP_EXTERN_C String_t* _stringLiteral9F7756F3BC424FA91FEB920E997A5D28CB0F1D32;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A3C640F703360E63541701EA84B997C01338F3;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA4AF89928FE870257F471A2BC36DE24B3C2D4202;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA849558816A84F373F471C0275248DA08F91A4A6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8DD31F05F41B09FE8B15F5B1ED920B57F9DD84B;
IL2CPP_EXTERN_C String_t* _stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188;
IL2CPP_EXTERN_C String_t* _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158;
IL2CPP_EXTERN_C String_t* _stringLiteralC45C10F625DAF964B5295D59B33A9925EB8F882B;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E594A81BD02C38A87789127F45DB6050261191;
IL2CPP_EXTERN_C String_t* _stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBF7CCC7EBCDB19212EDC6A7AC1FC14F5B4B78E;
IL2CPP_EXTERN_C String_t* _stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560;
IL2CPP_EXTERN_C String_t* _stringLiteralD89180693C38BF429E9AF7466537CF6318F5CAE5;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E30988DB4F13BB9F958646EC9E7FF9F399590A;
IL2CPP_EXTERN_C String_t* _stringLiteralDC1E003403D94E4D0E795CA3BFED667F7CA0D66A;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAE0763CD303EC66D7B464B2BBEDB7CBD57E62C;
IL2CPP_EXTERN_C String_t* _stringLiteralE074D06CDFBA700869E4BF8CF358542E5E30BAA8;
IL2CPP_EXTERN_C String_t* _stringLiteralE22A9D4ABDB91B11D0EC930946AD81264F5C3FF9;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BF3A6C9BCB5E556DB62148F4FFB6D95E86A203;
IL2CPP_EXTERN_C String_t* _stringLiteralE6E3A8B3B29F9F1380AA2EB5EE7E038B27443D4F;
IL2CPP_EXTERN_C String_t* _stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331;
IL2CPP_EXTERN_C String_t* _stringLiteralED7EC29553ED94A7299E962F6977E154443E0A2B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1F4810BB2716A77F316168F198D71B1CCDF923;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFB841A1E583CE3C43AA0486C84F6BD76B960A50E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDBD8FBE7D5D48AD37D3C8124A385028A3FE6B8A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mCD13205634A300C35308CD8F65D67D87E15ABF36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mF8E2210F02D124C75E35C185BB1893FF6AF71ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m309AB629E47E1D640D2A44960A9004BC34016B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameSerializer__ctor_mFF83F9040F5363B72D87DC6CCEA0321DB215F822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m1B65D6A1FF55272EEE13380F3E7C53E2015C3F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAttributesU3Ed__105_System_Collections_IEnumerator_Reset_mC2E83918E49FE016AE529F9B9D2A828981B85C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m31C5EB0DAD7972F8305F2307F7D245A14AF99208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetElementsU3Ed__40_System_Collections_IEnumerator_Reset_mEBD70692F6B1A660FC8C4BE32AEC4079CC25BD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNodesU3Ed__18_System_Collections_IEnumerator_Reset_m11293904E74587CEBADD8BEE0AD2B78C80C7C9BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetValueU3Eb__3_0_m244FA20007792002675A9344E101E65772BBC914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetValueU3Eb__3_0_m6EE39E48EFF3105C8893AC2C600989DA668E9BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetValueU3Eb__3_0_mAD172688633CA9933639C206D0D6337CA89EAB15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetValueU3Eb__3_0_mC1E21291F919FD6499A3B2803BB0D1CAF7C5966B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XAttribute_set_Value_m62D39A9815CFEE24A923B8381091387F13114ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XCData_WriteTo_mE9BC80649A08BC72B78DF18F9C1FF7619BDFF5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XComment_WriteTo_m3686F4EF4AB18C7F42564BC580E33C1CAAEB2BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XComment__ctor_m293F320541A1F11249027B6C8D623462AD383AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XComment__ctor_mD1594490E6706E752D9A5C9B748CF84AEC2B9B22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_AddString_m838F5C7418839B65CFAAEE10428961699F67C704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_RemoveNode_m072810FCA68B5F31097CFF678F1CD8AB5B7940E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer_RemoveNodes_mD6CB5A36AAC9A8CF3381274D1BC94584DF4BEA52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XContainer__ctor_mA6A69DAB1077038C297FBE6B4697DD40AB426ED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDeclaration__ctor_mBCB4F6ED791E5154C266DBC138B2647309D9C3AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDeferredSingleton_1__ctor_m4C8AA685D2F4D76F1710D3D9DCE142E24ECCCAE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDeferredSingleton_1__ctor_mDB1E83E535B37F685F4B4FC535D71250529C713D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocumentType_WriteTo_m106DADF2D6955F901D34239ACC17F1CD47F06063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocumentType__ctor_m4973BAC4702EF6EDA6B304CC74DD77F34B1EA51A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_AddAttributeSkipNotify_m15961A743A956E9F083D390A61D5A0834C625AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_AddAttribute_m1782ABA0C66FEBCAD60E9FB8B8384222E0A16E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_GetFirstNode_TisXElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_mD5651D2E3E0A617D9638704AC58489F346DE4CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_ValidateDocument_mF01236248E0025F9F140CC29CC233395C4BB4B46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_ValidateNode_m910C70D956DB041302A7AF202D9B361BF1AD8B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_ValidateString_m416D0F8419FDA051AA3E98D16C36E6D93C78DB8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDocument_WriteTo_mCA9178E00D706F20B0F0EC03956C778B4FD95A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_AddAttributeSkipNotify_m8D13DB88A3C9CDAB2187BD93B39071A969DE2E5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_AddAttribute_mD916A2A7588673C240606429B8DD72E9B8D9D02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_AppendAttribute_m0DE1BE78518A9B191036D9142ACC5AC3D95DE169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_GetPrefixOfNamespace_mF9843F62F43762B9E43BBAF8DA634CFBBA393C8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_ReadElementFrom_mF82AFFF2679EAA2E7BD55E9C5D625A56FEBF06C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_System_Xml_Serialization_IXmlSerializable_ReadXml_mF23D51DDE64786E21605493504750F067142698C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_ValidateNode_mAFE6C941B26F52216906391DC84D40D587F58C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_WriteTo_mD0544B1B917B698378053735D34076540D872154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement__ctor_m3AE89E314A40AEB1D13944480CD5B30CB60C9D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement__ctor_m7C010BE83763396D50EB4E51C1B21A1DDDE258B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XElement_set_Value_mA9BECC59BB17AA10589D484755309953F5289C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XName_System_Runtime_Serialization_ISerializable_GetObjectData_m45F244C932C673A2DBB248CDD1A640138A02DAFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XNode_Remove_m6CB2143CFECACE50E2378F5D0FB7CCA08F35EBD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObject_Annotation_m95490F1AA8945BB8554BC5564CC9A8D9C174AA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObject_Annotations_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_m09E74E796184F84A1E52E541559F5A5C2CAABB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XProcessingInstruction_ValidateName_m0EAC108733F1A398C88966D74AF9FFC4D7231E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XProcessingInstruction_WriteTo_m3FB64607898D2DCC5DD36ACCFBDF4AC723FB1CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XProcessingInstruction__ctor_m49A9FD814CED60CDF313649D7529DBE0AC8D4A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XProcessingInstruction__ctor_mFBD37F1027E57C2EB1BE94A0803BE86EC424BCE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XPropertyDescriptor_2__ctor_m0259FC3208B63C7913666C369BFC65E2880B0A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XText_WriteTo_m45EE125458AB37E57B311DFDD80CCF755505BE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XText__ctor_mC0BAC0C89D83D1AC431C1E0CC146752EAFDA29AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XText_set_Value_m9CF8B47091F98CD190A82324BA437C1F29F4C8CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B;;
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com;
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com;;
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke;
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke;;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBBC8060C6F95337222402802CAA1A512C2A3B7C6 
{
public:

public:
};


// System.Object


// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement>
struct XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99  : public RuntimeObject
{
public:
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<T>> MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1::func
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * ___func_0;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_1;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_2;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99, ___func_0)); }
	inline Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * get_func_0() const { return ___func_0; }
	inline Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99, ___element_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_1() const { return ___element_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99, ___name_2)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_2() const { return ___name_2; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute>
struct XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C  : public RuntimeObject
{
public:
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T> MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::func
	Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * ___func_0;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_1;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_2;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C, ___func_0)); }
	inline Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * get_func_0() const { return ___func_0; }
	inline Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C, ___element_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_1() const { return ___element_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C, ___name_2)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_2() const { return ___name_2; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement>
struct XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053  : public RuntimeObject
{
public:
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T> MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::func
	Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * ___func_0;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_1;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_2;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053, ___func_0)); }
	inline Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * get_func_0() const { return ___func_0; }
	inline Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053, ___element_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_1() const { return ___element_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053, ___name_2)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_2() const { return ___name_2; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD, ___state_0)); }
	inline XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 * get_state_0() const { return ___state_0; }
	inline XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t37EA7100EEC68A7E18B29ACAA61082089048A256 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F, ___state_0)); }
	inline XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 * get_state_0() const { return ___state_0; }
	inline XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_tEF855C388AEE854CCEB1517E8DB793AEEE970A29 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tE65ED5F1D3A63B5FD36E20F0E76A6590D1E03E4A  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Xml.Linq.BaseUriAnnotation
struct BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.BaseUriAnnotation::baseUri
	String_t* ___baseUri_0;

public:
	inline static int32_t get_offset_of_baseUri_0() { return static_cast<int32_t>(offsetof(BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104, ___baseUri_0)); }
	inline String_t* get_baseUri_0() const { return ___baseUri_0; }
	inline String_t** get_address_of_baseUri_0() { return &___baseUri_0; }
	inline void set_baseUri_0(String_t* value)
	{
		___baseUri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseUri_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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


// System.Xml.Linq.LineInfoAnnotation
struct LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.LineInfoAnnotation::lineNumber
	int32_t ___lineNumber_0;
	// System.Int32 System.Xml.Linq.LineInfoAnnotation::linePosition
	int32_t ___linePosition_1;

public:
	inline static int32_t get_offset_of_lineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483, ___lineNumber_0)); }
	inline int32_t get_lineNumber_0() const { return ___lineNumber_0; }
	inline int32_t* get_address_of_lineNumber_0() { return &___lineNumber_0; }
	inline void set_lineNumber_0(int32_t value)
	{
		___lineNumber_0 = value;
	}

	inline static int32_t get_offset_of_linePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483, ___linePosition_1)); }
	inline int32_t get_linePosition_1() const { return ___linePosition_1; }
	inline int32_t* get_address_of_linePosition_1() { return &___linePosition_1; }
	inline void set_linePosition_1(int32_t value)
	{
		___linePosition_1 = value;
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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * ___attributeCollection_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes_4;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___originalAttributes_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_6;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_7;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_8;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_9;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_10;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_1), (void*)value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributeCollection_3)); }
	inline AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * get_attributeCollection_3() const { return ___attributeCollection_3; }
	inline AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C ** get_address_of_attributeCollection_3() { return &___attributeCollection_3; }
	inline void set_attributeCollection_3(AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * value)
	{
		___attributeCollection_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeCollection_3), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributes_4)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_attributes_4() const { return ___attributes_4; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_4), (void*)value);
	}

	inline static int32_t get_offset_of_originalAttributes_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___originalAttributes_5)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_originalAttributes_5() const { return ___originalAttributes_5; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_originalAttributes_5() { return &___originalAttributes_5; }
	inline void set_originalAttributes_5(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___originalAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalAttributes_5), (void*)value);
	}

	inline static int32_t get_offset_of_attributesFiltered_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFiltered_6)); }
	inline bool get_attributesFiltered_6() const { return ___attributesFiltered_6; }
	inline bool* get_address_of_attributesFiltered_6() { return &___attributesFiltered_6; }
	inline void set_attributesFiltered_6(bool value)
	{
		___attributesFiltered_6 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFilled_7)); }
	inline bool get_attributesFilled_7() const { return ___attributesFilled_7; }
	inline bool* get_address_of_attributesFilled_7() { return &___attributesFilled_7; }
	inline void set_attributesFilled_7(bool value)
	{
		___attributesFilled_7 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___metadataVersion_8)); }
	inline int32_t get_metadataVersion_8() const { return ___metadataVersion_8; }
	inline int32_t* get_address_of_metadataVersion_8() { return &___metadataVersion_8; }
	inline void set_metadataVersion_8(int32_t value)
	{
		___metadataVersion_8 = value;
	}

	inline static int32_t get_offset_of_category_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___category_9)); }
	inline String_t* get_category_9() const { return ___category_9; }
	inline String_t** get_address_of_category_9() { return &___category_9; }
	inline void set_category_9(String_t* value)
	{
		___category_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___category_9), (void*)value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___description_10)); }
	inline String_t* get_description_10() const { return ___description_10; }
	inline String_t** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(String_t* value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_10), (void*)value);
	}

	inline static int32_t get_offset_of_lockCookie_11() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___lockCookie_11)); }
	inline RuntimeObject * get_lockCookie_11() const { return ___lockCookie_11; }
	inline RuntimeObject ** get_address_of_lockCookie_11() { return &___lockCookie_11; }
	inline void set_lockCookie_11(RuntimeObject * value)
	{
		___lockCookie_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockCookie_11), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Xml.Linq.NameSerializer
struct NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.NameSerializer::expandedName
	String_t* ___expandedName_0;

public:
	inline static int32_t get_offset_of_expandedName_0() { return static_cast<int32_t>(offsetof(NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45, ___expandedName_0)); }
	inline String_t* get_expandedName_0() const { return ___expandedName_0; }
	inline String_t** get_address_of_expandedName_0() { return &___expandedName_0; }
	inline void set_expandedName_0(String_t* value)
	{
		___expandedName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expandedName_0), (void*)value);
	}
};


// System.Xml.Linq.Res
struct Res_t63342267B54C7EE35253885BE251951FD78F70C7  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.Xml.Linq.XDeclaration
struct XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XDeclaration::version
	String_t* ___version_0;
	// System.String System.Xml.Linq.XDeclaration::encoding
	String_t* ___encoding_1;
	// System.String System.Xml.Linq.XDeclaration::standalone
	String_t* ___standalone_2;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090, ___version_0)); }
	inline String_t* get_version_0() const { return ___version_0; }
	inline String_t** get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(String_t* value)
	{
		___version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090, ___encoding_1)); }
	inline String_t* get_encoding_1() const { return ___encoding_1; }
	inline String_t** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(String_t* value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_standalone_2() { return static_cast<int32_t>(offsetof(XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090, ___standalone_2)); }
	inline String_t* get_standalone_2() const { return ___standalone_2; }
	inline String_t** get_address_of_standalone_2() { return &___standalone_2; }
	inline void set_standalone_2(String_t* value)
	{
		___standalone_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standalone_2), (void*)value);
	}
};


// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	// System.String System.Xml.Linq.XName::localName
	String_t* ___localName_1;
	// System.Int32 System.Xml.Linq.XName::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___ns_0)); }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_0), (void*)value);
	}

	inline static int32_t get_offset_of_localName_1() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___localName_1)); }
	inline String_t* get_localName_1() const { return ___localName_1; }
	inline String_t** get_address_of_localName_1() { return &___localName_1; }
	inline void set_localName_1(String_t* value)
	{
		___localName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_1), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};


// System.Xml.Linq.XNamespace
struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XNamespace::namespaceName
	String_t* ___namespaceName_4;
	// System.Int32 System.Xml.Linq.XNamespace::hashCode
	int32_t ___hashCode_5;
	// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> System.Xml.Linq.XNamespace::names
	XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * ___names_6;

public:
	inline static int32_t get_offset_of_namespaceName_4() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7, ___namespaceName_4)); }
	inline String_t* get_namespaceName_4() const { return ___namespaceName_4; }
	inline String_t** get_address_of_namespaceName_4() { return &___namespaceName_4; }
	inline void set_namespaceName_4(String_t* value)
	{
		___namespaceName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceName_4), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_5() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7, ___hashCode_5)); }
	inline int32_t get_hashCode_5() const { return ___hashCode_5; }
	inline int32_t* get_address_of_hashCode_5() { return &___hashCode_5; }
	inline void set_hashCode_5(int32_t value)
	{
		___hashCode_5 = value;
	}

	inline static int32_t get_offset_of_names_6() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7, ___names_6)); }
	inline XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * get_names_6() const { return ___names_6; }
	inline XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F ** get_address_of_names_6() { return &___names_6; }
	inline void set_names_6(XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * value)
	{
		___names_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_6), (void*)value);
	}
};

struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields
{
public:
	// System.Xml.Linq.XHashtable`1<System.WeakReference> System.Xml.Linq.XNamespace::namespaces
	XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * ___namespaces_0;
	// System.WeakReference System.Xml.Linq.XNamespace::refNone
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___refNone_1;
	// System.WeakReference System.Xml.Linq.XNamespace::refXml
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___refXml_2;
	// System.WeakReference System.Xml.Linq.XNamespace::refXmlns
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___refXmlns_3;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___namespaces_0)); }
	inline XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * get_namespaces_0() const { return ___namespaces_0; }
	inline XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaces_0), (void*)value);
	}

	inline static int32_t get_offset_of_refNone_1() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___refNone_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_refNone_1() const { return ___refNone_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_refNone_1() { return &___refNone_1; }
	inline void set_refNone_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___refNone_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refNone_1), (void*)value);
	}

	inline static int32_t get_offset_of_refXml_2() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___refXml_2)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_refXml_2() const { return ___refXml_2; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_refXml_2() { return &___refXml_2; }
	inline void set_refXml_2(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___refXml_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refXml_2), (void*)value);
	}

	inline static int32_t get_offset_of_refXmlns_3() { return static_cast<int32_t>(offsetof(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields, ___refXmlns_3)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_refXmlns_3() const { return ___refXmlns_3; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_refXmlns_3() { return &___refXmlns_3; }
	inline void set_refXmlns_3(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___refXmlns_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refXmlns_3), (void*)value);
	}
};


// System.Xml.Linq.XObject
struct XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject * ___annotations_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6, ___parent_0)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_parent_0() const { return ___parent_0; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_annotations_1() { return static_cast<int32_t>(offsetof(XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6, ___annotations_1)); }
	inline RuntimeObject * get_annotations_1() const { return ___annotations_1; }
	inline RuntimeObject ** get_address_of_annotations_1() { return &___annotations_1; }
	inline void set_annotations_1(RuntimeObject * value)
	{
		___annotations_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___annotations_1), (void*)value);
	}
};


// System.Xml.Linq.XObjectChangeAnnotation
struct XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762  : public RuntimeObject
{
public:
	// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> System.Xml.Linq.XObjectChangeAnnotation::changing
	EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * ___changing_0;
	// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> System.Xml.Linq.XObjectChangeAnnotation::changed
	EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * ___changed_1;

public:
	inline static int32_t get_offset_of_changing_0() { return static_cast<int32_t>(offsetof(XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762, ___changing_0)); }
	inline EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * get_changing_0() const { return ___changing_0; }
	inline EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 ** get_address_of_changing_0() { return &___changing_0; }
	inline void set_changing_0(EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * value)
	{
		___changing_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changing_0), (void*)value);
	}

	inline static int32_t get_offset_of_changed_1() { return static_cast<int32_t>(offsetof(XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762, ___changed_1)); }
	inline EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * get_changed_1() const { return ___changed_1; }
	inline EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 ** get_address_of_changed_1() { return &___changed_1; }
	inline void set_changed_1(EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * value)
	{
		___changed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changed_1), (void*)value);
	}
};


// System.Xml.Linq.XStreamingElement
struct XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34  : public RuntimeObject
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XStreamingElement::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_0;
	// System.Object System.Xml.Linq.XStreamingElement::content
	RuntimeObject * ___content_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34, ___name_0)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_0() const { return ___name_0; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34, ___content_1)); }
	inline RuntimeObject * get_content_1() const { return ___content_1; }
	inline RuntimeObject ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(RuntimeObject * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_1), (void*)value);
	}
};


// System.Xml.XmlReader
struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138  : public RuntimeObject
{
public:

public:
};

struct XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNum
	int32_t ___lineNum_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePos
	int32_t ___linePos_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t915BE34D1ECD2020C14B87B702FAAE8A757C0CB5 * ___namespaces_3;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3 * ___parent_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isProcessing
	bool ___isProcessing_5;

public:
	inline static int32_t get_offset_of_lineNum_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3, ___lineNum_0)); }
	inline int32_t get_lineNum_0() const { return ___lineNum_0; }
	inline int32_t* get_address_of_lineNum_0() { return &___lineNum_0; }
	inline void set_lineNum_0(int32_t value)
	{
		___lineNum_0 = value;
	}

	inline static int32_t get_offset_of_linePos_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3, ___linePos_1)); }
	inline int32_t get_linePos_1() const { return ___linePos_1; }
	inline int32_t* get_address_of_linePos_1() { return &___linePos_1; }
	inline void set_linePos_1(int32_t value)
	{
		___linePos_1 = value;
	}

	inline static int32_t get_offset_of_sourceUri_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3, ___sourceUri_2)); }
	inline String_t* get_sourceUri_2() const { return ___sourceUri_2; }
	inline String_t** get_address_of_sourceUri_2() { return &___sourceUri_2; }
	inline void set_sourceUri_2(String_t* value)
	{
		___sourceUri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceUri_2), (void*)value);
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3, ___namespaces_3)); }
	inline XmlSerializerNamespaces_t915BE34D1ECD2020C14B87B702FAAE8A757C0CB5 * get_namespaces_3() const { return ___namespaces_3; }
	inline XmlSerializerNamespaces_t915BE34D1ECD2020C14B87B702FAAE8A757C0CB5 ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(XmlSerializerNamespaces_t915BE34D1ECD2020C14B87B702FAAE8A757C0CB5 * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaces_3), (void*)value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3, ___parent_4)); }
	inline XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3 * get_parent_4() const { return ___parent_4; }
	inline XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3 ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3 * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_isProcessing_5() { return static_cast<int32_t>(offsetof(XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3, ___isProcessing_5)); }
	inline bool get_isProcessing_5() const { return ___isProcessing_5; }
	inline bool* get_address_of_isProcessing_5() { return &___isProcessing_5; }
	inline void set_isProcessing_5(bool value)
	{
		___isProcessing_5 = value;
	}
};


// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D  : public RuntimeObject
{
public:
	// System.Char[] System.Xml.XmlWriter::writeNodeBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___writeNodeBuffer_0;

public:
	inline static int32_t get_offset_of_writeNodeBuffer_0() { return static_cast<int32_t>(offsetof(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D, ___writeNodeBuffer_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_writeNodeBuffer_0() const { return ___writeNodeBuffer_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_writeNodeBuffer_0() { return &___writeNodeBuffer_0; }
	inline void set_writeNodeBuffer_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___writeNodeBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeNodeBuffer_0), (void*)value);
	}
};


// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration
struct NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::prefix
	String_t* ___prefix_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::ns
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_1;
	// System.Int32 System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::scope
	int32_t ___scope_2;
	// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::prev
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___prev_3;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefix_0), (void*)value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9, ___ns_1)); }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * get_ns_1() const { return ___ns_1; }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 ** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_1), (void*)value);
	}

	inline static int32_t get_offset_of_scope_2() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9, ___scope_2)); }
	inline int32_t get_scope_2() const { return ___scope_2; }
	inline int32_t* get_address_of_scope_2() { return &___scope_2; }
	inline void set_scope_2(int32_t value)
	{
		___scope_2 = value;
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9, ___prev_3)); }
	inline NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * get_prev_3() const { return ___prev_3; }
	inline NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 ** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_3), (void*)value);
	}
};


// System.Xml.Linq.XContainer/<GetDescendants>d__39
struct U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<GetDescendants>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::<>2__current
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<GetDescendants>d__39::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::self
	bool ___self_3;
	// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::<>3__self
	bool ___U3CU3E3__self_4;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<GetDescendants>d__39::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_5;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetDescendants>d__39::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_6;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetDescendants>d__39::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_7;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<GetDescendants>d__39::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_8;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::<e>5__2
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CeU3E5__2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E2__current_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_self_3() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___self_3)); }
	inline bool get_self_3() const { return ___self_3; }
	inline bool* get_address_of_self_3() { return &___self_3; }
	inline void set_self_3(bool value)
	{
		___self_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__self_4() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E3__self_4)); }
	inline bool get_U3CU3E3__self_4() const { return ___U3CU3E3__self_4; }
	inline bool* get_address_of_U3CU3E3__self_4() { return &___U3CU3E3__self_4; }
	inline void set_U3CU3E3__self_4(bool value)
	{
		___U3CU3E3__self_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E4__this_5)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_6() const { return ___name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_7() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CU3E3__name_7)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_7() const { return ___U3CU3E3__name_7; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_7() { return &___U3CU3E3__name_7; }
	inline void set_U3CU3E3__name_7(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CnU3E5__1_8)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_8() const { return ___U3CnU3E5__1_8; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_8() { return &___U3CnU3E5__1_8; }
	inline void set_U3CnU3E5__1_8(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1, ___U3CeU3E5__2_9)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CeU3E5__2_9() const { return ___U3CeU3E5__2_9; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CeU3E5__2_9() { return &___U3CeU3E5__2_9; }
	inline void set_U3CeU3E5__2_9(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CeU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_9), (void*)value);
	}
};


// System.Xml.Linq.XContainer/<GetElements>d__40
struct U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<GetElements>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetElements>d__40::<>2__current
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<GetElements>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<GetElements>d__40::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<GetElements>d__40::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_4;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetElements>d__40::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XName System.Xml.Linq.XContainer/<GetElements>d__40::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E2__current_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E4__this_3)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CnU3E5__1_4)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_4() const { return ___U3CnU3E5__1_4; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_4() { return &___U3CnU3E5__1_4; }
	inline void set_U3CnU3E5__1_4(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_6() { return static_cast<int32_t>(offsetof(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC, ___U3CU3E3__name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_6() const { return ___U3CU3E3__name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_6() { return &___U3CU3E3__name_6; }
	inline void set_U3CU3E3__name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_6), (void*)value);
	}
};


// System.Xml.Linq.XContainer/<Nodes>d__18
struct U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>d__18::<>2__current
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>d__18::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<Nodes>d__18::<>4__this
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>d__18::<n>5__1
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___U3CnU3E5__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3E2__current_1)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CU3E4__this_3)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF, ___U3CnU3E5__1_4)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_U3CnU3E5__1_4() const { return ___U3CnU3E5__1_4; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_U3CnU3E5__1_4() { return &___U3CnU3E5__1_4; }
	inline void set_U3CnU3E5__1_4(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___U3CnU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnU3E5__1_4), (void*)value);
	}
};


// System.Xml.Linq.XElement/<GetAttributes>d__105
struct U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Linq.XElement/<GetAttributes>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetAttributes>d__105::<>2__current
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___U3CU3E2__current_1;
	// System.Int32 System.Xml.Linq.XElement/<GetAttributes>d__105::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetAttributes>d__105::<>4__this
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___U3CU3E4__this_3;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetAttributes>d__105::<a>5__1
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___U3CaU3E5__1_4;
	// System.Xml.Linq.XName System.Xml.Linq.XElement/<GetAttributes>d__105::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XName System.Xml.Linq.XElement/<GetAttributes>d__105::<>3__name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___U3CU3E3__name_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E2__current_1)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E4__this_3)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CaU3E5__1_4)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_U3CaU3E5__1_4() const { return ___U3CaU3E5__1_4; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_U3CaU3E5__1_4() { return &___U3CaU3E5__1_4; }
	inline void set_U3CaU3E5__1_4(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___U3CaU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__name_6() { return static_cast<int32_t>(offsetof(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977, ___U3CU3E3__name_6)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_U3CU3E3__name_6() const { return ___U3CU3E3__name_6; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_U3CU3E3__name_6() { return &___U3CU3E3__name_6; }
	inline void set_U3CU3E3__name_6(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___U3CU3E3__name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__name_6), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c
struct U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c::<>9
	U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * ___U3CU3E9_0;
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XAttribute> MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c::<>9__3_0
	Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c
struct U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c::<>9
	U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * ___U3CU3E9_0;
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>> MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c::<>9__3_0
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c
struct U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c::<>9
	U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * ___U3CU3E9_0;
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c::<>9__3_0
	Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c
struct U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c::<>9
	U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * ___U3CU3E9_0;
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>> MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c::<>9__3_0
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// System.Xml.Linq.LineInfoEndElementAnnotation
struct LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2  : public LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483
{
public:

public:
};


// System.Xml.Linq.NamespaceCache
struct NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceCache::ns
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	// System.String System.Xml.Linq.NamespaceCache::namespaceName
	String_t* ___namespaceName_1;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662, ___ns_0)); }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_0), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceName_1() { return static_cast<int32_t>(offsetof(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662, ___namespaceName_1)); }
	inline String_t* get_namespaceName_1() const { return ___namespaceName_1; }
	inline String_t** get_address_of_namespaceName_1() { return &___namespaceName_1; }
	inline void set_namespaceName_1(String_t* value)
	{
		___namespaceName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Linq.NamespaceCache
struct NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_pinvoke
{
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	char* ___namespaceName_1;
};
// Native definition for COM marshalling of System.Xml.Linq.NamespaceCache
struct NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_com
{
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	Il2CppChar* ___namespaceName_1;
};

// System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B 
{
public:
	// System.Int32 System.Xml.Linq.NamespaceResolver::scope
	int32_t ___scope_0;
	// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration System.Xml.Linq.NamespaceResolver::declaration
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___declaration_1;
	// System.Xml.Linq.NamespaceResolver/NamespaceDeclaration System.Xml.Linq.NamespaceResolver::rover
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___rover_2;

public:
	inline static int32_t get_offset_of_scope_0() { return static_cast<int32_t>(offsetof(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B, ___scope_0)); }
	inline int32_t get_scope_0() const { return ___scope_0; }
	inline int32_t* get_address_of_scope_0() { return &___scope_0; }
	inline void set_scope_0(int32_t value)
	{
		___scope_0 = value;
	}

	inline static int32_t get_offset_of_declaration_1() { return static_cast<int32_t>(offsetof(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B, ___declaration_1)); }
	inline NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * get_declaration_1() const { return ___declaration_1; }
	inline NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 ** get_address_of_declaration_1() { return &___declaration_1; }
	inline void set_declaration_1(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * value)
	{
		___declaration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaration_1), (void*)value);
	}

	inline static int32_t get_offset_of_rover_2() { return static_cast<int32_t>(offsetof(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B, ___rover_2)); }
	inline NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * get_rover_2() const { return ___rover_2; }
	inline NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 ** get_address_of_rover_2() { return &___rover_2; }
	inline void set_rover_2(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * value)
	{
		___rover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rover_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke
{
	int32_t ___scope_0;
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___declaration_1;
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___rover_2;
};
// Native definition for COM marshalling of System.Xml.Linq.NamespaceResolver
struct NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com
{
	int32_t ___scope_0;
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___declaration_1;
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * ___rover_2;
};

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B  : public MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * ___converter_12;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::valueChangedHandlers
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___valueChangedHandlers_13;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___editors_14;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___editorTypes_15;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_16;

public:
	inline static int32_t get_offset_of_converter_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___converter_12)); }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * get_converter_12() const { return ___converter_12; }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 ** get_address_of_converter_12() { return &___converter_12; }
	inline void set_converter_12(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * value)
	{
		___converter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converter_12), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedHandlers_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___valueChangedHandlers_13)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_valueChangedHandlers_13() const { return ___valueChangedHandlers_13; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_valueChangedHandlers_13() { return &___valueChangedHandlers_13; }
	inline void set_valueChangedHandlers_13(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___valueChangedHandlers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedHandlers_13), (void*)value);
	}

	inline static int32_t get_offset_of_editors_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editors_14)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_editors_14() const { return ___editors_14; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_editors_14() { return &___editors_14; }
	inline void set_editors_14(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___editors_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editors_14), (void*)value);
	}

	inline static int32_t get_offset_of_editorTypes_15() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_editorTypes_15() const { return ___editorTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_editorTypes_15() { return &___editorTypes_15; }
	inline void set_editorTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___editorTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_editorCount_16() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorCount_16)); }
	inline int32_t get_editorCount_16() const { return ___editorCount_16; }
	inline int32_t* get_address_of_editorCount_16() { return &___editorCount_16; }
	inline void set_editorCount_16(int32_t value)
	{
		___editorCount_16 = value;
	}
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


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Xml.Linq.XAttribute
struct XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7  : public XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6
{
public:
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___next_2;
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_3;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_4;

public:
	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7, ___next_2)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_next_2() const { return ___next_2; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7, ___name_3)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_3() const { return ___name_3; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7, ___value_4)); }
	inline String_t* get_value_4() const { return ___value_4; }
	inline String_t** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(String_t* value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_4), (void*)value);
	}
};


// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99  : public XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___next_2;

public:
	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99, ___next_2)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_next_2() const { return ___next_2; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XAttribute,System.String>
struct XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>
struct XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Object>
struct XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.String>
struct XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
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


// System.Xml.ConformanceLevel
struct ConformanceLevel_tDDD7A5E189C7A150AB656A9070173CD8C2A5B653 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConformanceLevel_tDDD7A5E189C7A150AB656A9070173CD8C2A5B653, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// System.Xml.Linq.ElementWriter
struct ElementWriter_t6D111ED288426979614A6213661C665262B12BAB 
{
public:
	// System.Xml.XmlWriter System.Xml.Linq.ElementWriter::writer
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer_0;
	// System.Xml.Linq.NamespaceResolver System.Xml.Linq.ElementWriter::resolver
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B  ___resolver_1;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(ElementWriter_t6D111ED288426979614A6213661C665262B12BAB, ___writer_0)); }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * get_writer_0() const { return ___writer_0; }
	inline XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_0), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_1() { return static_cast<int32_t>(offsetof(ElementWriter_t6D111ED288426979614A6213661C665262B12BAB, ___resolver_1)); }
	inline NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B  get_resolver_1() const { return ___resolver_1; }
	inline NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * get_address_of_resolver_1() { return &___resolver_1; }
	inline void set_resolver_1(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B  value)
	{
		___resolver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___resolver_1))->___declaration_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___resolver_1))->___rover_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Linq.ElementWriter
struct ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_pinvoke
{
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer_0;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke ___resolver_1;
};
// Native definition for COM marshalling of System.Xml.Linq.ElementWriter
struct ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_com
{
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer_0;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com ___resolver_1;
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

// System.Xml.Linq.LoadOptions
struct LoadOptions_tB196C434740156FE145A1201DC73E40746A50ECE 
{
public:
	// System.Int32 System.Xml.Linq.LoadOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadOptions_tB196C434740156FE145A1201DC73E40746A50ECE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.NamespaceHandling
struct NamespaceHandling_t7974F9A117390EC627D6C12EB7219594674ADC80 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NamespaceHandling_t7974F9A117390EC627D6C12EB7219594674ADC80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.NewLineHandling
struct NewLineHandling_t416C739C0EBCB5F7CAE1A72562592E6FA6289CCA 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NewLineHandling_t416C739C0EBCB5F7CAE1A72562592E6FA6289CCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.ReadState
struct ReadState_tD89BBF06656CA45737179919236BDA5EC69D2FEF 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_tD89BBF06656CA45737179919236BDA5EC69D2FEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Xml.Linq.SaveOptions
struct SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2 
{
public:
	// System.Int32 System.Xml.Linq.SaveOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_12), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_11), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Xml.TriState
struct TriState_t14A7E0F892D0205A14EF016A6610223577276FD7 
{
public:
	// System.Int32 System.Xml.TriState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriState_t14A7E0F892D0205A14EF016A6610223577276FD7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// System.Xml.Linq.XComment
struct XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.String System.Xml.Linq.XComment::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject * ___content_3;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525, ___content_3)); }
	inline RuntimeObject * get_content_3() const { return ___content_3; }
	inline RuntimeObject ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(RuntimeObject * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_3), (void*)value);
	}
};


// System.Xml.Linq.XDocumentType
struct XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.String System.Xml.Linq.XDocumentType::name
	String_t* ___name_3;
	// System.String System.Xml.Linq.XDocumentType::publicId
	String_t* ___publicId_4;
	// System.String System.Xml.Linq.XDocumentType::systemId
	String_t* ___systemId_5;
	// System.String System.Xml.Linq.XDocumentType::internalSubset
	String_t* ___internalSubset_6;
	// System.Xml.IDtdInfo System.Xml.Linq.XDocumentType::dtdInfo
	RuntimeObject* ___dtdInfo_7;

public:
	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_publicId_4() { return static_cast<int32_t>(offsetof(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892, ___publicId_4)); }
	inline String_t* get_publicId_4() const { return ___publicId_4; }
	inline String_t** get_address_of_publicId_4() { return &___publicId_4; }
	inline void set_publicId_4(String_t* value)
	{
		___publicId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicId_4), (void*)value);
	}

	inline static int32_t get_offset_of_systemId_5() { return static_cast<int32_t>(offsetof(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892, ___systemId_5)); }
	inline String_t* get_systemId_5() const { return ___systemId_5; }
	inline String_t** get_address_of_systemId_5() { return &___systemId_5; }
	inline void set_systemId_5(String_t* value)
	{
		___systemId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemId_5), (void*)value);
	}

	inline static int32_t get_offset_of_internalSubset_6() { return static_cast<int32_t>(offsetof(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892, ___internalSubset_6)); }
	inline String_t* get_internalSubset_6() const { return ___internalSubset_6; }
	inline String_t** get_address_of_internalSubset_6() { return &___internalSubset_6; }
	inline void set_internalSubset_6(String_t* value)
	{
		___internalSubset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSubset_6), (void*)value);
	}

	inline static int32_t get_offset_of_dtdInfo_7() { return static_cast<int32_t>(offsetof(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892, ___dtdInfo_7)); }
	inline RuntimeObject* get_dtdInfo_7() const { return ___dtdInfo_7; }
	inline RuntimeObject** get_address_of_dtdInfo_7() { return &___dtdInfo_7; }
	inline void set_dtdInfo_7(RuntimeObject* value)
	{
		___dtdInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtdInfo_7), (void*)value);
	}
};


// System.Xml.Linq.XObjectChange
struct XObjectChange_tC48AC7229454DAB624E924DE01433C8F4CC6BBDE 
{
public:
	// System.Int32 System.Xml.Linq.XObjectChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XObjectChange_tC48AC7229454DAB624E924DE01433C8F4CC6BBDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.String System.Xml.Linq.XProcessingInstruction::target
	String_t* ___target_3;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_4;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75, ___target_3)); }
	inline String_t* get_target_3() const { return ___target_3; }
	inline String_t** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(String_t* value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_3), (void*)value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75, ___data_4)); }
	inline String_t* get_data_4() const { return ___data_4; }
	inline String_t** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(String_t* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// System.Xml.Linq.XText
struct XText_t14C82CC828138F000842E6611CBE05281260A3FC  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.String System.Xml.Linq.XText::text
	String_t* ___text_3;

public:
	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(XText_t14C82CC828138F000842E6611CBE05281260A3FC, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_3), (void*)value);
	}
};


// System.Xml.XmlDateTimeSerializationMode
struct XmlDateTimeSerializationMode_tFEC5AD7031E39D53621F90D85973FAC5C71FFBC2 
{
public:
	// System.Int32 System.Xml.XmlDateTimeSerializationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlDateTimeSerializationMode_tFEC5AD7031E39D53621F90D85973FAC5C71FFBC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlNodeType
struct XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlOutputMethod
struct XmlOutputMethod_t56A6FAE8907BABCD1EE7532B476666E21D5CB66F 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t56A6FAE8907BABCD1EE7532B476666E21D5CB66F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaDerivationMethod
struct XmlSchemaDerivationMethod_tB960EB54D0A380C43B2EA296A17718B629BBD20E 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDerivationMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaDerivationMethod_tB960EB54D0A380C43B2EA296A17718B629BBD20E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Schema.XmlSchemaForm
struct XmlSchemaForm_tAFA037CC98C760F6686439643387677185EC9D91 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaForm_tAFA037CC98C760F6686439643387677185EC9D91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlStandalone
struct XmlStandalone_t1AB830245155829DBE6EBC8C97A0BB64859FD828 
{
public:
	// System.Int32 System.Xml.XmlStandalone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlStandalone_t1AB830245155829DBE6EBC8C97A0BB64859FD828, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor
struct XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB  : public XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6
{
public:
	// System.Xml.Linq.XAttribute MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::attribute
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___attribute_17;

public:
	inline static int32_t get_offset_of_attribute_17() { return static_cast<int32_t>(offsetof(XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB, ___attribute_17)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_attribute_17() const { return ___attribute_17; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_attribute_17() { return &___attribute_17; }
	inline void set_attribute_17(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___attribute_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attribute_17), (void*)value);
	}
};


// System.Xml.Linq.XCData
struct XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF  : public XText_t14C82CC828138F000842E6611CBE05281260A3FC
{
public:

public:
};


// System.Xml.Linq.XDocument
struct XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF  : public XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525
{
public:
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::declaration
	XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * ___declaration_4;

public:
	inline static int32_t get_offset_of_declaration_4() { return static_cast<int32_t>(offsetof(XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF, ___declaration_4)); }
	inline XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * get_declaration_4() const { return ___declaration_4; }
	inline XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 ** get_address_of_declaration_4() { return &___declaration_4; }
	inline void set_declaration_4(XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * value)
	{
		___declaration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaration_4), (void*)value);
	}
};


// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5  : public XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___lastAttr_6;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastAttr_6() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5, ___lastAttr_6)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_lastAttr_6() const { return ___lastAttr_6; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_lastAttr_6() { return &___lastAttr_6; }
	inline void set_lastAttr_6(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___lastAttr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastAttr_6), (void*)value);
	}
};

struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	RuntimeObject* ___emptySequence_4;

public:
	inline static int32_t get_offset_of_emptySequence_4() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields, ___emptySequence_4)); }
	inline RuntimeObject* get_emptySequence_4() const { return ___emptySequence_4; }
	inline RuntimeObject** get_address_of_emptySequence_4() { return &___emptySequence_4; }
	inline void set_emptySequence_4(RuntimeObject* value)
	{
		___emptySequence_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptySequence_4), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
struct XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73  : public XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute> MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::value
	XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * ___value_17;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73, ___value_17)); }
	inline XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * get_value_17() const { return ___value_17; }
	inline XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor
struct XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959  : public XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::value
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * ___value_17;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959, ___value_17)); }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * get_value_17() const { return ___value_17; }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor
struct XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818  : public XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::value
	XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * ___value_17;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818, ___value_17)); }
	inline XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * get_value_17() const { return ___value_17; }
	inline XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor
struct XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6  : public XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::value
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * ___value_17;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6, ___value_17)); }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * get_value_17() const { return ___value_17; }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
struct XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F  : public XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF
{
public:
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_17;

public:
	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F, ___element_17)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_17() const { return ___element_17; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor
struct XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9  : public XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF
{
public:
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_17;

public:
	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9, ___element_17)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_17() const { return ___element_17; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_17), (void*)value);
	}
};


// System.Xml.Linq.XObjectChangeEventArgs
struct XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Xml.Linq.XObjectChange System.Xml.Linq.XObjectChangeEventArgs::objectChange
	int32_t ___objectChange_1;

public:
	inline static int32_t get_offset_of_objectChange_1() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352, ___objectChange_1)); }
	inline int32_t get_objectChange_1() const { return ___objectChange_1; }
	inline int32_t* get_address_of_objectChange_1() { return &___objectChange_1; }
	inline void set_objectChange_1(int32_t value)
	{
		___objectChange_1 = value;
	}
};

struct XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields
{
public:
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Add
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Add_2;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Remove
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Remove_3;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Name
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Name_4;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Value
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Value_5;

public:
	inline static int32_t get_offset_of_Add_2() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Add_2)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Add_2() const { return ___Add_2; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Add_2() { return &___Add_2; }
	inline void set_Add_2(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Add_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Add_2), (void*)value);
	}

	inline static int32_t get_offset_of_Remove_3() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Remove_3)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Remove_3() const { return ___Remove_3; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Remove_3() { return &___Remove_3; }
	inline void set_Remove_3(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Remove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Remove_3), (void*)value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Name_4)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Name_4() const { return ___Name_4; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Value_5)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Value_5() const { return ___Value_5; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_5), (void*)value);
	}
};


// System.Xml.Schema.XmlSchema
struct XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA  : public XmlSchemaObject_tD14BD548E370305745B6E1CAAF2572F1DBC7F3D3
{
public:
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::attributeFormDefault
	int32_t ___attributeFormDefault_6;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::elementFormDefault
	int32_t ___elementFormDefault_7;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::blockDefault
	int32_t ___blockDefault_8;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::finalDefault
	int32_t ___finalDefault_9;
	// System.String System.Xml.Schema.XmlSchema::targetNs
	String_t* ___targetNs_10;
	// System.String System.Xml.Schema.XmlSchema::version
	String_t* ___version_11;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::includes
	XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 * ___includes_12;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::items
	XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 * ___items_13;
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_14;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchema::moreAttributes
	XmlAttributeU5BU5D_tB0898679563E52C130FE9EE5ECE3B3490570A7B2* ___moreAttributes_15;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiled
	bool ___isCompiled_16;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiledBySet
	bool ___isCompiledBySet_17;
	// System.Boolean System.Xml.Schema.XmlSchema::isPreprocessed
	bool ___isPreprocessed_18;
	// System.Boolean System.Xml.Schema.XmlSchema::isRedefined
	bool ___isRedefined_19;
	// System.Int32 System.Xml.Schema.XmlSchema::errorCount
	int32_t ___errorCount_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributes
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___attributes_21;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributeGroups
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___attributeGroups_22;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::elements
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___elements_23;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::types
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___types_24;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::groups
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___groups_25;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::notations
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___notations_26;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::identityConstraints
	XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * ___identityConstraints_27;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchema::importedSchemas
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___importedSchemas_29;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchema::importedNamespaces
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___importedNamespaces_30;
	// System.Int32 System.Xml.Schema.XmlSchema::schemaId
	int32_t ___schemaId_31;
	// System.Uri System.Xml.Schema.XmlSchema::baseUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri_32;
	// System.Boolean System.Xml.Schema.XmlSchema::isChameleon
	bool ___isChameleon_33;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchema::ids
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___ids_34;
	// System.Xml.XmlDocument System.Xml.Schema.XmlSchema::document
	XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * ___document_35;

public:
	inline static int32_t get_offset_of_attributeFormDefault_6() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___attributeFormDefault_6)); }
	inline int32_t get_attributeFormDefault_6() const { return ___attributeFormDefault_6; }
	inline int32_t* get_address_of_attributeFormDefault_6() { return &___attributeFormDefault_6; }
	inline void set_attributeFormDefault_6(int32_t value)
	{
		___attributeFormDefault_6 = value;
	}

	inline static int32_t get_offset_of_elementFormDefault_7() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___elementFormDefault_7)); }
	inline int32_t get_elementFormDefault_7() const { return ___elementFormDefault_7; }
	inline int32_t* get_address_of_elementFormDefault_7() { return &___elementFormDefault_7; }
	inline void set_elementFormDefault_7(int32_t value)
	{
		___elementFormDefault_7 = value;
	}

	inline static int32_t get_offset_of_blockDefault_8() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___blockDefault_8)); }
	inline int32_t get_blockDefault_8() const { return ___blockDefault_8; }
	inline int32_t* get_address_of_blockDefault_8() { return &___blockDefault_8; }
	inline void set_blockDefault_8(int32_t value)
	{
		___blockDefault_8 = value;
	}

	inline static int32_t get_offset_of_finalDefault_9() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___finalDefault_9)); }
	inline int32_t get_finalDefault_9() const { return ___finalDefault_9; }
	inline int32_t* get_address_of_finalDefault_9() { return &___finalDefault_9; }
	inline void set_finalDefault_9(int32_t value)
	{
		___finalDefault_9 = value;
	}

	inline static int32_t get_offset_of_targetNs_10() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___targetNs_10)); }
	inline String_t* get_targetNs_10() const { return ___targetNs_10; }
	inline String_t** get_address_of_targetNs_10() { return &___targetNs_10; }
	inline void set_targetNs_10(String_t* value)
	{
		___targetNs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetNs_10), (void*)value);
	}

	inline static int32_t get_offset_of_version_11() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___version_11)); }
	inline String_t* get_version_11() const { return ___version_11; }
	inline String_t** get_address_of_version_11() { return &___version_11; }
	inline void set_version_11(String_t* value)
	{
		___version_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_11), (void*)value);
	}

	inline static int32_t get_offset_of_includes_12() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___includes_12)); }
	inline XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 * get_includes_12() const { return ___includes_12; }
	inline XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 ** get_address_of_includes_12() { return &___includes_12; }
	inline void set_includes_12(XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 * value)
	{
		___includes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___includes_12), (void*)value);
	}

	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___items_13)); }
	inline XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 * get_items_13() const { return ___items_13; }
	inline XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(XmlSchemaObjectCollection_t2E22260F9979EB3890D8CB09473963FE616BF931 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_13), (void*)value);
	}

	inline static int32_t get_offset_of_id_14() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___id_14)); }
	inline String_t* get_id_14() const { return ___id_14; }
	inline String_t** get_address_of_id_14() { return &___id_14; }
	inline void set_id_14(String_t* value)
	{
		___id_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_14), (void*)value);
	}

	inline static int32_t get_offset_of_moreAttributes_15() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___moreAttributes_15)); }
	inline XmlAttributeU5BU5D_tB0898679563E52C130FE9EE5ECE3B3490570A7B2* get_moreAttributes_15() const { return ___moreAttributes_15; }
	inline XmlAttributeU5BU5D_tB0898679563E52C130FE9EE5ECE3B3490570A7B2** get_address_of_moreAttributes_15() { return &___moreAttributes_15; }
	inline void set_moreAttributes_15(XmlAttributeU5BU5D_tB0898679563E52C130FE9EE5ECE3B3490570A7B2* value)
	{
		___moreAttributes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moreAttributes_15), (void*)value);
	}

	inline static int32_t get_offset_of_isCompiled_16() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___isCompiled_16)); }
	inline bool get_isCompiled_16() const { return ___isCompiled_16; }
	inline bool* get_address_of_isCompiled_16() { return &___isCompiled_16; }
	inline void set_isCompiled_16(bool value)
	{
		___isCompiled_16 = value;
	}

	inline static int32_t get_offset_of_isCompiledBySet_17() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___isCompiledBySet_17)); }
	inline bool get_isCompiledBySet_17() const { return ___isCompiledBySet_17; }
	inline bool* get_address_of_isCompiledBySet_17() { return &___isCompiledBySet_17; }
	inline void set_isCompiledBySet_17(bool value)
	{
		___isCompiledBySet_17 = value;
	}

	inline static int32_t get_offset_of_isPreprocessed_18() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___isPreprocessed_18)); }
	inline bool get_isPreprocessed_18() const { return ___isPreprocessed_18; }
	inline bool* get_address_of_isPreprocessed_18() { return &___isPreprocessed_18; }
	inline void set_isPreprocessed_18(bool value)
	{
		___isPreprocessed_18 = value;
	}

	inline static int32_t get_offset_of_isRedefined_19() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___isRedefined_19)); }
	inline bool get_isRedefined_19() const { return ___isRedefined_19; }
	inline bool* get_address_of_isRedefined_19() { return &___isRedefined_19; }
	inline void set_isRedefined_19(bool value)
	{
		___isRedefined_19 = value;
	}

	inline static int32_t get_offset_of_errorCount_20() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___errorCount_20)); }
	inline int32_t get_errorCount_20() const { return ___errorCount_20; }
	inline int32_t* get_address_of_errorCount_20() { return &___errorCount_20; }
	inline void set_errorCount_20(int32_t value)
	{
		___errorCount_20 = value;
	}

	inline static int32_t get_offset_of_attributes_21() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___attributes_21)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_attributes_21() const { return ___attributes_21; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_attributes_21() { return &___attributes_21; }
	inline void set_attributes_21(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___attributes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_21), (void*)value);
	}

	inline static int32_t get_offset_of_attributeGroups_22() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___attributeGroups_22)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_attributeGroups_22() const { return ___attributeGroups_22; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_attributeGroups_22() { return &___attributeGroups_22; }
	inline void set_attributeGroups_22(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___attributeGroups_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeGroups_22), (void*)value);
	}

	inline static int32_t get_offset_of_elements_23() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___elements_23)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_elements_23() const { return ___elements_23; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_elements_23() { return &___elements_23; }
	inline void set_elements_23(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___elements_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elements_23), (void*)value);
	}

	inline static int32_t get_offset_of_types_24() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___types_24)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_types_24() const { return ___types_24; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_types_24() { return &___types_24; }
	inline void set_types_24(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___types_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_24), (void*)value);
	}

	inline static int32_t get_offset_of_groups_25() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___groups_25)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_groups_25() const { return ___groups_25; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_groups_25() { return &___groups_25; }
	inline void set_groups_25(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___groups_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groups_25), (void*)value);
	}

	inline static int32_t get_offset_of_notations_26() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___notations_26)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_notations_26() const { return ___notations_26; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_notations_26() { return &___notations_26; }
	inline void set_notations_26(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___notations_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notations_26), (void*)value);
	}

	inline static int32_t get_offset_of_identityConstraints_27() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___identityConstraints_27)); }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * get_identityConstraints_27() const { return ___identityConstraints_27; }
	inline XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA ** get_address_of_identityConstraints_27() { return &___identityConstraints_27; }
	inline void set_identityConstraints_27(XmlSchemaObjectTable_tFCEF8D48B790CE4EE4A7E4DCD54747B789A61AAA * value)
	{
		___identityConstraints_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identityConstraints_27), (void*)value);
	}

	inline static int32_t get_offset_of_importedSchemas_29() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___importedSchemas_29)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_importedSchemas_29() const { return ___importedSchemas_29; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_importedSchemas_29() { return &___importedSchemas_29; }
	inline void set_importedSchemas_29(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___importedSchemas_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___importedSchemas_29), (void*)value);
	}

	inline static int32_t get_offset_of_importedNamespaces_30() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___importedNamespaces_30)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_importedNamespaces_30() const { return ___importedNamespaces_30; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_importedNamespaces_30() { return &___importedNamespaces_30; }
	inline void set_importedNamespaces_30(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___importedNamespaces_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___importedNamespaces_30), (void*)value);
	}

	inline static int32_t get_offset_of_schemaId_31() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___schemaId_31)); }
	inline int32_t get_schemaId_31() const { return ___schemaId_31; }
	inline int32_t* get_address_of_schemaId_31() { return &___schemaId_31; }
	inline void set_schemaId_31(int32_t value)
	{
		___schemaId_31 = value;
	}

	inline static int32_t get_offset_of_baseUri_32() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___baseUri_32)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_baseUri_32() const { return ___baseUri_32; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_baseUri_32() { return &___baseUri_32; }
	inline void set_baseUri_32(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___baseUri_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseUri_32), (void*)value);
	}

	inline static int32_t get_offset_of_isChameleon_33() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___isChameleon_33)); }
	inline bool get_isChameleon_33() const { return ___isChameleon_33; }
	inline bool* get_address_of_isChameleon_33() { return &___isChameleon_33; }
	inline void set_isChameleon_33(bool value)
	{
		___isChameleon_33 = value;
	}

	inline static int32_t get_offset_of_ids_34() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___ids_34)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_ids_34() const { return ___ids_34; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_ids_34() { return &___ids_34; }
	inline void set_ids_34(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___ids_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ids_34), (void*)value);
	}

	inline static int32_t get_offset_of_document_35() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA, ___document_35)); }
	inline XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * get_document_35() const { return ___document_35; }
	inline XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F ** get_address_of_document_35() { return &___document_35; }
	inline void set_document_35(XmlDocument_t513899C58F800C43E8D78C0B72BD18C2C036233F * value)
	{
		___document_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___document_35), (void*)value);
	}
};

struct XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA_StaticFields
{
public:
	// System.Int32 System.Xml.Schema.XmlSchema::globalIdCounter
	int32_t ___globalIdCounter_28;

public:
	inline static int32_t get_offset_of_globalIdCounter_28() { return static_cast<int32_t>(offsetof(XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA_StaticFields, ___globalIdCounter_28)); }
	inline int32_t get_globalIdCounter_28() const { return ___globalIdCounter_28; }
	inline int32_t* get_address_of_globalIdCounter_28() { return &___globalIdCounter_28; }
	inline void set_globalIdCounter_28(int32_t value)
	{
		___globalIdCounter_28 = value;
	}
};


// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::useAsync
	bool ___useAsync_0;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_1;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDecl
	bool ___omitXmlDecl_2;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_3;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_4;
	// System.Xml.TriState System.Xml.XmlWriterSettings::indent
	int32_t ___indent_5;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_8;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::namespaceHandling
	int32_t ___namespaceHandling_9;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformanceLevel
	int32_t ___conformanceLevel_10;
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_11;
	// System.Boolean System.Xml.XmlWriterSettings::writeEndDocumentOnClose
	bool ___writeEndDocumentOnClose_12;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_13;
	// System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> System.Xml.XmlWriterSettings::cdataSections
	List_1_t3C367DB0980625D829CD027696F8FA0EA0C60B2D * ___cdataSections_14;
	// System.Boolean System.Xml.XmlWriterSettings::doNotEscapeUriAttributes
	bool ___doNotEscapeUriAttributes_15;
	// System.Boolean System.Xml.XmlWriterSettings::mergeCDataSections
	bool ___mergeCDataSections_16;
	// System.String System.Xml.XmlWriterSettings::mediaType
	String_t* ___mediaType_17;
	// System.String System.Xml.XmlWriterSettings::docTypeSystem
	String_t* ___docTypeSystem_18;
	// System.String System.Xml.XmlWriterSettings::docTypePublic
	String_t* ___docTypePublic_19;
	// System.Xml.XmlStandalone System.Xml.XmlWriterSettings::standalone
	int32_t ___standalone_20;
	// System.Boolean System.Xml.XmlWriterSettings::autoXmlDecl
	bool ___autoXmlDecl_21;
	// System.Boolean System.Xml.XmlWriterSettings::isReadOnly
	bool ___isReadOnly_22;

public:
	inline static int32_t get_offset_of_useAsync_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___useAsync_0)); }
	inline bool get_useAsync_0() const { return ___useAsync_0; }
	inline bool* get_address_of_useAsync_0() { return &___useAsync_0; }
	inline void set_useAsync_0(bool value)
	{
		___useAsync_0 = value;
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___encoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_1() const { return ___encoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_omitXmlDecl_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___omitXmlDecl_2)); }
	inline bool get_omitXmlDecl_2() const { return ___omitXmlDecl_2; }
	inline bool* get_address_of_omitXmlDecl_2() { return &___omitXmlDecl_2; }
	inline void set_omitXmlDecl_2(bool value)
	{
		___omitXmlDecl_2 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___newLineHandling_3)); }
	inline int32_t get_newLineHandling_3() const { return ___newLineHandling_3; }
	inline int32_t* get_address_of_newLineHandling_3() { return &___newLineHandling_3; }
	inline void set_newLineHandling_3(int32_t value)
	{
		___newLineHandling_3 = value;
	}

	inline static int32_t get_offset_of_newLineChars_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___newLineChars_4)); }
	inline String_t* get_newLineChars_4() const { return ___newLineChars_4; }
	inline String_t** get_address_of_newLineChars_4() { return &___newLineChars_4; }
	inline void set_newLineChars_4(String_t* value)
	{
		___newLineChars_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newLineChars_4), (void*)value);
	}

	inline static int32_t get_offset_of_indent_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___indent_5)); }
	inline int32_t get_indent_5() const { return ___indent_5; }
	inline int32_t* get_address_of_indent_5() { return &___indent_5; }
	inline void set_indent_5(int32_t value)
	{
		___indent_5 = value;
	}

	inline static int32_t get_offset_of_indentChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___indentChars_6)); }
	inline String_t* get_indentChars_6() const { return ___indentChars_6; }
	inline String_t** get_address_of_indentChars_6() { return &___indentChars_6; }
	inline void set_indentChars_6(String_t* value)
	{
		___indentChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indentChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_closeOutput_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___closeOutput_8)); }
	inline bool get_closeOutput_8() const { return ___closeOutput_8; }
	inline bool* get_address_of_closeOutput_8() { return &___closeOutput_8; }
	inline void set_closeOutput_8(bool value)
	{
		___closeOutput_8 = value;
	}

	inline static int32_t get_offset_of_namespaceHandling_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___namespaceHandling_9)); }
	inline int32_t get_namespaceHandling_9() const { return ___namespaceHandling_9; }
	inline int32_t* get_address_of_namespaceHandling_9() { return &___namespaceHandling_9; }
	inline void set_namespaceHandling_9(int32_t value)
	{
		___namespaceHandling_9 = value;
	}

	inline static int32_t get_offset_of_conformanceLevel_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___conformanceLevel_10)); }
	inline int32_t get_conformanceLevel_10() const { return ___conformanceLevel_10; }
	inline int32_t* get_address_of_conformanceLevel_10() { return &___conformanceLevel_10; }
	inline void set_conformanceLevel_10(int32_t value)
	{
		___conformanceLevel_10 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_11() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___checkCharacters_11)); }
	inline bool get_checkCharacters_11() const { return ___checkCharacters_11; }
	inline bool* get_address_of_checkCharacters_11() { return &___checkCharacters_11; }
	inline void set_checkCharacters_11(bool value)
	{
		___checkCharacters_11 = value;
	}

	inline static int32_t get_offset_of_writeEndDocumentOnClose_12() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___writeEndDocumentOnClose_12)); }
	inline bool get_writeEndDocumentOnClose_12() const { return ___writeEndDocumentOnClose_12; }
	inline bool* get_address_of_writeEndDocumentOnClose_12() { return &___writeEndDocumentOnClose_12; }
	inline void set_writeEndDocumentOnClose_12(bool value)
	{
		___writeEndDocumentOnClose_12 = value;
	}

	inline static int32_t get_offset_of_outputMethod_13() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___outputMethod_13)); }
	inline int32_t get_outputMethod_13() const { return ___outputMethod_13; }
	inline int32_t* get_address_of_outputMethod_13() { return &___outputMethod_13; }
	inline void set_outputMethod_13(int32_t value)
	{
		___outputMethod_13 = value;
	}

	inline static int32_t get_offset_of_cdataSections_14() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___cdataSections_14)); }
	inline List_1_t3C367DB0980625D829CD027696F8FA0EA0C60B2D * get_cdataSections_14() const { return ___cdataSections_14; }
	inline List_1_t3C367DB0980625D829CD027696F8FA0EA0C60B2D ** get_address_of_cdataSections_14() { return &___cdataSections_14; }
	inline void set_cdataSections_14(List_1_t3C367DB0980625D829CD027696F8FA0EA0C60B2D * value)
	{
		___cdataSections_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cdataSections_14), (void*)value);
	}

	inline static int32_t get_offset_of_doNotEscapeUriAttributes_15() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___doNotEscapeUriAttributes_15)); }
	inline bool get_doNotEscapeUriAttributes_15() const { return ___doNotEscapeUriAttributes_15; }
	inline bool* get_address_of_doNotEscapeUriAttributes_15() { return &___doNotEscapeUriAttributes_15; }
	inline void set_doNotEscapeUriAttributes_15(bool value)
	{
		___doNotEscapeUriAttributes_15 = value;
	}

	inline static int32_t get_offset_of_mergeCDataSections_16() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___mergeCDataSections_16)); }
	inline bool get_mergeCDataSections_16() const { return ___mergeCDataSections_16; }
	inline bool* get_address_of_mergeCDataSections_16() { return &___mergeCDataSections_16; }
	inline void set_mergeCDataSections_16(bool value)
	{
		___mergeCDataSections_16 = value;
	}

	inline static int32_t get_offset_of_mediaType_17() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___mediaType_17)); }
	inline String_t* get_mediaType_17() const { return ___mediaType_17; }
	inline String_t** get_address_of_mediaType_17() { return &___mediaType_17; }
	inline void set_mediaType_17(String_t* value)
	{
		___mediaType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaType_17), (void*)value);
	}

	inline static int32_t get_offset_of_docTypeSystem_18() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___docTypeSystem_18)); }
	inline String_t* get_docTypeSystem_18() const { return ___docTypeSystem_18; }
	inline String_t** get_address_of_docTypeSystem_18() { return &___docTypeSystem_18; }
	inline void set_docTypeSystem_18(String_t* value)
	{
		___docTypeSystem_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___docTypeSystem_18), (void*)value);
	}

	inline static int32_t get_offset_of_docTypePublic_19() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___docTypePublic_19)); }
	inline String_t* get_docTypePublic_19() const { return ___docTypePublic_19; }
	inline String_t** get_address_of_docTypePublic_19() { return &___docTypePublic_19; }
	inline void set_docTypePublic_19(String_t* value)
	{
		___docTypePublic_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___docTypePublic_19), (void*)value);
	}

	inline static int32_t get_offset_of_standalone_20() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___standalone_20)); }
	inline int32_t get_standalone_20() const { return ___standalone_20; }
	inline int32_t* get_address_of_standalone_20() { return &___standalone_20; }
	inline void set_standalone_20(int32_t value)
	{
		___standalone_20 = value;
	}

	inline static int32_t get_offset_of_autoXmlDecl_21() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___autoXmlDecl_21)); }
	inline bool get_autoXmlDecl_21() const { return ___autoXmlDecl_21; }
	inline bool* get_address_of_autoXmlDecl_21() { return &___autoXmlDecl_21; }
	inline void set_autoXmlDecl_21(bool value)
	{
		___autoXmlDecl_21 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_22() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8, ___isReadOnly_22)); }
	inline bool get_isReadOnly_22() const { return ___isReadOnly_22; }
	inline bool* get_address_of_isReadOnly_22() { return &___isReadOnly_22; }
	inline void set_isReadOnly_22(bool value)
	{
		___isReadOnly_22 = value;
	}
};


// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>
struct EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>
struct ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>
struct ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>
struct Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XAttribute>
struct Func_3_t470E20942568C704061B02E02AEA7628339BF3C5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XElement>
struct Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0  : public MulticastDelegate_t
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E  : public NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339
{
public:

public:
};


// Unity.ThrowStub
struct ThrowStub_t21447C6AE98553DD7B5605550AE707DD0C25D42D  : public ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Xml.Linq.XElement[]
struct XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * m_Items[1];

public:
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_pinvoke(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_pinvoke_back(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke& marshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled);
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_pinvoke_cleanup(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_com(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_com_back(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com& marshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled);
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_com_cleanup(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com& marshaled);

// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2__ctor_m48AC1CCE2666109030688C2AA2C0D9799D23CB53_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, String_t* ___name0, const RuntimeMethod* method);
// T System.Xml.Linq.XDocument::GetFirstNode<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XDocument_GetFirstNode_TisRuntimeObject_m8300E60A48E684A9400291C60AFC5FCFF111277E_gshared (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mD14F35586915F2F8014526C264BEA9D1FFAB667D_gshared (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Object>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_gshared (XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8 * __this, Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<T>>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeferredAxis_1__ctor_mF31626FBBCEA80BD14E4AC5E58F7A7F5BF628031_gshared (XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B * __this, Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractKeyDelegate__ctor_m9C7C3D1E55DE1C291769C69F8D87C6806F671A44_gshared (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// T System.Xml.Linq.XObject::Annotation<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XObject_Annotation_TisRuntimeObject_mD1FA409E89E7632D6C5657AA960B11B2C3B59403_gshared (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> System.Xml.Linq.XObject::Annotations<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObject_Annotations_TisRuntimeObject_m9FA08A9F3CCDD8CEA3A0653A1607D5EC258BDD4E_gshared (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::.ctor(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter__ctor_mAF42701DBC7426DB8FF6F3C19F37C6A5B6E6F798 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::PushAncestors(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_PushAncestors_mAA5058229B36969BAD86E2332E5B85EF93C10DAD (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteStartElement(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteStartElement_m09181D51C5C38A1BB15B41D85A88FE6B8A0BDBFF (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteEndElement_mB6853DBC6AC64F10185207107EBE974AB5A274CA (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteFullEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteFullEndElement_mAC1EC5BF80311A650B92992C4A9C689811A782F5 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::WriteElement(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteElement_mCA724B1F81D4D096CA8A0A3BC3B38B8AAB7A6E7C (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.NamespaceResolver::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NamespaceResolver_GetPrefixOfNamespace_m69FAACB8B514D2F3C1E00473B9EC5A7B169F5C0F (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method);
// System.String System.Xml.Linq.ElementWriter::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ElementWriter_GetPrefixOfNamespace_mFE90F844D9421A68634B9AF38ACBA1D127269F26 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XAttribute::get_IsNamespaceDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XAttribute_get_IsNamespaceDeclaration_mE2D54BB132D0A554FA334BDAF92D5664E2BF50EA (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XName::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6 (String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::AddFirst(System.String,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_AddFirst_m7C861D08943FFBAA33EF102312B96499D73CF289 (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, String_t* ___prefix0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::PushScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_PushScope_m6A174DFEE5F6E262E8B050EAE30CD935ED3FD468 (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::Add(System.String,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_Add_mA16774DA6B6A470EC2416849D659179275D28F81 (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, String_t* ___prefix0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.ElementWriter::PushElement(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_PushElement_mD74364B14FDE31D74A6DA824F21EF009142EBAC5 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver::PopScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_PopScope_m48BFA95631D7F0301120439B128FF8F7A16C261B (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XName::get_Namespace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XName_get_Namespace_m27DDB135C04C90BB031CA5ECC7B3436A31423488_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m7ABADBF13E8DD19BD7F3970AD124DEF3441259CE (XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method);
// System.Void System.Xml.Linq.LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_m8E8D7A480E7C181E9B65DC98003BC166AEF5AB38 (LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7 (String_t* ___expandedName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceCache::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995 (NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * __this, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceDeclaration__ctor_m86ED6350C67E1DA1AAD7F9EAB3D460F12A9EE180 (NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m627B7273A2428AFBCF4C41D574196135907A582D (String_t* ___s0, const RuntimeMethod* method);
// System.String System.Xml.Linq.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750 (String_t* ___name0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB (const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05 (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject__ctor_mEBF29FD8B8171A6AE6D42BA886E7BFAE31BE563D (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___left0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___right1, const RuntimeMethod* method);
// System.String System.Xml.Linq.XContainer::GetStringValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::ValidateAttribute(System.Xml.Linq.XName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::NotifyChanging(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___e1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::NotifyChanged(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___e1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriterSettings__ctor_m5C6B99808D1C7B691C0ED4DF32BD3E1C39C4B94D (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriterSettings_set_ConformanceLevel_m8BF0325F14280448F6099A9E5A2FC9C0896656BC (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.IO.TextWriter,System.Xml.XmlWriterSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * XmlWriter_Create_m283780CB1FF2D036894014AEA319A26829CD599A (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___output0, XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * ___settings1, const RuntimeMethod* method);
// System.String System.Xml.Linq.XAttribute::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttribute_GetPrefixOfNamespace_mA63C230B534D3AE6BB47161C68D335D729FE8201 (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_mF9843F62F43762B9E43BBAF8DA634CFBBA393C8E (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, const RuntimeMethod* method);
// System.String System.Xml.Linq.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0 (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XAttribute,System.String>::.ctor(System.String)
inline void XPropertyDescriptor_2__ctor_m0259FC3208B63C7913666C369BFC65E2880B0A5D (XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	((  void (*) (XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6 *, String_t*, const RuntimeMethod*))XPropertyDescriptor_2__ctor_m48AC1CCE2666109030688C2AA2C0D9799D23CB53_gshared)(__this, ___name0, method);
}
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_set_Value_m62D39A9815CFEE24A923B8381091387F13114ABE (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XText::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XText::.ctor(System.Xml.Linq.XText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText__ctor_mC0BAC0C89D83D1AC431C1E0CC146752EAFDA29AF (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, XText_t14C82CC828138F000842E6611CBE05281260A3FC * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XCData::.ctor(System.Xml.Linq.XCData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData__ctor_m7FC6A1CFB551D65D4411EBFE077A4936037E3FFF (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XComment::.ctor(System.Xml.Linq.XComment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment__ctor_m293F320541A1F11249027B6C8D623462AD383AA8 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AppendNodeSkipNotify(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AppendNodeSkipNotify_m7E11E884F1504058BAB299925A1BD9092A7E0CF3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::SkipNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_SkipNotify_m28058EBFF963451EFC0AAF9B7DD709B16D8F9895 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddContentSkipNotify(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddContentSkipNotify_m85827FD1365976E30A8EE5498B0E20C46A9D266B (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, RuntimeObject * ___content0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddNode(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddNode_m3B49E506A447F39245C198F05C0D7E07B2AFAAF0 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddString_m838F5C7418839B65CFAAEE10428961699F67C704 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XStreamingElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_m3AE89E314A40AEB1D13944480CD5B30CB60C9D78 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_Add_m5FBA597F4E81D576BA717343AFC8DCB2C1404680 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, RuntimeObject * ___content0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetDescendants(System.Xml.Linq.XName,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetDescendants_m26609CCC57956A976879AEE736EEF7533CC3EFB1 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, bool ___self1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XName::op_Inequality(System.Xml.Linq.XName,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_op_Inequality_m106365E2539393767EB11F262FCF6E8BAEEA4B1A (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___left0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___right1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::get_EmptySequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_get_EmptySequence_mE19D827ECE2151A7207F1336A51D2136555ED3E0 (const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetElements(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer/<Nodes>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNodesU3Ed__18__ctor_mB2DCCB80E37BA4A30B6F955C4F3F0CF4B81896DE (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::RemoveNodesSkipNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNodesSkipNotify_m2F8AE552A8DFB329CF8B49315E262A2242F76ACD (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::ConvertTextToNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ConvertTextToNode_m814277C7AD70A979F8FC62CF38682F02409A7160 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddNodeSkipNotify(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AddStringSkipNotify(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddStringSkipNotify_m549907826B0971C84089F41A99115AB8791A3D2E (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::AppendNode(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XText::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XText_get_Value_m9597869DABAA9D2BF8275CEDB4A6A85D46FF6BE5_inline (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XText::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText_set_Value_m9CF8B47091F98CD190A82324BA437C1F29F4C8CE (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m1139F2A62832E0EF1D7C214ED15D614988F5FD3F (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, int32_t ___dateTimeOption1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39__ctor_mD3D3B2DF62F121AF73CA827AE17E2D8EA88840FA (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m51BE800D94C00383F928CCAFB3D0CA3A3F79250F (double ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m0643D6F180F5822924A75CDCFBF4FC62B69AF4DC (float ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mF0F35219CB0F55A48EAF67875060E3BA68E122EB (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mC4A313B9407202F12B69C5AEFE53EF335C8D6671 (bool ___value0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XContainer::GetDateTimeString(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XContainer_GetDateTimeString_mD58B479E6A678F25B000540B0683BDEBBAC2CFEC (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m66654A257CAF79B16B3D1F8DA454DD585E0C3C2F (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mA49BF4E7E48322EFA7176A913BB2438F46B545C3 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_m7C010BE83763396D50EB4E51C1B21A1DDDE258B2 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::AppendAttributeSkipNotify(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData__ctor_m9FA9F20CF152A7C7EEC9320F2FCD3F2F036C8F2E (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment__ctor_mD1594490E6706E752D9A5C9B748CF84AEC2B9B22 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m49A9FD814CED60CDF313649D7529DBE0AC8D4A7B (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.IDtdInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_m92F5146E20DD2E0CFA9A8A8DFF85D27050B314D5 (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, RuntimeObject* ___dtdInfo4, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___r0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::SetBaseUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_SetBaseUri_m166BE057D57AACC044AB91ADE70D36408FD4ED27 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, String_t* ___baseUri0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::SetLineInfo(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::SetEndElementLineInfo(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_SetEndElementLineInfo_m4AF7794890F6E0D65E87B8F967E9A3F6B13B41D5 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XObject::get_HasBaseUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_get_HasBaseUri_m495D449FCEEAB86FEFD3119310D1D1C7F7271C5A (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XObject::get_BaseUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObject_get_BaseUri_m130E3178739EEEB478D7826AF5341937EBCA4E97 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer__ctor_m3C7E61824CB53C8FA18BC4226C6C0BA4BAE3B646 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer__ctor_mA6A69DAB1077038C297FBE6B4697DD40AB426ED2 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclaration__ctor_mBCB4F6ED791E5154C266DBC138B2647309D9C3AE (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * ___other0, const RuntimeMethod* method);
// T System.Xml.Linq.XDocument::GetFirstNode<System.Xml.Linq.XElement>()
inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * XDocument_GetFirstNode_TisXElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_mD5651D2E3E0A617D9638704AC58489F346DE4CCA (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method)
{
	return ((  XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * (*) (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF *, const RuntimeMethod*))XDocument_GetFirstNode_TisRuntimeObject_m8300E60A48E684A9400291C60AFC5FCFF111277E_gshared)(__this, method);
}
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_m15EF1F74D2226D5CAE08BB9847949FBD2F63D967_inline (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_WriteContentTo_mFA062B17E987BA975BF8CC8022E15A5B9E903C96 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocument::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m35FD266D78A2F7C6BD941715B4EE65E86AF2E5A6 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocument::ValidateDocument(System.Xml.Linq.XNode,System.Xml.XmlNodeType,System.Xml.XmlNodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_ValidateDocument_mF01236248E0025F9F140CC29CC233395C4BB4B46 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___previous0, int32_t ___allowBefore1, int32_t ___allowAfter2, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XDocument::IsWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XDocument_IsWhitespace_mD58CA1E5A1CEE372FE68D01AEA18DD7A8A705420 (String_t* ___s0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyName_mE8CC32DC47699A3C92B6A948B123F1CDBC6141CD (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_m8DD9AEBE8CA7BEE73B9AE7D221DA238FB47724C3 (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.Xml.Linq.XDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_m4973BAC4702EF6EDA6B304CC74DD77F34B1EA51A (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___other0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::RemoveNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNodes_mD6CB5A36AAC9A8CF3381274D1BC94584DF4BEA52 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::GetAttributes(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_GetAttributes_m6E782BD24ECA27DDCDAA230F7C9F2A0EECC004ED (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XElement::GetNamespaceOfPrefixInScope(System.String,System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetNamespaceOfPrefixInScope_m976485B69E3219453A8A4412721F8C3C90D03A96 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, String_t* ___prefix0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___outOfScope1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::ReadElementFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_ReadElementFrom_mF82AFFF2679EAA2E7BD55E9C5D625A56FEBF06C3 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___r0, int32_t ___o1, const RuntimeMethod* method);
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::Attribute(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * XElement_Attribute_mE6D1589D13FFB71DA11EA7B41685C149D1E03AFD (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::AppendAttribute(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_AppendAttribute_m0DE1BE78518A9B191036D9142ACC5AC3D95DE169 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_m13B7B350DE7B5DDB8B55F222AA15066B66B149A6 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___other0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement/<GetAttributes>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesU3Ed__105__ctor_mB7C85FC764518096A1A8FB18A9C0453E6F540D6F (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___r0, int32_t ___o1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.LineInfoEndElementAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoEndElementAnnotation__ctor_mC681F34922255C61324B88EF7174034FB58C3887 (LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::AddAnnotation(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, RuntimeObject * ___annotation0, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Object>::.ctor(System.String)
inline void XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA (XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	((  void (*) (XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2 *, String_t*, const RuntimeMethod*))XPropertyDescriptor_2__ctor_m48AC1CCE2666109030688C2AA2C0D9799D23CB53_gshared)(__this, ___name0, method);
}
// System.Void System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XAttribute>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mCD13205634A300C35308CD8F65D67D87E15ABF36 (Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mD14F35586915F2F8014526C264BEA9D1FFAB667D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
inline void XDeferredSingleton_1__ctor_mDB1E83E535B37F685F4B4FC535D71250529C713D (XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * __this, Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method)
{
	((  void (*) (XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C *, Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 *, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *, const RuntimeMethod*))XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_gshared)(__this, ___func0, ___element1, ___name2, method);
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>::.ctor(System.String)
inline void XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2 (XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	((  void (*) (XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72 *, String_t*, const RuntimeMethod*))XPropertyDescriptor_2__ctor_m48AC1CCE2666109030688C2AA2C0D9799D23CB53_gshared)(__this, ___name0, method);
}
// System.Void System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0 (Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mD14F35586915F2F8014526C264BEA9D1FFAB667D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<T>>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
inline void XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD (XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * __this, Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method)
{
	((  void (*) (XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 *, Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E *, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *, const RuntimeMethod*))XDeferredAxis_1__ctor_mF31626FBBCEA80BD14E4AC5E58F7A7F5BF628031_gshared)(__this, ___func0, ___element1, ___name2, method);
}
// System.Void System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Xml.Linq.XElement>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mF8E2210F02D124C75E35C185BB1893FF6AF71ED1 (Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mD14F35586915F2F8014526C264BEA9D1FFAB667D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
inline void XDeferredSingleton_1__ctor_m4C8AA685D2F4D76F1710D3D9DCE142E24ECCCAE0 (XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * __this, Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method)
{
	((  void (*) (XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 *, Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 *, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *, const RuntimeMethod*))XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_gshared)(__this, ___func0, ___element1, ___name2, method);
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.String>::.ctor(System.String)
inline void XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E (XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	((  void (*) (XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF *, String_t*, const RuntimeMethod*))XPropertyDescriptor_2__ctor_m48AC1CCE2666109030688C2AA2C0D9799D23CB53_gshared)(__this, ___name0, method);
}
// System.String System.Xml.Linq.XElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_get_Value_mBD9F8869BF4F3865FEDED418854020E9AFF031FA (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XElement::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_set_Value_mA9BECC59BB17AA10589D484755309953F5289C0E (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Xml.Linq.XNode::ToString(System.Xml.Linq.SaveOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNode_ToString_mEE34D42DE1684C52D8D0E708ACFC70134BB86164 (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, int32_t ___options0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyNCName_m21986D07C46947592D5B6EC2114435AB92B9C942 (String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA (String_t* ___namespaceName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0 (const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_mD6F11DC42FDE78E7E8A58BC3D9E248E21BB37275 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Xml.Linq.XName>::.ctor(System.Object,System.IntPtr)
inline void ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE (ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C *, RuntimeObject *, intptr_t, const RuntimeMethod*))ExtractKeyDelegate__ctor_m9C7C3D1E55DE1C291769C69F8D87C6806F671A44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
inline void XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632 (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * __this, ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *, ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C *, int32_t, const RuntimeMethod*))XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared)(__this, ___extractKey0, ___capacity1, method);
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::EnsureNamespace(System.WeakReference&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___refNmsp0, String_t* ___namespaceName1, const RuntimeMethod* method);
// System.Boolean System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
inline bool XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697 (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** ___value3, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *, String_t*, int32_t, int32_t, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 **, const RuntimeMethod*))XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared)(__this, ___key0, ___index1, ___count2, ___value3, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XName::.ctor(System.Xml.Linq.XNamespace,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName__ctor_m08CA9A842644AFE1545DDFB3EA1BF011D797CE59 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, String_t* ___localName1, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>::Add(TValue)
inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___value0, const RuntimeMethod* method)
{
	return ((  XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * (*) (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *, const RuntimeMethod*))XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared)(__this, ___value0, method);
}
// System.Void System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.WeakReference>::.ctor(System.Object,System.IntPtr)
inline void ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A (ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F *, RuntimeObject *, intptr_t, const RuntimeMethod*))ExtractKeyDelegate__ctor_m9C7C3D1E55DE1C291769C69F8D87C6806F671A44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Xml.Linq.XHashtable`1<System.WeakReference>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
inline void XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940 (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * __this, ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *, ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F *, int32_t, const RuntimeMethod*))XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared)(__this, ___extractKey0, ___capacity1, method);
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.WeakReference>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
inline bool XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___value3, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *, String_t*, int32_t, int32_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared)(__this, ___key0, ___index1, ___count2, ___value3, method);
}
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xml_mF816E04DDC8ED562C6B6E71449706594EECCA55E (const RuntimeMethod* method);
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xmlns_m140AE4DD66BD99100AA9492D105D3B1383BC5112 (const RuntimeMethod* method);
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___namespaceName0, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// TValue System.Xml.Linq.XHashtable`1<System.WeakReference>::Add(TValue)
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * __this, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value0, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared)(__this, ___value0, method);
}
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Inequality_m075CAE6D2922DE14AB223F9C4C290E9BC478CD12 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XContainer::RemoveNode(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNode_m072810FCA68B5F31097CFF678F1CD8AB5B7940E5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method);
// System.Xml.Linq.SaveOptions System.Xml.Linq.XObject::GetSaveOptionsFromAnnotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObject_GetSaveOptionsFromAnnotations_m3DBE274F86C30B72962F8D9D76ABEA8E2E773D32 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method);
// System.String System.Xml.Linq.XNode::GetXmlString(System.Xml.Linq.SaveOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNode_GetXmlString_m430A1536E96B6502637DC174F04A9D8F330176E0 (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, int32_t ___o0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_OmitXmlDeclaration(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriterSettings_set_OmitXmlDeclaration_mA0F2B9373560089D66C3CE27EF33A13BD08CC70D (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_Indent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriterSettings_set_Indent_m0A9278F460BFDFE1B0D6EC2EFFE063A538BBC136 (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::get_NamespaceHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NamespaceHandling_mCD7FC91856DB537D043D22BB5DA22DDF01BADA9D_inline (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::set_NamespaceHandling(System.Xml.NamespaceHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlWriterSettings_set_NamespaceHandling_mFF6C1E11FD1F947E32F6420D7AEA35A9FC23790F (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, int32_t ___value0, const RuntimeMethod* method);
// T System.Xml.Linq.XObject::Annotation<System.Xml.Linq.BaseUriAnnotation>()
inline BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	return ((  BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * (*) (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *, const RuntimeMethod*))XObject_Annotation_TisRuntimeObject_mD1FA409E89E7632D6C5657AA960B11B2C3B59403_gshared)(__this, method);
}
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
inline void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared)(___array0, ___newSize1, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// T System.Xml.Linq.XObject::Annotation<System.Xml.Linq.LineInfoAnnotation>()
inline LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	return ((  LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * (*) (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *, const RuntimeMethod*))XObject_Annotation_TisRuntimeObject_mD1FA409E89E7632D6C5657AA960B11B2C3B59403_gshared)(__this, method);
}
// T System.Xml.Linq.XObject::Annotation<System.Xml.Linq.XObjectChangeAnnotation>()
inline XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	return ((  XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * (*) (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *, const RuntimeMethod*))XObject_Annotation_TisRuntimeObject_mD1FA409E89E7632D6C5657AA960B11B2C3B59403_gshared)(__this, method);
}
// System.Void System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *, RuntimeObject *, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.Xml.Linq.BaseUriAnnotation::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUriAnnotation__ctor_m73734683B4E9AABD14F9F4FC06456033579CA178 (BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * __this, String_t* ___baseUri0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> System.Xml.Linq.XObject::Annotations<System.Xml.Linq.XObjectChangeAnnotation>()
inline RuntimeObject* XObject_Annotations_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_m09E74E796184F84A1E52E541559F5A5C2CAABB02 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *, const RuntimeMethod*))XObject_Annotations_TisRuntimeObject_m9FA08A9F3CCDD8CEA3A0653A1607D5EC258BDD4E_gshared)(__this, method);
}
// System.Object System.Xml.Linq.XObject::Annotation(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XObject_Annotation_m95490F1AA8945BB8554BC5564CC9A8D9C174AA67 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObjectChangeEventArgs::.ctor(System.Xml.Linq.XObjectChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectChangeEventArgs__ctor_m4E78C62E79DA6E09176D8CC56E597F362B237A90 (XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * __this, int32_t ___objectChange0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XProcessingInstruction::ValidateName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction_ValidateName_m0EAC108733F1A398C88966D74AF9FFC4D7231E51 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.Xml.Linq.XProcessingInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_mFBD37F1027E57C2EB1BE94A0803BE86EC424BCE1 (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * ___other0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m9F2300A96D1F8CA7BB4DDADE1F630718371C9B7B (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m5985519113352CB9D6500FD7EE23018996093E8D (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method);
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XContainer_get_LastNode_m84D21983C67B305C490A685BC4021A767421D5CA (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer/<Nodes>d__18::System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNodesU3Ed__18_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_mA259982391A5A540537762C364DD61AED843ECF2 (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<GetAttributes>d__105::System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAttributesU3Ed__105_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m03BD96D593348C2CBF3918855158022493395620 (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA936123CC95891C43BE97A5A2C027C34DC213588 (U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m15CCD66750B13B56915EDD9658944F5209E2CCE8 (U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Descendants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Descendants_mE54252C8A4962CCFC6EFCE28556B5A26B0540EEC (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Descendants(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Descendants_m3556BD579EBD93ECEF4162510065F59FFED18F92 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD591C8948D9898A61CE71ECC65EECC0F2107D5AE (U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * __this, const RuntimeMethod* method);
// System.Xml.Linq.XElement System.Xml.Linq.XContainer::Element(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * XContainer_Element_mDD805465CD32F3FD06807CA9E34BBD976A554BB5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m78DE3DC76C1C27EB825CF6353F656A06E8C5F5DF (U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Elements_mE3525ED34CA3769624CB81CF4501C662FE824DB3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Elements(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Elements_m4989075D4083C5A851589B13832D5C5423B1F516 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m627B7273A2428AFBCF4C41D574196135907A582D (String_t* ___s0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_3^(int32_t)L_4)), (int32_t)((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void System.Xml.Linq.BaseUriAnnotation::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseUriAnnotation__ctor_m73734683B4E9AABD14F9F4FC06456033579CA178 (BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * __this, String_t* ___baseUri0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseUri0;
		__this->set_baseUri_0(L_0);
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


// Conversion methods for marshalling of: System.Xml.Linq.ElementWriter
IL2CPP_EXTERN_C void ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshal_pinvoke(const ElementWriter_t6D111ED288426979614A6213661C665262B12BAB& unmarshaled, ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL);
}
IL2CPP_EXTERN_C void ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshal_pinvoke_back(const ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_pinvoke& marshaled, ElementWriter_t6D111ED288426979614A6213661C665262B12BAB& unmarshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.ElementWriter
IL2CPP_EXTERN_C void ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshal_pinvoke_cleanup(ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: System.Xml.Linq.ElementWriter
IL2CPP_EXTERN_C void ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshal_com(const ElementWriter_t6D111ED288426979614A6213661C665262B12BAB& unmarshaled, ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_com& marshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL);
}
IL2CPP_EXTERN_C void ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshal_com_back(const ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_com& marshaled, ElementWriter_t6D111ED288426979614A6213661C665262B12BAB& unmarshaled)
{
	Exception_t* ___writer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'writer' of type 'ElementWriter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___writer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.ElementWriter
IL2CPP_EXTERN_C void ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshal_com_cleanup(ElementWriter_t6D111ED288426979614A6213661C665262B12BAB_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Linq.ElementWriter::.ctor(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter__ctor_mAF42701DBC7426DB8FF6F3C19F37C6A5B6E6F798 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		__this->set_writer_0(L_0);
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_1 = __this->get_address_of_resolver_1();
		il2cpp_codegen_initobj(L_1, sizeof(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B ));
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter__ctor_mAF42701DBC7426DB8FF6F3C19F37C6A5B6E6F798_AdjustorThunk (RuntimeObject * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter__ctor_mAF42701DBC7426DB8FF6F3C19F37C6A5B6E6F798(_thisAdjusted, ___writer0, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteElement(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteElement_mCA724B1F81D4D096CA8A0A3BC3B38B8AAB7A6E7C (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_0 = NULL;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___e0;
		ElementWriter_PushAncestors_mAA5058229B36969BAD86E2332E5B85EF93C10DAD((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, L_0, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = ___e0;
		V_0 = L_1;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = ___e0;
		V_1 = L_2;
	}

IL_000b:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = V_1;
		___e0 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_3, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_4 = ___e0;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_5 = ___e0;
		ElementWriter_WriteStartElement_m09181D51C5C38A1BB15B41D85A88FE6B8A0BDBFF((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, L_5, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_6 = ___e0;
		NullCheck(L_6);
		RuntimeObject * L_7 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_6)->get_content_3();
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		ElementWriter_WriteEndElement_mB6853DBC6AC64F10185207107EBE974AB5A274CA((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_002d:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_8 = ___e0;
		NullCheck(L_8);
		RuntimeObject * L_9 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_8)->get_content_3();
		V_2 = ((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		String_t* L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_11 = __this->get_writer_0();
		String_t* L_12 = V_2;
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_11, L_12);
		ElementWriter_WriteFullEndElement_mAC1EC5BF80311A650B92992C4A9C689811A782F5((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0050:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_13 = ___e0;
		NullCheck(L_13);
		RuntimeObject * L_14 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_13)->get_content_3();
		NullCheck(((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_14, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var)));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_15 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_14, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var))->get_next_2();
		V_1 = L_15;
		goto IL_000b;
	}

IL_0063:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_16 = V_1;
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_17 = __this->get_writer_0();
		NullCheck(L_16);
		VirtActionInvoker1< XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, L_16, L_17);
		goto IL_007e;
	}

IL_0071:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_18 = V_1;
		NullCheck(L_18);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_19 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_18)->get_parent_0();
		V_1 = L_19;
		ElementWriter_WriteFullEndElement_mAC1EC5BF80311A650B92992C4A9C689811A782F5((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, /*hidden argument*/NULL);
	}

IL_007e:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_20 = V_1;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_21 = V_0;
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_20) == ((RuntimeObject*)(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)L_21)))
		{
			goto IL_0090;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_22 = V_1;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_23 = V_1;
		NullCheck(L_23);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_24 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_23)->get_parent_0();
		NullCheck(L_24);
		RuntimeObject * L_25 = L_24->get_content_3();
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_22) == ((RuntimeObject*)(RuntimeObject *)L_25)))
		{
			goto IL_0071;
		}
	}

IL_0090:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_26 = V_1;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_27 = V_0;
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_26) == ((RuntimeObject*)(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)L_27)))
		{
			goto IL_00a0;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_28 = V_1;
		NullCheck(L_28);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_29 = L_28->get_next_2();
		V_1 = L_29;
		goto IL_000b;
	}

IL_00a0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter_WriteElement_mCA724B1F81D4D096CA8A0A3BC3B38B8AAB7A6E7C_AdjustorThunk (RuntimeObject * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter_WriteElement_mCA724B1F81D4D096CA8A0A3BC3B38B8AAB7A6E7C(_thisAdjusted, ___e0, method);
}
// System.String System.Xml.Linq.ElementWriter::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ElementWriter_GetPrefixOfNamespace_mFE90F844D9421A68634B9AF38ACBA1D127269F26 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___ns0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_0015:
	{
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_5 = __this->get_address_of_resolver_1();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_6 = ___ns0;
		bool L_7 = ___allowDefaultNamespace1;
		String_t* L_8;
		L_8 = NamespaceResolver_GetPrefixOfNamespace_m69FAACB8B514D2F3C1E00473B9EC5A7B169F5C0F((NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *)L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_10 = V_1;
		return L_10;
	}

IL_0028:
	{
		String_t* L_11 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_11) == ((RuntimeObject*)(String_t*)_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917))))
		{
			goto IL_0036;
		}
	}
	{
		return _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158;
	}

IL_0036:
	{
		String_t* L_12 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_12) == ((RuntimeObject*)(String_t*)_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE))))
		{
			goto IL_0044;
		}
	}
	{
		return _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
	}

IL_0044:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* ElementWriter_GetPrefixOfNamespace_mFE90F844D9421A68634B9AF38ACBA1D127269F26_AdjustorThunk (RuntimeObject * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ElementWriter_GetPrefixOfNamespace_mFE90F844D9421A68634B9AF38ACBA1D127269F26(_thisAdjusted, ___ns0, ___allowDefaultNamespace1, method);
	return _returnValue;
}
// System.Void System.Xml.Linq.ElementWriter::PushAncestors(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_PushAncestors_mAA5058229B36969BAD86E2332E5B85EF93C10DAD (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_0 = NULL;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * G_B5_0 = NULL;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * G_B6_1 = NULL;

IL_0000:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___e0;
		NullCheck(L_0);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_0)->get_parent_0();
		___e0 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_1, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = ___e0;
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_3 = ___e0;
		NullCheck(L_3);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = L_3->get_lastAttr_6();
		V_0 = L_4;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0000;
		}
	}

IL_001a:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_6 = V_0;
		NullCheck(L_6);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = L_6->get_next_2();
		V_0 = L_7;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = XAttribute_get_IsNamespaceDeclaration_mE2D54BB132D0A554FA334BDAF92D5664E2BF50EA(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_10 = __this->get_address_of_resolver_1();
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_11 = V_0;
		NullCheck(L_11);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_12;
		L_12 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_13, /*hidden argument*/NULL);
		G_B4_0 = L_10;
		if (!L_14)
		{
			G_B5_0 = L_10;
			goto IL_004e;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_15 = V_0;
		NullCheck(L_15);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_16;
		L_16 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_0053;
	}

IL_004e:
	{
		String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B6_0 = L_18;
		G_B6_1 = G_B5_0;
	}

IL_0053:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline(L_19, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_21;
		L_21 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(L_20, /*hidden argument*/NULL);
		NamespaceResolver_AddFirst_m7C861D08943FFBAA33EF102312B96499D73CF289((NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *)G_B6_1, G_B6_0, L_21, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_22 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_23 = ___e0;
		NullCheck(L_23);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_24 = L_23->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_22) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_24))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0000;
	}

IL_006e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter_PushAncestors_mAA5058229B36969BAD86E2332E5B85EF93C10DAD_AdjustorThunk (RuntimeObject * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter_PushAncestors_mAA5058229B36969BAD86E2332E5B85EF93C10DAD(_thisAdjusted, ___e0, method);
}
// System.Void System.Xml.Linq.ElementWriter::PushElement(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_PushElement_mD74364B14FDE31D74A6DA824F21EF009142EBAC5 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_0 = NULL;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * G_B4_0 = NULL;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * G_B5_1 = NULL;
	{
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_0 = __this->get_address_of_resolver_1();
		NamespaceResolver_PushScope_m6A174DFEE5F6E262E8B050EAE30CD935ED3FD468((NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *)L_0, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = ___e0;
		NullCheck(L_1);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2 = L_1->get_lastAttr_6();
		V_0 = L_2;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0067;
		}
	}

IL_0015:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = V_0;
		NullCheck(L_4);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = L_4->get_next_2();
		V_0 = L_5;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = XAttribute_get_IsNamespaceDeclaration_mE2D54BB132D0A554FA334BDAF92D5664E2BF50EA(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_8 = __this->get_address_of_resolver_1();
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = V_0;
		NullCheck(L_9);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_10;
		L_10 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		if (!L_12)
		{
			G_B4_0 = L_8;
			goto IL_0049;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_13 = V_0;
		NullCheck(L_13);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_14;
		L_14 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_14, /*hidden argument*/NULL);
		G_B5_0 = L_15;
		G_B5_1 = G_B3_0;
		goto IL_004e;
	}

IL_0049:
	{
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_004e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline(L_17, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_19;
		L_19 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(L_18, /*hidden argument*/NULL);
		NamespaceResolver_Add_mA16774DA6B6A470EC2416849D659179275D28F81((NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *)G_B5_1, G_B5_0, L_19, /*hidden argument*/NULL);
	}

IL_005e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_20 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_21 = ___e0;
		NullCheck(L_21);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_22 = L_21->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_20) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_22))))
		{
			goto IL_0015;
		}
	}

IL_0067:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter_PushElement_mD74364B14FDE31D74A6DA824F21EF009142EBAC5_AdjustorThunk (RuntimeObject * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter_PushElement_mD74364B14FDE31D74A6DA824F21EF009142EBAC5(_thisAdjusted, ___e0, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteEndElement_mB6853DBC6AC64F10185207107EBE974AB5A274CA (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_0);
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_1 = __this->get_address_of_resolver_1();
		NamespaceResolver_PopScope_m48BFA95631D7F0301120439B128FF8F7A16C261B((NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter_WriteEndElement_mB6853DBC6AC64F10185207107EBE974AB5A274CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter_WriteEndElement_mB6853DBC6AC64F10185207107EBE974AB5A274CA(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteFullEndElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteFullEndElement_mAC1EC5BF80311A650B92992C4A9C689811A782F5 (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = __this->get_writer_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, L_0);
		NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * L_1 = __this->get_address_of_resolver_1();
		NamespaceResolver_PopScope_m48BFA95631D7F0301120439B128FF8F7A16C261B((NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter_WriteFullEndElement_mAC1EC5BF80311A650B92992C4A9C689811A782F5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter_WriteFullEndElement_mAC1EC5BF80311A650B92992C4A9C689811A782F5(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.ElementWriter::WriteStartElement(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementWriter_WriteStartElement_m09181D51C5C38A1BB15B41D85A88FE6B8A0BDBFF (ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_0 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * G_B3_2 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * G_B2_2 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * G_B4_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * G_B5_3 = NULL;
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___e0;
		ElementWriter_PushElement_mD74364B14FDE31D74A6DA824F21EF009142EBAC5((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, L_0, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = ___e0;
		NullCheck(L_1);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_2;
		L_2 = XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3;
		L_3 = XName_get_Namespace_m27DDB135C04C90BB031CA5ECC7B3436A31423488_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_4 = __this->get_writer_0();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5 = V_0;
		String_t* L_6;
		L_6 = ElementWriter_GetPrefixOfNamespace_mFE90F844D9421A68634B9AF38ACBA1D127269F26((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, L_5, (bool)1, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_7 = ___e0;
		NullCheck(L_7);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_8;
		L_8 = XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_8, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(9 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_4, L_6, L_9, L_11);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_12 = ___e0;
		NullCheck(L_12);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_13 = L_12->get_lastAttr_6();
		V_1 = L_13;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_14 = V_1;
		if (!L_14)
		{
			goto IL_00a7;
		}
	}

IL_0041:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_15 = V_1;
		NullCheck(L_15);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_16 = L_15->get_next_2();
		V_1 = L_16;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_17 = V_1;
		NullCheck(L_17);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_18;
		L_18 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_19;
		L_19 = XName_get_Namespace_m27DDB135C04C90BB031CA5ECC7B3436A31423488_inline(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_20 = V_1;
		NullCheck(L_20);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_21;
		L_21 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_25 = __this->get_writer_0();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_26 = V_0;
		String_t* L_27;
		L_27 = ElementWriter_GetPrefixOfNamespace_mFE90F844D9421A68634B9AF38ACBA1D127269F26((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)__this, L_26, (bool)0, /*hidden argument*/NULL);
		String_t* L_28 = V_2;
		String_t* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		G_B2_0 = L_28;
		G_B2_1 = L_27;
		G_B2_2 = L_25;
		if (L_30)
		{
			G_B3_0 = L_28;
			G_B3_1 = L_27;
			G_B3_2 = L_25;
			goto IL_008b;
		}
	}
	{
		String_t* L_31 = V_2;
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		if (L_32)
		{
			G_B4_0 = G_B2_0;
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			goto IL_008e;
		}
	}

IL_008b:
	{
		String_t* L_33 = V_3;
		G_B5_0 = L_33;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0093;
	}

IL_008e:
	{
		G_B5_0 = _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0093:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_34 = V_1;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline(L_34, /*hidden argument*/NULL);
		NullCheck(G_B5_3);
		XmlWriter_WriteAttributeString_m7ABADBF13E8DD19BD7F3970AD124DEF3441259CE(G_B5_3, G_B5_2, G_B5_1, G_B5_0, L_35, /*hidden argument*/NULL);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_36 = V_1;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_37 = ___e0;
		NullCheck(L_37);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_38 = L_37->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_36) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_38))))
		{
			goto IL_0041;
		}
	}

IL_00a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ElementWriter_WriteStartElement_m09181D51C5C38A1BB15B41D85A88FE6B8A0BDBFF_AdjustorThunk (RuntimeObject * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB * _thisAdjusted = reinterpret_cast<ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *>(__this + _offset);
	ElementWriter_WriteStartElement_m09181D51C5C38A1BB15B41D85A88FE6B8A0BDBFF(_thisAdjusted, ___e0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_m8E8D7A480E7C181E9B65DC98003BC166AEF5AB38 (LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_lineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_linePosition_1(L_1);
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
// System.Void System.Xml.Linq.LineInfoEndElementAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoEndElementAnnotation__ctor_mC681F34922255C61324B88EF7174034FB58C3887 (LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___lineNumber0;
		int32_t L_1 = ___linePosition1;
		LineInfoAnnotation__ctor_m8E8D7A480E7C181E9B65DC98003BC166AEF5AB38(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Xml.Linq.NameSerializer::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameSerializer__ctor_mFF83F9040F5363B72D87DC6CCEA0321DB215F822 (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameSerializer__ctor_mFF83F9040F5363B72D87DC6CCEA0321DB215F822_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SerializationInfo_GetString_m50298DCBCD07D858EE19414052CB02EE4DDD3C2C(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		__this->set_expandedName_0(L_3);
		return;
	}
}
// System.Object System.Xml.Linq.NameSerializer::System.Runtime.Serialization.IObjectReference.GetRealObject(System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NameSerializer_System_Runtime_Serialization_IObjectReference_GetRealObject_m67AA4E4AF30FB2A0898BEC4C2E9DB34BEA5AD4A6 (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45 * __this, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_expandedName_0();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1;
		L_1 = XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.NameSerializer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m309AB629E47E1D640D2A44960A9004BC34016B8C (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameSerializer_System_Runtime_Serialization_ISerializable_GetObjectData_m309AB629E47E1D640D2A44960A9004BC34016B8C_RuntimeMethod_var)));
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
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceCache
IL2CPP_EXTERN_C void NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshal_pinvoke(const NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662& unmarshaled, NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL);
}
IL2CPP_EXTERN_C void NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshal_pinvoke_back(const NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_pinvoke& marshaled, NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662& unmarshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceCache
IL2CPP_EXTERN_C void NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshal_pinvoke_cleanup(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceCache
IL2CPP_EXTERN_C void NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshal_com(const NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662& unmarshaled, NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_com& marshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL);
}
IL2CPP_EXTERN_C void NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshal_com_back(const NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_com& marshaled, NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662& unmarshaled)
{
	Exception_t* ___ns_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ns' of type 'NamespaceCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ns_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceCache
IL2CPP_EXTERN_C void NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshal_com_cleanup(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662_marshaled_com& marshaled)
{
}
// System.Xml.Linq.XNamespace System.Xml.Linq.NamespaceCache::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995 (NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___namespaceName0;
		String_t* L_1 = __this->get_namespaceName_1();
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_2 = __this->get_ns_0();
		return L_2;
	}

IL_0010:
	{
		String_t* L_3 = ___namespaceName0;
		__this->set_namespaceName_1(L_3);
		String_t* L_4 = ___namespaceName0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5;
		L_5 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(L_4, /*hidden argument*/NULL);
		__this->set_ns_0(L_5);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_6 = __this->get_ns_0();
		return L_6;
	}
}
IL2CPP_EXTERN_C  XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995_AdjustorThunk (RuntimeObject * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * _thisAdjusted = reinterpret_cast<NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 *>(__this + _offset);
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * _returnValue;
	_returnValue = NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995(_thisAdjusted, ___namespaceName0, method);
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
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceResolver
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_pinvoke(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL);
}
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_pinvoke_back(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke& marshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceResolver
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_pinvoke_cleanup(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Linq.NamespaceResolver
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_com(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com& marshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL);
}
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_com_back(const NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com& marshaled, NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B& unmarshaled)
{
	Exception_t* ___declaration_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'declaration' of type 'NamespaceResolver': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___declaration_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Linq.NamespaceResolver
IL2CPP_EXTERN_C void NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshal_com_cleanup(NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Linq.NamespaceResolver::PushScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_PushScope_m6A174DFEE5F6E262E8B050EAE30CD935ED3FD468 (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_scope_0();
		__this->set_scope_0(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceResolver_PushScope_m6A174DFEE5F6E262E8B050EAE30CD935ED3FD468_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * _thisAdjusted = reinterpret_cast<NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *>(__this + _offset);
	NamespaceResolver_PushScope_m6A174DFEE5F6E262E8B050EAE30CD935ED3FD468(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.NamespaceResolver::PopScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_PopScope_m48BFA95631D7F0301120439B128FF8F7A16C261B (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, const RuntimeMethod* method)
{
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * V_0 = NULL;
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_0 = __this->get_declaration_1();
		V_0 = L_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_005a;
		}
	}

IL_000a:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_2 = V_0;
		NullCheck(L_2);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_3 = L_2->get_prev_3();
		V_0 = L_3;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_scope_2();
		int32_t L_6 = __this->get_scope_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_005a;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_7 = V_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_8 = __this->get_declaration_1();
		if ((!(((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_7) == ((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_8))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_declaration_1((NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)NULL);
		goto IL_0042;
	}

IL_0031:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_9 = __this->get_declaration_1();
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_10 = V_0;
		NullCheck(L_10);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_11 = L_10->get_prev_3();
		NullCheck(L_9);
		L_9->set_prev_3(L_11);
	}

IL_0042:
	{
		__this->set_rover_2((NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)NULL);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_12 = V_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_13 = __this->get_declaration_1();
		if ((((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_12) == ((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_14 = __this->get_declaration_1();
		if (L_14)
		{
			goto IL_000a;
		}
	}

IL_005a:
	{
		int32_t L_15 = __this->get_scope_0();
		__this->set_scope_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceResolver_PopScope_m48BFA95631D7F0301120439B128FF8F7A16C261B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * _thisAdjusted = reinterpret_cast<NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *>(__this + _offset);
	NamespaceResolver_PopScope_m48BFA95631D7F0301120439B128FF8F7A16C261B(_thisAdjusted, method);
}
// System.Void System.Xml.Linq.NamespaceResolver::Add(System.String,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_Add_mA16774DA6B6A470EC2416849D659179275D28F81 (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, String_t* ___prefix0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * V_0 = NULL;
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_0 = (NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)il2cpp_codegen_object_new(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9_il2cpp_TypeInfo_var);
		NamespaceDeclaration__ctor_m86ED6350C67E1DA1AAD7F9EAB3D460F12A9EE180(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_1 = V_0;
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		L_1->set_prefix_0(L_2);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_3 = V_0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_4 = ___ns1;
		NullCheck(L_3);
		L_3->set_ns_1(L_4);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_5 = V_0;
		int32_t L_6 = __this->get_scope_0();
		NullCheck(L_5);
		L_5->set_scope_2(L_6);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_7 = __this->get_declaration_1();
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_8 = V_0;
		__this->set_declaration_1(L_8);
		goto IL_0042;
	}

IL_0031:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_9 = V_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_10 = __this->get_declaration_1();
		NullCheck(L_10);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_11 = L_10->get_prev_3();
		NullCheck(L_9);
		L_9->set_prev_3(L_11);
	}

IL_0042:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_12 = __this->get_declaration_1();
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_13 = V_0;
		NullCheck(L_12);
		L_12->set_prev_3(L_13);
		__this->set_rover_2((NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceResolver_Add_mA16774DA6B6A470EC2416849D659179275D28F81_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * _thisAdjusted = reinterpret_cast<NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *>(__this + _offset);
	NamespaceResolver_Add_mA16774DA6B6A470EC2416849D659179275D28F81(_thisAdjusted, ___prefix0, ___ns1, method);
}
// System.Void System.Xml.Linq.NamespaceResolver::AddFirst(System.String,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceResolver_AddFirst_m7C861D08943FFBAA33EF102312B96499D73CF289 (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, String_t* ___prefix0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * V_0 = NULL;
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_0 = (NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)il2cpp_codegen_object_new(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9_il2cpp_TypeInfo_var);
		NamespaceDeclaration__ctor_m86ED6350C67E1DA1AAD7F9EAB3D460F12A9EE180(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_1 = V_0;
		String_t* L_2 = ___prefix0;
		NullCheck(L_1);
		L_1->set_prefix_0(L_2);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_3 = V_0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_4 = ___ns1;
		NullCheck(L_3);
		L_3->set_ns_1(L_4);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_5 = V_0;
		int32_t L_6 = __this->get_scope_0();
		NullCheck(L_5);
		L_5->set_scope_2(L_6);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_7 = __this->get_declaration_1();
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_8 = V_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_9 = V_0;
		NullCheck(L_8);
		L_8->set_prev_3(L_9);
		goto IL_004e;
	}

IL_0031:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_10 = V_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_11 = __this->get_declaration_1();
		NullCheck(L_11);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_12 = L_11->get_prev_3();
		NullCheck(L_10);
		L_10->set_prev_3(L_12);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_13 = __this->get_declaration_1();
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_14 = V_0;
		NullCheck(L_13);
		L_13->set_prev_3(L_14);
	}

IL_004e:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_15 = V_0;
		__this->set_declaration_1(L_15);
		__this->set_rover_2((NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceResolver_AddFirst_m7C861D08943FFBAA33EF102312B96499D73CF289_AdjustorThunk (RuntimeObject * __this, String_t* ___prefix0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * _thisAdjusted = reinterpret_cast<NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *>(__this + _offset);
	NamespaceResolver_AddFirst_m7C861D08943FFBAA33EF102312B96499D73CF289(_thisAdjusted, ___prefix0, ___ns1, method);
}
// System.String System.Xml.Linq.NamespaceResolver::GetPrefixOfNamespace(System.Xml.Linq.XNamespace,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NamespaceResolver_GetPrefixOfNamespace_m69FAACB8B514D2F3C1E00473B9EC5A7B169F5C0F (NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * V_0 = NULL;
	NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * V_1 = NULL;
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_0 = __this->get_rover_2();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_1 = __this->get_rover_2();
		NullCheck(L_1);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_2 = L_1->get_ns_1();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3 = ___ns0;
		bool L_4;
		L_4 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = ___allowDefaultNamespace1;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_6 = __this->get_rover_2();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_prefix_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_0031:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_9 = __this->get_rover_2();
		NullCheck(L_9);
		String_t* L_10 = L_9->get_prefix_0();
		return L_10;
	}

IL_003d:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_11 = __this->get_declaration_1();
		V_0 = L_11;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_00bb;
		}
	}

IL_0047:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_13 = V_0;
		NullCheck(L_13);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_14 = L_13->get_prev_3();
		V_0 = L_14;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_15 = V_0;
		NullCheck(L_15);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_16 = L_15->get_ns_1();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_17 = ___ns0;
		bool L_18;
		L_18 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_19 = __this->get_declaration_1();
		NullCheck(L_19);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_20 = L_19->get_prev_3();
		V_1 = L_20;
		goto IL_0071;
	}

IL_006a:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_21 = V_1;
		NullCheck(L_21);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_22 = L_21->get_prev_3();
		V_1 = L_22;
	}

IL_0071:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_23 = V_1;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_24 = V_0;
		if ((((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_23) == ((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_24)))
		{
			goto IL_0088;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_prefix_0();
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_prefix_0();
		bool L_29;
		L_29 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_26, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_006a;
		}
	}

IL_0088:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_30 = V_1;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_31 = V_0;
		if ((!(((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_30) == ((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_31))))
		{
			goto IL_00b2;
		}
	}
	{
		bool L_32 = ___allowDefaultNamespace1;
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_33 = V_0;
		__this->set_rover_2(L_33);
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = L_34->get_prefix_0();
		return L_35;
	}

IL_009d:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = L_36->get_prefix_0();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = L_39->get_prefix_0();
		return L_40;
	}

IL_00b2:
	{
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_41 = V_0;
		NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * L_42 = __this->get_declaration_1();
		if ((!(((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_41) == ((RuntimeObject*)(NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 *)L_42))))
		{
			goto IL_0047;
		}
	}

IL_00bb:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* NamespaceResolver_GetPrefixOfNamespace_m69FAACB8B514D2F3C1E00473B9EC5A7B169F5C0F_AdjustorThunk (RuntimeObject * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, bool ___allowDefaultNamespace1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B * _thisAdjusted = reinterpret_cast<NamespaceResolver_t256CF741C6FD3783EAB666971D20E1385A77F06B *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NamespaceResolver_GetPrefixOfNamespace_m69FAACB8B514D2F3C1E00473B9EC5A7B169F5C0F(_thisAdjusted, ___ns0, ___allowDefaultNamespace1, method);
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
// System.String System.Xml.Linq.Res::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABEBB01305DAD5CDC4ABC544CFEBCFEB1290EFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FE0357577FE6BDD9E51A23B11B887B73877D0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11680B2FB0D0FC01D9AFDF475517284900ACFB79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral145ACF7B0AD8FB6FCA89E2F74EED12E94EC3A7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral284BB8EA8CC921896C74586B4CEC5337B1525FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C66D82074221F9BF474E266F4485F93490FF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B1FEDF0C4DF52130C3B66237FAB6509FA39A38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C775B23554B97CFD8879DFA281939C311427192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E06E7E4F8ED38905491595BD31A52DEEA86DBAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA1556EC2451041F02B5E24CC1259B4F9C88E56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CF69E50664676AF96974413A4F4F427000D9619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E076C77A20C01FCA9E7EFBD613E0CE099CD99E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral538ED4DB2714E63F1702E3DC7ED7111FE51CB075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57307604A13D96EA752170A81E5BBA1A66E7DD27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2E3906078083B3F6EF50D81DCCBA5FBE0099F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65151EF1CE2870155EB1F4CF50191C136CBF7C27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763B440B89C2BEAB56B575C7128AED7D0BF0D02D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C0D11305C4CE4883C53D10C917D9FEC585923B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA684079C4910A68C26112D31B4F30B7602EED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8410460AD56D52600FC1FDB68F42DAC9B13253F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral850779CE1C493FE4BB82FD830D211C5DC080E111);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C4D13815C4A9C6CE0C71EC81D9AEAA15F07F052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB0D0A6E34E903191ED08A3028F75FBFA429DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9070F650E803F95AAF7F0424AC3CD59B848708B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral935ED84C03CE19EFAE29DD6987A405F64591906A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93ACD1E94819C250C280A5D433EB81D487EA36C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9415A429F11852DD4CCC80868C382788D76BD744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E601A048BDE14CE54D8454BBD9B9A6EFB0EA02D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F7756F3BC424FA91FEB920E997A5D28CB0F1D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A3C640F703360E63541701EA84B997C01338F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8DD31F05F41B09FE8B15F5B1ED920B57F9DD84B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC45C10F625DAF964B5295D59B33A9925EB8F882B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E594A81BD02C38A87789127F45DB6050261191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEBF7CCC7EBCDB19212EDC6A7AC1FC14F5B4B78E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89180693C38BF429E9AF7466537CF6318F5CAE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9E30988DB4F13BB9F958646EC9E7FF9F399590A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC1E003403D94E4D0E795CA3BFED667F7CA0D66A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCAE0763CD303EC66D7B464B2BBEDB7CBD57E62C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE074D06CDFBA700869E4BF8CF358542E5E30BAA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5BF3A6C9BCB5E556DB62148F4FFB6D95E86A203);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6E3A8B3B29F9F1380AA2EB5EE7E038B27443D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7EC29553ED94A7299E962F6977E154443E0A2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1F4810BB2716A77F316168F198D71B1CCDF923);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB841A1E583CE3C43AA0486C84F6BD76B960A50E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDBD8FBE7D5D48AD37D3C8124A385028A3FE6B8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m627B7273A2428AFBCF4C41D574196135907A582D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)-1949800506)))))
		{
			goto IL_0125;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)626770679)))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)272356109)))))
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)85233838)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)15713876))))
		{
			goto IL_0355;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)85233838))))
		{
			goto IL_0394;
		}
	}
	{
		goto IL_058f;
	}

IL_0048:
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)103965186))))
		{
			goto IL_0412;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)272356109))))
		{
			goto IL_043c;
		}
	}
	{
		goto IL_058f;
	}

IL_0063:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)569780718)))))
		{
			goto IL_0086;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)407913795))))
		{
			goto IL_02ec;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)569780718))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_058f;
	}

IL_0086:
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)625070019))))
		{
			goto IL_0451;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)626770679))))
		{
			goto IL_0427;
		}
	}
	{
		goto IL_058f;
	}

IL_00a1:
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)1639487891)))))
		{
			goto IL_00e7;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)1004902937)))))
		{
			goto IL_00cc;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)922706940))))
		{
			goto IL_0298;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1004902937))))
		{
			goto IL_036a;
		}
	}
	{
		goto IL_058f;
	}

IL_00cc:
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1405029661))))
		{
			goto IL_047b;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1639487891))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_058f;
	}

IL_00e7:
	{
		uint32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)1755217186)))))
		{
			goto IL_010a;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1718317927))))
		{
			goto IL_032b;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1755217186))))
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_058f;
	}

IL_010a:
	{
		uint32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)1837980878))))
		{
			goto IL_03d3;
		}
	}
	{
		uint32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-1949800506))))
		{
			goto IL_02ad;
		}
	}
	{
		goto IL_058f;
	}

IL_0125:
	{
		uint32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-784584768)))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1014396228)))))
		{
			goto IL_0176;
		}
	}
	{
		uint32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) <= ((uint32_t)((int32_t)-1803877632)))))
		{
			goto IL_015b;
		}
	}
	{
		uint32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1857585789))))
		{
			goto IL_03e8;
		}
	}
	{
		uint32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1803877632))))
		{
			goto IL_03be;
		}
	}
	{
		goto IL_058f;
	}

IL_015b:
	{
		uint32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1122788132))))
		{
			goto IL_0316;
		}
	}
	{
		uint32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1014396228))))
		{
			goto IL_02d7;
		}
	}
	{
		goto IL_058f;
	}

IL_0176:
	{
		uint32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) <= ((uint32_t)((int32_t)-864757643)))))
		{
			goto IL_0199;
		}
	}
	{
		uint32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-906458386))))
		{
			goto IL_026e;
		}
	}
	{
		uint32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-864757643))))
		{
			goto IL_0340;
		}
	}
	{
		goto IL_058f;
	}

IL_0199:
	{
		uint32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-863392252))))
		{
			goto IL_0259;
		}
	}
	{
		uint32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)-784584768))))
		{
			goto IL_037f;
		}
	}
	{
		goto IL_058f;
	}

IL_01b4:
	{
		uint32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-571087830)))))
		{
			goto IL_01f7;
		}
	}
	{
		uint32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) <= ((uint32_t)((int32_t)-700897642)))))
		{
			goto IL_01df;
		}
	}
	{
		uint32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-755692016))))
		{
			goto IL_0490;
		}
	}
	{
		uint32_t L_41 = V_0;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-700897642))))
		{
			goto IL_03fd;
		}
	}
	{
		goto IL_058f;
	}

IL_01df:
	{
		uint32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-666966205))))
		{
			goto IL_04a5;
		}
	}
	{
		uint32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)-571087830))))
		{
			goto IL_0244;
		}
	}
	{
		goto IL_058f;
	}

IL_01f7:
	{
		uint32_t L_44 = V_0;
		if ((!(((uint32_t)L_44) <= ((uint32_t)((int32_t)-497792745)))))
		{
			goto IL_0217;
		}
	}
	{
		uint32_t L_45 = V_0;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)-560446364))))
		{
			goto IL_0283;
		}
	}
	{
		uint32_t L_46 = V_0;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)-497792745))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_058f;
	}

IL_0217:
	{
		uint32_t L_47 = V_0;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)-492803734))))
		{
			goto IL_022f;
		}
	}
	{
		uint32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)-461614960))))
		{
			goto IL_04ba;
		}
	}
	{
		goto IL_058f;
	}

IL_022f:
	{
		String_t* L_49 = ___name0;
		bool L_50;
		L_50 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_49, _stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_04cf;
		}
	}
	{
		goto IL_058f;
	}

IL_0244:
	{
		String_t* L_51 = ___name0;
		bool L_52;
		L_52 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_51, _stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_04d5;
		}
	}
	{
		goto IL_058f;
	}

IL_0259:
	{
		String_t* L_53 = ___name0;
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_04db;
		}
	}
	{
		goto IL_058f;
	}

IL_026e:
	{
		String_t* L_55 = ___name0;
		bool L_56;
		L_56 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_55, _stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_04e1;
		}
	}
	{
		goto IL_058f;
	}

IL_0283:
	{
		String_t* L_57 = ___name0;
		bool L_58;
		L_58 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_57, _stringLiteralD89180693C38BF429E9AF7466537CF6318F5CAE5, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_04e7;
		}
	}
	{
		goto IL_058f;
	}

IL_0298:
	{
		String_t* L_59 = ___name0;
		bool L_60;
		L_60 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_59, _stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_04ed;
		}
	}
	{
		goto IL_058f;
	}

IL_02ad:
	{
		String_t* L_61 = ___name0;
		bool L_62;
		L_62 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_61, _stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_04f3;
		}
	}
	{
		goto IL_058f;
	}

IL_02c2:
	{
		String_t* L_63 = ___name0;
		bool L_64;
		L_64 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_63, _stringLiteral9415A429F11852DD4CCC80868C382788D76BD744, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_04f9;
		}
	}
	{
		goto IL_058f;
	}

IL_02d7:
	{
		String_t* L_65 = ___name0;
		bool L_66;
		L_66 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_65, _stringLiteral284BB8EA8CC921896C74586B4CEC5337B1525FC9, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_04ff;
		}
	}
	{
		goto IL_058f;
	}

IL_02ec:
	{
		String_t* L_67 = ___name0;
		bool L_68;
		L_68 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_67, _stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0505;
		}
	}
	{
		goto IL_058f;
	}

IL_0301:
	{
		String_t* L_69 = ___name0;
		bool L_70;
		L_70 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_69, _stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_050b;
		}
	}
	{
		goto IL_058f;
	}

IL_0316:
	{
		String_t* L_71 = ___name0;
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0511;
		}
	}
	{
		goto IL_058f;
	}

IL_032b:
	{
		String_t* L_73 = ___name0;
		bool L_74;
		L_74 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_73, _stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_0517;
		}
	}
	{
		goto IL_058f;
	}

IL_0340:
	{
		String_t* L_75 = ___name0;
		bool L_76;
		L_76 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_75, _stringLiteralC45C10F625DAF964B5295D59B33A9925EB8F882B, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_051d;
		}
	}
	{
		goto IL_058f;
	}

IL_0355:
	{
		String_t* L_77 = ___name0;
		bool L_78;
		L_78 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_77, _stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_0523;
		}
	}
	{
		goto IL_058f;
	}

IL_036a:
	{
		String_t* L_79 = ___name0;
		bool L_80;
		L_80 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_79, _stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_0529;
		}
	}
	{
		goto IL_058f;
	}

IL_037f:
	{
		String_t* L_81 = ___name0;
		bool L_82;
		L_82 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_81, _stringLiteral0FE0357577FE6BDD9E51A23B11B887B73877D0AA, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_052f;
		}
	}
	{
		goto IL_058f;
	}

IL_0394:
	{
		String_t* L_83 = ___name0;
		bool L_84;
		L_84 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_83, _stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0535;
		}
	}
	{
		goto IL_058f;
	}

IL_03a9:
	{
		String_t* L_85 = ___name0;
		bool L_86;
		L_86 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_85, _stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_053b;
		}
	}
	{
		goto IL_058f;
	}

IL_03be:
	{
		String_t* L_87 = ___name0;
		bool L_88;
		L_88 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_87, _stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_0541;
		}
	}
	{
		goto IL_058f;
	}

IL_03d3:
	{
		String_t* L_89 = ___name0;
		bool L_90;
		L_90 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_89, _stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_0547;
		}
	}
	{
		goto IL_058f;
	}

IL_03e8:
	{
		String_t* L_91 = ___name0;
		bool L_92;
		L_92 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_91, _stringLiteral3E06E7E4F8ED38905491595BD31A52DEEA86DBAF, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_054d;
		}
	}
	{
		goto IL_058f;
	}

IL_03fd:
	{
		String_t* L_93 = ___name0;
		bool L_94;
		L_94 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_93, _stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075, /*hidden argument*/NULL);
		if (L_94)
		{
			goto IL_0553;
		}
	}
	{
		goto IL_058f;
	}

IL_0412:
	{
		String_t* L_95 = ___name0;
		bool L_96;
		L_96 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_95, _stringLiteralED7EC29553ED94A7299E962F6977E154443E0A2B, /*hidden argument*/NULL);
		if (L_96)
		{
			goto IL_0559;
		}
	}
	{
		goto IL_058f;
	}

IL_0427:
	{
		String_t* L_97 = ___name0;
		bool L_98;
		L_98 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_97, _stringLiteralD9E30988DB4F13BB9F958646EC9E7FF9F399590A, /*hidden argument*/NULL);
		if (L_98)
		{
			goto IL_055f;
		}
	}
	{
		goto IL_058f;
	}

IL_043c:
	{
		String_t* L_99 = ___name0;
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B, /*hidden argument*/NULL);
		if (L_100)
		{
			goto IL_0565;
		}
	}
	{
		goto IL_058f;
	}

IL_0451:
	{
		String_t* L_101 = ___name0;
		bool L_102;
		L_102 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_101, _stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0, /*hidden argument*/NULL);
		if (L_102)
		{
			goto IL_056b;
		}
	}
	{
		goto IL_058f;
	}

IL_0466:
	{
		String_t* L_103 = ___name0;
		bool L_104;
		L_104 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_103, _stringLiteralCEBF7CCC7EBCDB19212EDC6A7AC1FC14F5B4B78E, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_0571;
		}
	}
	{
		goto IL_058f;
	}

IL_047b:
	{
		String_t* L_105 = ___name0;
		bool L_106;
		L_106 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_105, _stringLiteralA3A3C640F703360E63541701EA84B997C01338F3, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_0577;
		}
	}
	{
		goto IL_058f;
	}

IL_0490:
	{
		String_t* L_107 = ___name0;
		bool L_108;
		L_108 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_107, _stringLiteral57307604A13D96EA752170A81E5BBA1A66E7DD27, /*hidden argument*/NULL);
		if (L_108)
		{
			goto IL_057d;
		}
	}
	{
		goto IL_058f;
	}

IL_04a5:
	{
		String_t* L_109 = ___name0;
		bool L_110;
		L_110 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_109, _stringLiteral65151EF1CE2870155EB1F4CF50191C136CBF7C27, /*hidden argument*/NULL);
		if (L_110)
		{
			goto IL_0583;
		}
	}
	{
		goto IL_058f;
	}

IL_04ba:
	{
		String_t* L_111 = ___name0;
		bool L_112;
		L_112 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_111, _stringLiteralC8E594A81BD02C38A87789127F45DB6050261191, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_0589;
		}
	}
	{
		goto IL_058f;
	}

IL_04cf:
	{
		return _stringLiteral9070F650E803F95AAF7F0424AC3CD59B848708B7;
	}

IL_04d5:
	{
		return _stringLiteral38C66D82074221F9BF474E266F4485F93490FF1A;
	}

IL_04db:
	{
		return _stringLiteralE5BF3A6C9BCB5E556DB62148F4FFB6D95E86A203;
	}

IL_04e1:
	{
		return _stringLiteral3EA1556EC2451041F02B5E24CC1259B4F9C88E56;
	}

IL_04e7:
	{
		return _stringLiteralFDBD8FBE7D5D48AD37D3C8124A385028A3FE6B8A;
	}

IL_04ed:
	{
		return _stringLiteral9F7756F3BC424FA91FEB920E997A5D28CB0F1D32;
	}

IL_04f3:
	{
		return _stringLiteral8DB0D0A6E34E903191ED08A3028F75FBFA429DAE;
	}

IL_04f9:
	{
		return _stringLiteral51E076C77A20C01FCA9E7EFBD613E0CE099CD99E;
	}

IL_04ff:
	{
		return _stringLiteral7DA684079C4910A68C26112D31B4F30B7602EED6;
	}

IL_0505:
	{
		return _stringLiteral3B1FEDF0C4DF52130C3B66237FAB6509FA39A38D;
	}

IL_050b:
	{
		return _stringLiteralA8DD31F05F41B09FE8B15F5B1ED920B57F9DD84B;
	}

IL_0511:
	{
		return _stringLiteralDCAE0763CD303EC66D7B464B2BBEDB7CBD57E62C;
	}

IL_0517:
	{
		return _stringLiteralE074D06CDFBA700869E4BF8CF358542E5E30BAA8;
	}

IL_051d:
	{
		return _stringLiteralFB841A1E583CE3C43AA0486C84F6BD76B960A50E;
	}

IL_0523:
	{
		return _stringLiteral7C0D11305C4CE4883C53D10C917D9FEC585923B0;
	}

IL_0529:
	{
		return _stringLiteral935ED84C03CE19EFAE29DD6987A405F64591906A;
	}

IL_052f:
	{
		return _stringLiteral4CF69E50664676AF96974413A4F4F427000D9619;
	}

IL_0535:
	{
		return _stringLiteralEF1F4810BB2716A77F316168F198D71B1CCDF923;
	}

IL_053b:
	{
		return _stringLiteral145ACF7B0AD8FB6FCA89E2F74EED12E94EC3A7E8;
	}

IL_0541:
	{
		return _stringLiteralDC1E003403D94E4D0E795CA3BFED667F7CA0D66A;
	}

IL_0547:
	{
		return _stringLiteral3C775B23554B97CFD8879DFA281939C311427192;
	}

IL_054d:
	{
		return _stringLiteral93ACD1E94819C250C280A5D433EB81D487EA36C6;
	}

IL_0553:
	{
		return _stringLiteral763B440B89C2BEAB56B575C7128AED7D0BF0D02D;
	}

IL_0559:
	{
		return _stringLiteralE6E3A8B3B29F9F1380AA2EB5EE7E038B27443D4F;
	}

IL_055f:
	{
		return _stringLiteral5F2E3906078083B3F6EF50D81DCCBA5FBE0099F0;
	}

IL_0565:
	{
		return _stringLiteral9E601A048BDE14CE54D8454BBD9B9A6EFB0EA02D;
	}

IL_056b:
	{
		return _stringLiteral11680B2FB0D0FC01D9AFDF475517284900ACFB79;
	}

IL_0571:
	{
		return _stringLiteral850779CE1C493FE4BB82FD830D211C5DC080E111;
	}

IL_0577:
	{
		return _stringLiteral538ED4DB2714E63F1702E3DC7ED7111FE51CB075;
	}

IL_057d:
	{
		return _stringLiteral8C4D13815C4A9C6CE0C71EC81D9AEAA15F07F052;
	}

IL_0583:
	{
		return _stringLiteral8410460AD56D52600FC1FDB68F42DAC9B13253F9;
	}

IL_0589:
	{
		return _stringLiteral0ABEBB01305DAD5CDC4ABC544CFEBCFEB1290EFC;
	}

IL_058f:
	{
		return (String_t*)NULL;
	}
}
// System.String System.Xml.Linq.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0 (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args1;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5;
		L_5 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		String_t* L_6 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___args1;
		String_t* L_8;
		L_8 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m1B65D6A1FF55272EEE13380F3E7C53E2015C3F44 (const RuntimeMethod* method)
{
	{
		PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * L_0 = (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m1B65D6A1FF55272EEE13380F3E7C53E2015C3F44_RuntimeMethod_var)));
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
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		XObject__ctor_mEBF29FD8B8171A6AE6D42BA886E7BFAE31BE563D(__this, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___name0;
		bool L_1;
		L_1 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_0, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F_RuntimeMethod_var)));
	}

IL_001a:
	{
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F_RuntimeMethod_var)));
	}

IL_0028:
	{
		RuntimeObject * L_5 = ___value1;
		String_t* L_6;
		L_6 = XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = ___name0;
		String_t* L_8 = V_0;
		XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2(L_7, L_8, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_9 = ___name0;
		__this->set_name_3(L_9);
		String_t* L_10 = V_0;
		__this->set_value_4(L_10);
		return;
	}
}
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___other0, const RuntimeMethod* method)
{
	{
		XObject__ctor_mEBF29FD8B8171A6AE6D42BA886E7BFAE31BE563D(__this, /*hidden argument*/NULL);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B_RuntimeMethod_var)));
	}

IL_0014:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2 = ___other0;
		NullCheck(L_2);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = L_2->get_name_3();
		__this->set_name_3(L_3);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_value_4();
		__this->set_value_4(L_5);
		return;
	}
}
// System.Boolean System.Xml.Linq.XAttribute::get_IsNamespaceDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XAttribute_get_IsNamespaceDeclaration_mE2D54BB132D0A554FA334BDAF92D5664E2BF50EA (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_3();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_4 = __this->get_name_3();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, /*hidden argument*/NULL);
		return L_6;
	}

IL_002a:
	{
		String_t* L_7 = V_0;
		return (bool)((((RuntimeObject*)(String_t*)L_7) == ((RuntimeObject*)(String_t*)_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE))? 1 : 0);
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_3();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XAttribute::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XAttribute_get_NodeType_m716AD291593A05B9829DEF1F8CB86A99C88FEE56 (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.String System.Xml.Linq.XAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84 (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_4();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_set_Value_m62D39A9815CFEE24A923B8381091387F13114ABE (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_set_Value_m62D39A9815CFEE24A923B8381091387F13114ABE_RuntimeMethod_var)));
	}

IL_000e:
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_2 = __this->get_name_3();
		String_t* L_3 = ___value0;
		XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_4 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_5;
		L_5 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, __this, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___value0;
		__this->set_value_4(L_6);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_7 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_8;
		L_8 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, __this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.String System.Xml.Linq.XAttribute::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttribute_ToString_m93ACF1DA23DA530929D9EA831ED8A95D19042E21 (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * V_1 = NULL;
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_1 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_2 = (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 *)il2cpp_codegen_object_new(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8_il2cpp_TypeInfo_var);
			XmlWriterSettings__ctor_m5C6B99808D1C7B691C0ED4DF32BD3E1C39C4B94D(L_2, /*hidden argument*/NULL);
			V_1 = L_2;
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_3 = V_1;
			NullCheck(L_3);
			XmlWriterSettings_set_ConformanceLevel_m8BF0325F14280448F6099A9E5A2FC9C0896656BC(L_3, 1, /*hidden argument*/NULL);
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_4 = V_0;
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_5 = V_1;
			XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_6;
			L_6 = XmlWriter_Create_m283780CB1FF2D036894014AEA319A26829CD599A(L_4, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_7 = V_2;
			XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_8 = __this->get_name_3();
			NullCheck(L_8);
			XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_9;
			L_9 = XName_get_Namespace_m27DDB135C04C90BB031CA5ECC7B3436A31423488_inline(L_8, /*hidden argument*/NULL);
			String_t* L_10;
			L_10 = XAttribute_GetPrefixOfNamespace_mA63C230B534D3AE6BB47161C68D335D729FE8201(__this, L_9, /*hidden argument*/NULL);
			XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_11 = __this->get_name_3();
			NullCheck(L_11);
			String_t* L_12;
			L_12 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_11, /*hidden argument*/NULL);
			XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_13 = __this->get_name_3();
			NullCheck(L_13);
			String_t* L_14;
			L_14 = XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20(L_13, /*hidden argument*/NULL);
			String_t* L_15 = __this->get_value_4();
			NullCheck(L_7);
			XmlWriter_WriteAttributeString_m7ABADBF13E8DD19BD7F3970AD124DEF3441259CE(L_7, L_10, L_12, L_14, L_15, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5F, FINALLY_0055);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0055;
		}

FINALLY_0055:
		{ // begin finally (depth: 2)
			{
				XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_16 = V_2;
				if (!L_16)
				{
					goto IL_005e;
				}
			}

IL_0058:
			{
				XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_17 = V_2;
				NullCheck(L_17);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
			}

IL_005e:
			{
				IL2CPP_END_FINALLY(85)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(85)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5F, IL_005f)
		}

IL_005f:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_18 = V_0;
			NullCheck(L_18);
			String_t* L_19;
			L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_19, /*hidden argument*/NULL);
			V_3 = L_20;
			IL2CPP_LEAVE(0x77, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_21 = V_0;
			if (!L_21)
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(109)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		String_t* L_23 = V_3;
		return L_23;
	}
}
// System.String System.Xml.Linq.XAttribute::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttribute_GetPrefixOfNamespace_mA63C230B534D3AE6BB47161C68D335D729FE8201 (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___ns0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_0015:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_5 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_parent_0();
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_6 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_parent_0();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_7 = ___ns0;
		NullCheck(((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)CastclassClass((RuntimeObject*)L_6, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)));
		String_t* L_8;
		L_8 = XElement_GetPrefixOfNamespace_mF9843F62F43762B9E43BBAF8DA634CFBBA393C8E(((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)CastclassClass((RuntimeObject*)L_6, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		String_t* L_9 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(String_t*)_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917))))
		{
			goto IL_003d;
		}
	}
	{
		return _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158;
	}

IL_003d:
	{
		String_t* L_10 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(String_t*)_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE))))
		{
			goto IL_004b;
		}
	}
	{
		return _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
	}

IL_004b:
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.Linq.XAttribute::ValidateAttribute(System.Xml.Linq.XName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(String_t*)_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE))))
		{
			goto IL_00c9;
		}
	}
	{
		String_t* L_3 = ___value1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = ___name0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		String_t* L_9;
		L_9 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8EA4FEAB6355D2BF9CAD022606C89690929ADAB3)), L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_0039:
	{
		String_t* L_11 = ___value1;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_13 = ___name0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_14, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_16;
		L_16 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_17 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_006b:
	{
		String_t* L_18 = ___value1;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_20;
		L_20 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_0088:
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_22 = ___name0;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ac;
		}
	}
	{
		String_t* L_26;
		L_26 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_27 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_00ac:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_30;
		L_30 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_31 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_00c9:
	{
		String_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_011d;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_34 = ___name0;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_34, /*hidden argument*/NULL);
		bool L_36;
		L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_37 = ___value1;
		bool L_38;
		L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_39;
		L_39 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31F8C4E9485B20B546C635CB7C6B559821CF1715)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_40 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_0100:
	{
		String_t* L_41 = ___value1;
		bool L_42;
		L_42 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_41, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_011d;
		}
	}
	{
		String_t* L_43;
		L_43 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE8A3FF8F77EE2A54026CB8ACCB49E6814F9C9DF)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_44 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_44, L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XAttribute_ValidateAttribute_m131F4A72A9F7E79F93B34C2F7909C80995B6B7B2_RuntimeMethod_var)));
	}

IL_011d:
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeValuePropertyDescriptor__ctor_mDE470C28BA32ECF708F651F39C278BC540E3F549 (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_m0259FC3208B63C7913666C369BFC65E2880B0A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_m0259FC3208B63C7913666C369BFC65E2880B0A5D(__this, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/XPropertyDescriptor_2__ctor_m0259FC3208B63C7913666C369BFC65E2880B0A5D_RuntimeMethod_var);
		return;
	}
}
// System.Boolean MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XAttributeValuePropertyDescriptor_get_IsReadOnly_m0D734CA178ED0243A2A3330ECBD49CEECA47BE16 (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XAttributeValuePropertyDescriptor_GetValue_mC99EC74444D181331BF205D726770E2DF32A524C (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___component0;
		__this->set_attribute_17(((XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)IsInstClass((RuntimeObject*)L_0, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var)));
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_1 = __this->get_attribute_17();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_001a:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_3 = __this->get_attribute_17();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeValuePropertyDescriptor_SetValue_m1ACA8B79728734FC004130AFDC74C680CCA9E3A4 (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * __this, RuntimeObject * ___component0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___component0;
		__this->set_attribute_17(((XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)IsInstClass((RuntimeObject*)L_0, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var)));
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_1 = __this->get_attribute_17();
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2 = __this->get_attribute_17();
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_2);
		XAttribute_set_Value_m62D39A9815CFEE24A923B8381091387F13114ABE(L_2, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData__ctor_m9FA9F20CF152A7C7EEC9320F2FCD3F2F036C8F2E (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XCData::.ctor(System.Xml.Linq.XCData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData__ctor_m7FC6A1CFB551D65D4411EBFE077A4936037E3FFF (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * ___other0, const RuntimeMethod* method)
{
	{
		XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * L_0 = ___other0;
		XText__ctor_mC0BAC0C89D83D1AC431C1E0CC146752EAFDA29AF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XCData::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XCData_get_NodeType_mF9CD12D94265A3B87F19209B6D32F4BE84DF8B48 (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Void System.Xml.Linq.XCData::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData_WriteTo_mE9BC80649A08BC72B78DF18F9C1FF7619BDFF5D2 (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XCData_WriteTo_mE9BC80649A08BC72B78DF18F9C1FF7619BDFF5D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_2 = ___writer0;
		String_t* L_3 = ((XText_t14C82CC828138F000842E6611CBE05281260A3FC *)__this)->get_text_3();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, L_2, L_3);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XCData::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XCData_CloneNode_mD8FC76E124B8D62AF72D1086D57E17CC99C6C0C8 (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * L_0 = (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF *)il2cpp_codegen_object_new(XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		XCData__ctor_m7FC6A1CFB551D65D4411EBFE077A4936037E3FFF(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment__ctor_mD1594490E6706E752D9A5C9B748CF84AEC2B9B22 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XComment__ctor_mD1594490E6706E752D9A5C9B748CF84AEC2B9B22_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___value0;
		__this->set_value_3(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XComment::.ctor(System.Xml.Linq.XComment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment__ctor_m293F320541A1F11249027B6C8D623462AD383AA8 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * ___other0, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XComment__ctor_m293F320541A1F11249027B6C8D623462AD383AA8_RuntimeMethod_var)));
	}

IL_0014:
	{
		XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_value_3();
		__this->set_value_3(L_3);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XComment::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XComment_get_NodeType_m5D1AD71934D3979AF424213BFCC9CDC2CC9A1887 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(8);
	}
}
// System.String System.Xml.Linq.XComment::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XComment_get_Value_mA7E894839128338EB9E902993EF632F88ED96762 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_3();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XComment::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment_WriteTo_m3686F4EF4AB18C7F42564BC580E33C1CAAEB2BB2 (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XComment_WriteTo_m3686F4EF4AB18C7F42564BC580E33C1CAAEB2BB2_RuntimeMethod_var)));
	}

IL_000e:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_2 = ___writer0;
		String_t* L_3 = __this->get_value_3();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, L_2, L_3);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XComment::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XComment_CloneNode_m22A6E114042E24F367B21549A66EC368B4B9846E (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * L_0 = (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 *)il2cpp_codegen_object_new(XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var);
		XComment__ctor_m293F320541A1F11249027B6C8D623462AD383AA8(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer__ctor_m3C7E61824CB53C8FA18BC4226C6C0BA4BAE3B646 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer__ctor_mA6A69DAB1077038C297FBE6B4697DD40AB426ED2 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer__ctor_mA6A69DAB1077038C297FBE6B4697DD40AB426ED2_RuntimeMethod_var)));
	}

IL_0014:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_2 = ___other0;
		NullCheck(L_2);
		RuntimeObject * L_3 = L_2->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_content_3();
		__this->set_content_3(L_5);
		return;
	}

IL_002e:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_6 = ___other0;
		NullCheck(L_6);
		RuntimeObject * L_7 = L_6->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_7, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0059;
		}
	}

IL_003d:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = V_0;
		NullCheck(L_9);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_10 = L_9->get_next_2();
		V_0 = L_10;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = V_0;
		NullCheck(L_11);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_12;
		L_12 = VirtFuncInvoker0< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_11);
		XContainer_AppendNodeSkipNotify_m7E11E884F1504058BAB299925A1BD9092A7E0CF3(__this, L_12, /*hidden argument*/NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_13 = V_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_14 = ___other0;
		NullCheck(L_14);
		RuntimeObject * L_15 = L_14->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_13) == ((RuntimeObject*)(RuntimeObject *)L_15))))
		{
			goto IL_003d;
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XContainer_get_LastNode_m84D21983C67B305C490A685BC4021A767421D5CA (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	String_t* V_1 = NULL;
	XText_t14C82CC828138F000842E6611CBE05281260A3FC * V_2 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL;
	}

IL_000a:
	{
		RuntimeObject * L_1 = __this->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_1, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = V_0;
		return L_3;
	}

IL_001b:
	{
		RuntimeObject * L_4 = __this->get_content_3();
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		return (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL;
	}

IL_0034:
	{
		String_t* L_8 = V_1;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_9 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(L_9, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_10 = V_2;
		NullCheck(L_10);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_10)->set_parent_0(__this);
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_11 = V_2;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_12 = V_2;
		NullCheck(L_11);
		((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_11)->set_next_2(L_12);
		RuntimeObject ** L_13 = __this->get_address_of_content_3();
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_14 = V_2;
		String_t* L_15 = V_1;
		RuntimeObject * L_16;
		L_16 = InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)L_13, L_14, L_15);
	}

IL_0057:
	{
		RuntimeObject * L_17 = __this->get_content_3();
		return ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_17, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_Add_m5FBA597F4E81D576BA717343AFC8DCB2C1404680 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, RuntimeObject * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	String_t* V_1 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_2 = NULL;
	XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * V_3 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_6 = NULL;
	int32_t V_7 = 0;
	RuntimeObject * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0;
		L_0 = XObject_SkipNotify_m28058EBFF963451EFC0AAF9B7DD709B16D8F9895(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject * L_1 = ___content0;
		XContainer_AddContentSkipNotify_m85827FD1365976E30A8EE5498B0E20C46A9D266B(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___content0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		RuntimeObject * L_3 = ___content0;
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_3, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5 = V_0;
		XContainer_AddNode_m3B49E506A447F39245C198F05C0D7E07B2AFAAF0(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		RuntimeObject * L_6 = ___content0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var));
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8 = V_1;
		XContainer_AddString_m838F5C7418839B65CFAAEE10428961699F67C704(__this, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		RuntimeObject * L_9 = ___content0;
		V_2 = ((XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)IsInstClass((RuntimeObject*)L_9, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var));
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_11 = V_2;
		VirtActionInvoker1< XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * >::Invoke(11 /* System.Void System.Xml.Linq.XContainer::AddAttribute(System.Xml.Linq.XAttribute) */, __this, L_11);
		return;
	}

IL_004a:
	{
		RuntimeObject * L_12 = ___content0;
		V_3 = ((XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 *)IsInstClass((RuntimeObject*)L_12, XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34_il2cpp_TypeInfo_var));
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_13 = V_3;
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_14 = V_3;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_15 = (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)il2cpp_codegen_object_new(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		XElement__ctor_m3AE89E314A40AEB1D13944480CD5B30CB60C9D78(L_15, L_14, /*hidden argument*/NULL);
		XContainer_AddNode_m3B49E506A447F39245C198F05C0D7E07B2AFAAF0(__this, L_15, /*hidden argument*/NULL);
		return;
	}

IL_0061:
	{
		RuntimeObject * L_16 = ___content0;
		V_4 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_16, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_4;
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = V_4;
		V_6 = L_18;
		V_7 = 0;
		goto IL_008b;
	}

IL_0076:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = V_6;
		int32_t L_20 = V_7;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		RuntimeObject * L_23 = V_8;
		XContainer_Add_m5FBA597F4E81D576BA717343AFC8DCB2C1404680(__this, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_008b:
	{
		int32_t L_25 = V_7;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0076;
		}
	}
	{
		return;
	}

IL_0094:
	{
		RuntimeObject * L_27 = ___content0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_27, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_29);
		V_9 = L_30;
	}

IL_00a9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_00ab:
		{
			RuntimeObject* L_31 = V_9;
			NullCheck(L_31);
			RuntimeObject * L_32;
			L_32 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_31);
			V_10 = L_32;
			RuntimeObject * L_33 = V_10;
			XContainer_Add_m5FBA597F4E81D576BA717343AFC8DCB2C1404680(__this, L_33, /*hidden argument*/NULL);
		}

IL_00bc:
		{
			RuntimeObject* L_34 = V_9;
			NullCheck(L_34);
			bool L_35;
			L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_00ab;
			}
		}

IL_00c5:
		{
			IL2CPP_LEAVE(0xDC, FINALLY_00c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c7;
	}

FINALLY_00c7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_36 = V_9;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_37 = V_11;
			if (!L_37)
			{
				goto IL_00db;
			}
		}

IL_00d4:
		{
			RuntimeObject* L_38 = V_11;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_38);
		}

IL_00db:
		{
			IL2CPP_END_FINALLY(199)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(199)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
	}

IL_00dc:
	{
		return;
	}

IL_00dd:
	{
		RuntimeObject * L_39 = ___content0;
		String_t* L_40;
		L_40 = XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE(L_39, /*hidden argument*/NULL);
		XContainer_AddString_m838F5C7418839B65CFAAEE10428961699F67C704(__this, L_40, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Descendants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Descendants_mE54252C8A4962CCFC6EFCE28556B5A26B0540EEC (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = XContainer_GetDescendants_m26609CCC57956A976879AEE736EEF7533CC3EFB1(__this, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Descendants(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Descendants_m3556BD579EBD93ECEF4162510065F59FFED18F92 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___name0;
		bool L_1;
		L_1 = XName_op_Inequality_m106365E2539393767EB11F262FCF6E8BAEEA4B1A(L_0, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = XElement_get_EmptySequence_mE19D827ECE2151A7207F1336A51D2136555ED3E0(/*hidden argument*/NULL);
		return L_2;
	}

IL_000f:
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		RuntimeObject* L_4;
		L_4 = XContainer_GetDescendants_m26609CCC57956A976879AEE736EEF7533CC3EFB1(__this, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XContainer::Element(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * XContainer_Element_mDD805465CD32F3FD06807CA9E34BBD976A554BB5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_0, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}

IL_000f:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_2 = V_0;
		NullCheck(L_2);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = L_2->get_next_2();
		V_0 = L_3;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4 = V_0;
		V_1 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_4, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_6 = V_1;
		NullCheck(L_6);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = L_6->get_name_5();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_8 = ___name0;
		bool L_9;
		L_9 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_10 = V_1;
		return L_10;
	}

IL_0030:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = V_0;
		RuntimeObject * L_12 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12))))
		{
			goto IL_000f;
		}
	}

IL_0039:
	{
		return (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Elements_mE3525ED34CA3769624CB81CF4501C662FE824DB3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3(__this, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::Elements(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Elements_m4989075D4083C5A851589B13832D5C5423B1F516 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___name0;
		bool L_1;
		L_1 = XName_op_Inequality_m106365E2539393767EB11F262FCF6E8BAEEA4B1A(L_0, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = XElement_get_EmptySequence_mE19D827ECE2151A7207F1336A51D2136555ED3E0(/*hidden argument*/NULL);
		return L_2;
	}

IL_000f:
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		RuntimeObject* L_4;
		L_4 = XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer::Nodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Nodes_m632C45E4BEDC295DD4F44DE68CB9B9F5385F4E54 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * L_0 = (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF *)il2cpp_codegen_object_new(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_il2cpp_TypeInfo_var);
		U3CNodesU3Ed__18__ctor_mB2DCCB80E37BA4A30B6F955C4F3F0CF4B81896DE(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.Void System.Xml.Linq.XContainer::RemoveNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNodes_mD6CB5A36AAC9A8CF3381274D1BC94584DF4BEA52 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_1 = NULL;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_2 = NULL;
	{
		bool L_0;
		L_0 = XObject_SkipNotify_m28058EBFF963451EFC0AAF9B7DD709B16D8F9895(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00f6;
		}
	}
	{
		XContainer_RemoveNodesSkipNotify_m2F8AE552A8DFB329CF8B49315E262A2242F76ACD(__this, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		RuntimeObject * L_1 = __this->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_007d;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		XContainer_ConvertTextToNode_m814277C7AD70A979F8FC62CF38682F02409A7160(__this, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0032:
	{
		if (!((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)__this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_5 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_6;
		L_6 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, __this, L_5, /*hidden argument*/NULL);
		String_t* L_7 = V_0;
		RuntimeObject * L_8 = __this->get_content_3();
		if ((((RuntimeObject*)(String_t*)L_7) == ((RuntimeObject*)(RuntimeObject *)L_8)))
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_9;
		L_9 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_10 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_RemoveNodes_mD6CB5A36AAC9A8CF3381274D1BC94584DF4BEA52_RuntimeMethod_var)));
	}

IL_0060:
	{
		__this->set_content_3(NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_11 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_12;
		L_12 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, __this, L_11, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0076:
	{
		__this->set_content_3(NULL);
	}

IL_007d:
	{
		RuntimeObject * L_13 = __this->get_content_3();
		V_1 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_13, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_14 = V_1;
		if (!L_14)
		{
			goto IL_00f6;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_15 = V_1;
		NullCheck(L_15);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_16 = L_15->get_next_2();
		V_2 = L_16;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_18 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Remove_3();
		bool L_19;
		L_19 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, L_17, L_18, /*hidden argument*/NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_20 = V_1;
		RuntimeObject * L_21 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_20) == ((RuntimeObject*)(RuntimeObject *)L_21))))
		{
			goto IL_00b2;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_22 = V_2;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_23 = V_1;
		NullCheck(L_23);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_24 = L_23->get_next_2();
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_22) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_24)))
		{
			goto IL_00c2;
		}
	}

IL_00b2:
	{
		String_t* L_25;
		L_25 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_26 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_RemoveNodes_mD6CB5A36AAC9A8CF3381274D1BC94584DF4BEA52_RuntimeMethod_var)));
	}

IL_00c2:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_27 = V_2;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_28 = V_1;
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_27) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_28)))
		{
			goto IL_00d4;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_29 = V_1;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_30 = V_2;
		NullCheck(L_30);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_31 = L_30->get_next_2();
		NullCheck(L_29);
		L_29->set_next_2(L_31);
		goto IL_00db;
	}

IL_00d4:
	{
		__this->set_content_3(NULL);
	}

IL_00db:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_32 = V_2;
		NullCheck(L_32);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_32)->set_parent_0((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_33 = V_2;
		NullCheck(L_33);
		L_33->set_next_2((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_35 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Remove_3();
		bool L_36;
		L_36 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, L_34, L_35, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		RuntimeObject * L_37 = __this->get_content_3();
		if (L_37)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddAttribute(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddAttribute_m9032A5EA6E359E379520614059608A9110C41AB5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddAttributeSkipNotify(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddAttributeSkipNotify_m98411425AC3DD84B5B13CF906CE66D0A052EC662 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddContentSkipNotify(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddContentSkipNotify_m85827FD1365976E30A8EE5498B0E20C46A9D266B (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, RuntimeObject * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	String_t* V_1 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_2 = NULL;
	XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * V_3 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_6 = NULL;
	int32_t V_7 = 0;
	RuntimeObject * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___content0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject * L_1 = ___content0;
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_1, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = V_0;
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		RuntimeObject * L_4 = ___content0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_1;
		XContainer_AddStringSkipNotify_m549907826B0971C84089F41A99115AB8791A3D2E(__this, L_6, /*hidden argument*/NULL);
		return;
	}

IL_0028:
	{
		RuntimeObject * L_7 = ___content0;
		V_2 = ((XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)IsInstClass((RuntimeObject*)L_7, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var));
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = V_2;
		VirtActionInvoker1< XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * >::Invoke(12 /* System.Void System.Xml.Linq.XContainer::AddAttributeSkipNotify(System.Xml.Linq.XAttribute) */, __this, L_9);
		return;
	}

IL_003a:
	{
		RuntimeObject * L_10 = ___content0;
		V_3 = ((XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 *)IsInstClass((RuntimeObject*)L_10, XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34_il2cpp_TypeInfo_var));
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_11 = V_3;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_12 = V_3;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_13 = (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)il2cpp_codegen_object_new(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		XElement__ctor_m3AE89E314A40AEB1D13944480CD5B30CB60C9D78(L_13, L_12, /*hidden argument*/NULL);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0051:
	{
		RuntimeObject * L_14 = ___content0;
		V_4 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_14, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_4;
		if (!L_15)
		{
			goto IL_0084;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = V_4;
		V_6 = L_16;
		V_7 = 0;
		goto IL_007b;
	}

IL_0066:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_6;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_8 = L_20;
		RuntimeObject * L_21 = V_8;
		XContainer_AddContentSkipNotify_m85827FD1365976E30A8EE5498B0E20C46A9D266B(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_23 = V_7;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = V_6;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0066;
		}
	}
	{
		return;
	}

IL_0084:
	{
		RuntimeObject * L_25 = ___content0;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
		RuntimeObject* L_26 = V_5;
		if (!L_26)
		{
			goto IL_00cd;
		}
	}
	{
		RuntimeObject* L_27 = V_5;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_27);
		V_9 = L_28;
	}

IL_0099:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ac;
		}

IL_009b:
		{
			RuntimeObject* L_29 = V_9;
			NullCheck(L_29);
			RuntimeObject * L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			V_10 = L_30;
			RuntimeObject * L_31 = V_10;
			XContainer_AddContentSkipNotify_m85827FD1365976E30A8EE5498B0E20C46A9D266B(__this, L_31, /*hidden argument*/NULL);
		}

IL_00ac:
		{
			RuntimeObject* L_32 = V_9;
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_009b;
			}
		}

IL_00b5:
		{
			IL2CPP_LEAVE(0xCC, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_9;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_11;
			if (!L_35)
			{
				goto IL_00cb;
			}
		}

IL_00c4:
		{
			RuntimeObject* L_36 = V_11;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
		}

IL_00cb:
		{
			IL2CPP_END_FINALLY(183)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCC, IL_00cc)
	}

IL_00cc:
	{
		return;
	}

IL_00cd:
	{
		RuntimeObject * L_37 = ___content0;
		String_t* L_38;
		L_38 = XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE(L_37, /*hidden argument*/NULL);
		XContainer_AddStringSkipNotify_m549907826B0971C84089F41A99115AB8791A3D2E(__this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddNode(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddNode_m3B49E506A447F39245C198F05C0D7E07B2AFAAF0 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method)
{
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___n0;
		VirtActionInvoker2< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(13 /* System.Void System.Xml.Linq.XContainer::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode) */, __this, L_0, __this);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_1 = ___n0;
		NullCheck(L_1);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_2 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_1)->get_parent_0();
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = ___n0;
		NullCheck(L_3);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4;
		L_4 = VirtFuncInvoker0< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_3);
		___n0 = L_4;
		goto IL_0039;
	}

IL_001a:
	{
		V_0 = __this;
		goto IL_0025;
	}

IL_001e:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5 = V_0;
		NullCheck(L_5);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_6 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_5)->get_parent_0();
		V_0 = L_6;
	}

IL_0025:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = V_0;
		NullCheck(L_7);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_8 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_7)->get_parent_0();
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = ___n0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_10 = V_0;
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_9) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_10))))
		{
			goto IL_0039;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = ___n0;
		NullCheck(L_11);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_12;
		L_12 = VirtFuncInvoker0< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_11);
		___n0 = L_12;
	}

IL_0039:
	{
		XContainer_ConvertTextToNode_m814277C7AD70A979F8FC62CF38682F02409A7160(__this, /*hidden argument*/NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_13 = ___n0;
		XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddNodeSkipNotify(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method)
{
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___n0;
		VirtActionInvoker2< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(13 /* System.Void System.Xml.Linq.XContainer::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode) */, __this, L_0, __this);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_1 = ___n0;
		NullCheck(L_1);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_2 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_1)->get_parent_0();
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = ___n0;
		NullCheck(L_3);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4;
		L_4 = VirtFuncInvoker0< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_3);
		___n0 = L_4;
		goto IL_0039;
	}

IL_001a:
	{
		V_0 = __this;
		goto IL_0025;
	}

IL_001e:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5 = V_0;
		NullCheck(L_5);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_6 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_5)->get_parent_0();
		V_0 = L_6;
	}

IL_0025:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = V_0;
		NullCheck(L_7);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_8 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_7)->get_parent_0();
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = ___n0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_10 = V_0;
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_9) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_10))))
		{
			goto IL_0039;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = ___n0;
		NullCheck(L_11);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_12;
		L_12 = VirtFuncInvoker0< XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * >::Invoke(10 /* System.Xml.Linq.XNode System.Xml.Linq.XNode::CloneNode() */, L_11);
		___n0 = L_12;
	}

IL_0039:
	{
		XContainer_ConvertTextToNode_m814277C7AD70A979F8FC62CF38682F02409A7160(__this, /*hidden argument*/NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_13 = ___n0;
		XContainer_AppendNodeSkipNotify_m7E11E884F1504058BAB299925A1BD9092A7E0CF3(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddString_m838F5C7418839B65CFAAEE10428961699F67C704 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XText_t14C82CC828138F000842E6611CBE05281260A3FC * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.Linq.XContainer::ValidateString(System.String) */, __this, L_0);
		RuntimeObject * L_1 = __this->get_content_3();
		if (L_1)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___s0;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_5 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(L_5, L_4, /*hidden argument*/NULL);
		XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0025:
	{
		if (!((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)__this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)))
		{
			goto IL_0067;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_6 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_7;
		L_7 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, __this, L_6, /*hidden argument*/NULL);
		RuntimeObject * L_8 = __this->get_content_3();
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_9;
		L_9 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_10 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_AddString_m838F5C7418839B65CFAAEE10428961699F67C704_RuntimeMethod_var)));
	}

IL_0052:
	{
		String_t* L_11 = ___s0;
		__this->set_content_3(L_11);
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_12 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_13;
		L_13 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, __this, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0067:
	{
		String_t* L_14 = ___s0;
		__this->set_content_3(L_14);
		return;
	}

IL_006f:
	{
		String_t* L_15 = ___s0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		XContainer_ConvertTextToNode_m814277C7AD70A979F8FC62CF38682F02409A7160(__this, /*hidden argument*/NULL);
		RuntimeObject * L_17 = __this->get_content_3();
		V_0 = ((XText_t14C82CC828138F000842E6611CBE05281260A3FC *)IsInstClass((RuntimeObject*)L_17, XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var));
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_18 = V_0;
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_19 = V_0;
		if (((XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF *)IsInstClass((RuntimeObject*)L_19, XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_20 = V_0;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_21 = L_20;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = XText_get_Value_m9597869DABAA9D2BF8275CEDB4A6A85D46FF6BE5_inline(L_21, /*hidden argument*/NULL);
		String_t* L_23 = ___s0;
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		XText_set_Value_m9CF8B47091F98CD190A82324BA437C1F29F4C8CE(L_21, L_24, /*hidden argument*/NULL);
		return;
	}

IL_00a8:
	{
		String_t* L_25 = ___s0;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_26 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(L_26, L_25, /*hidden argument*/NULL);
		XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95(__this, L_26, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddStringSkipNotify(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AddStringSkipNotify_m549907826B0971C84089F41A99115AB8791A3D2E (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XText_t14C82CC828138F000842E6611CBE05281260A3FC * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.Linq.XContainer::ValidateString(System.String) */, __this, L_0);
		RuntimeObject * L_1 = __this->get_content_3();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_2 = ___s0;
		__this->set_content_3(L_2);
		return;
	}

IL_0017:
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_5 = __this->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject * L_6 = __this->get_content_3();
		String_t* L_7 = ___s0;
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
		__this->set_content_3(L_8);
		return;
	}

IL_0045:
	{
		RuntimeObject * L_9 = __this->get_content_3();
		V_0 = ((XText_t14C82CC828138F000842E6611CBE05281260A3FC *)IsInstClass((RuntimeObject*)L_9, XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var));
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_10 = V_0;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_11 = V_0;
		if (((XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF *)IsInstClass((RuntimeObject*)L_11, XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var)))
		{
			goto IL_006f;
		}
	}
	{
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_12 = V_0;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_13 = L_12;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_text_3();
		String_t* L_15 = ___s0;
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_text_3(L_16);
		return;
	}

IL_006f:
	{
		String_t* L_17 = ___s0;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_18 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(L_18, L_17, /*hidden argument*/NULL);
		XContainer_AppendNodeSkipNotify_m7E11E884F1504058BAB299925A1BD9092A7E0CF3(__this, L_18, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AppendNode(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___n0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_1 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Add_2();
		bool L_2;
		L_2 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, L_0, L_1, /*hidden argument*/NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = ___n0;
		NullCheck(L_3);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_3)->get_parent_0();
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0024;
		}
	}
	{
		String_t* L_5;
		L_5 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_AppendNode_m947EFFDD8614B7B6063252DBBC0F85901D35BF95_RuntimeMethod_var)));
	}

IL_0024:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = ___n0;
		XContainer_AppendNodeSkipNotify_m7E11E884F1504058BAB299925A1BD9092A7E0CF3(__this, L_7, /*hidden argument*/NULL);
		if (!G_B2_0)
		{
			goto IL_003a;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = ___n0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_9 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Add_2();
		bool L_10;
		L_10 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AppendNodeSkipNotify(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AppendNodeSkipNotify_m7E11E884F1504058BAB299925A1BD9092A7E0CF3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___n0;
		NullCheck(L_0);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_0)->set_parent_0(__this);
		RuntimeObject * L_1 = __this->get_content_3();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}

IL_001c:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = ___n0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4 = ___n0;
		NullCheck(L_3);
		L_3->set_next_2(L_4);
		goto IL_0044;
	}

IL_0025:
	{
		RuntimeObject * L_5 = __this->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_5, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = ___n0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = V_0;
		NullCheck(L_7);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = L_7->get_next_2();
		NullCheck(L_6);
		L_6->set_next_2(L_8);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = V_0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_10 = ___n0;
		NullCheck(L_9);
		L_9->set_next_2(L_10);
	}

IL_0044:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = ___n0;
		__this->set_content_3(L_11);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AppendText(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_AppendText_m551C5A592CE1FCD30897888F8E794F40459E8922 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		StringBuilder_t * L_2 = ___sb0;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0018:
	{
		RuntimeObject * L_5 = __this->get_content_3();
		V_1 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_5, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_003e;
		}
	}

IL_0027:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = V_1;
		NullCheck(L_7);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = L_7->get_next_2();
		V_1 = L_8;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = V_1;
		StringBuilder_t * L_10 = ___sb0;
		NullCheck(L_9);
		VirtActionInvoker1< StringBuilder_t * >::Invoke(9 /* System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder) */, L_9, L_10);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = V_1;
		RuntimeObject * L_12 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12))))
		{
			goto IL_0027;
		}
	}

IL_003e:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ConvertTextToNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ConvertTextToNode_m814277C7AD70A979F8FC62CF38682F02409A7160 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XText_t14C82CC828138F000842E6611CBE05281260A3FC * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = V_0;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_5 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_6 = V_1;
		NullCheck(L_6);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_6)->set_parent_0(__this);
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_7 = V_1;
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_8 = V_1;
		NullCheck(L_7);
		((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_7)->set_next_2(L_8);
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_9 = V_1;
		__this->set_content_3(L_9);
	}

IL_0034:
	{
		return;
	}
}
// System.String System.Xml.Linq.XContainer::GetDateTimeString(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XContainer_GetDateTimeString_mD58B479E6A678F25B000540B0683BDEBBAC2CFEC (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m1139F2A62832E0EF1D7C214ED15D614988F5FD3F(L_0, 3, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetDescendants(System.Xml.Linq.XName,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetDescendants_m26609CCC57956A976879AEE736EEF7533CC3EFB1 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, bool ___self1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_0 = (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 *)il2cpp_codegen_object_new(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_il2cpp_TypeInfo_var);
		U3CGetDescendantsU3Ed__39__ctor_mD3D3B2DF62F121AF73CA827AE17E2D8EA88840FA(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_2 = L_1;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__name_7(L_3);
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_4 = L_2;
		bool L_5 = ___self1;
		NullCheck(L_4);
		L_4->set_U3CU3E3__self_4(L_5);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer::GetElements(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_GetElements_mD0047470C5500C65C8EE064CEF831242E64766E3 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_0 = (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC *)il2cpp_codegen_object_new(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_2 = L_1;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__name_6(L_3);
		return L_2;
	}
}
// System.String System.Xml.Linq.XContainer::GetStringValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		goto IL_00d3;
	}

IL_0014:
	{
		RuntimeObject * L_2 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = XmlConvert_ToString_m51BE800D94C00383F928CCAFB3D0CA3A3F79250F(((*(double*)((double*)UnBox(L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_00d3;
	}

IL_002d:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = XmlConvert_ToString_m0643D6F180F5822924A75CDCFBF4FC62B69AF4DC(((*(float*)((float*)UnBox(L_6, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_00d3;
	}

IL_0046:
	{
		RuntimeObject * L_8 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = XmlConvert_ToString_mF0F35219CB0F55A48EAF67875060E3BA68E122EB(((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_9, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_00d3;
	}

IL_005c:
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = XmlConvert_ToString_mC4A313B9407202F12B69C5AEFE53EF335C8D6671(((*(bool*)((bool*)UnBox(L_12, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_00d3;
	}

IL_0072:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16;
		L_16 = XContainer_GetDateTimeString_mD58B479E6A678F25B000540B0683BDEBBAC2CFEC(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_15, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00d3;
	}

IL_0088:
	{
		RuntimeObject * L_17 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var)))
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = XmlConvert_ToString_m66654A257CAF79B16B3D1F8DA454DD585E0C3C2F(((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_18, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_00d3;
	}

IL_009e:
	{
		RuntimeObject * L_20 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject * L_21 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = XmlConvert_ToString_mA49BF4E7E48322EFA7176A913BB2438F46B545C3(((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_21, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_00d3;
	}

IL_00b4:
	{
		RuntimeObject * L_23 = ___value0;
		if (!((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)IsInstClass((RuntimeObject*)L_23, XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6_il2cpp_TypeInfo_var)))
		{
			goto IL_00cc;
		}
	}
	{
		String_t* L_24;
		L_24 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665790B550DE00E17BA971D1D60E8148C2C3CEFB)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_25 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE_RuntimeMethod_var)));
	}

IL_00cc:
	{
		RuntimeObject * L_26 = ___value0;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_0 = L_27;
	}

IL_00d3:
	{
		String_t* L_28 = V_0;
		if (L_28)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_29;
		L_29 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFF2135A9F37786CC0108D53D4AFCDF36E7B4E8F)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_30 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_GetStringValue_m0446331D32F7BDCAE899B332243E52D6B16180EE_RuntimeMethod_var)));
	}

IL_00e6:
	{
		String_t* L_31 = V_0;
		return L_31;
	}
}
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		s_Il2CppMethodInitialized = true;
	}
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_0 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_4 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * G_B8_0 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * G_B8_1 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * G_B7_0 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * G_B9_1 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * G_B9_2 = NULL;
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___r0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2;
		L_2 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC_RuntimeMethod_var)));
	}

IL_0019:
	{
		V_0 = __this;
		il2cpp_codegen_initobj((&V_1), sizeof(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 ));
		il2cpp_codegen_initobj((&V_2), sizeof(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 ));
	}

IL_002b:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_4 = ___r0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_4);
		V_3 = L_5;
		int32_t L_6 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_01dd;
			}
			case 2:
			{
				goto IL_0132;
			}
			case 3:
			{
				goto IL_0143;
			}
			case 4:
			{
				goto IL_01bd;
			}
			case 5:
			{
				goto IL_01dd;
			}
			case 6:
			{
				goto IL_016f;
			}
			case 7:
			{
				goto IL_0159;
			}
			case 8:
			{
				goto IL_01dd;
			}
			case 9:
			{
				goto IL_0188;
			}
			case 10:
			{
				goto IL_01dd;
			}
			case 11:
			{
				goto IL_01dd;
			}
			case 12:
			{
				goto IL_0132;
			}
			case 13:
			{
				goto IL_0132;
			}
			case 14:
			{
				goto IL_010e;
			}
			case 15:
			{
				goto IL_0201;
			}
		}
	}
	{
		goto IL_01dd;
	}

IL_007f:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_7 = ___r0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_9;
		L_9 = NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995((NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 *)(&V_1), L_8, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_10 = ___r0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_10);
		NullCheck(L_9);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_12;
		L_12 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_9, L_11, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_13 = (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)il2cpp_codegen_object_new(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		XElement__ctor_m7C010BE83763396D50EB4E51C1B21A1DDDE258B2(L_13, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_14 = ___r0;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_14);
		if (!L_15)
		{
			goto IL_00f3;
		}
	}

IL_00a6:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_16 = V_4;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_17 = ___r0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_17);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		G_B7_0 = (&V_2);
		G_B7_1 = L_16;
		if (!L_19)
		{
			G_B8_0 = (&V_2);
			G_B8_1 = L_16;
			goto IL_00bf;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_20 = ___r0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_20);
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00c4;
	}

IL_00bf:
	{
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B9_0 = L_22;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00c4:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_23;
		L_23 = NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995((NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 *)G_B9_1, G_B9_0, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_24 = ___r0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_24);
		NullCheck(L_23);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_26;
		L_26 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_23, L_25, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_27 = ___r0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_27);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_29 = (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)il2cpp_codegen_object_new(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F(L_29, L_26, L_28, /*hidden argument*/NULL);
		NullCheck(G_B9_2);
		XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843(G_B9_2, L_29, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_30 = ___r0;
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_30);
		if (L_31)
		{
			goto IL_00a6;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_32 = ___r0;
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_32);
	}

IL_00f3:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_34 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_35 = V_4;
		NullCheck(L_34);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_34, L_35, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_36 = ___r0;
		NullCheck(L_36);
		bool L_37;
		L_37 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_36);
		if (L_37)
		{
			goto IL_0201;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_38 = V_4;
		V_0 = L_38;
		goto IL_0201;
	}

IL_010e:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_39 = V_0;
		NullCheck(L_39);
		RuntimeObject * L_40 = L_39->get_content_3();
		if (L_40)
		{
			goto IL_0121;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_41 = V_0;
		String_t* L_42 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_41);
		L_41->set_content_3(L_42);
	}

IL_0121:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_43 = V_0;
		if ((!(((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_43) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this))))
		{
			goto IL_0126;
		}
	}
	{
		return;
	}

IL_0126:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_44 = V_0;
		NullCheck(L_44);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_45 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_44)->get_parent_0();
		V_0 = L_45;
		goto IL_0201;
	}

IL_0132:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_46 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_47 = ___r0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_47);
		NullCheck(L_46);
		XContainer_AddStringSkipNotify_m549907826B0971C84089F41A99115AB8791A3D2E(L_46, L_48, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_0143:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_49 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_50 = ___r0;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_50);
		XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * L_52 = (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF *)il2cpp_codegen_object_new(XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		XCData__ctor_m9FA9F20CF152A7C7EEC9320F2FCD3F2F036C8F2E(L_52, L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_49, L_52, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_0159:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_53 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_54 = ___r0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_54);
		XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * L_56 = (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 *)il2cpp_codegen_object_new(XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var);
		XComment__ctor_mD1594490E6706E752D9A5C9B748CF84AEC2B9B22(L_56, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_53, L_56, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_016f:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_57 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_58 = ___r0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_58);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_60 = ___r0;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_60);
		XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * L_62 = (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 *)il2cpp_codegen_object_new(XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m49A9FD814CED60CDF313649D7529DBE0AC8D4A7B(L_62, L_59, L_61, /*hidden argument*/NULL);
		NullCheck(L_57);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_57, L_62, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_0188:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_63 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_64 = ___r0;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_64);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_66 = ___r0;
		NullCheck(L_66);
		String_t* L_67;
		L_67 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_66, _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_68 = ___r0;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_68, _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_70 = ___r0;
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_70);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_72 = ___r0;
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = VirtFuncInvoker0< RuntimeObject* >::Invoke(52 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_72);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_74 = (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 *)il2cpp_codegen_object_new(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m92F5146E20DD2E0CFA9A8A8DFF85D27050B314D5(L_74, L_65, L_67, L_69, L_71, L_73, /*hidden argument*/NULL);
		NullCheck(L_63);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_63, L_74, /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_01bd:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_75 = ___r0;
		NullCheck(L_75);
		bool L_76;
		L_76 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::get_CanResolveEntity() */, L_75);
		if (L_76)
		{
			goto IL_01d5;
		}
	}
	{
		String_t* L_77;
		L_77 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_78 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_78, L_77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC_RuntimeMethod_var)));
	}

IL_01d5:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_79 = ___r0;
		NullCheck(L_79);
		VirtActionInvoker0::Invoke(39 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_79);
		goto IL_0201;
	}

IL_01dd:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = L_80;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_82 = ___r0;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_82);
		int32_t L_84 = L_83;
		RuntimeObject * L_85 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_84);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_85);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_85);
		String_t* L_86;
		L_86 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B)), L_81, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_87 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_87, L_86, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC_RuntimeMethod_var)));
	}

IL_0201:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_88 = ___r0;
		NullCheck(L_88);
		bool L_89;
		L_89 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_88);
		if (L_89)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___r0, int32_t ___o1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		s_Il2CppMethodInitialized = true;
	}
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_0 = NULL;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_1 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662  V_2;
	memset((&V_2), 0, sizeof(V_2));
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_8 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_9 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_10 = NULL;
	String_t* G_B7_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * G_B22_0 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * G_B21_0 = NULL;
	String_t* G_B23_0 = NULL;
	NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 * G_B23_1 = NULL;
	{
		int32_t L_0 = ___o1;
		if (((int32_t)((int32_t)L_0&(int32_t)6)))
		{
			goto IL_000d;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_1 = ___r0;
		XContainer_ReadContentFrom_mF11967A08DEE66ACFB5179D0C8F6B0190644A2AC(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_000d:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_2 = ___r0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_4;
		L_4 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_0 = __this;
		V_1 = (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL;
		il2cpp_codegen_initobj((&V_2), sizeof(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 ));
		il2cpp_codegen_initobj((&V_3), sizeof(NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 ));
		int32_t L_6 = ___o1;
		if (((int32_t)((int32_t)L_6&(int32_t)2)))
		{
			goto IL_0042;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_0048;
	}

IL_0042:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_7 = ___r0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_7);
		G_B7_0 = L_8;
	}

IL_0048:
	{
		V_4 = G_B7_0;
		int32_t L_9 = ___o1;
		if (((int32_t)((int32_t)L_9&(int32_t)4)))
		{
			goto IL_0052;
		}
	}
	{
		G_B10_0 = ((RuntimeObject*)(NULL));
		goto IL_0058;
	}

IL_0052:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_10 = ___r0;
		G_B10_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var));
	}

IL_0058:
	{
		V_5 = G_B10_0;
	}

IL_005a:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_11 = ___r0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_11);
		V_6 = L_12;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_13 = ___r0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_13);
		V_7 = L_14;
		int32_t L_15 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00b8;
			}
			case 1:
			{
				goto IL_02e1;
			}
			case 2:
			{
				goto IL_021d;
			}
			case 3:
			{
				goto IL_025b;
			}
			case 4:
			{
				goto IL_02c1;
			}
			case 5:
			{
				goto IL_02e1;
			}
			case 6:
			{
				goto IL_027d;
			}
			case 7:
			{
				goto IL_026c;
			}
			case 8:
			{
				goto IL_02e1;
			}
			case 9:
			{
				goto IL_0291;
			}
			case 10:
			{
				goto IL_02e1;
			}
			case 11:
			{
				goto IL_02e1;
			}
			case 12:
			{
				goto IL_021d;
			}
			case 13:
			{
				goto IL_021d;
			}
			case 14:
			{
				goto IL_01b2;
			}
			case 15:
			{
				goto IL_0305;
			}
		}
	}
	{
		goto IL_02e1;
	}

IL_00b8:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_16 = ___r0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_18;
		L_18 = NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995((NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 *)(&V_2), L_17, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_19 = ___r0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_19);
		NullCheck(L_18);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_21;
		L_21 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_18, L_20, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_22 = (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)il2cpp_codegen_object_new(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		XElement__ctor_m7C010BE83763396D50EB4E51C1B21A1DDDE258B2(L_22, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		String_t* L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ef;
		}
	}
	{
		String_t* L_24 = V_4;
		String_t* L_25 = V_6;
		bool L_26;
		L_26 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ef;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_27 = V_8;
		String_t* L_28 = V_6;
		NullCheck(L_27);
		XObject_SetBaseUri_m166BE057D57AACC044AB91ADE70D36408FD4ED27(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		RuntimeObject* L_29 = V_5;
		if (!L_29)
		{
			goto IL_0111;
		}
	}
	{
		RuntimeObject* L_30 = V_5;
		NullCheck(L_30);
		bool L_31;
		L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_30);
		if (!L_31)
		{
			goto IL_0111;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_32 = V_8;
		RuntimeObject* L_33 = V_5;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_33);
		RuntimeObject* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_32);
		XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95(L_32, L_34, L_36, /*hidden argument*/NULL);
	}

IL_0111:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_37 = ___r0;
		NullCheck(L_37);
		bool L_38;
		L_38 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_37);
		if (!L_38)
		{
			goto IL_018c;
		}
	}

IL_0119:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_39 = ___r0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_39);
		NullCheck(L_40);
		int32_t L_41;
		L_41 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_40, /*hidden argument*/NULL);
		G_B21_0 = (&V_3);
		if (!L_41)
		{
			G_B22_0 = (&V_3);
			goto IL_0130;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_42 = ___r0;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_42);
		G_B23_0 = L_43;
		G_B23_1 = G_B21_0;
		goto IL_0135;
	}

IL_0130:
	{
		String_t* L_44 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B23_0 = L_44;
		G_B23_1 = G_B22_0;
	}

IL_0135:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_45;
		L_45 = NamespaceCache_Get_mDA87B6F824AD4AAA424A68A15CCDB48205326995((NamespaceCache_t490BD1E7DD8D46B0FB2E2FCC8DD2EBF257F0C662 *)G_B23_1, G_B23_0, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_46 = ___r0;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_46);
		NullCheck(L_45);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_48;
		L_48 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_45, L_47, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_49 = ___r0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_51 = (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)il2cpp_codegen_object_new(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F(L_51, L_48, L_50, /*hidden argument*/NULL);
		V_9 = L_51;
		RuntimeObject* L_52 = V_5;
		if (!L_52)
		{
			goto IL_0174;
		}
	}
	{
		RuntimeObject* L_53 = V_5;
		NullCheck(L_53);
		bool L_54;
		L_54 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_53);
		if (!L_54)
		{
			goto IL_0174;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_55 = V_9;
		RuntimeObject* L_56 = V_5;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_56);
		RuntimeObject* L_58 = V_5;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_55);
		XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95(L_55, L_57, L_59, /*hidden argument*/NULL);
	}

IL_0174:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_60 = V_8;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_61 = V_9;
		NullCheck(L_60);
		XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843(L_60, L_61, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_62 = ___r0;
		NullCheck(L_62);
		bool L_63;
		L_63 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_62);
		if (L_63)
		{
			goto IL_0119;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_64 = ___r0;
		NullCheck(L_64);
		bool L_65;
		L_65 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_64);
	}

IL_018c:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_66 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_67 = V_8;
		NullCheck(L_66);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_66, L_67, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_68 = ___r0;
		NullCheck(L_68);
		bool L_69;
		L_69 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_68);
		if (L_69)
		{
			goto IL_0305;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_70 = V_8;
		V_0 = L_70;
		String_t* L_71 = V_4;
		if (!L_71)
		{
			goto IL_0305;
		}
	}
	{
		String_t* L_72 = V_6;
		V_4 = L_72;
		goto IL_0305;
	}

IL_01b2:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_73 = V_0;
		NullCheck(L_73);
		RuntimeObject * L_74 = L_73->get_content_3();
		if (L_74)
		{
			goto IL_01c5;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_75 = V_0;
		String_t* L_76 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_75);
		L_75->set_content_3(L_76);
	}

IL_01c5:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_77 = V_0;
		V_10 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_77, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_78 = V_10;
		if (!L_78)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_79 = V_5;
		if (!L_79)
		{
			goto IL_01f3;
		}
	}
	{
		RuntimeObject* L_80 = V_5;
		NullCheck(L_80);
		bool L_81;
		L_81 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_80);
		if (!L_81)
		{
			goto IL_01f3;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_82 = V_10;
		RuntimeObject* L_83 = V_5;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_83);
		RuntimeObject* L_85 = V_5;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_82);
		XElement_SetEndElementLineInfo_m4AF7794890F6E0D65E87B8F967E9A3F6B13B41D5(L_82, L_84, L_86, /*hidden argument*/NULL);
	}

IL_01f3:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_87 = V_0;
		if ((!(((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_87) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this))))
		{
			goto IL_01f8;
		}
	}
	{
		return;
	}

IL_01f8:
	{
		String_t* L_88 = V_4;
		if (!L_88)
		{
			goto IL_0211;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_89 = V_0;
		NullCheck(L_89);
		bool L_90;
		L_90 = XObject_get_HasBaseUri_m495D449FCEEAB86FEFD3119310D1D1C7F7271C5A(L_89, /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_0211;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_91 = V_0;
		NullCheck(L_91);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_92 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_91)->get_parent_0();
		NullCheck(L_92);
		String_t* L_93;
		L_93 = XObject_get_BaseUri_m130E3178739EEEB478D7826AF5341937EBCA4E97(L_92, /*hidden argument*/NULL);
		V_4 = L_93;
	}

IL_0211:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_94 = V_0;
		NullCheck(L_94);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_95 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_94)->get_parent_0();
		V_0 = L_95;
		goto IL_0305;
	}

IL_021d:
	{
		String_t* L_96 = V_4;
		if (!L_96)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_97 = V_4;
		String_t* L_98 = V_6;
		bool L_99;
		L_99 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_97, L_98, /*hidden argument*/NULL);
		if (L_99)
		{
			goto IL_0239;
		}
	}

IL_022c:
	{
		RuntimeObject* L_100 = V_5;
		if (!L_100)
		{
			goto IL_024a;
		}
	}
	{
		RuntimeObject* L_101 = V_5;
		NullCheck(L_101);
		bool L_102;
		L_102 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_101);
		if (!L_102)
		{
			goto IL_024a;
		}
	}

IL_0239:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_103 = ___r0;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_103);
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_105 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B(L_105, L_104, /*hidden argument*/NULL);
		V_1 = L_105;
		goto IL_0305;
	}

IL_024a:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_106 = V_0;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_107 = ___r0;
		NullCheck(L_107);
		String_t* L_108;
		L_108 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_107);
		NullCheck(L_106);
		XContainer_AddStringSkipNotify_m549907826B0971C84089F41A99115AB8791A3D2E(L_106, L_108, /*hidden argument*/NULL);
		goto IL_0305;
	}

IL_025b:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_109 = ___r0;
		NullCheck(L_109);
		String_t* L_110;
		L_110 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_109);
		XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF * L_111 = (XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF *)il2cpp_codegen_object_new(XCData_t2D3320B7D21595905FFCA80B1CE6A727F567AAEF_il2cpp_TypeInfo_var);
		XCData__ctor_m9FA9F20CF152A7C7EEC9320F2FCD3F2F036C8F2E(L_111, L_110, /*hidden argument*/NULL);
		V_1 = L_111;
		goto IL_0305;
	}

IL_026c:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_112 = ___r0;
		NullCheck(L_112);
		String_t* L_113;
		L_113 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_112);
		XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 * L_114 = (XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9 *)il2cpp_codegen_object_new(XComment_tD6BF10BCD07F5C522ED57476CCAC1DAB4B4115C9_il2cpp_TypeInfo_var);
		XComment__ctor_mD1594490E6706E752D9A5C9B748CF84AEC2B9B22(L_114, L_113, /*hidden argument*/NULL);
		V_1 = L_114;
		goto IL_0305;
	}

IL_027d:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_115 = ___r0;
		NullCheck(L_115);
		String_t* L_116;
		L_116 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_115);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_117 = ___r0;
		NullCheck(L_117);
		String_t* L_118;
		L_118 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_117);
		XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * L_119 = (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 *)il2cpp_codegen_object_new(XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m49A9FD814CED60CDF313649D7529DBE0AC8D4A7B(L_119, L_116, L_118, /*hidden argument*/NULL);
		V_1 = L_119;
		goto IL_0305;
	}

IL_0291:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_120 = ___r0;
		NullCheck(L_120);
		String_t* L_121;
		L_121 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_120);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_122 = ___r0;
		NullCheck(L_122);
		String_t* L_123;
		L_123 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_122, _stringLiteral1F1BC4D23D8E5661364EBEC728BE303959F6CF91);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_124 = ___r0;
		NullCheck(L_124);
		String_t* L_125;
		L_125 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_124, _stringLiteralD4DAA1A26807E1A567D68B161E6A95701A3FD560);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_126 = ___r0;
		NullCheck(L_126);
		String_t* L_127;
		L_127 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_126);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_128 = ___r0;
		NullCheck(L_128);
		RuntimeObject* L_129;
		L_129 = VirtFuncInvoker0< RuntimeObject* >::Invoke(52 /* System.Xml.IDtdInfo System.Xml.XmlReader::get_DtdInfo() */, L_128);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_130 = (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 *)il2cpp_codegen_object_new(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m92F5146E20DD2E0CFA9A8A8DFF85D27050B314D5(L_130, L_121, L_123, L_125, L_127, L_129, /*hidden argument*/NULL);
		V_1 = L_130;
		goto IL_0305;
	}

IL_02c1:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_131 = ___r0;
		NullCheck(L_131);
		bool L_132;
		L_132 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::get_CanResolveEntity() */, L_131);
		if (L_132)
		{
			goto IL_02d9;
		}
	}
	{
		String_t* L_133;
		L_133 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral501C7A99CB5D9B00206EDB627BD9F44F2FFFF7A0)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_134 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_134, L_133, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629_RuntimeMethod_var)));
	}

IL_02d9:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_135 = ___r0;
		NullCheck(L_135);
		VirtActionInvoker0::Invoke(39 /* System.Void System.Xml.XmlReader::ResolveEntity() */, L_135);
		goto IL_0305;
	}

IL_02e1:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_136 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_137 = L_136;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_138 = ___r0;
		NullCheck(L_138);
		int32_t L_139;
		L_139 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_138);
		int32_t L_140 = L_139;
		RuntimeObject * L_141 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_140);
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_141);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_141);
		String_t* L_142;
		L_142 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FAA2E070FFBE18DB7236C5FBDA9522A6EB8E95B)), L_137, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_143 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_143, L_142, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629_RuntimeMethod_var)));
	}

IL_0305:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_144 = V_1;
		if (!L_144)
		{
			goto IL_0349;
		}
	}
	{
		String_t* L_145 = V_4;
		if (!L_145)
		{
			goto IL_031f;
		}
	}
	{
		String_t* L_146 = V_4;
		String_t* L_147 = V_6;
		bool L_148;
		L_148 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_146, L_147, /*hidden argument*/NULL);
		if (!L_148)
		{
			goto IL_031f;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_149 = V_1;
		String_t* L_150 = V_6;
		NullCheck(L_149);
		XObject_SetBaseUri_m166BE057D57AACC044AB91ADE70D36408FD4ED27(L_149, L_150, /*hidden argument*/NULL);
	}

IL_031f:
	{
		RuntimeObject* L_151 = V_5;
		if (!L_151)
		{
			goto IL_0340;
		}
	}
	{
		RuntimeObject* L_152 = V_5;
		NullCheck(L_152);
		bool L_153;
		L_153 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_152);
		if (!L_153)
		{
			goto IL_0340;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_154 = V_1;
		RuntimeObject* L_155 = V_5;
		NullCheck(L_155);
		int32_t L_156;
		L_156 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_155);
		RuntimeObject* L_157 = V_5;
		NullCheck(L_157);
		int32_t L_158;
		L_158 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_157);
		NullCheck(L_154);
		XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95(L_154, L_156, L_158, /*hidden argument*/NULL);
	}

IL_0340:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_159 = V_0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_160 = V_1;
		NullCheck(L_159);
		XContainer_AddNodeSkipNotify_m3F02B171C8968D655B0DD2B7C544CB4BB66A16B5(L_159, L_160, /*hidden argument*/NULL);
		V_1 = (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL;
	}

IL_0349:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_161 = ___r0;
		NullCheck(L_161);
		bool L_162;
		L_162 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_161);
		if (L_162)
		{
			goto IL_005a;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::RemoveNode(System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNode_m072810FCA68B5F31097CFF678F1CD8AB5B7940E5 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_1 = NULL;
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___n0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_1 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Remove_3();
		bool L_2;
		L_2 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = ___n0;
		NullCheck(L_3);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_3)->get_parent_0();
		if ((((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_4) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_5;
		L_5 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XContainer_RemoveNode_m072810FCA68B5F31097CFF678F1CD8AB5B7940E5_RuntimeMethod_var)));
	}

IL_0026:
	{
		RuntimeObject * L_7 = __this->get_content_3();
		V_1 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_7, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		goto IL_003b;
	}

IL_0034:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = V_1;
		NullCheck(L_8);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = L_8->get_next_2();
		V_1 = L_9;
	}

IL_003b:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_10 = V_1;
		NullCheck(L_10);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = L_10->get_next_2();
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_12 = ___n0;
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_11) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_12))))
		{
			goto IL_0034;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_13 = V_1;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_14 = ___n0;
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_13) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		__this->set_content_3(NULL);
		goto IL_006d;
	}

IL_0051:
	{
		RuntimeObject * L_15 = __this->get_content_3();
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_16 = ___n0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_15) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_16))))
		{
			goto IL_0061;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_17 = V_1;
		__this->set_content_3(L_17);
	}

IL_0061:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_18 = V_1;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_19 = ___n0;
		NullCheck(L_19);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_20 = L_19->get_next_2();
		NullCheck(L_18);
		L_18->set_next_2(L_20);
	}

IL_006d:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_21 = ___n0;
		NullCheck(L_21);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_21)->set_parent_0((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_22 = ___n0;
		NullCheck(L_22);
		L_22->set_next_2((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL);
		bool L_23 = V_0;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_24 = ___n0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_25 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Remove_3();
		bool L_26;
		L_26 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, L_24, L_25, /*hidden argument*/NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::RemoveNodesSkipNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNodesSkipNotify_m2F8AE552A8DFB329CF8B49315E262A2242F76ACD (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_1 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_0, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}

IL_000f:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_2 = V_0;
		NullCheck(L_2);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_3 = L_2->get_next_2();
		V_1 = L_3;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4 = V_0;
		NullCheck(L_4);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_4)->set_parent_0((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_next_2((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)NULL);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = V_1;
		V_0 = L_6;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = V_0;
		RuntimeObject * L_8 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_7) == ((RuntimeObject*)(RuntimeObject *)L_8))))
		{
			goto IL_000f;
		}
	}

IL_002f:
	{
		__this->set_content_3(NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ValidateNode_mCB3953BC2CCE733B956DF952FB8EA39089D15B96 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___node0, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___previous1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::ValidateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_ValidateString_m0E5A8B53A0F59FF13B97310D30FFF8C70DAF011F (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::WriteContentTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_WriteContentTo_mFA062B17E987BA975BF8CC8022E15A5B9E903C96 (XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_content_3();
		if (!L_0)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject * L_1 = __this->get_content_3();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		if (!((XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF *)IsInstClass((RuntimeObject*)__this, XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_2 = ___writer0;
		RuntimeObject * L_3 = __this->get_content_3();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_2, ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_002f:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_4 = ___writer0;
		RuntimeObject * L_5 = __this->get_content_3();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_4, ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_0041:
	{
		RuntimeObject * L_6 = __this->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_6, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
	}

IL_004d:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = V_0;
		NullCheck(L_7);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = L_7->get_next_2();
		V_0 = L_8;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = V_0;
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_10 = ___writer0;
		NullCheck(L_9);
		VirtActionInvoker1< XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, L_9, L_10);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_11 = V_0;
		RuntimeObject * L_12 = __this->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_11) == ((RuntimeObject*)(RuntimeObject *)L_12))))
		{
			goto IL_004d;
		}
	}

IL_0064:
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
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclaration__ctor_mAC7E1D3714CCD045D87DAF9F6C9EEAECAE66F650 (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version0;
		__this->set_version_0(L_0);
		String_t* L_1 = ___encoding1;
		__this->set_encoding_1(L_1);
		String_t* L_2 = ___standalone2;
		__this->set_standalone_2(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclaration__ctor_mBCB4F6ED791E5154C266DBC138B2647309D9C3AE (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * ___other0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDeclaration__ctor_mBCB4F6ED791E5154C266DBC138B2647309D9C3AE_RuntimeMethod_var)));
	}

IL_0014:
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_version_0();
		__this->set_version_0(L_3);
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_encoding_1();
		__this->set_encoding_1(L_5);
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_standalone_2();
		__this->set_standalone_2(L_7);
		return;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Encoding_mC688E2726A699007C9C7B3EEE8C7398EE276E92C (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_encoding_1();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_m15EF1F74D2226D5CAE08BB9847949FBD2F63D967 (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_standalone_2();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Version_mDDED237A915B204AE4457A8A79AF21EC3B900BCB (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_version_0();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclaration_ToString_m62CE18C891848DF411864E40CEA3B1FB5490DCBE (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A80D09E42ECF83939C0550908D8E7889359C8D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AFC0DE819870B50AA0F59F4823CD7064A39BC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5951FDB2957BF41EA4FB9A27A477F9E1CE0B841B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C80BE31B3A7206EDCC7D55B9B8DC0407E7A87EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA849558816A84F373F471C0275248DA08F91A4A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_0, _stringLiteral1A80D09E42ECF83939C0550908D8E7889359C8D8, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get_version_0();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, _stringLiteral5951FDB2957BF41EA4FB9A27A477F9E1CE0B841B, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = V_0;
		String_t* L_5 = __this->get_version_0();
		NullCheck(L_4);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_4, L_5, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
	}

IL_0038:
	{
		String_t* L_9 = __this->get_encoding_1();
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		StringBuilder_t * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_10, _stringLiteralA849558816A84F373F471C0275248DA08F91A4A6, /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_0;
		String_t* L_13 = __this->get_encoding_1();
		NullCheck(L_12);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, L_13, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
	}

IL_0065:
	{
		String_t* L_17 = __this->get_standalone_2();
		if (!L_17)
		{
			goto IL_0092;
		}
	}
	{
		StringBuilder_t * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteral3AFC0DE819870B50AA0F59F4823CD7064A39BC72, /*hidden argument*/NULL);
		StringBuilder_t * L_20 = V_0;
		String_t* L_21 = __this->get_standalone_2();
		NullCheck(L_20);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_20, L_21, /*hidden argument*/NULL);
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
	}

IL_0092:
	{
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, _stringLiteral6C80BE31B3A7206EDCC7D55B9B8DC0407E7A87EB, /*hidden argument*/NULL);
		StringBuilder_t * L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		return L_28;
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
// System.Void System.Xml.Linq.XDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m450D739400B3456C2DF8FF011DE91994776D506A (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method)
{
	{
		XContainer__ctor_m3C7E61824CB53C8FA18BC4226C6C0BA4BAE3B646(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m35FD266D78A2F7C6BD941715B4EE65E86AF2E5A6 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * L_0 = ___other0;
		XContainer__ctor_mA6A69DAB1077038C297FBE6B4697DD40AB426ED2(__this, L_0, /*hidden argument*/NULL);
		XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * L_1 = ___other0;
		NullCheck(L_1);
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_2 = L_1->get_declaration_4();
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * L_3 = ___other0;
		NullCheck(L_3);
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_4 = L_3->get_declaration_4();
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_5 = (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 *)il2cpp_codegen_object_new(XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090_il2cpp_TypeInfo_var);
		XDeclaration__ctor_mBCB4F6ED791E5154C266DBC138B2647309D9C3AE(L_5, L_4, /*hidden argument*/NULL);
		__this->set_declaration_4(L_5);
	}

IL_0020:
	{
		return;
	}
}
// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::get_Declaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * XDocument_get_Declaration_m79EEF06C46AFAB498402C2D1D34140A0E06ABCA3 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method)
{
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_0 = __this->get_declaration_4();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XDocument::set_Declaration(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m972A42B67962FBA050E91864F7056AD03FB7ECA0 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * ___value0, const RuntimeMethod* method)
{
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_0 = ___value0;
		__this->set_declaration_4(L_0);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XDocument::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XDocument_get_NodeType_m94EEA82F54C2D649D757B564D1BBC9D6EC516601 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * XDocument_get_Root_mAE2F3525990D542B2614A8CCA6F42C45A0F4302F (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_GetFirstNode_TisXElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_mD5651D2E3E0A617D9638704AC58489F346DE4CCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0;
		L_0 = XDocument_GetFirstNode_TisXElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_mD5651D2E3E0A617D9638704AC58489F346DE4CCA(__this, /*hidden argument*/XDocument_GetFirstNode_TisXElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_mD5651D2E3E0A617D9638704AC58489F346DE4CCA_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void System.Xml.Linq.XDocument::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_WriteTo_mCA9178E00D706F20B0F0EC03956C778B4FD95A82 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_WriteTo_mCA9178E00D706F20B0F0EC03956C778B4FD95A82_RuntimeMethod_var)));
	}

IL_000e:
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_2 = __this->get_declaration_4();
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_3 = __this->get_declaration_4();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XDeclaration_get_Standalone_m15EF1F74D2226D5CAE08BB9847949FBD2F63D967_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_6 = ___writer0;
		NullCheck(L_6);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartDocument(System.Boolean) */, L_6, (bool)1);
		goto IL_0064;
	}

IL_0036:
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_7 = __this->get_declaration_4();
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * L_8 = __this->get_declaration_4();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = XDeclaration_get_Standalone_m15EF1F74D2226D5CAE08BB9847949FBD2F63D967_inline(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral7BFA33A11F0B12AF1B7FA1D9BA996EAE1EF77B49, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_11 = ___writer0;
		NullCheck(L_11);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Xml.XmlWriter::WriteStartDocument(System.Boolean) */, L_11, (bool)0);
		goto IL_0064;
	}

IL_005e:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_12 = ___writer0;
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlWriter::WriteStartDocument() */, L_12);
	}

IL_0064:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_13 = ___writer0;
		XContainer_WriteContentTo_mFA062B17E987BA975BF8CC8022E15A5B9E903C96(__this, L_13, /*hidden argument*/NULL);
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_14 = ___writer0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlWriter::WriteEndDocument() */, L_14);
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::AddAttribute(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_AddAttribute_m1782ABA0C66FEBCAD60E9FB8B8384222E0A16E13 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_AddAttribute_m1782ABA0C66FEBCAD60E9FB8B8384222E0A16E13_RuntimeMethod_var)));
	}
}
// System.Void System.Xml.Linq.XDocument::AddAttributeSkipNotify(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_AddAttributeSkipNotify_m15961A743A956E9F083D390A61D5A0834C625AD3 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB32CBA74471B0BEA9F5E6F2D81368851EB20F188)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_AddAttributeSkipNotify_m15961A743A956E9F083D390A61D5A0834C625AD3_RuntimeMethod_var)));
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XDocument::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XDocument_CloneNode_m5CD649BF1FAB030E425751216C9CC3EF1B00C405 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * L_0 = (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF *)il2cpp_codegen_object_new(XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var);
		XDocument__ctor_m35FD266D78A2F7C6BD941715B4EE65E86AF2E5A6(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XDocument::IsWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XDocument_IsWhitespace_mD58CA1E5A1CEE372FE68D01AEA18DD7A8A705420 (String_t* ___s0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___s0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)9))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_0024;
		}
	}
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)10))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)0;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_ValidateNode_m910C70D956DB041302A7AF202D9B361BF1AD8B1F (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___node0, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___previous1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)10))))
		{
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_002a:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5 = ___node0;
		NullCheck(((XText_t14C82CC828138F000842E6611CBE05281260A3FC *)CastclassClass((RuntimeObject*)L_5, XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = XText_get_Value_m9597869DABAA9D2BF8275CEDB4A6A85D46FF6BE5_inline(((XText_t14C82CC828138F000842E6611CBE05281260A3FC *)CastclassClass((RuntimeObject*)L_5, XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.Linq.XContainer::ValidateString(System.String) */, __this, L_6);
		return;
	}

IL_003c:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = ___previous1;
		XDocument_ValidateDocument_mF01236248E0025F9F140CC29CC233395C4BB4B46(__this, L_7, ((int32_t)10), 0, /*hidden argument*/NULL);
		return;
	}

IL_0047:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = ___previous1;
		XDocument_ValidateDocument_mF01236248E0025F9F140CC29CC233395C4BB4B46(__this, L_8, 0, 1, /*hidden argument*/NULL);
		return;
	}

IL_0051:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		int32_t L_11 = 4;
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49)), L_10, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_ValidateNode_m910C70D956DB041302A7AF202D9B361BF1AD8B1F_RuntimeMethod_var)));
	}

IL_0070:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		int32_t L_17 = ((int32_t)9);
		RuntimeObject * L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_17);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		String_t* L_19;
		L_19 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49)), L_16, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_ValidateNode_m910C70D956DB041302A7AF202D9B361BF1AD8B1F_RuntimeMethod_var)));
	}

IL_0090:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateDocument(System.Xml.Linq.XNode,System.Xml.XmlNodeType,System.Xml.XmlNodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_ValidateDocument_mF01236248E0025F9F140CC29CC233395C4BB4B46 (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___previous0, int32_t ___allowBefore1, int32_t ___allowAfter2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_3();
		V_0 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_0, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_2 = ___previous0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___allowAfter2;
		___allowBefore1 = L_3;
	}

IL_0015:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_4 = V_0;
		NullCheck(L_4);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5 = L_4->get_next_2();
		V_0 = L_5;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_6);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0043;
		}
	}

IL_002c:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___allowBefore1;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_12;
		L_12 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE72DBFC447E1D53312863F57EF2C05A706E17E85)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_13 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_ValidateDocument_mF01236248E0025F9F140CC29CC233395C4BB4B46_RuntimeMethod_var)));
	}

IL_0040:
	{
		___allowBefore1 = 0;
	}

IL_0043:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_14 = V_0;
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_15 = ___previous0;
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_14) == ((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_15))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_16 = ___allowAfter2;
		___allowBefore1 = L_16;
	}

IL_004a:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_17 = V_0;
		RuntimeObject * L_18 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_17) == ((RuntimeObject*)(RuntimeObject *)L_18))))
		{
			goto IL_0015;
		}
	}

IL_0053:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument_ValidateString_m416D0F8419FDA051AA3E98D16C36E6D93C78DB8A (XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		bool L_1;
		L_1 = XDocument_IsWhitespace_mD58CA1E5A1CEE372FE68D01AEA18DD7A8A705420(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2;
		L_2 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral582BE1949D522410D0C0CA69C37F3379F416C90B)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocument_ValidateString_m416D0F8419FDA051AA3E98D16C36E6D93C78DB8A_RuntimeMethod_var)));
	}

IL_0018:
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
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_m8DD9AEBE8CA7BEE73B9AE7D221DA238FB47724C3 (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_VerifyName_mE8CC32DC47699A3C92B6A948B123F1CDBC6141CD(L_0, /*hidden argument*/NULL);
		__this->set_name_3(L_1);
		String_t* L_2 = ___publicId1;
		__this->set_publicId_4(L_2);
		String_t* L_3 = ___systemId2;
		__this->set_systemId_5(L_3);
		String_t* L_4 = ___internalSubset3;
		__this->set_internalSubset_6(L_4);
		return;
	}
}
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.Xml.Linq.XDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_m4973BAC4702EF6EDA6B304CC74DD77F34B1EA51A (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * ___other0, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocumentType__ctor_m4973BAC4702EF6EDA6B304CC74DD77F34B1EA51A_RuntimeMethod_var)));
	}

IL_0014:
	{
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_3();
		__this->set_name_3(L_3);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_publicId_4();
		__this->set_publicId_4(L_5);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_systemId_5();
		__this->set_systemId_5(L_7);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_internalSubset_6();
		__this->set_internalSubset_6(L_9);
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_10 = ___other0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_dtdInfo_7();
		__this->set_dtdInfo_7(L_11);
		return;
	}
}
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.IDtdInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_m92F5146E20DD2E0CFA9A8A8DFF85D27050B314D5 (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, RuntimeObject* ___dtdInfo4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___publicId1;
		String_t* L_2 = ___systemId2;
		String_t* L_3 = ___internalSubset3;
		XDocumentType__ctor_m8DD9AEBE8CA7BEE73B9AE7D221DA238FB47724C3(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___dtdInfo4;
		__this->set_dtdInfo_7(L_4);
		return;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_InternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentType_get_InternalSubset_m11B53A99D2308E042E737F455BC83B7E28B8A02E (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internalSubset_6();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentType_get_Name_m04C91428C8855ADAB40835A90052855A047018AE (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XDocumentType::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XDocumentType_get_NodeType_m6209474A166B3032CD79F42FE99C975EB44B6A6A (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)10));
	}
}
// System.String System.Xml.Linq.XDocumentType::get_PublicId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentType_get_PublicId_mB921F6E459C9B1C858D3DE85A9D2504A99BA0A7C (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_publicId_4();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_SystemId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentType_get_SystemId_mB1375770572FE85EEB70E7B9E5D7BFD70197589C (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_systemId_5();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XDocumentType::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType_WriteTo_m106DADF2D6955F901D34239ACC17F1CD47F06063 (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDocumentType_WriteTo_m106DADF2D6955F901D34239ACC17F1CD47F06063_RuntimeMethod_var)));
	}

IL_000e:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_2 = ___writer0;
		String_t* L_3 = __this->get_name_3();
		String_t* L_4 = __this->get_publicId_4();
		String_t* L_5 = __this->get_systemId_5();
		String_t* L_6 = __this->get_internalSubset_6();
		NullCheck(L_2);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XDocumentType::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XDocumentType_CloneNode_mBD0170ABA11A33CDFD0D19E98429E4A08EE471E8 (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 * L_0 = (XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 *)il2cpp_codegen_object_new(XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m4973BAC4702EF6EDA6B304CC74DD77F34B1EA51A(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::get_EmptySequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_get_EmptySequence_mE19D827ECE2151A7207F1336A51D2136555ED3E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields*)il2cpp_codegen_static_fields_for(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var))->get_emptySequence_4();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235* L_1 = (XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235*)(XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235*)SZArrayNew(XElementU5BU5D_t3EF6266E94E3609DC1A9167EC76545338CFC3235_il2cpp_TypeInfo_var, (uint32_t)0);
		((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields*)il2cpp_codegen_static_fields_for(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var))->set_emptySequence_4((RuntimeObject*)L_1);
	}

IL_0012:
	{
		RuntimeObject* L_2 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields*)il2cpp_codegen_static_fields_for(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var))->get_emptySequence_4();
		return L_2;
	}
}
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_m7C010BE83763396D50EB4E51C1B21A1DDDE258B2 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	{
		XContainer__ctor_m3C7E61824CB53C8FA18BC4226C6C0BA4BAE3B646(__this, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___name0;
		bool L_1;
		L_1 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_0, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement__ctor_m7C010BE83763396D50EB4E51C1B21A1DDDE258B2_RuntimeMethod_var)));
	}

IL_001a:
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		__this->set_name_5(L_3);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_m13B7B350DE7B5DDB8B55F222AA15066B66B149A6 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_0 = NULL;
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___other0;
		XContainer__ctor_mA6A69DAB1077038C297FBE6B4697DD40AB426ED2(__this, L_0, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = ___other0;
		NullCheck(L_1);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_2 = L_1->get_name_5();
		__this->set_name_5(L_2);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_3 = ___other0;
		NullCheck(L_3);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = L_3->get_lastAttr_6();
		V_0 = L_4;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_001d:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_6 = V_0;
		NullCheck(L_6);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = L_6->get_next_2();
		V_0 = L_7;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = V_0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)il2cpp_codegen_object_new(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B(L_9, L_8, /*hidden argument*/NULL);
		XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843(__this, L_9, /*hidden argument*/NULL);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_10 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_11 = ___other0;
		NullCheck(L_11);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_12 = L_11->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_10) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_12))))
		{
			goto IL_001d;
		}
	}

IL_0039:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XStreamingElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_m3AE89E314A40AEB1D13944480CD5B30CB60C9D78 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * ___other0, const RuntimeMethod* method)
{
	{
		XContainer__ctor_m3C7E61824CB53C8FA18BC4226C6C0BA4BAE3B646(__this, /*hidden argument*/NULL);
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement__ctor_m3AE89E314A40AEB1D13944480CD5B30CB60C9D78_RuntimeMethod_var)));
	}

IL_0014:
	{
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_2 = ___other0;
		NullCheck(L_2);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = L_2->get_name_0();
		__this->set_name_5(L_3);
		XStreamingElement_tF91A7404507ED70CB0F6CA1B45AA4842A6FA8B34 * L_4 = ___other0;
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_content_1();
		XContainer_AddContentSkipNotify_m85827FD1365976E30A8EE5498B0E20C46A9D266B(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.Linq.XElement::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_HasAttributes_m4681588387FD8D08E04FA08EAEECB5AFD421A257 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = __this->get_lastAttr_6();
		return (bool)((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XElement::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_IsEmpty_m31AB831470DCE26259DFB025072DA39737FAFDFE (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_3();
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_5();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XElement::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XElement_get_NodeType_m4C526FE6C4115275BADBDEE3F51292C0C272F2D4 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.String System.Xml.Linq.XElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_get_Value_mBD9F8869BF4F3865FEDED418854020E9AFF031FA (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	{
		RuntimeObject * L_0 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_3();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_3();
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_001f:
	{
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		StringBuilder_t * L_6 = V_1;
		VirtActionInvoker1< StringBuilder_t * >::Invoke(9 /* System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder) */, __this, L_6);
		StringBuilder_t * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// System.Void System.Xml.Linq.XElement::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_set_Value_mA9BECC59BB17AA10589D484755309953F5289C0E (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_set_Value_mA9BECC59BB17AA10589D484755309953F5289C0E_RuntimeMethod_var)));
	}

IL_000e:
	{
		XContainer_RemoveNodes_mD6CB5A36AAC9A8CF3381274D1BC94584DF4BEA52(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___value0;
		XContainer_Add_m5FBA597F4E81D576BA717343AFC8DCB2C1404680(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::Attribute(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * XElement_Attribute_mE6D1589D13FFB71DA11EA7B41685C149D1E03AFD (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_0 = NULL;
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = __this->get_lastAttr_6();
		V_0 = L_0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}

IL_000a:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2 = V_0;
		NullCheck(L_2);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_3 = L_2->get_next_2();
		V_0 = L_3;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = V_0;
		NullCheck(L_4);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5 = L_4->get_name_3();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_6 = ___name0;
		bool L_7;
		L_7 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = V_0;
		return L_8;
	}

IL_0021:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = V_0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_10 = __this->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_9) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_10))))
		{
			goto IL_000a;
		}
	}

IL_002a:
	{
		return (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_Attributes_m6EEF7C26CF58974068C62663F5A3AD6192327AEB (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = XElement_GetAttributes_m6E782BD24ECA27DDCDAA230F7C9F2A0EECC004ED(__this, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_mF9843F62F43762B9E43BBAF8DA634CFBBA393C8E (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_2 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_3 = NULL;
	bool V_4 = false;
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___ns0;
		bool L_1;
		L_1 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_0, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79F2854B5115F837632CEA50C217D0F077D292CF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_GetPrefixOfNamespace_mF9843F62F43762B9E43BBAF8DA634CFBBA393C8E_RuntimeMethod_var)));
	}

IL_0014:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3 = ___ns0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = (bool)0;
		V_2 = __this;
	}

IL_001f:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_5 = V_2;
		NullCheck(L_5);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_6 = L_5->get_lastAttr_6();
		V_3 = L_6;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = V_3;
		if (!L_7)
		{
			goto IL_008f;
		}
	}
	{
		V_4 = (bool)0;
	}

IL_002c:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = V_3;
		NullCheck(L_8);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = L_8->get_next_2();
		V_3 = L_9;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_10 = V_3;
		NullCheck(L_10);
		bool L_11;
		L_11 = XAttribute_get_IsNamespaceDeclaration_mE2D54BB132D0A554FA334BDAF92D5664E2BF50EA(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline(L_12, /*hidden argument*/NULL);
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_16 = V_3;
		NullCheck(L_16);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_17;
		L_17 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_21 = V_3;
		NullCheck(L_21);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_22;
		L_22 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_22, /*hidden argument*/NULL);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_24 = V_2;
		String_t* L_25;
		L_25 = XElement_GetNamespaceOfPrefixInScope_m976485B69E3219453A8A4412721F8C3C90D03A96(__this, L_23, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_007e;
		}
	}

IL_0072:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_26 = V_3;
		NullCheck(L_26);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_27;
		L_27 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_007e:
	{
		V_4 = (bool)1;
	}

IL_0081:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_29 = V_3;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_30 = V_2;
		NullCheck(L_30);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_31 = L_30->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_29) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_31))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_32 = V_1;
		bool L_33 = V_4;
		V_1 = (bool)((int32_t)((int32_t)L_32|(int32_t)L_33));
	}

IL_008f:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_34 = V_2;
		NullCheck(L_34);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_35 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_34)->get_parent_0();
		V_2 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_35, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_36 = V_2;
		if (L_36)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_37 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_37) == ((RuntimeObject*)(String_t*)_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917))))
		{
			goto IL_00bd;
		}
	}
	{
		bool L_38 = V_1;
		if (!L_38)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_39;
		L_39 = XElement_GetNamespaceOfPrefixInScope_m976485B69E3219453A8A4412721F8C3C90D03A96(__this, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00cb;
		}
	}

IL_00b7:
	{
		return _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158;
	}

IL_00bd:
	{
		String_t* L_40 = V_0;
		if ((!(((RuntimeObject*)(String_t*)L_40) == ((RuntimeObject*)(String_t*)_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE))))
		{
			goto IL_00cb;
		}
	}
	{
		return _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
	}

IL_00cb:
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.Linq.XElement::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_WriteTo_mD0544B1B917B698378053735D34076540D872154 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	ElementWriter_t6D111ED288426979614A6213661C665262B12BAB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_WriteTo_mD0544B1B917B698378053735D34076540D872154_RuntimeMethod_var)));
	}

IL_000e:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_2 = ___writer0;
		ElementWriter_t6D111ED288426979614A6213661C665262B12BAB  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ElementWriter__ctor_mAF42701DBC7426DB8FF6F3C19F37C6A5B6E6F798((&L_3), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ElementWriter_WriteElement_mCA724B1F81D4D096CA8A0A3BC3B38B8AAB7A6E7C((ElementWriter_t6D111ED288426979614A6213661C665262B12BAB *)(&V_0), __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Schema.XmlSchema System.Xml.Linq.XElement::System.Xml.Serialization.IXmlSerializable.GetSchema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA * XElement_System_Xml_Serialization_IXmlSerializable_GetSchema_m830CC29C17E10FF1E9CB79C7D6D0CE4BF61C721E (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		return (XmlSchema_tD7A55716109AE793DA16441CC1A949F04E573CEA *)NULL;
	}
}
// System.Void System.Xml.Linq.XElement::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_System_Xml_Serialization_IXmlSerializable_ReadXml_mF23D51DDE64786E21605493504750F067142698C (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___reader0, const RuntimeMethod* method)
{
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_System_Xml_Serialization_IXmlSerializable_ReadXml_mF23D51DDE64786E21605493504750F067142698C_RuntimeMethod_var)));
	}

IL_000e:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_2 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_parent_0();
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject * L_3 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_annotations_1();
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject * L_4 = ((XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)__this)->get_content_3();
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = __this->get_lastAttr_6();
		if (!L_5)
		{
			goto IL_003e;
		}
	}

IL_002e:
	{
		String_t* L_6;
		L_6 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral088A9A5E3B4F0C5B7CA099259703FC5AA6BA7C5E)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_System_Xml_Serialization_IXmlSerializable_ReadXml_mF23D51DDE64786E21605493504750F067142698C_RuntimeMethod_var)));
	}

IL_003e:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_8 = ___reader0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(43 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_8);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		int32_t L_12 = 1;
		RuntimeObject * L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_11;
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_15 = ___reader0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		String_t* L_19;
		L_19 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5CCCD2494E78C8BCB11782EA6F5BE4D70AD09654)), L_14, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_20 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_System_Xml_Serialization_IXmlSerializable_ReadXml_mF23D51DDE64786E21605493504750F067142698C_RuntimeMethod_var)));
	}

IL_0074:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_21 = ___reader0;
		XElement_ReadElementFrom_mF82AFFF2679EAA2E7BD55E9C5D625A56FEBF06C3(__this, L_21, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_System_Xml_Serialization_IXmlSerializable_WriteXml_m652EAD7215E35A4DAC3F452095B76DED1C7AF58D (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		VirtActionInvoker1< XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, __this, L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::AddAttribute(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_AddAttribute_mD916A2A7588673C240606429B8DD72E9B8D9D02C (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = ___a0;
		NullCheck(L_0);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1;
		L_1 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_0, /*hidden argument*/NULL);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2;
		L_2 = XElement_Attribute_mE6D1589D13FFB71DA11EA7B41685C149D1E03AFD(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3;
		L_3 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_AddAttribute_mD916A2A7588673C240606429B8DD72E9B8D9D02C_RuntimeMethod_var)));
	}

IL_001e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = ___a0;
		NullCheck(L_5);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_6 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_5)->get_parent_0();
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = ___a0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)il2cpp_codegen_object_new(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B(L_8, L_7, /*hidden argument*/NULL);
		___a0 = L_8;
	}

IL_002e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = ___a0;
		XElement_AppendAttribute_m0DE1BE78518A9B191036D9142ACC5AC3D95DE169(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::AddAttributeSkipNotify(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_AddAttributeSkipNotify_m8D13DB88A3C9CDAB2187BD93B39071A969DE2E5A (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = ___a0;
		NullCheck(L_0);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1;
		L_1 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_0, /*hidden argument*/NULL);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2;
		L_2 = XElement_Attribute_mE6D1589D13FFB71DA11EA7B41685C149D1E03AFD(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3;
		L_3 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A2333FCD07371493EC6A40D0F145865A97BE75)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_AddAttributeSkipNotify_m8D13DB88A3C9CDAB2187BD93B39071A969DE2E5A_RuntimeMethod_var)));
	}

IL_001e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = ___a0;
		NullCheck(L_5);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_6 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_5)->get_parent_0();
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = ___a0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)il2cpp_codegen_object_new(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		XAttribute__ctor_m3EA3008A0D6C0B66C3868AAEB7EC7563DDD57C7B(L_8, L_7, /*hidden argument*/NULL);
		___a0 = L_8;
	}

IL_002e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = ___a0;
		XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::AppendAttribute(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_AppendAttribute_m0DE1BE78518A9B191036D9142ACC5AC3D95DE169 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_1 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Add_2();
		bool L_2;
		L_2 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, L_0, L_1, /*hidden argument*/NULL);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_3 = ___a0;
		NullCheck(L_3);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_3)->get_parent_0();
		G_B1_0 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_2;
			goto IL_0024;
		}
	}
	{
		String_t* L_5;
		L_5 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0AD11967FD3AC7BB8160E4DE21B7F70A5DCE6D2)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_AppendAttribute_m0DE1BE78518A9B191036D9142ACC5AC3D95DE169_RuntimeMethod_var)));
	}

IL_0024:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = ___a0;
		XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843(__this, L_7, /*hidden argument*/NULL);
		if (!G_B2_0)
		{
			goto IL_003a;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_9 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Add_2();
		bool L_10;
		L_10 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::AppendAttributeSkipNotify(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___a0, const RuntimeMethod* method)
{
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = ___a0;
		NullCheck(L_0);
		((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_0)->set_parent_0(__this);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_1 = __this->get_lastAttr_6();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2 = ___a0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_3 = ___a0;
		NullCheck(L_2);
		L_2->set_next_2(L_3);
		goto IL_0035;
	}

IL_0018:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = ___a0;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = __this->get_lastAttr_6();
		NullCheck(L_5);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_6 = L_5->get_next_2();
		NullCheck(L_4);
		L_4->set_next_2(L_6);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = __this->get_lastAttr_6();
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = ___a0;
		NullCheck(L_7);
		L_7->set_next_2(L_8);
	}

IL_0035:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_9 = ___a0;
		__this->set_lastAttr_6(L_9);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XElement::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XElement_CloneNode_m0D89413E6EE83A35FD5F726A6E5131F0AF6A3712 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)il2cpp_codegen_object_new(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		XElement__ctor_m13B7B350DE7B5DDB8B55F222AA15066B66B149A6(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::GetAttributes(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_GetAttributes_m6E782BD24ECA27DDCDAA230F7C9F2A0EECC004ED (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_0 = (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 *)il2cpp_codegen_object_new(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_il2cpp_TypeInfo_var);
		U3CGetAttributesU3Ed__105__ctor_mB7C85FC764518096A1A8FB18A9C0453E6F540D6F(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_2 = L_1;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3 = ___name0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__name_6(L_3);
		return L_2;
	}
}
// System.String System.Xml.Linq.XElement::GetNamespaceOfPrefixInScope(System.String,System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetNamespaceOfPrefixInScope_m976485B69E3219453A8A4412721F8C3C90D03A96 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, String_t* ___prefix0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___outOfScope1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_0 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_1 = NULL;
	{
		V_0 = __this;
		goto IL_004c;
	}

IL_0004:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = V_0;
		NullCheck(L_0);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_1 = L_0->get_lastAttr_6();
		V_1 = L_1;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0040;
		}
	}

IL_000e:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_3 = V_1;
		NullCheck(L_3);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_4 = L_3->get_next_2();
		V_1 = L_4;
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = XAttribute_get_IsNamespaceDeclaration_mE2D54BB132D0A554FA334BDAF92D5664E2BF50EA(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = V_1;
		NullCheck(L_7);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_8;
		L_8 = XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___prefix0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0037;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0037:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_14 = V_1;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_15 = V_0;
		NullCheck(L_15);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_16 = L_15->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_14) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_16))))
		{
			goto IL_000e;
		}
	}

IL_0040:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_17 = V_0;
		NullCheck(L_17);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_18 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_17)->get_parent_0();
		V_0 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_18, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_19 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_20 = ___outOfScope1;
		if ((!(((RuntimeObject*)(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)L_19) == ((RuntimeObject*)(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)L_20))))
		{
			goto IL_0004;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.Void System.Xml.Linq.XElement::ReadElementFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_ReadElementFrom_mF82AFFF2679EAA2E7BD55E9C5D625A56FEBF06C3 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * ___r0, int32_t ___o1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * V_2 = NULL;
	String_t* G_B14_0 = NULL;
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_0 = ___r0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(34 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2;
		L_2 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD81BDA78BCD57F79427E0E3EF951CA3C2F3104A)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_ReadElementFrom_mF82AFFF2679EAA2E7BD55E9C5D625A56FEBF06C3_RuntimeMethod_var)));
	}

IL_0019:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_4 = ___r0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_4);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_6;
		L_6 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(L_5, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_7 = ___r0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_7);
		NullCheck(L_6);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_9;
		L_9 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_6, L_8, /*hidden argument*/NULL);
		__this->set_name_5(L_9);
		int32_t L_10 = ___o1;
		if (!((int32_t)((int32_t)L_10&(int32_t)2)))
		{
			goto IL_0053;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_11 = ___r0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_11);
		V_1 = L_12;
		String_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_16 = V_1;
		XObject_SetBaseUri_m166BE057D57AACC044AB91ADE70D36408FD4ED27(__this, L_16, /*hidden argument*/NULL);
	}

IL_0053:
	{
		V_0 = (RuntimeObject*)NULL;
		int32_t L_17 = ___o1;
		if (!((int32_t)((int32_t)L_17&(int32_t)4)))
		{
			goto IL_007e;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_18 = ___r0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = V_0;
		if (!L_19)
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject* L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_20);
		if (!L_21)
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_22);
		RuntimeObject* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_24);
		XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95(__this, L_23, L_25, /*hidden argument*/NULL);
	}

IL_007e:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_26 = ___r0;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_26);
		if (!L_27)
		{
			goto IL_00ef;
		}
	}

IL_0086:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_28 = ___r0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Xml.XmlReader::get_Prefix() */, L_28);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009b;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_31 = ___r0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_31);
		G_B14_0 = L_32;
		goto IL_00a0;
	}

IL_009b:
	{
		String_t* L_33 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B14_0 = L_33;
	}

IL_00a0:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_34;
		L_34 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(G_B14_0, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_35 = ___r0;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlReader::get_LocalName() */, L_35);
		NullCheck(L_34);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_37;
		L_37 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_34, L_36, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_38 = ___r0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_38);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_40 = (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)il2cpp_codegen_object_new(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_il2cpp_TypeInfo_var);
		XAttribute__ctor_m40547774AADEFD8633306215AA57995F4BA4470F(L_40, L_37, L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		RuntimeObject* L_41 = V_0;
		if (!L_41)
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeObject* L_42 = V_0;
		NullCheck(L_42);
		bool L_43;
		L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_42);
		if (!L_43)
		{
			goto IL_00d9;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_44 = V_2;
		RuntimeObject* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_45);
		RuntimeObject* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_tA2EB52057E77921973EFB598BB874B5F2E41DD7B_il2cpp_TypeInfo_var, L_47);
		NullCheck(L_44);
		XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95(L_44, L_46, L_48, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_49 = V_2;
		XElement_AppendAttributeSkipNotify_m161154367C52FF183725DCE878094059B0042843(__this, L_49, /*hidden argument*/NULL);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_50 = ___r0;
		NullCheck(L_50);
		bool L_51;
		L_51 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_50);
		if (L_51)
		{
			goto IL_0086;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_52 = ___r0;
		NullCheck(L_52);
		bool L_53;
		L_53 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_52);
	}

IL_00ef:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_54 = ___r0;
		NullCheck(L_54);
		bool L_55;
		L_55 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_54);
		if (L_55)
		{
			goto IL_0106;
		}
	}
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_56 = ___r0;
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_56);
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_58 = ___r0;
		int32_t L_59 = ___o1;
		XContainer_ReadContentFrom_m10603F00B56DF27E71DCE896EF28269906D3F629(__this, L_58, L_59, /*hidden argument*/NULL);
	}

IL_0106:
	{
		XmlReader_tECCB3D8B757F8CE744EF0430F338BEF15E060138 * L_60 = ___r0;
		NullCheck(L_60);
		bool L_61;
		L_61 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Xml.XmlReader::Read() */, L_60);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::SetEndElementLineInfo(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_SetEndElementLineInfo_m4AF7794890F6E0D65E87B8F967E9A3F6B13B41D5 (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___lineNumber0;
		int32_t L_1 = ___linePosition1;
		LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2 * L_2 = (LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2 *)il2cpp_codegen_object_new(LineInfoEndElementAnnotation_tF060D1AA9783B73A9F60E3F575FA190571E09AF2_il2cpp_TypeInfo_var);
		LineInfoEndElementAnnotation__ctor_mC681F34922255C61324B88EF7174034FB58C3887(L_2, L_0, L_1, /*hidden argument*/NULL);
		XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::ValidateNode(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_ValidateNode_mAFE6C941B26F52216906391DC84D40D587F58C3F (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___node0, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___previous1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = ___node0;
		if (!((XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF *)IsInstClass((RuntimeObject*)L_0, XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = ((int32_t)9);
		RuntimeObject * L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		String_t* L_5;
		L_5 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49)), L_2, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_ValidateNode_mAFE6C941B26F52216906391DC84D40D587F58C3F_RuntimeMethod_var)));
	}

IL_0028:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = ___node0;
		if (!((XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892 *)IsInstClass((RuntimeObject*)L_7, XDocumentType_t392A7CB92D80332F5EF5C2AEE6D3C2FC0721B892_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		int32_t L_10 = ((int32_t)10);
		RuntimeObject * L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81_il2cpp_TypeInfo_var)), &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		String_t* L_12;
		L_12 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E4C5FABD283631DC7912E3AB1B252B989829C49)), L_9, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XElement_ValidateNode_mAFE6C941B26F52216906391DC84D40D587F58C3F_RuntimeMethod_var)));
	}

IL_0050:
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementAttributePropertyDescriptor__ctor_mD710FF4686F1C385B0B65277AC4F045CAA17C60D (XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA(__this, _stringLiteral120472D8D40924F6F8355A94DB677A8F142E2EB6, /*hidden argument*/XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA_RuntimeMethod_var);
		return;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XElementAttributePropertyDescriptor_GetValue_m7B6412C13A54ECB4E49E149777BFEADAB5031C90 (XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mCD13205634A300C35308CD8F65D67D87E15ABF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t470E20942568C704061B02E02AEA7628339BF3C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetValueU3Eb__3_0_mAD172688633CA9933639C206D0D6337CA89EAB15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredSingleton_1__ctor_mDB1E83E535B37F685F4B4FC535D71250529C713D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * V_0 = NULL;
	Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * G_B2_0 = NULL;
	XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * G_B2_1 = NULL;
	Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * G_B1_0 = NULL;
	XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var);
		Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * L_0 = ((U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var);
		U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * L_2 = ((U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * L_3 = (Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 *)il2cpp_codegen_object_new(Func_3_t470E20942568C704061B02E02AEA7628339BF3C5_il2cpp_TypeInfo_var);
		Func_3__ctor_mCD13205634A300C35308CD8F65D67D87E15ABF36(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetValueU3Eb__3_0_mAD172688633CA9933639C206D0D6337CA89EAB15_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mCD13205634A300C35308CD8F65D67D87E15ABF36_RuntimeMethod_var);
		Func_3_t470E20942568C704061B02E02AEA7628339BF3C5 * L_4 = L_3;
		((U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject * L_5 = ___component0;
		XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * L_6 = (XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C *)il2cpp_codegen_object_new(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C_il2cpp_TypeInfo_var);
		XDeferredSingleton_1__ctor_mDB1E83E535B37F685F4B4FC535D71250529C713D(L_6, G_B2_0, ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_5, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)), (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/XDeferredSingleton_1__ctor_mDB1E83E535B37F685F4B4FC535D71250529C713D_RuntimeMethod_var);
		XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * L_7 = L_6;
		V_0 = L_7;
		NullCheck(G_B2_1);
		G_B2_1->set_value_17(L_7);
		XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * L_8 = V_0;
		return L_8;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementDescendantsPropertyDescriptor__ctor_m0BC8F572EAAB573A8A2A23F056D84C226A6DFAC8 (XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4AF89928FE870257F471A2BC36DE24B3C2D4202);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2(__this, _stringLiteralA4AF89928FE870257F471A2BC36DE24B3C2D4202, /*hidden argument*/XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2_RuntimeMethod_var);
		return;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XElementDescendantsPropertyDescriptor_GetValue_mE15D4DA60CA02DA283F705F6C62D7084C128D83B (XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetValueU3Eb__3_0_mC1E21291F919FD6499A3B2803BB0D1CAF7C5966B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * V_0 = NULL;
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * G_B2_0 = NULL;
	XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * G_B2_1 = NULL;
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * G_B1_0 = NULL;
	XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var);
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_0 = ((U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var);
		U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * L_2 = ((U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_3 = (Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E *)il2cpp_codegen_object_new(Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E_il2cpp_TypeInfo_var);
		Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetValueU3Eb__3_0_mC1E21291F919FD6499A3B2803BB0D1CAF7C5966B_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0_RuntimeMethod_var);
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_4 = L_3;
		((U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject * L_5 = ___component0;
		XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * L_6 = (XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 *)il2cpp_codegen_object_new(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99_il2cpp_TypeInfo_var);
		XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD(L_6, G_B2_0, ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_5, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)), (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD_RuntimeMethod_var);
		XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * L_7 = L_6;
		V_0 = L_7;
		NullCheck(G_B2_1);
		G_B2_1->set_value_17(L_7);
		XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * L_8 = V_0;
		return L_8;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementElementPropertyDescriptor__ctor_m713399FB2E19BA297379623AB9BF2951C4B347F5 (XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA(__this, _stringLiteral9932973D4B6AA1AA193C06D8D34B58B677685003, /*hidden argument*/XPropertyDescriptor_2__ctor_mCC5A5D2EA58F011ED4B3A19808F7A77878765FFA_RuntimeMethod_var);
		return;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XElementElementPropertyDescriptor_GetValue_m546ECA81349F1DEFE939AC9F12F60A89AF5B37A0 (XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_mF8E2210F02D124C75E35C185BB1893FF6AF71ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetValueU3Eb__3_0_m244FA20007792002675A9344E101E65772BBC914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredSingleton_1__ctor_m4C8AA685D2F4D76F1710D3D9DCE142E24ECCCAE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * V_0 = NULL;
	Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * G_B2_0 = NULL;
	XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * G_B2_1 = NULL;
	Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * G_B1_0 = NULL;
	XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var);
		Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * L_0 = ((U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var);
		U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * L_2 = ((U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * L_3 = (Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 *)il2cpp_codegen_object_new(Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0_il2cpp_TypeInfo_var);
		Func_3__ctor_mF8E2210F02D124C75E35C185BB1893FF6AF71ED1(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetValueU3Eb__3_0_m244FA20007792002675A9344E101E65772BBC914_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF8E2210F02D124C75E35C185BB1893FF6AF71ED1_RuntimeMethod_var);
		Func_3_tA31AF8CB15F77EE4EE5BF7924759688940EE81E0 * L_4 = L_3;
		((U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject * L_5 = ___component0;
		XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * L_6 = (XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 *)il2cpp_codegen_object_new(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053_il2cpp_TypeInfo_var);
		XDeferredSingleton_1__ctor_m4C8AA685D2F4D76F1710D3D9DCE142E24ECCCAE0(L_6, G_B2_0, ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_5, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)), (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/XDeferredSingleton_1__ctor_m4C8AA685D2F4D76F1710D3D9DCE142E24ECCCAE0_RuntimeMethod_var);
		XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * L_7 = L_6;
		V_0 = L_7;
		NullCheck(G_B2_1);
		G_B2_1->set_value_17(L_7);
		XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * L_8 = V_0;
		return L_8;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementElementsPropertyDescriptor__ctor_m155278BABE2A17E372EBA9D08826B04314D7020C (XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2(__this, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, /*hidden argument*/XPropertyDescriptor_2__ctor_m37FD4DE3E3F0FB839230AC6E9E9E6BB71BFBBAF2_RuntimeMethod_var);
		return;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XElementElementsPropertyDescriptor_GetValue_m5376C0E553BA12D888B2535F7A8DE40CC011B880 (XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetValueU3Eb__3_0_m6EE39E48EFF3105C8893AC2C600989DA668E9BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * V_0 = NULL;
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * G_B2_0 = NULL;
	XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * G_B2_1 = NULL;
	Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * G_B1_0 = NULL;
	XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var);
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_0 = ((U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var);
		U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * L_2 = ((U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_3 = (Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E *)il2cpp_codegen_object_new(Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E_il2cpp_TypeInfo_var);
		Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CGetValueU3Eb__3_0_m6EE39E48EFF3105C8893AC2C600989DA668E9BB6_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m659307F8A7615885812B9AC7C8A3603711CD1CC0_RuntimeMethod_var);
		Func_3_t9DAF02A8154A3351411CCA93E1D4178F0365D58E * L_4 = L_3;
		((U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject * L_5 = ___component0;
		XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * L_6 = (XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 *)il2cpp_codegen_object_new(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99_il2cpp_TypeInfo_var);
		XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD(L_6, G_B2_0, ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_5, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)), (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/XDeferredAxis_1__ctor_m75AE9EE84B7893CCDB17C33B0D996E9E5B24E5AD_RuntimeMethod_var);
		XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * L_7 = L_6;
		V_0 = L_7;
		NullCheck(G_B2_1);
		G_B2_1->set_value_17(L_7);
		XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * L_8 = V_0;
		return L_8;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementValuePropertyDescriptor__ctor_m45307263CA105982EC6BE1190654277922115003 (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E(__this, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E_RuntimeMethod_var);
		return;
	}
}
// System.Boolean MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementValuePropertyDescriptor_get_IsReadOnly_m7167EAF4C9541BB65A4723452337822DF8F36C85 (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XElementValuePropertyDescriptor_GetValue_m3EC151EA43EC4C63697FA9FA12F32DC96BD9A2B1 (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___component0;
		__this->set_element_17(((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = __this->get_element_17();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_001a:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_3 = __this->get_element_17();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XElement_get_Value_mBD9F8869BF4F3865FEDED418854020E9AFF031FA(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementValuePropertyDescriptor_SetValue_mA14CCE26B9E63767AA94173275CE20815AD0E147 (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * __this, RuntimeObject * ___component0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___component0;
		__this->set_element_17(((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = __this->get_element_17();
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = __this->get_element_17();
		RuntimeObject * L_3 = ___value1;
		NullCheck(L_2);
		XElement_set_Value_mA9BECC59BB17AA10589D484755309953F5289C0E(L_2, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementXmlPropertyDescriptor__ctor_mAD30542B05F6B53100F95FDC889AAFB606925E5B (XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B4CED4F11B72FCE6659A7C377C251E9B13FA94E);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E(__this, _stringLiteral0B4CED4F11B72FCE6659A7C377C251E9B13FA94E, /*hidden argument*/XPropertyDescriptor_2__ctor_m11514E0698544C5C6248FF4310D204F262F38D5E_RuntimeMethod_var);
		return;
	}
}
// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XElementXmlPropertyDescriptor_GetValue_m583816666B3996B404CEB13B7BBFDE8EC74E522F (XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___component0;
		__this->set_element_17(((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = __this->get_element_17();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_001a:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_3 = __this->get_element_17();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = XNode_ToString_mEE34D42DE1684C52D8D0E708ACFC70134BB86164(L_3, 1, /*hidden argument*/NULL);
		return L_4;
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
// System.Void System.Xml.Linq.XName::.ctor(System.Xml.Linq.XNamespace,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName__ctor_m08CA9A842644AFE1545DDFB3EA1BF011D797CE59 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns0, String_t* ___localName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___ns0;
		__this->set_ns_0(L_0);
		String_t* L_1 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = XmlConvert_VerifyNCName_m21986D07C46947592D5B6EC2114435AB92B9C942(L_1, /*hidden argument*/NULL);
		__this->set_localName_1(L_2);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3 = ___ns0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		String_t* L_5 = ___localName1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		__this->set_hashCode_2(((int32_t)((int32_t)L_4^(int32_t)L_6)));
		return;
	}
}
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_1();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XName::get_Namespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XName_get_Namespace_m27DDB135C04C90BB031CA5ECC7B3436A31423488 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = __this->get_ns_0();
		return L_0;
	}
}
// System.String System.Xml.Linq.XName::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_m48B792158467825280622E60E7222C565B3BDB20 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = __this->get_ns_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XName::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_ToString_m5095F3F0750DD9AF19A7A4817CECD4192B4C0DD7 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = __this->get_ns_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = __this->get_localName_1();
		return L_3;
	}

IL_0019:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_4 = __this->get_ns_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_localName_1();
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_5, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7 (String_t* ___expandedName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___expandedName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0585B1F8C119DD15D843D55F7CCBF9D9162B9AC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___expandedName0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		String_t* L_6 = ___expandedName0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7;
		L_7 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E)), L_5, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var)));
	}

IL_0030:
	{
		String_t* L_9 = ___expandedName0;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_11 = ___expandedName0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_11, ((int32_t)125), /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_14 = V_0;
		String_t* L_15 = ___expandedName0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))))
		{
			goto IL_006d;
		}
	}

IL_0053:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		String_t* L_19 = ___expandedName0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		String_t* L_20;
		L_20 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B2A557B4B47ACB5849DADEBD641B0A73D5C5A0E)), L_18, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_21 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7_RuntimeMethod_var)));
	}

IL_006d:
	{
		String_t* L_22 = ___expandedName0;
		int32_t L_23 = V_0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_24;
		L_24 = XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA(L_22, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		String_t* L_25 = ___expandedName0;
		int32_t L_26 = V_0;
		String_t* L_27 = ___expandedName0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		NullCheck(L_24);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_30;
		L_30 = XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794(L_24, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), (int32_t)1)), /*hidden argument*/NULL);
		return L_30;
	}

IL_008b:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_31;
		L_31 = XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0(/*hidden argument*/NULL);
		String_t* L_32 = ___expandedName0;
		NullCheck(L_31);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_33;
		L_33 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XName_Get_m156EF1F2EE51A933D4606C3D36849511F104E16F (String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___namespaceName1;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1;
		L_1 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___localName0;
		NullCheck(L_1);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_3;
		L_3 = XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XName_op_Implicit_mC9F588EE5257A3A259D5CF52E9EBCC36B46C01C6 (String_t* ___expandedName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___expandedName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___expandedName0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_2;
		L_2 = XName_Get_mFE26FB1696ED2D60324938EBEB37C0363637BAB7(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.Linq.XName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_Equals_m688E6032F6F05612771D7E920B5CD1723D7EF24A (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XName_GetHashCode_m4B3D379685B914C9BA6E29BB4A861853AF582D3A (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_hashCode_2();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___left0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___right1, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___left0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_0) == ((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_1))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XName::op_Inequality(System.Xml.Linq.XName,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_op_Inequality_m106365E2539393767EB11F262FCF6E8BAEEA4B1A (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___left0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___right1, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___left0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1 = ___right1;
		return (bool)((((int32_t)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_0) == ((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XName::System.IEquatable<System.Xml.Linq.XName>.Equals(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_mCDE24CE750E5DB3C7E3432F457FCFE7C6657FF81 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___other0, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___other0;
		return (bool)((((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)__this) == ((RuntimeObject*)(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_0))? 1 : 0);
	}
}
// System.Void System.Xml.Linq.XName::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName_System_Runtime_Serialization_ISerializable_GetObjectData_m45F244C932C673A2DBB248CDD1A640138A02DAFA (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XName_System_Runtime_Serialization_ISerializable_GetObjectData_m45F244C932C673A2DBB248CDD1A640138A02DAFA_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (NameSerializer_t49A4F679B483838B05DD1E2231CF9C4FAB125A45_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_SetType_mD6F11DC42FDE78E7E8A58BC3D9E248E21BB37275(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(XName__ctor_m2D7B85963C672FA3E6E5559CC101F790A4757ECE_RuntimeMethod_var);
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
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___namespaceName0;
		__this->set_namespaceName_4(L_0);
		String_t* L_1 = ___namespaceName0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		__this->set_hashCode_5(L_2);
		ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C * L_3 = (ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C *)il2cpp_codegen_object_new(ExtractKeyDelegate_t497C1F3C8CA6FA376C383A6E622E18CFF278B78C_il2cpp_TypeInfo_var);
		ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE(L_3, NULL, (intptr_t)((intptr_t)XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9_RuntimeMethod_var), /*hidden argument*/ExtractKeyDelegate__ctor_m6EE51D51CEBD056B30D9A4F85A4501898480C5DE_RuntimeMethod_var);
		XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * L_4 = (XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F *)il2cpp_codegen_object_new(XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F_il2cpp_TypeInfo_var);
		XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632(L_4, L_3, 8, /*hidden argument*/XHashtable_1__ctor_m36FDA2D50FF3D73A801A75D6B1E5D49A1D2F7632_RuntimeMethod_var);
		__this->set_names_6(L_4);
		return;
	}
}
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral751B5F3E33CE57A71852A78FFD92E0813DACD5C0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XNamespace_GetName_mB9A7E789565459E55D929AF8F7C84CC38BBC8DFD_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___localName0;
		String_t* L_3 = ___localName0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5;
		L_5 = XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794(__this, L_2, 0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Xml.Linq.XNamespace::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_ToString_m1D5D03F1C2C1374DFCE24FB397394CD76584BC70 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1;
		L_1 = XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_refNone_1()), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xml_mF816E04DDC8ED562C6B6E71449706594EECCA55E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0;
		L_0 = XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_refXml_2()), _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_get_Xmlns_m140AE4DD66BD99100AA9492D105D3B1383BC5112 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0;
		L_0 = XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_refXmlns_3()), _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6 (String_t* ___namespaceName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___namespaceName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40DFE531C71AB1B6488AD63BCB2AAA4843D9C24F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___namespaceName0;
		String_t* L_3 = ___namespaceName0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5;
		L_5 = XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA(L_2, 0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_op_Implicit_mFD01E59059149272C9710886353E8236CAA97AE5 (String_t* ___namespaceName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___namespaceName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___namespaceName0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_2;
		L_2 = XNamespace_Get_m74B196DD9CD7770D401FD672F86CE0FBB8FCE9F6(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_Equals_m8964855B6CBF87B2BC5317DABE0678F6E24683E6 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XNamespace::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XNamespace_GetHashCode_m90177556974B375FEBD8F55CA6D208924BA366D0 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_hashCode_5();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___left0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1 = ___right1;
		return (bool)((((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_0) == ((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_1))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XNamespace_op_Inequality_m075CAE6D2922DE14AB223F9C4C290E9BC478CD12 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___left0, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___right1, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = ___left0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1 = ___right1;
		return (bool)((((int32_t)((((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_0) == ((RuntimeObject*)(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XNamespace_GetName_m59979BF3C0D17127A15B3369152BA0821FB10794 (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, String_t* ___localName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * V_0 = NULL;
	{
		XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * L_0 = __this->get_names_6();
		String_t* L_1 = ___localName0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		bool L_4;
		L_4 = XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697(L_0, L_1, L_2, L_3, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 **)(&V_0), /*hidden argument*/XHashtable_1_TryGetValue_mA51B0B689C3D0D7E88B62FA023BD37E404507697_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5 = V_0;
		return L_5;
	}

IL_0014:
	{
		XHashtable_1_tED019C524F9D180B656801A9DA06DAE1BBF0E49F * L_6 = __this->get_names_6();
		String_t* L_7 = ___localName0;
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_7, L_8, L_9, /*hidden argument*/NULL);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_11 = (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)il2cpp_codegen_object_new(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956_il2cpp_TypeInfo_var);
		XName__ctor_m08CA9A842644AFE1545DDFB3EA1BF011D797CE59(L_11, __this, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_12;
		L_12 = XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F(L_6, L_11, /*hidden argument*/XHashtable_1_Add_m3D9D39AE72FEF8885FE759C8C3F2D81C12A81B2F_RuntimeMethod_var);
		return L_12;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_Get_mF8EF85F60D3C811461541AC8FD3DCFF9C081BCAA (String_t* ___namespaceName0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_1 = NULL;
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * G_B15_0 = NULL;
	{
		int32_t L_0 = ___count2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_1;
		L_1 = XNamespace_get_None_m2795996F3AD1908D3CFC3F1AFCD58CFBED61EFE0(/*hidden argument*/NULL);
		return L_1;
	}

IL_0009:
	{
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_2 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_namespaces_0();
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F * L_3 = (ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F *)il2cpp_codegen_object_new(ExtractKeyDelegate_t11259FF9F9B2731017891756CE47308FEA3BF56F_il2cpp_TypeInfo_var);
		ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A(L_3, NULL, (intptr_t)((intptr_t)XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A_RuntimeMethod_var), /*hidden argument*/ExtractKeyDelegate__ctor_m48CC0E7DB8DD7D4E987B0C6D4A1F3BA93726339A_RuntimeMethod_var);
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_4 = (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *)il2cpp_codegen_object_new(XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD_il2cpp_TypeInfo_var);
		XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940(L_4, L_3, ((int32_t)32), /*hidden argument*/XHashtable_1__ctor_m9DCA12E571A56E28A1DF7B4CED269AFA89672940_RuntimeMethod_var);
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_5;
		L_5 = InterlockedCompareExchangeImpl<XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *>((XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD **)(((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_address_of_namespaces_0()), L_4, (XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD *)NULL);
	}

IL_002f:
	{
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_6 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_namespaces_0();
		String_t* L_7 = ___namespaceName0;
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		NullCheck(L_6);
		bool L_10;
		L_10 = XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE(L_6, L_7, L_8, L_9, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/XHashtable_1_TryGetValue_m13319666DDA95B2D930D3D5328BD6C0BFD020AFE_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = ___count2;
		NullCheck(_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_13 = ___namespaceName0;
		int32_t L_14 = ___index1;
		int32_t L_15 = ___count2;
		int32_t L_16;
		L_16 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41(L_13, L_14, _stringLiteral349C6DC0F34B9BA242E4C728EDD28CAB809D4917, 0, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0063;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_17;
		L_17 = XNamespace_get_Xml_mF816E04DDC8ED562C6B6E71449706594EECCA55E(/*hidden argument*/NULL);
		return L_17;
	}

IL_0063:
	{
		int32_t L_18 = ___count2;
		NullCheck(_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_20 = ___namespaceName0;
		int32_t L_21 = ___index1;
		int32_t L_22 = ___count2;
		int32_t L_23;
		L_23 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41(L_20, L_21, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, 0, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0086;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_24;
		L_24 = XNamespace_get_Xmlns_m140AE4DD66BD99100AA9492D105D3B1383BC5112(/*hidden argument*/NULL);
		return L_24;
	}

IL_0086:
	{
		XHashtable_1_tADB9EC257A4C5D4BA119F82D8518A518A69352BD * L_25 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var))->get_namespaces_0();
		String_t* L_26 = ___namespaceName0;
		int32_t L_27 = ___index1;
		int32_t L_28 = ___count2;
		NullCheck(L_26);
		String_t* L_29;
		L_29 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, L_27, L_28, /*hidden argument*/NULL);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_30 = (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)il2cpp_codegen_object_new(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617(L_30, L_29, /*hidden argument*/NULL);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_31 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_31, L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_32;
		L_32 = XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C(L_25, L_31, /*hidden argument*/XHashtable_1_Add_mE7AF7A056D777267667AB48389520BD99FECFB1C_RuntimeMethod_var);
		V_0 = L_32;
	}

IL_00a3:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_33 = V_0;
		if (L_33)
		{
			goto IL_00a9;
		}
	}
	{
		G_B15_0 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)(NULL));
		goto IL_00b4;
	}

IL_00a9:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_34 = V_0;
		NullCheck(L_34);
		RuntimeObject * L_35;
		L_35 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_34);
		G_B15_0 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)CastclassSealed((RuntimeObject*)L_35, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var));
	}

IL_00b4:
	{
		V_1 = G_B15_0;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_36 = V_1;
		bool L_37;
		L_37 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_36, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_002f;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_38 = V_1;
		return L_38;
	}
}
// System.String System.Xml.Linq.XNamespace::ExtractLocalName(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_ExtractLocalName_mFFC3D4C8CA969449FAD1F029330DED93180959A9 (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___n0, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___n0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XNamespace::ExtractNamespace(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNamespace_ExtractNamespace_mC09B1EB8F42638C5B58F853F81CB9A32B73D415A (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_0 = NULL;
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = ___r0;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_1 = ___r0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_1);
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_3 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)CastclassSealed((RuntimeObject*)L_2, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var));
		V_0 = L_3;
		bool L_4;
		L_4 = XNamespace_op_Equality_m59C867B675C5C15015A9F081A6BD2A47370A4DBE(L_3, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (String_t*)NULL;
	}

IL_001a:
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::EnsureNamespace(System.WeakReference&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XNamespace_EnsureNamespace_m0F4936CB583036C26C69C3DBBE0A37D4D3635F18 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___refNmsp0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * V_1 = NULL;

IL_0000:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** L_0 = ___refNmsp0;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_1 = *((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)L_0);
		V_0 = L_1;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_3);
		V_1 = ((XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)CastclassSealed((RuntimeObject*)L_4, XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var));
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_5 = V_1;
		bool L_6;
		L_6 = XNamespace_op_Inequality_m075CAE6D2922DE14AB223F9C4C290E9BC478CD12(L_5, (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_7 = V_1;
		return L_7;
	}

IL_001d:
	{
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** L_8 = ___refNmsp0;
		String_t* L_9 = ___namespaceName1;
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_10 = (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 *)il2cpp_codegen_object_new(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7_il2cpp_TypeInfo_var);
		XNamespace__ctor_m032BFBA1A9B9D4B33642F96DB64DC4297F331617(L_10, L_9, /*hidden argument*/NULL);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_11 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_11, L_10, /*hidden argument*/NULL);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_12 = V_0;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_13;
		L_13 = InterlockedCompareExchangeImpl<WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *>((WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)L_8, L_11, L_12);
		goto IL_0000;
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
// System.Void System.Xml.Linq.XNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, const RuntimeMethod* method)
{
	{
		XObject__ctor_mEBF29FD8B8171A6AE6D42BA886E7BFAE31BE563D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XNode::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode_Remove_m6CB2143CFECACE50E2378F5D0FB7CCA08F35EBD9 (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, const RuntimeMethod* method)
{
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_0 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_parent_0();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Res_GetString_mCACED687581128D64F4A26E6929E41E44DC17750(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BEC2F7CA45AAF0977D93E629BEDAA257CE32075)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XNode_Remove_m6CB2143CFECACE50E2378F5D0FB7CCA08F35EBD9_RuntimeMethod_var)));
	}

IL_0018:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_3 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_parent_0();
		NullCheck(L_3);
		XContainer_RemoveNode_m072810FCA68B5F31097CFF678F1CD8AB5B7940E5(L_3, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.Linq.XNode::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNode_ToString_m1BEC71637268EF8CCE9EA74B6F30859A4A3597CB (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = XObject_GetSaveOptionsFromAnnotations_m3DBE274F86C30B72962F8D9D76ABEA8E2E773D32(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = XNode_GetXmlString_m430A1536E96B6502637DC174F04A9D8F330176E0(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XNode::ToString(System.Xml.Linq.SaveOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNode_ToString_mEE34D42DE1684C52D8D0E708ACFC70134BB86164 (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, int32_t ___options0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___options0;
		String_t* L_1;
		L_1 = XNode_GetXmlString_m430A1536E96B6502637DC174F04A9D8F330176E0(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.XNode::AppendText(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode_AppendText_mE2146B20CA977C9A065DF58A4FD15138D5B9BE8C (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String System.Xml.Linq.XNode::GetXmlString(System.Xml.Linq.SaveOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XNode_GetXmlString_m430A1536E96B6502637DC174F04A9D8F330176E0 (XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * __this, int32_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * V_1 = NULL;
	XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * V_2 = NULL;
	XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_1 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_2 = (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 *)il2cpp_codegen_object_new(XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8_il2cpp_TypeInfo_var);
			XmlWriterSettings__ctor_m5C6B99808D1C7B691C0ED4DF32BD3E1C39C4B94D(L_2, /*hidden argument*/NULL);
			V_1 = L_2;
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_3 = V_1;
			NullCheck(L_3);
			XmlWriterSettings_set_OmitXmlDeclaration_mA0F2B9373560089D66C3CE27EF33A13BD08CC70D(L_3, (bool)1, /*hidden argument*/NULL);
			int32_t L_4 = ___o0;
			if (((int32_t)((int32_t)L_4&(int32_t)1)))
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_5 = V_1;
			NullCheck(L_5);
			XmlWriterSettings_set_Indent_m0A9278F460BFDFE1B0D6EC2EFFE063A538BBC136(L_5, (bool)1, /*hidden argument*/NULL);
		}

IL_0024:
		{
			int32_t L_6 = ___o0;
			if (!((int32_t)((int32_t)L_6&(int32_t)2)))
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_7 = V_1;
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_8 = L_7;
			NullCheck(L_8);
			int32_t L_9;
			L_9 = XmlWriterSettings_get_NamespaceHandling_mCD7FC91856DB537D043D22BB5DA22DDF01BADA9D_inline(L_8, /*hidden argument*/NULL);
			NullCheck(L_8);
			XmlWriterSettings_set_NamespaceHandling_mFF6C1E11FD1F947E32F6420D7AEA35A9FC23790F(L_8, ((int32_t)((int32_t)L_9|(int32_t)1)), /*hidden argument*/NULL);
		}

IL_0037:
		{
			if (!((XText_t14C82CC828138F000842E6611CBE05281260A3FC *)IsInstClass((RuntimeObject*)__this, XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var)))
			{
				goto IL_0046;
			}
		}

IL_003f:
		{
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_10 = V_1;
			NullCheck(L_10);
			XmlWriterSettings_set_ConformanceLevel_m8BF0325F14280448F6099A9E5A2FC9C0896656BC(L_10, 1, /*hidden argument*/NULL);
		}

IL_0046:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_11 = V_0;
			XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * L_12 = V_1;
			XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_13;
			L_13 = XmlWriter_Create_m283780CB1FF2D036894014AEA319A26829CD599A(L_11, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
		}

IL_004e:
		try
		{ // begin try (depth: 2)
			{
				V_3 = ((XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF *)IsInstClass((RuntimeObject*)__this, XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var));
				XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * L_14 = V_3;
				if (!L_14)
				{
					goto IL_0061;
				}
			}

IL_0058:
			{
				XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF * L_15 = V_3;
				XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_16 = V_2;
				NullCheck(L_15);
				XContainer_WriteContentTo_mFA062B17E987BA975BF8CC8022E15A5B9E903C96(L_15, L_16, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x74, FINALLY_006a);
			}

IL_0061:
			{
				XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_17 = V_2;
				VirtActionInvoker1< XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, __this, L_17);
				IL2CPP_LEAVE(0x74, FINALLY_006a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006a;
		}

FINALLY_006a:
		{ // begin finally (depth: 2)
			{
				XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_18 = V_2;
				if (!L_18)
				{
					goto IL_0073;
				}
			}

IL_006d:
			{
				XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_19 = V_2;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
			}

IL_0073:
			{
				IL2CPP_END_FINALLY(106)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(106)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x74, IL_0074)
		}

IL_0074:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_20 = V_0;
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
			V_4 = L_21;
			IL2CPP_LEAVE(0x88, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_22 = V_0;
			if (!L_22)
			{
				goto IL_0087;
			}
		}

IL_0081:
		{
			StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_23 = V_0;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_23);
		}

IL_0087:
		{
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		String_t* L_24 = V_4;
		return L_24;
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
// System.Void System.Xml.Linq.XObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject__ctor_mEBF29FD8B8171A6AE6D42BA886E7BFAE31BE563D (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.Linq.XObject::get_BaseUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObject_get_BaseUri_m130E3178739EEEB478D7826AF5341937EBCA4E97 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * V_0 = NULL;
	BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * V_1 = NULL;
	{
		V_0 = __this;
		goto IL_000b;
	}

IL_0004:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_0 = V_0;
		NullCheck(L_0);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = L_0->get_parent_0();
		V_0 = L_1;
	}

IL_000b:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0004;
		}
	}

IL_0016:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_6 = V_0;
		NullCheck(L_6);
		BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * L_7;
		L_7 = XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF(L_6, /*hidden argument*/XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF_RuntimeMethod_var);
		V_1 = L_7;
		BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_baseUri_0();
		return L_10;
	}

IL_002a:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_11 = V_0;
		NullCheck(L_11);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_12 = L_11->get_parent_0();
		V_0 = L_12;
		goto IL_000b;
	}

IL_0033:
	{
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_13;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XObject::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * XObject_get_Parent_m1DF667C225BCBFB0C4A2496E3005B5ECC20FFDA1 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_0 = __this->get_parent_0();
		return ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Xml.Linq.XObject::AddAnnotation(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, RuntimeObject * ___annotation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int32_t V_1 = 0;
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * G_B5_0 = NULL;
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * G_B4_0 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * G_B6_1 = NULL;
	{
		RuntimeObject * L_0 = ___annotation0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE22A9D4ABDB91B11D0EC930946AD81264F5C3FF9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject * L_2 = __this->get_annotations_1();
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject * L_3 = ___annotation0;
		G_B4_0 = __this;
		if (((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)))
		{
			G_B5_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_4 = ___annotation0;
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_0022:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		RuntimeObject * L_7 = ___annotation0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		G_B6_0 = ((RuntimeObject *)(L_6));
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_annotations_1(G_B6_0);
		return;
	}

IL_0032:
	{
		RuntimeObject * L_8 = __this->get_annotations_1();
		V_0 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_8, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		RuntimeObject * L_12 = __this->get_annotations_1();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
		RuntimeObject * L_14 = ___annotation0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		__this->set_annotations_1((RuntimeObject *)L_13);
		return;
	}

IL_005b:
	{
		V_1 = 0;
		goto IL_0063;
	}

IL_005f:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_16 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if (L_21)
		{
			goto IL_005f;
		}
	}

IL_006e:
	{
		int32_t L_22 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		NullCheck(L_23);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = V_1;
		Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)(&V_0), ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)2)), /*hidden argument*/Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = V_0;
		__this->set_annotations_1((RuntimeObject *)L_25);
	}

IL_0085:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_0;
		int32_t L_27 = V_1;
		RuntimeObject * L_28 = ___annotation0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject *)L_28);
		return;
	}
}
// System.Object System.Xml.Linq.XObject::Annotation(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XObject_Annotation_m95490F1AA8945BB8554BC5564CC9A8D9C174AA67 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObject_Annotation_m95490F1AA8945BB8554BC5564CC9A8D9C174AA67_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject * L_3 = __this->get_annotations_1();
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject * L_4 = __this->get_annotations_1();
		V_0 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)IsInst((RuntimeObject*)L_4, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = V_0;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_6 = ___type0;
		RuntimeObject * L_7 = __this->get_annotations_1();
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(112 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject * L_9 = __this->get_annotations_1();
		return L_9;
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_005a;
	}

IL_0044:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		RuntimeObject * L_14 = V_2;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_15 = ___type0;
		RuntimeObject * L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(112 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject * L_18 = V_2;
		return L_18;
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_20 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0044;
		}
	}

IL_0060:
	{
		return NULL;
	}
}
// System.Boolean System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.HasLineInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_System_Xml_IXmlLineInfo_HasLineInfo_m5A8D102E176F2C0D75E8E8F647960A159F343F07 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_0;
		L_0 = XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58(__this, /*hidden argument*/XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObject_System_Xml_IXmlLineInfo_get_LineNumber_m24AD33EE2AB7E73E8E8A734B384AF246647CE4A4 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * V_0 = NULL;
	{
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_0;
		L_0 = XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58(__this, /*hidden argument*/XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var);
		V_0 = L_0;
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_lineNumber_0();
		return L_3;
	}

IL_0011:
	{
		return 0;
	}
}
// System.Int32 System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObject_System_Xml_IXmlLineInfo_get_LinePosition_m2B081F9CCF96364A83B0B34E4AEAAFCC20CDD184 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * V_0 = NULL;
	{
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_0;
		L_0 = XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58(__this, /*hidden argument*/XObject_Annotation_TisLineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_m9983FDC86B3CF0B404531223071373AFB9BD9B58_RuntimeMethod_var);
		V_0 = L_0;
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_linePosition_1();
		return L_3;
	}

IL_0011:
	{
		return 0;
	}
}
// System.Boolean System.Xml.Linq.XObject::get_HasBaseUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_get_HasBaseUri_m495D449FCEEAB86FEFD3119310D1D1C7F7271C5A (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * L_0;
		L_0 = XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF(__this, /*hidden argument*/XObject_Annotation_TisBaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_m8C16EA92AE748767E05B30B17D2B97ED53D008FF_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XObject::NotifyChanged(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * V_1 = NULL;
	XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * V_2 = NULL;
	{
		V_0 = (bool)0;
		V_1 = __this;
		goto IL_000d;
	}

IL_0006:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_0 = V_1;
		NullCheck(L_0);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = L_0->get_parent_0();
		V_1 = L_1;
	}

IL_000d:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0006;
		}
	}

IL_0018:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_6 = V_1;
		NullCheck(L_6);
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_7;
		L_7 = XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2(L_6, /*hidden argument*/XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2_RuntimeMethod_var);
		V_2 = L_7;
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		V_0 = (bool)1;
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_10 = L_9->get_changed_1();
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_12 = L_11->get_changed_1();
		RuntimeObject * L_13 = ___sender0;
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_14 = ___e1;
		NullCheck(L_12);
		EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F(L_12, L_13, L_14, /*hidden argument*/EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F_RuntimeMethod_var);
	}

IL_003c:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_15 = V_1;
		NullCheck(L_15);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_16 = L_15->get_parent_0();
		V_1 = L_16;
		goto IL_000d;
	}

IL_0045:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Boolean System.Xml.Linq.XObject::NotifyChanging(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * V_1 = NULL;
	XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * V_2 = NULL;
	{
		V_0 = (bool)0;
		V_1 = __this;
		goto IL_000d;
	}

IL_0006:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_0 = V_1;
		NullCheck(L_0);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = L_0->get_parent_0();
		V_1 = L_1;
	}

IL_000d:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0006;
		}
	}

IL_0018:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_6 = V_1;
		NullCheck(L_6);
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_7;
		L_7 = XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2(L_6, /*hidden argument*/XObject_Annotation_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_mE4DD40C1DBA629F129F27A7AFAB7B6F925DC77F2_RuntimeMethod_var);
		V_2 = L_7;
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		V_0 = (bool)1;
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_10 = L_9->get_changing_0();
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		XObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762 * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_12 = L_11->get_changing_0();
		RuntimeObject * L_13 = ___sender0;
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_14 = ___e1;
		NullCheck(L_12);
		EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F(L_12, L_13, L_14, /*hidden argument*/EventHandler_1_Invoke_m67B34B97BDC32563AE63B589043FC758A40C064F_RuntimeMethod_var);
	}

IL_003c:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_15 = V_1;
		NullCheck(L_15);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_16 = L_15->get_parent_0();
		V_1 = L_16;
		goto IL_000d;
	}

IL_0045:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Xml.Linq.XObject::SetBaseUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_SetBaseUri_m166BE057D57AACC044AB91ADE70D36408FD4ED27 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, String_t* ___baseUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___baseUri0;
		BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 * L_1 = (BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104 *)il2cpp_codegen_object_new(BaseUriAnnotation_t8C61C1C3890F60361CBDCE7A4EC08BC82A432104_il2cpp_TypeInfo_var);
		BaseUriAnnotation__ctor_m73734683B4E9AABD14F9F4FC06456033579CA178(L_1, L_0, /*hidden argument*/NULL);
		XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XObject::SetLineInfo(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_SetLineInfo_m5A5F3FB9CE20DA7EC016C2263178A0CBBFD9AB95 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___lineNumber0;
		int32_t L_1 = ___linePosition1;
		LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 * L_2 = (LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483 *)il2cpp_codegen_object_new(LineInfoAnnotation_t97D1F30BD2A43CBA74B24FE1826675915B981483_il2cpp_TypeInfo_var);
		LineInfoAnnotation__ctor_m8E8D7A480E7C181E9B65DC98003BC166AEF5AB38(L_2, L_0, L_1, /*hidden argument*/NULL);
		XObject_AddAnnotation_mCD582B99945D6A963D6C2FB0CFB3CBBEAFE37589(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.Linq.XObject::SkipNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XObject_SkipNotify_m28058EBFF963451EFC0AAF9B7DD709B16D8F9895 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_Annotations_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_m09E74E796184F84A1E52E541559F5A5C2CAABB02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * V_0 = NULL;
	{
		V_0 = __this;
		goto IL_000b;
	}

IL_0004:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_0 = V_0;
		NullCheck(L_0);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = L_0->get_parent_0();
		V_0 = L_1;
	}

IL_000b:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0004;
		}
	}

IL_0016:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		return (bool)1;
	}

IL_001b:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = XObject_Annotations_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_m09E74E796184F84A1E52E541559F5A5C2CAABB02(L_6, /*hidden argument*/XObject_Annotations_TisXObjectChangeAnnotation_t91A11A850243C3A1EFAB565487224A8B291CA762_m09E74E796184F84A1E52E541559F5A5C2CAABB02_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_8 = V_0;
		NullCheck(L_8);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_9 = L_8->get_parent_0();
		V_0 = L_9;
		goto IL_000b;
	}
}
// System.Xml.Linq.SaveOptions System.Xml.Linq.XObject::GetSaveOptionsFromAnnotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObject_GetSaveOptionsFromAnnotations_m3DBE274F86C30B72962F8D9D76ABEA8E2E773D32 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = __this;
		goto IL_000b;
	}

IL_0004:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_0 = V_0;
		NullCheck(L_0);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = L_0->get_parent_0();
		V_0 = L_1;
	}

IL_000b:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_annotations_1();
		if (!L_4)
		{
			goto IL_0004;
		}
	}

IL_0016:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_001b:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = XObject_Annotation_m95490F1AA8945BB8554BC5564CC9A8D9C174AA67(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		RuntimeObject * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject * L_11 = V_1;
		return ((*(int32_t*)((int32_t*)UnBox(L_11, SaveOptions_tC6A852921C992C7169285CA3232690886C544EB2_il2cpp_TypeInfo_var))));
	}

IL_0036:
	{
		XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * L_12 = V_0;
		NullCheck(L_12);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_13 = L_12->get_parent_0();
		V_0 = L_13;
		goto IL_000b;
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
// System.Void System.Xml.Linq.XObjectChangeEventArgs::.ctor(System.Xml.Linq.XObjectChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectChangeEventArgs__ctor_m4E78C62E79DA6E09176D8CC56E597F362B237A90 (XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * __this, int32_t ___objectChange0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___objectChange0;
		__this->set_objectChange_1(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XObjectChangeEventArgs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectChangeEventArgs__cctor_mE9282A4AB2773E3B9175CE1F3735F48E4C733B4D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_0 = (XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m4E78C62E79DA6E09176D8CC56E597F362B237A90(L_0, 0, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->set_Add_2(L_0);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_1 = (XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m4E78C62E79DA6E09176D8CC56E597F362B237A90(L_1, 1, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->set_Remove_3(L_1);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_2 = (XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m4E78C62E79DA6E09176D8CC56E597F362B237A90(L_2, 2, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->set_Name_4(L_2);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_3 = (XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 *)il2cpp_codegen_object_new(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs__ctor_m4E78C62E79DA6E09176D8CC56E597F362B237A90(L_3, 3, /*hidden argument*/NULL);
		((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->set_Value_5(L_3);
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
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m49A9FD814CED60CDF313649D7529DBE0AC8D4A7B (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XProcessingInstruction__ctor_m49A9FD814CED60CDF313649D7529DBE0AC8D4A7B_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___target0;
		XProcessingInstruction_ValidateName_m0EAC108733F1A398C88966D74AF9FFC4D7231E51(L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___target0;
		__this->set_target_3(L_3);
		String_t* L_4 = ___data1;
		__this->set_data_4(L_4);
		return;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.Xml.Linq.XProcessingInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_mFBD37F1027E57C2EB1BE94A0803BE86EC424BCE1 (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * ___other0, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XProcessingInstruction__ctor_mFBD37F1027E57C2EB1BE94A0803BE86EC424BCE1_RuntimeMethod_var)));
	}

IL_0014:
	{
		XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_target_3();
		__this->set_target_3(L_3);
		XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_data_4();
		__this->set_data_4(L_5);
		return;
	}
}
// System.String System.Xml.Linq.XProcessingInstruction::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Data_m2CEF9219706D7BC50ABA55C80C7628369643F79F (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_data_4();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XProcessingInstruction::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XProcessingInstruction_get_NodeType_m1F4FC7AC8000A33EEBAAE945C38B2ABDC9E77F38 (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(7);
	}
}
// System.String System.Xml.Linq.XProcessingInstruction::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Target_mB3D008E1EEB616F60FD7C8BE667DEB18C68B0C63 (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_3();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction_WriteTo_m3FB64607898D2DCC5DD36ACCFBDF4AC723FB1CC3 (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XProcessingInstruction_WriteTo_m3FB64607898D2DCC5DD36ACCFBDF4AC723FB1CC3_RuntimeMethod_var)));
	}

IL_000e:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_2 = ___writer0;
		String_t* L_3 = __this->get_target_3();
		String_t* L_4 = __this->get_data_4();
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, L_2, L_3, L_4);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XProcessingInstruction::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XProcessingInstruction_CloneNode_mA174650C7096205059FE436DB9A07159580BAC96 (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 * L_0 = (XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75 *)il2cpp_codegen_object_new(XProcessingInstruction_tA744622C559252288B23FB6615420529AC2B5B75_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_mFBD37F1027E57C2EB1BE94A0803BE86EC424BCE1(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::ValidateName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction_ValidateName_m0EAC108733F1A398C88966D74AF9FFC4D7231E51 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t5D0BE0A0EE15E2D3EC7F4881C519B5137DFA370A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_VerifyNCName_m21986D07C46947592D5B6EC2114435AB92B9C942(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		int32_t L_3;
		L_3 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_2, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, 5, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		String_t* L_6 = ___name0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		String_t* L_7;
		L_7 = Res_GetString_mA952BE145DB45E41118302D24CD5FF7772CDE9F0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1F4AB7959CA8C93DAD635616EBD31A69C0C9B65)), L_5, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XProcessingInstruction_ValidateName_m0EAC108733F1A398C88966D74AF9FFC4D7231E51_RuntimeMethod_var)));
	}

IL_002f:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XText::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XText__ctor_m68D7A7EBA4977B7FC8570D10E60B34EDC4D8CA5B_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___value0;
		__this->set_text_3(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XText::.ctor(System.Xml.Linq.XText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText__ctor_mC0BAC0C89D83D1AC431C1E0CC146752EAFDA29AF (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, XText_t14C82CC828138F000842E6611CBE05281260A3FC * ___other0, const RuntimeMethod* method)
{
	{
		XNode__ctor_mE21FF9BECBD8850494DDA2C81F01BA8FAF799D8A(__this, /*hidden argument*/NULL);
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XText__ctor_mC0BAC0C89D83D1AC431C1E0CC146752EAFDA29AF_RuntimeMethod_var)));
	}

IL_0014:
	{
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_text_3();
		__this->set_text_3(L_3);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XText::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XText_get_NodeType_mF1B647A9AF434D45DA76307855DCAE7E1E140557 (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.String System.Xml.Linq.XText::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XText_get_Value_m9597869DABAA9D2BF8275CEDB4A6A85D46FF6BE5 (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_text_3();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XText::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText_set_Value_m9CF8B47091F98CD190A82324BA437C1F29F4C8CE (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XText_set_Value_m9CF8B47091F98CD190A82324BA437C1F29F4C8CE_RuntimeMethod_var)));
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_2 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_3;
		L_3 = XObject_NotifyChanging_m85CA4DCC4BFBB06870828BEC18AAF9EBAC603515(__this, __this, L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___value0;
		__this->set_text_3(L_4);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var);
		XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * L_5 = ((XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields*)il2cpp_codegen_static_fields_for(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_il2cpp_TypeInfo_var))->get_Value_5();
		bool L_6;
		L_6 = XObject_NotifyChanged_mA374611B24D811C04441A75CD5A1AA04900588D6(__this, __this, L_5, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XText::WriteTo(System.Xml.XmlWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText_WriteTo_m45EE125458AB37E57B311DFDD80CCF755505BE7D (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XText_WriteTo_m45EE125458AB37E57B311DFDD80CCF755505BE7D_RuntimeMethod_var)));
	}

IL_000e:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_2 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)__this)->get_parent_0();
		if (!((XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF *)IsInstClass((RuntimeObject*)L_2, XDocument_t9565FC688EFE8A72791A52481736689B97A3D3CF_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_3 = ___writer0;
		String_t* L_4 = __this->get_text_3();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, L_3, L_4);
		return;
	}

IL_0028:
	{
		XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D * L_5 = ___writer0;
		String_t* L_6 = __this->get_text_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_5, L_6);
		return;
	}
}
// System.Void System.Xml.Linq.XText::AppendText(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText_AppendText_m9CB12B0D10400CFBB5C612E05E3468697646183C (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = ___sb0;
		String_t* L_1 = __this->get_text_3();
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XText::CloneNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * XText_CloneNode_mEA4C49F38831E5EF3DF3D002EE22EF71EBF28029 (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XText_t14C82CC828138F000842E6611CBE05281260A3FC * L_0 = (XText_t14C82CC828138F000842E6611CBE05281260A3FC *)il2cpp_codegen_object_new(XText_t14C82CC828138F000842E6611CBE05281260A3FC_il2cpp_TypeInfo_var);
		XText__ctor_mC0BAC0C89D83D1AC431C1E0CC146752EAFDA29AF(L_0, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.NamespaceResolver/NamespaceDeclaration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceDeclaration__ctor_m86ED6350C67E1DA1AAD7F9EAB3D460F12A9EE180 (NamespaceDeclaration_tC6F893E91042F3970101FAAFDFE15AE7BC7268D9 * __this, const RuntimeMethod* method)
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
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39__ctor_mD3D3B2DF62F121AF73CA827AE17E2D8EA88840FA (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39_System_IDisposable_Dispose_m3A851F8C70ADAE4DD85B45623197BFD206F1BF87 (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XContainer/<GetDescendants>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDescendantsU3Ed__39_MoveNext_mEDABD853E682EFA3F5E0AF34A860A614B81A6AD8 (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_1 = NULL;
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_2 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = __this->get_U3CU3E4__this_5();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_0141;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		bool L_3 = __this->get_self_3();
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = V_1;
		V_3 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)CastclassClass((RuntimeObject*)L_4, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5 = __this->get_name_6();
		bool L_6;
		L_6 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_5, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_7 = V_3;
		NullCheck(L_7);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_8 = L_7->get_name_5();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_9 = __this->get_name_6();
		bool L_10;
		L_10 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}

IL_0059:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_11 = V_3;
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0070:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_12 = V_1;
		__this->set_U3CnU3E5__1_8(L_12);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_13 = V_1;
		V_2 = L_13;
	}

IL_0079:
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_14 = V_2;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_15 = V_2;
		NullCheck(L_15);
		RuntimeObject * L_16 = L_15->get_content_3();
		if (!((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_16, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var)))
		{
			goto IL_00b2;
		}
	}
	{
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_17 = V_2;
		NullCheck(L_17);
		RuntimeObject * L_18 = L_17->get_content_3();
		NullCheck(((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_18, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var)));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_19 = ((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)CastclassClass((RuntimeObject*)L_18, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var))->get_next_2();
		__this->set_U3CnU3E5__1_8(L_19);
		goto IL_00ed;
	}

IL_00a1:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_20 = __this->get_U3CnU3E5__1_8();
		NullCheck(L_20);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_21 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_20)->get_parent_0();
		__this->set_U3CnU3E5__1_8(L_21);
	}

IL_00b2:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_22 = __this->get_U3CnU3E5__1_8();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_23 = V_1;
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_22) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_23)))
		{
			goto IL_00d3;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_24 = __this->get_U3CnU3E5__1_8();
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_25 = __this->get_U3CnU3E5__1_8();
		NullCheck(L_25);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_26 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_25)->get_parent_0();
		NullCheck(L_26);
		RuntimeObject * L_27 = L_26->get_content_3();
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_24) == ((RuntimeObject*)(RuntimeObject *)L_27)))
		{
			goto IL_00a1;
		}
	}

IL_00d3:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_28 = __this->get_U3CnU3E5__1_8();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_29 = V_1;
		if ((((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_28) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_29)))
		{
			goto IL_015b;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_30 = __this->get_U3CnU3E5__1_8();
		NullCheck(L_30);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_31 = L_30->get_next_2();
		__this->set_U3CnU3E5__1_8(L_31);
	}

IL_00ed:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_32 = __this->get_U3CnU3E5__1_8();
		__this->set_U3CeU3E5__2_9(((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_32, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var)));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_33 = __this->get_U3CeU3E5__2_9();
		if (!L_33)
		{
			goto IL_0148;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_34 = __this->get_name_6();
		bool L_35;
		L_35 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_34, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_012c;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_36 = __this->get_U3CeU3E5__2_9();
		NullCheck(L_36);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_37 = L_36->get_name_5();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_38 = __this->get_name_6();
		bool L_39;
		L_39 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0148;
		}
	}

IL_012c:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_40 = __this->get_U3CeU3E5__2_9();
		__this->set_U3CU3E2__current_1(L_40);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0141:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0148:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_41 = __this->get_U3CeU3E5__2_9();
		V_2 = L_41;
		__this->set_U3CeU3E5__2_9((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)NULL);
		goto IL_0079;
	}

IL_015b:
	{
		return (bool)0;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_mD722D40A7629F90D934E1ADBD121A869350CB2DC (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m31C5EB0DAD7972F8305F2307F7D245A14AF99208 (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_Reset_m31C5EB0DAD7972F8305F2307F7D245A14AF99208_RuntimeMethod_var)));
	}
}
// System.Object System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDescendantsU3Ed__39_System_Collections_IEnumerator_get_Current_mBD47CAD07B35E3070F9C81ED2A28805C1607D4B7 (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m9F2300A96D1F8CA7BB4DDADE1F630718371C9B7B (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_3 = (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 *)il2cpp_codegen_object_new(U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1_il2cpp_TypeInfo_var);
		U3CGetDescendantsU3Ed__39__ctor_mD3D3B2DF62F121AF73CA827AE17E2D8EA88840FA(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_4 = V_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_6 = V_0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = __this->get_U3CU3E3__name_7();
		NullCheck(L_6);
		L_6->set_name_6(L_7);
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_8 = V_0;
		bool L_9 = __this->get_U3CU3E3__self_4();
		NullCheck(L_8);
		L_8->set_self_3(L_9);
		U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XContainer/<GetDescendants>d__39::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__39_System_Collections_IEnumerable_GetEnumerator_m064A7C1D2BEDBFB39A14DED85E989E10B7E8E352 (U3CGetDescendantsU3Ed__39_t471166E5E927308A14000C2755B48AB8EF970BE1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetDescendantsU3Ed__39_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m9F2300A96D1F8CA7BB4DDADE1F630718371C9B7B(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40_System_IDisposable_Dispose_m26D03CD4EC581A64543916058C2744EF2113E353 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XContainer/<GetElements>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetElementsU3Ed__40_MoveNext_mBC40C788810006A11FE0F1EFB9730F31DC6B1D6E (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_1 = NULL;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_content_3();
		__this->set_U3CnU3E5__1_4(((XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)IsInstClass((RuntimeObject*)L_5, XNode_tB88EE59443DF799686825ED2168D47C857C8CA99_il2cpp_TypeInfo_var)));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = __this->get_U3CnU3E5__1_4();
		if (!L_6)
		{
			goto IL_00ab;
		}
	}

IL_0037:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = __this->get_U3CnU3E5__1_4();
		NullCheck(L_7);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = L_7->get_next_2();
		__this->set_U3CnU3E5__1_4(L_8);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = __this->get_U3CnU3E5__1_4();
		V_2 = ((XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)IsInstClass((RuntimeObject*)L_9, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_il2cpp_TypeInfo_var));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_11 = __this->get_name_5();
		bool L_12;
		L_12 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_11, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0078;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_13 = V_2;
		NullCheck(L_13);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_14 = L_13->get_name_5();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_15 = __this->get_name_5();
		bool L_16;
		L_16 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008f;
		}
	}

IL_0078:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_17 = V_2;
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0088:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008f:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_18 = __this->get_U3CnU3E5__1_4();
		NullCheck(L_18);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_19 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_18)->get_parent_0();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_20 = V_1;
		if ((!(((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_19) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_20))))
		{
			goto IL_00ab;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_21 = __this->get_U3CnU3E5__1_4();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_22 = V_1;
		NullCheck(L_22);
		RuntimeObject * L_23 = L_22->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_21) == ((RuntimeObject*)(RuntimeObject *)L_23))))
		{
			goto IL_0037;
		}
	}

IL_00ab:
	{
		return (bool)0;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XElementU3E_get_Current_m557169F857BE3A2E8AE60A5B31793CCB5FEE6DF8 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetElementsU3Ed__40_System_Collections_IEnumerator_Reset_mEBD70692F6B1A660FC8C4BE32AEC4079CC25BD10 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetElementsU3Ed__40_System_Collections_IEnumerator_Reset_mEBD70692F6B1A660FC8C4BE32AEC4079CC25BD10_RuntimeMethod_var)));
	}
}
// System.Object System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetElementsU3Ed__40_System_Collections_IEnumerator_get_Current_mE30CD7CAB4C943F4FB52BAFB133941024A125CB9 (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XElement> System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m5985519113352CB9D6500FD7EE23018996093E8D (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_3 = (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC *)il2cpp_codegen_object_new(U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC_il2cpp_TypeInfo_var);
		U3CGetElementsU3Ed__40__ctor_mF908BE084ADA6F221E2B54376F43CF6A79676663(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_4 = V_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_6 = V_0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = __this->get_U3CU3E3__name_6();
		NullCheck(L_6);
		L_6->set_name_5(L_7);
		U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XContainer/<GetElements>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetElementsU3Ed__40_System_Collections_IEnumerable_GetEnumerator_m1E01D5F2FFF1255AAD4FE9DE0E03ED6E59F228CA (U3CGetElementsU3Ed__40_t3D9A23CCDAFD41655F6A212EBC2181DEB39FC3EC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetElementsU3Ed__40_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XElementU3E_GetEnumerator_m5985519113352CB9D6500FD7EE23018996093E8D(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XContainer/<Nodes>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNodesU3Ed__18__ctor_mB2DCCB80E37BA4A30B6F955C4F3F0CF4B81896DE (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer/<Nodes>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNodesU3Ed__18_System_IDisposable_Dispose_m45C9F2B76DABD04ED672BD4CAF63A731E9D03D54 (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XContainer/<Nodes>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNodesU3Ed__18_MoveNext_m53F33ACC04E8183FEB0BFF3529E8902CDB0C4700 (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_4 = V_1;
		NullCheck(L_4);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_5;
		L_5 = XContainer_get_LastNode_m84D21983C67B305C490A685BC4021A767421D5CA(L_4, /*hidden argument*/NULL);
		__this->set_U3CnU3E5__1_4(L_5);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_6 = __this->get_U3CnU3E5__1_4();
		if (!L_6)
		{
			goto IL_007b;
		}
	}

IL_0032:
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_7 = __this->get_U3CnU3E5__1_4();
		NullCheck(L_7);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_8 = L_7->get_next_2();
		__this->set_U3CnU3E5__1_4(L_8);
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_9 = __this->get_U3CnU3E5__1_4();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_10 = __this->get_U3CnU3E5__1_4();
		NullCheck(L_10);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_11 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_10)->get_parent_0();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_12 = V_1;
		if ((!(((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_11) == ((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_13 = __this->get_U3CnU3E5__1_4();
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_15 = L_14->get_content_3();
		if ((!(((RuntimeObject*)(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 *)L_13) == ((RuntimeObject*)(RuntimeObject *)L_15))))
		{
			goto IL_0032;
		}
	}

IL_007b:
	{
		return (bool)0;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>d__18::System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * U3CNodesU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XNodeU3E_get_Current_m9B01B89987D2AA07601C6FBCD3453A6381327F26 (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer/<Nodes>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNodesU3Ed__18_System_Collections_IEnumerator_Reset_m11293904E74587CEBADD8BEE0AD2B78C80C7C9BD (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNodesU3Ed__18_System_Collections_IEnumerator_Reset_m11293904E74587CEBADD8BEE0AD2B78C80C7C9BD_RuntimeMethod_var)));
	}
}
// System.Object System.Xml.Linq.XContainer/<Nodes>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CNodesU3Ed__18_System_Collections_IEnumerator_get_Current_m85F965CFAA2559C3B9C1BD3E13686000060BB30C (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	{
		XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer/<Nodes>d__18::System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNodesU3Ed__18_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_mA259982391A5A540537762C364DD61AED843ECF2 (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * L_3 = (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF *)il2cpp_codegen_object_new(U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF_il2cpp_TypeInfo_var);
		U3CNodesU3Ed__18__ctor_mB2DCCB80E37BA4A30B6F955C4F3F0CF4B81896DE(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * L_4 = V_0;
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XContainer/<Nodes>d__18::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNodesU3Ed__18_System_Collections_IEnumerable_GetEnumerator_mB7FA8D945773FFC3E3AB9C2738908A57F5AD7D72 (U3CNodesU3Ed__18_tD8204230C4CE2FCC03BE6A9AF20E8B6EEED6A2AF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CNodesU3Ed__18_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_mA259982391A5A540537762C364DD61AED843ECF2(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Xml.Linq.XElement/<GetAttributes>d__105::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesU3Ed__105__ctor_mB7C85FC764518096A1A8FB18A9C0453E6F540D6F (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XElement/<GetAttributes>d__105::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesU3Ed__105_System_IDisposable_Dispose_m99C42C5CF42B3A8F77A3E4E09395ADB8498EE9C4 (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XElement/<GetAttributes>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAttributesU3Ed__105_MoveNext_mE7896E30F0F72437599165A49989DA69414B0AD9 (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_4 = V_1;
		NullCheck(L_4);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_5 = L_4->get_lastAttr_6();
		__this->set_U3CaU3E5__1_4(L_5);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_6 = __this->get_U3CaU3E5__1_4();
		if (!L_6)
		{
			goto IL_00a1;
		}
	}

IL_0032:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_7 = __this->get_U3CaU3E5__1_4();
		NullCheck(L_7);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_8 = L_7->get_next_2();
		__this->set_U3CaU3E5__1_4(L_8);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_9 = __this->get_name_5();
		bool L_10;
		L_10 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_9, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_11 = __this->get_U3CaU3E5__1_4();
		NullCheck(L_11);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_12 = L_11->get_name_3();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_13 = __this->get_name_5();
		bool L_14;
		L_14 = XName_op_Equality_m303F10BF2291A8B7AD3E3ACB4BB00C0800777B06(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}

IL_0069:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_15 = __this->get_U3CaU3E5__1_4();
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0085:
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_16 = __this->get_U3CaU3E5__1_4();
		NullCheck(L_16);
		XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * L_17 = ((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_16)->get_parent_0();
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_18 = V_1;
		if ((!(((RuntimeObject*)(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 *)L_17) == ((RuntimeObject*)(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)L_18))))
		{
			goto IL_00a1;
		}
	}
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_19 = __this->get_U3CaU3E5__1_4();
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_20 = V_1;
		NullCheck(L_20);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_21 = L_20->get_lastAttr_6();
		if ((!(((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_19) == ((RuntimeObject*)(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 *)L_21))))
		{
			goto IL_0032;
		}
	}

IL_00a1:
	{
		return (bool)0;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetAttributes>d__105::System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * U3CGetAttributesU3Ed__105_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XAttributeU3E_get_Current_m8B67884023CF6AA817C304265A5EA3B8526F3985 (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XElement/<GetAttributes>d__105::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesU3Ed__105_System_Collections_IEnumerator_Reset_mC2E83918E49FE016AE529F9B9D2A828981B85C7C (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAttributesU3Ed__105_System_Collections_IEnumerator_Reset_mC2E83918E49FE016AE529F9B9D2A828981B85C7C_RuntimeMethod_var)));
	}
}
// System.Object System.Xml.Linq.XElement/<GetAttributes>d__105::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetAttributesU3Ed__105_System_Collections_IEnumerator_get_Current_m0B7E07D662BEF9472BD06329AD2B3940A68ED8DB (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<GetAttributes>d__105::System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAttributesU3Ed__105_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m03BD96D593348C2CBF3918855158022493395620 (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_3 = (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 *)il2cpp_codegen_object_new(U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977_il2cpp_TypeInfo_var);
		U3CGetAttributesU3Ed__105__ctor_mB7C85FC764518096A1A8FB18A9C0453E6F540D6F(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_4 = V_0;
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_6 = V_0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_7 = __this->get_U3CU3E3__name_6();
		NullCheck(L_6);
		L_6->set_name_5(L_7);
		U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XElement/<GetAttributes>d__105::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAttributesU3Ed__105_System_Collections_IEnumerable_GetEnumerator_mB82130058725AD786ACC5141E74FE042D9C5BC5C (U3CGetAttributesU3Ed__105_t82B7CD1B420B55ECFABDA83DC9AEFD55B344A977 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAttributesU3Ed__105_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m03BD96D593348C2CBF3918855158022493395620(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD1FB56489867FAE2FBC89C892A60C86654E412E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * L_0 = (U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 *)il2cpp_codegen_object_new(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA936123CC95891C43BE97A5A2C027C34DC213588(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA936123CC95891C43BE97A5A2C027C34DC213588 (U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XAttribute MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor/<>c::<GetValue>b__3_0(System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * U3CU3Ec_U3CGetValueU3Eb__3_0_mAD172688633CA9933639C206D0D6337CA89EAB15 (U3CU3Ec_tC5800C71B166E1B38AAF826DEF08CA711B3597F9 * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___n1, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___e0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1 = ___n1;
		NullCheck(L_0);
		XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * L_2;
		L_2 = XElement_Attribute_mE6D1589D13FFB71DA11EA7B41685C149D1E03AFD(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4403930A3E26D44A55077F7EA5371E00E367BB6A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * L_0 = (U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E *)il2cpp_codegen_object_new(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m15CCD66750B13B56915EDD9658944F5209E2CCE8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m15CCD66750B13B56915EDD9658944F5209E2CCE8 (U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor/<>c::<GetValue>b__3_0(System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetValueU3Eb__3_0_mC1E21291F919FD6499A3B2803BB0D1CAF7C5966B (U3CU3Ec_t0B340A8399657355C8A5F95FD6860DA4A016A88E * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___n1, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___n1;
		bool L_1;
		L_1 = XName_op_Inequality_m106365E2539393767EB11F262FCF6E8BAEEA4B1A(L_0, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = ___e0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XContainer_Descendants_mE54252C8A4962CCFC6EFCE28556B5A26B0540EEC(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_4 = ___e0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5 = ___n1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = XContainer_Descendants_m3556BD579EBD93ECEF4162510065F59FFED18F92(L_4, L_5, /*hidden argument*/NULL);
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC2F969E2D5913CBFF4FB0DDB9DB9A39E3BF8D2CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * L_0 = (U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 *)il2cpp_codegen_object_new(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD591C8948D9898A61CE71ECC65EECC0F2107D5AE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD591C8948D9898A61CE71ECC65EECC0F2107D5AE (U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor/<>c::<GetValue>b__3_0(System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * U3CU3Ec_U3CGetValueU3Eb__3_0_m244FA20007792002675A9344E101E65772BBC914 (U3CU3Ec_tDC05974D17B2F752A1E86C48040E9DFC4BC5B2E8 * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___n1, const RuntimeMethod* method)
{
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_0 = ___e0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_1 = ___n1;
		NullCheck(L_0);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2;
		L_2 = XContainer_Element_mDD805465CD32F3FD06807CA9E34BBD976A554BB5(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEC84F7DDAD06838451F3DF96BEDFD1E8A2338BCB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * L_0 = (U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 *)il2cpp_codegen_object_new(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m78DE3DC76C1C27EB825CF6353F656A06E8C5F5DF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m78DE3DC76C1C27EB825CF6353F656A06E8C5F5DF (U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor/<>c::<GetValue>b__3_0(System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetValueU3Eb__3_0_m6EE39E48EFF3105C8893AC2C600989DA668E9BB6 (U3CU3Ec_t5C869424D19F3CD10AC72060C77A556000E349F2 * __this, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___e0, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___n1, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = ___n1;
		bool L_1;
		L_1 = XName_op_Inequality_m106365E2539393767EB11F262FCF6E8BAEEA4B1A(L_0, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = ___e0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XContainer_Elements_mE3525ED34CA3769624CB81CF4501C662FE824DB3(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0010:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_4 = ___e0;
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_5 = ___n1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = XContainer_Elements_m4989075D4083C5A851589B13832D5C5423B1F516(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XNamespace_get_NamespaceName_mD97F3E27C3274AEB1B8AE634BE739F44219992DB_inline (XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_namespaceName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XAttribute_get_Name_m89A65BCA2C1D25349F1B814F823208D897CA79FB_inline (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m696497ACA70F6707FAF6DDC7B0FB4297D7F4A007_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_localName_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_m2458D145A9C0231EE71816040601199252F53A84_inline (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * XElement_get_Name_m1154DCAA063C86BB056B2A49FF9C4FA65CEEAD3D_inline (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * __this, const RuntimeMethod* method)
{
	{
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_0 = __this->get_name_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * XName_get_Namespace_m27DDB135C04C90BB031CA5ECC7B3436A31423488_inline (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * __this, const RuntimeMethod* method)
{
	{
		XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * L_0 = __this->get_ns_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XText_get_Value_m9597869DABAA9D2BF8275CEDB4A6A85D46FF6BE5_inline (XText_t14C82CC828138F000842E6611CBE05281260A3FC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_text_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_m15EF1F74D2226D5CAE08BB9847949FBD2F63D967_inline (XDeclaration_t5B4F6BDA6FCEE3C7520BA67BDFF62C3372777090 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_standalone_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NamespaceHandling_mCD7FC91856DB537D043D22BB5DA22DDF01BADA9D_inline (XmlWriterSettings_t644F60191AB96886F397C44E1E95122DD2FCA8F8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_namespaceHandling_9();
		return L_0;
	}
}
