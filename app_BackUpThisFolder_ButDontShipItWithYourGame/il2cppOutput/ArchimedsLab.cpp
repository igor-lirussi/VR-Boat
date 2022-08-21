#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ArchimedsLab.tri[]
struct triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// ArchimedsLab.MathHelper
struct MathHelper_t21477527E44CB438A740EAE942F1E0B50BA378AD;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ArchimedsLab.WaterCutter
struct WaterCutter_t1E9A8BDA78D72462FA597FC470F8D628158EC81F;
// ArchimedsLab.MathHelper/PlotFunction
struct PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E;
// ArchimedsLab.WaterSurface/<>c
struct U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635;
// ArchimedsLab.WaterSurface/GetWaterHeight
struct GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6;

IL2CPP_EXTERN_C RuntimeClass* GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_0_m022D22002AC5754B4F00B70893D80B397E716646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_1_mCD0EA5D4F7EEDA28A61FC576F5342535A0CC9A4E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAFA9BA5C1C087713601780B080BF9C62D980D9A0 
{
};

// ArchimedsLab.Archimeds
struct Archimeds_t0986E60786CF688EC61A87B3FD43A235BD5CB689  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// ArchimedsLab.Constants
struct Constants_t4B0167999ECEEA12DBD89FF456AE3907F8439CCD  : public RuntimeObject
{
};

// ArchimedsLab.MathHelper
struct MathHelper_t21477527E44CB438A740EAE942F1E0B50BA378AD  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ArchimedsLab.WaterCutter
struct WaterCutter_t1E9A8BDA78D72462FA597FC470F8D628158EC81F  : public RuntimeObject
{
};

// ArchimedsLab.WaterSurface
struct WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA  : public RuntimeObject
{
};

struct WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields
{
	// System.Single ArchimedsLab.WaterSurface::waveLengthInverse
	float ___waveLengthInverse_0;
	// System.Single ArchimedsLab.WaterSurface::Intensity
	float ___Intensity_1;
	// System.Single ArchimedsLab.WaterSurface::Periode
	float ___Periode_2;
	// System.Single ArchimedsLab.WaterSurface::Height
	float ___Height_3;
	// ArchimedsLab.WaterSurface/GetWaterHeight ArchimedsLab.WaterSurface::simpleWater
	GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* ___simpleWater_5;
	// ArchimedsLab.WaterSurface/GetWaterHeight ArchimedsLab.WaterSurface::flatWater
	GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* ___flatWater_6;
};

// ArchimedsLab.WaterSurface/<>c
struct U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635  : public RuntimeObject
{
};

struct U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_StaticFields
{
	// ArchimedsLab.WaterSurface/<>c ArchimedsLab.WaterSurface/<>c::<>9
	U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* ___U3CU3E9_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ArchimedsLab.tri
struct tri_t90963DB750977684A03671680E6B60436986240D 
{
	// UnityEngine.Vector3 ArchimedsLab.tri::a
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a_0;
	// UnityEngine.Vector3 ArchimedsLab.tri::b
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b_1;
	// UnityEngine.Vector3 ArchimedsLab.tri::c
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c_2;
	// System.Single ArchimedsLab.tri::area
	float ___area_3;
	// UnityEngine.Vector3 ArchimedsLab.tri::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_4;
	// System.Single ArchimedsLab.tri::da
	float ___da_5;
	// System.Single ArchimedsLab.tri::db
	float ___db_6;
	// System.Single ArchimedsLab.tri::dc
	float ___dc_7;
	// System.Single ArchimedsLab.tri::H
	float ___H_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ArchimedsLab.MathHelper/PlotFunction
struct PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E  : public MulticastDelegate_t
{
};

// ArchimedsLab.WaterSurface/GetWaterHeight
struct GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ArchimedsLab.tri[]
struct triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B  : public RuntimeArray
{
	ALIGN_FIELD (8) tri_t90963DB750977684A03671680E6B60436986240D m_Items[1];

	inline tri_t90963DB750977684A03671680E6B60436986240D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline tri_t90963DB750977684A03671680E6B60436986240D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, tri_t90963DB750977684A03671680E6B60436986240D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline tri_t90963DB750977684A03671680E6B60436986240D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline tri_t90963DB750977684A03671680E6B60436986240D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, tri_t90963DB750977684A03671680E6B60436986240D value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void ArchimedsLab.MathHelper::Swap<System.Single>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_gshared (float* ___a0, float* ___b1, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_mA4226D0A30E0B55CB0CAD2A956EA16C546505965 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void ArchimedsLab.MathHelper::Swap<System.Single>(T&,T&)
inline void MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF (float* ___a0, float* ___b1, const RuntimeMethod* method)
{
	((  void (*) (float*, float*, const RuntimeMethod*))MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_gshared)(___a0, ___b1, method);
}
// System.Void ArchimedsLab.MathHelper/PlotFunction::Invoke(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_inline (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single ArchimedsLab.MathHelper::TriangleSurface(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AB0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AC1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single ArchimedsLab.WaterSurface/GetWaterHeight::Invoke(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_inline (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void ArchimedsLab.WaterCutter::CutIt(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Vector3,ArchimedsLab.tri[]&,ArchimedsLab.tri[]&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCutter_CutIt_mFECEFDD77C37D2DD1C8B284205D3F331BB8E4470 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___h0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___l2, float ___hh3, float ___hm4, float ___hl5, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal6, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___wet7, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___dry8, uint32_t* ___wetNbr9, uint32_t* ___dryNbr10, const RuntimeMethod* method) ;
// System.Void ArchimedsLab.WaterSurface/GetWaterHeight::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetWaterHeight__ctor_m7EDA20CCEC4694C3E56AAC644F55F071788D9AAD (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ArchimedsLab.WaterSurface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6B6F004BF2FEF62B98AA4701F879D42EAD30DF09 (U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void ArchimedsLab.Archimeds::ComputeAllForces(ArchimedsLab.tri[],ArchimedsLab.tri[],System.UInt32,System.UInt32,UnityEngine.Vector3,UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Archimeds_ComputeAllForces_m9BB7718BD757EBDCD1C88FB0031E1A2E12FF4854 (triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* ___wetTris0, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* ___dryTris1, uint32_t ___nbrWet2, uint32_t ___nbrDry3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___speed4, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	uint32_t V_12 = 0;
	tri_t90963DB750977684A03671680E6B60436986240D V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	bool V_26 = false;
	uint32_t V_27 = 0;
	tri_t90963DB750977684A03671680E6B60436986240D V_28;
	memset((&V_28), 0, sizeof(V_28));
	float V_29 = 0.0f;
	float V_30 = 0.0f;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_36;
	memset((&V_36), 0, sizeof(V_36));
	float V_37 = 0.0f;
	bool V_38 = false;
	float V_39 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_40;
	memset((&V_40), 0, sizeof(V_40));
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_1;
		V_4 = (0.0f);
		V_5 = (0.0f);
		V_6 = (0.0f);
		V_7 = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___speed4;
		float L_3 = L_2.___x_2;
		if ((((float)L_3) < ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___speed4;
		float L_5 = L_4.___x_2;
		G_B3_0 = L_5;
		goto IL_0054;
	}

IL_004c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___speed4;
		float L_7 = L_6.___x_2;
		G_B3_0 = ((-L_7));
	}

IL_0054:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___speed4;
		float L_9 = L_8.___y_3;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			G_B5_0 = G_B3_0;
			goto IL_006b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___speed4;
		float L_11 = L_10.___y_3;
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		goto IL_0073;
	}

IL_006b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___speed4;
		float L_13 = L_12.___y_3;
		G_B6_0 = ((-L_13));
		G_B6_1 = G_B5_0;
	}

IL_0073:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___speed4;
		float L_15 = L_14.___z_4;
		G_B7_0 = ((float)il2cpp_codegen_add(G_B6_1, G_B6_0));
		if ((((float)L_15) < ((float)(0.0f))))
		{
			G_B8_0 = ((float)il2cpp_codegen_add(G_B6_1, G_B6_0));
			goto IL_008b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___speed4;
		float L_17 = L_16.___z_4;
		G_B9_0 = L_17;
		G_B9_1 = G_B7_0;
		goto IL_0093;
	}

IL_008b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___speed4;
		float L_19 = L_18.___z_4;
		G_B9_0 = ((-L_19));
		G_B9_1 = G_B8_0;
	}

IL_0093:
	{
		V_9 = ((float)il2cpp_codegen_add(G_B9_1, G_B9_0));
		float L_20 = V_9;
		float L_21;
		L_21 = sqrtf(L_20);
		V_10 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_11 = L_22;
		V_12 = 0;
		goto IL_0260;
	}

IL_00ae:
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_23 = ___wetTris0;
		uint32_t L_24 = V_12;
		NullCheck(L_23);
		uint32_t L_25 = L_24;
		tri_t90963DB750977684A03671680E6B60436986240D L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_13 = L_26;
		tri_t90963DB750977684A03671680E6B60436986240D L_27 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___a_0;
		tri_t90963DB750977684A03671680E6B60436986240D L_29 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___b_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_30, NULL);
		tri_t90963DB750977684A03671680E6B60436986240D L_32 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32.___c_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_34, (3.0f), NULL);
		V_8 = L_35;
		float L_36 = V_4;
		tri_t90963DB750977684A03671680E6B60436986240D L_37 = V_13;
		float L_38 = L_37.___area_3;
		V_4 = ((float)il2cpp_codegen_add(L_36, L_38));
		tri_t90963DB750977684A03671680E6B60436986240D L_39 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = L_39.___a_0;
		float L_41 = L_40.___y_3;
		tri_t90963DB750977684A03671680E6B60436986240D L_42 = V_13;
		float L_43 = L_42.___da_5;
		float L_44;
		L_44 = fabsf(((float)il2cpp_codegen_subtract(L_41, L_43)));
		V_14 = L_44;
		tri_t90963DB750977684A03671680E6B60436986240D L_45 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45.___b_1;
		float L_47 = L_46.___y_3;
		tri_t90963DB750977684A03671680E6B60436986240D L_48 = V_13;
		float L_49 = L_48.___db_6;
		float L_50;
		L_50 = fabsf(((float)il2cpp_codegen_subtract(L_47, L_49)));
		V_15 = L_50;
		tri_t90963DB750977684A03671680E6B60436986240D L_51 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = L_51.___c_2;
		float L_53 = L_52.___y_3;
		tri_t90963DB750977684A03671680E6B60436986240D L_54 = V_13;
		float L_55 = L_54.___dc_7;
		float L_56;
		L_56 = fabsf(((float)il2cpp_codegen_subtract(L_53, L_55)));
		V_16 = L_56;
		float L_57 = V_14;
		tri_t90963DB750977684A03671680E6B60436986240D L_58 = V_13;
		float L_59 = L_58.___area_3;
		V_17 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-9810.0f), L_57)), L_59));
		float L_60 = V_15;
		tri_t90963DB750977684A03671680E6B60436986240D L_61 = V_13;
		float L_62 = L_61.___area_3;
		V_18 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-9810.0f), L_60)), L_62));
		float L_63 = V_16;
		tri_t90963DB750977684A03671680E6B60436986240D L_64 = V_13;
		float L_65 = L_64.___area_3;
		V_19 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-9810.0f), L_63)), L_65));
		float L_66 = V_17;
		float L_67 = V_18;
		float L_68 = V_19;
		V_20 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_66, L_67)), L_68))/(3.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___speed4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = ___speed4;
		tri_t90963DB750977684A03671680E6B60436986240D L_72 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72.___normal_4;
		float L_74;
		L_74 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_71, L_73, NULL);
		float L_75;
		L_75 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_75, NULL);
		V_21 = L_76;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___speed4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___speed4;
		tri_t90963DB750977684A03671680E6B60436986240D L_80 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = L_80.___normal_4;
		float L_82;
		L_82 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_79, L_81, NULL);
		float L_83;
		L_83 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_82, (-1.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, L_83, NULL);
		V_22 = L_84;
		float L_85 = V_10;
		float L_86 = V_10;
		tri_t90963DB750977684A03671680E6B60436986240D L_87 = V_13;
		float L_88 = L_87.___area_3;
		V_23 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_85, L_86)), (1000.0f))), L_88)), (0.5f)));
		V_24 = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_89 = (&(&V_13)->___normal_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_89, NULL);
		float L_91 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_90, L_91, NULL);
		float L_93 = L_92.___y_3;
		V_25 = L_93;
		float L_94 = V_0;
		float L_95 = V_25;
		V_0 = ((float)il2cpp_codegen_add(L_94, L_95));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_8;
		float L_98 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_97, L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_96, L_99, NULL);
		V_2 = L_100;
		float L_101 = V_6;
		float L_102 = V_20;
		V_6 = ((float)il2cpp_codegen_add(L_101, L_102));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_21;
		float L_105 = V_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_104, L_105, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_103, L_106, NULL);
		V_11 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_22;
		float L_110 = V_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_109, L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_108, L_111, NULL);
		V_11 = L_112;
		uint32_t L_113 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, 1));
	}

IL_0260:
	{
		uint32_t L_114 = V_12;
		uint32_t L_115 = ___nbrWet2;
		V_26 = (bool)((!(((uint32_t)L_114) >= ((uint32_t)L_115)))? 1 : 0);
		bool L_116 = V_26;
		if (L_116)
		{
			goto IL_00ae;
		}
	}
	{
		V_27 = 0;
		goto IL_0340;
	}

IL_0276:
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_117 = ___dryTris1;
		uint32_t L_118 = V_27;
		NullCheck(L_117);
		uint32_t L_119 = L_118;
		tri_t90963DB750977684A03671680E6B60436986240D L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_28 = L_120;
		tri_t90963DB750977684A03671680E6B60436986240D L_121 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = L_121.___a_0;
		tri_t90963DB750977684A03671680E6B60436986240D L_123 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = L_123.___b_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_122, L_124, NULL);
		tri_t90963DB750977684A03671680E6B60436986240D L_126 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = L_126.___c_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_125, L_127, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_128, (3.0f), NULL);
		V_8 = L_129;
		float L_130 = V_5;
		tri_t90963DB750977684A03671680E6B60436986240D L_131 = V_28;
		float L_132 = L_131.___area_3;
		V_5 = ((float)il2cpp_codegen_add(L_130, L_132));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_8;
		float L_134 = L_133.___y_3;
		tri_t90963DB750977684A03671680E6B60436986240D L_135 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = L_135.___a_0;
		float L_137 = L_136.___y_3;
		tri_t90963DB750977684A03671680E6B60436986240D L_138 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = L_138.___b_1;
		float L_140 = L_139.___y_3;
		tri_t90963DB750977684A03671680E6B60436986240D L_141 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = L_141.___c_2;
		float L_143 = L_142.___y_3;
		V_29 = ((float)il2cpp_codegen_subtract(L_134, ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_137, L_140)), L_143))/(3.0f)))));
		float L_144 = V_29;
		V_31 = (bool)((((float)L_144) < ((float)(0.0f)))? 1 : 0);
		bool L_145 = V_31;
		if (!L_145)
		{
			goto IL_0302;
		}
	}
	{
		float L_146 = V_29;
		V_29 = ((-L_146));
	}

IL_0302:
	{
		float L_147 = V_29;
		V_30 = ((float)il2cpp_codegen_multiply((-12.017251f), L_147));
		float L_148 = V_1;
		tri_t90963DB750977684A03671680E6B60436986240D L_149 = V_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = L_149.___normal_4;
		float L_151 = V_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_150, L_151, NULL);
		float L_153 = L_152.___y_3;
		V_1 = ((float)il2cpp_codegen_add(L_148, L_153));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = V_8;
		float L_156 = V_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_155, L_156, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_154, L_157, NULL);
		V_3 = L_158;
		float L_159 = V_7;
		float L_160 = V_30;
		V_7 = ((float)il2cpp_codegen_add(L_159, L_160));
		uint32_t L_161 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, 1));
	}

IL_0340:
	{
		uint32_t L_162 = V_27;
		uint32_t L_163 = ___nbrDry3;
		V_32 = (bool)((!(((uint32_t)L_162) >= ((uint32_t)L_163)))? 1 : 0);
		bool L_164 = V_32;
		if (L_164)
		{
			goto IL_0276;
		}
	}
	{
		float L_165 = V_6;
		V_33 = (bool)((((int32_t)((((float)L_165) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_166 = V_33;
		if (!L_166)
		{
			goto IL_037f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167 = V_2;
		float L_168 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_167, L_168, NULL);
		V_2 = L_169;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_170 = ___rb5;
		float L_171 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_171, L_172, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = V_2;
		NullCheck(L_170);
		Rigidbody_AddForceAtPosition_mA4226D0A30E0B55CB0CAD2A956EA16C546505965(L_170, L_173, L_174, NULL);
	}

IL_037f:
	{
		float L_175 = V_7;
		V_34 = (bool)((((int32_t)((((float)L_175) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_176 = V_34;
		if (!L_176)
		{
			goto IL_03b0;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177 = V_3;
		float L_178 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179;
		L_179 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_177, L_178, NULL);
		V_3 = L_179;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_180 = ___rb5;
		float L_181 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182;
		L_182 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_181, L_182, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184 = V_3;
		NullCheck(L_180);
		Rigidbody_AddForceAtPosition_mA4226D0A30E0B55CB0CAD2A956EA16C546505965(L_180, L_183, L_184, NULL);
	}

IL_03b0:
	{
		float L_185 = V_4;
		float L_186 = V_5;
		V_35 = (bool)((((int32_t)((((float)((float)il2cpp_codegen_add(L_185, L_186))) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_187 = V_35;
		if (!L_187)
		{
			goto IL_0440;
		}
	}
	{
		float L_188 = V_4;
		float L_189 = V_5;
		float L_190 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191 = ___speed4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_191, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply((5.0f), ((float)(L_188/((float)il2cpp_codegen_add(L_189, L_190)))))), L_192, NULL);
		V_36 = L_193;
		float L_194 = (0.0f);
		V_37 = L_194;
		(&V_11)->___z_4 = L_194;
		float L_195 = V_37;
		(&V_11)->___x_2 = L_195;
		float L_196 = (0.0f);
		V_37 = L_196;
		(&V_36)->___z_4 = L_196;
		float L_197 = V_37;
		(&V_36)->___x_2 = L_197;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_198 = ___rb5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200 = V_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		L_201 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_199, L_200, NULL);
		NullCheck(L_198);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_198, L_201, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_202 = ___rb5;
		float L_203 = V_4;
		float L_204 = V_5;
		float L_205 = V_4;
		NullCheck(L_202);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_202, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(L_203/((float)il2cpp_codegen_add(L_204, L_205)))), (3.0f))), (0.0500000007f))), NULL);
	}

IL_0440:
	{
		float L_206 = V_4;
		V_38 = (bool)((((float)L_206) > ((float)(0.0f)))? 1 : 0);
		bool L_207 = V_38;
		if (!L_207)
		{
			goto IL_0482;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_208 = ___rb5;
		NullCheck(L_208);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209;
		L_209 = Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8(L_208, NULL);
		V_40 = L_209;
		float L_210;
		L_210 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_40), NULL);
		float L_211;
		L_211 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_210, (50.0f))), (0.100000001f), (3.0f), NULL);
		V_39 = L_211;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_212 = ___rb5;
		float L_213 = V_39;
		NullCheck(L_212);
		Rigidbody_set_angularDrag_m4193B04EEFCA831DB99E29E98F778957557F130C(L_212, L_213, NULL);
	}

IL_0482:
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
// System.Single ArchimedsLab.MathHelper::TriangleSurface(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AB0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AC1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___AB0), NULL);
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___AC1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___AB0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___AC1;
		float L_4;
		L_4 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = sinf(L_4);
		float L_6;
		L_6 = fabsf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_5))/(2.0f))));
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 ArchimedsLab.MathHelper::Divide(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathHelper_Divide_mF4DA26B8255743395FFAF421700ED61A9EAACF30 (float ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B9_1 = NULL;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___b1;
		float L_1 = L_0.___x_2;
		G_B1_0 = (&___b1);
		if ((((float)L_1) == ((float)(0.0f))))
		{
			G_B2_0 = (&___b1);
			goto IL_001a;
		}
	}
	{
		float L_2 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___b1;
		float L_4 = L_3.___x_2;
		G_B3_0 = ((float)(L_2/L_4));
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->___x_2 = G_B3_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___b1;
		float L_6 = L_5.___y_3;
		G_B4_0 = (&___b1);
		if ((((float)L_6) == ((float)(0.0f))))
		{
			G_B5_0 = (&___b1);
			goto IL_003d;
		}
	}
	{
		float L_7 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___b1;
		float L_9 = L_8.___y_3;
		G_B6_0 = ((float)(L_7/L_9));
		G_B6_1 = G_B4_0;
		goto IL_0042;
	}

IL_003d:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
	}

IL_0042:
	{
		G_B6_1->___y_3 = G_B6_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		G_B7_0 = (&___b1);
		if ((((float)L_11) == ((float)(0.0f))))
		{
			G_B8_0 = (&___b1);
			goto IL_0060;
		}
	}
	{
		float L_12 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___b1;
		float L_14 = L_13.___z_4;
		G_B9_0 = ((float)(L_12/L_14));
		G_B9_1 = G_B7_0;
		goto IL_0065;
	}

IL_0060:
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B8_0;
	}

IL_0065:
	{
		G_B9_1->___z_4 = G_B9_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___b1;
		V_0 = L_15;
		goto IL_006e;
	}

IL_006e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 ArchimedsLab.MathHelper::Clamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MathHelper_Clamp_m759DF59A092A2A1420DF514813877B9BE4538201 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___n0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___n0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b2;
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, L_3, L_5, NULL);
		(&___n0)->___x_2 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___n0;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a1;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b2;
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, L_10, L_12, NULL);
		(&___n0)->___y_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___n0;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a1;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b2;
		float L_19 = L_18.___z_4;
		float L_20;
		L_20 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_15, L_17, L_19, NULL);
		(&___n0)->___z_4 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___n0;
		V_0 = L_21;
		goto IL_005f;
	}

IL_005f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
// System.Void ArchimedsLab.MathHelper::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,ArchimedsLab.MathHelper/PlotFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathHelper_DrawLine_m91A54B2498B2ED0E28241F7AF30BDF07EC1F775B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* ___plot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B7_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___b1;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___y_1;
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___b1;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___a0;
		float L_8 = L_7.___x_0;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		V_0 = (bool)((((float)L_4) > ((float)L_9))? 1 : 0);
		bool L_10 = V_0;
		V_6 = L_10;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		float* L_12 = (&(&___a0)->___x_0);
		float* L_13 = (&(&___a0)->___y_1);
		MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF(L_12, L_13, MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_RuntimeMethod_var);
		float* L_14 = (&(&___b1)->___x_0);
		float* L_15 = (&(&___b1)->___y_1);
		MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF(L_14, L_15, MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_RuntimeMethod_var);
	}

IL_0059:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___a0;
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___b1;
		float L_19 = L_18.___x_0;
		V_7 = (bool)((((float)L_17) > ((float)L_19))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0097;
		}
	}
	{
		float* L_21 = (&(&___a0)->___x_0);
		float* L_22 = (&(&___b1)->___x_0);
		MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF(L_21, L_22, MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_RuntimeMethod_var);
		float* L_23 = (&(&___a0)->___y_1);
		float* L_24 = (&(&___b1)->___y_1);
		MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF(L_23, L_24, MathHelper_Swap_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6E75C3E7412321A3F0975B6556BA9132D0C6A2CF_RuntimeMethod_var);
	}

IL_0097:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___b1;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___a0;
		float L_28 = L_27.___x_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_26, L_28)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___b1;
		float L_30 = L_29.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___a0;
		float L_32 = L_31.___y_1;
		float L_33;
		L_33 = fabsf(((float)il2cpp_codegen_subtract(L_30, L_32)));
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_33);
		int32_t L_34 = V_1;
		V_3 = ((int32_t)(L_34/2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___a0;
		float L_36 = L_35.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___b1;
		float L_38 = L_37.___y_1;
		if ((((float)L_36) < ((float)L_38)))
		{
			goto IL_00cf;
		}
	}
	{
		G_B7_0 = (-1);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B7_0 = 1;
	}

IL_00d0:
	{
		V_4 = G_B7_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___a0;
		float L_40 = L_39.___y_1;
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = ___a0;
		float L_42 = L_41.___x_0;
		V_8 = il2cpp_codegen_cast_double_to_int<int32_t>(L_42);
		goto IL_0128;
	}

IL_00e6:
	{
		bool L_43 = V_0;
		V_9 = L_43;
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_00fb;
		}
	}
	{
		PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* L_45 = ___plot2;
		int32_t L_46 = V_5;
		int32_t L_47 = V_8;
		NullCheck(L_45);
		PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_inline(L_45, L_46, L_47, NULL);
		goto IL_0106;
	}

IL_00fb:
	{
		PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* L_48 = ___plot2;
		int32_t L_49 = V_8;
		int32_t L_50 = V_5;
		NullCheck(L_48);
		PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_inline(L_48, L_49, L_50, NULL);
	}

IL_0106:
	{
		int32_t L_51 = V_3;
		int32_t L_52 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_51, L_52));
		int32_t L_53 = V_3;
		V_10 = (bool)((((int32_t)L_53) < ((int32_t)0))? 1 : 0);
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_55 = V_5;
		int32_t L_56 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
		int32_t L_57 = V_3;
		int32_t L_58 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, L_58));
	}

IL_0121:
	{
		int32_t L_59 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0128:
	{
		int32_t L_60 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = ___b1;
		float L_62 = L_61.___x_0;
		V_11 = (bool)((((int32_t)((!(((float)((float)L_60)) <= ((float)L_62)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_11;
		if (L_63)
		{
			goto IL_00e6;
		}
	}
	{
		return;
	}
}
// System.Void ArchimedsLab.MathHelper::RasterizeTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,ArchimedsLab.MathHelper/PlotFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathHelper_RasterizeTriangle_mA1F4C39A5915B84B575E88D6BC736E713206345E (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* ___draw3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B5_0 = 0;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___b1;
		float L_6 = L_5.___x_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___c2;
		float L_9 = L_8.___x_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_9);
		float L_10;
		L_10 = Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline(L_7, NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___x_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___b1;
		float L_17 = L_16.___x_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_17);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___c2;
		float L_20 = L_19.___x_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_20);
		float L_21;
		L_21 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_18, NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_21);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___a0;
		float L_25 = L_24.___y_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = L_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___b1;
		float L_28 = L_27.___y_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___c2;
		float L_31 = L_30.___y_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_31);
		float L_32;
		L_32 = Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline(L_29, NULL);
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = L_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___a0;
		float L_36 = L_35.___y_1;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_36);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = L_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___b1;
		float L_39 = L_38.___y_1;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_39);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = ___c2;
		float L_42 = L_41.___y_1;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_42);
		float L_43;
		L_43 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_40, NULL);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_43);
		int32_t L_44 = V_5;
		V_7 = L_44;
		goto IL_01a2;
	}

IL_00ad:
	{
		int32_t L_45 = V_3;
		V_8 = L_45;
		goto IL_018d;
	}

IL_00b5:
	{
		int32_t L_46 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = ___b1;
		float L_48 = L_47.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___a0;
		float L_50 = L_49.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = ___b1;
		float L_52 = L_51.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___a0;
		float L_54 = L_53.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = ___b1;
		float L_56 = L_55.___x_0;
		int32_t L_57 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = ___b1;
		float L_59 = L_58.___y_1;
		V_0 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_46), L_48)), ((float)il2cpp_codegen_subtract(L_50, L_52)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_54, L_56)), ((float)il2cpp_codegen_subtract(((float)L_57), L_59))))))) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_60 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = ___c2;
		float L_62 = L_61.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = ___b1;
		float L_64 = L_63.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = ___c2;
		float L_66 = L_65.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = ___b1;
		float L_68 = L_67.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = ___c2;
		float L_70 = L_69.___x_0;
		int32_t L_71 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = ___c2;
		float L_73 = L_72.___y_1;
		V_1 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_60), L_62)), ((float)il2cpp_codegen_subtract(L_64, L_66)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_68, L_70)), ((float)il2cpp_codegen_subtract(((float)L_71), L_73))))))) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_74 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = ___a0;
		float L_76 = L_75.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = ___c2;
		float L_78 = L_77.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = ___a0;
		float L_80 = L_79.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = ___c2;
		float L_82 = L_81.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = ___a0;
		float L_84 = L_83.___x_0;
		int32_t L_85 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86 = ___a0;
		float L_87 = L_86.___y_1;
		V_2 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_74), L_76)), ((float)il2cpp_codegen_subtract(L_78, L_80)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_82, L_84)), ((float)il2cpp_codegen_subtract(((float)L_85), L_87))))))) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_0;
		bool L_89 = V_1;
		if ((!(((uint32_t)L_88) == ((uint32_t)L_89))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_90 = V_0;
		bool L_91 = V_2;
		G_B5_0 = ((((int32_t)L_90) == ((int32_t)L_91))? 1 : 0);
		goto IL_0175;
	}

IL_0174:
	{
		G_B5_0 = 0;
	}

IL_0175:
	{
		V_9 = (bool)G_B5_0;
		bool L_92 = V_9;
		if (!L_92)
		{
			goto IL_0186;
		}
	}
	{
		PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* L_93 = ___draw3;
		int32_t L_94 = V_8;
		int32_t L_95 = V_7;
		NullCheck(L_93);
		PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_inline(L_93, L_94, L_95, NULL);
	}

IL_0186:
	{
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_018d:
	{
		int32_t L_97 = V_8;
		int32_t L_98 = V_4;
		V_10 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		bool L_99 = V_10;
		if (L_99)
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_100 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_01a2:
	{
		int32_t L_101 = V_7;
		int32_t L_102 = V_6;
		V_11 = (bool)((((int32_t)L_101) < ((int32_t)L_102))? 1 : 0);
		bool L_103 = V_11;
		if (L_103)
		{
			goto IL_00ad;
		}
	}
	{
		return;
	}
}
// System.Void ArchimedsLab.MathHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathHelper__ctor_mF35AACB31BB7BC8E1DCE5D44F44B0DE45103B239 (MathHelper_t21477527E44CB438A740EAE942F1E0B50BA378AD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_Multicast(PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* currentDelegate = reinterpret_cast<PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___x0, ___y1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_OpenInst(PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___x0, ___y1, method);
}
void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_OpenStatic(PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___x0, ___y1, method);
}
void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_OpenStaticInvoker(PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___x0, ___y1);
}
void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_ClosedStaticInvoker(PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___x0, ___y1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___x0, ___y1);

}
// System.Void ArchimedsLab.MathHelper/PlotFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlotFunction__ctor_mE652264F0875FC6D68DDD9B523EADED3EB0134E0 (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_Multicast;
}
// System.Void ArchimedsLab.MathHelper/PlotFunction::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___x0, ___y1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ArchimedsLab.MathHelper/PlotFunction::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlotFunction_BeginInvoke_m38A4D2150B12BC49F7217A9ECA8FB057A9D8586E (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___x0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___y1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void ArchimedsLab.MathHelper/PlotFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlotFunction_EndInvoke_m5330C2AD92484EB0220A488693D34FBFDA82F791 (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArchimedsLab.WaterCutter::CookCache(UnityEngine.Mesh,ArchimedsLab.tri[]&,ArchimedsLab.tri[]&,ArchimedsLab.tri[]&,ArchimedsLab.tri[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCutter_CookCache_mD02264FBC436D52DF1FA4D07E7C9ECE2D0ED196B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m0, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ____triangles1, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___worldBuffer2, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___wetTris3, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___dryTris4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	tri_t90963DB750977684A03671680E6B60436986240D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_0 = ____triangles1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___m0;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_1, NULL);
		NullCheck(L_2);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_3 = (triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)SZArrayNew(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_2)->max_length))/3)));
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_3);
		V_0 = 0;
		goto IL_00bf;
	}

IL_0019:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = ___m0;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5;
		L_5 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_4, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___m0;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_6, NULL);
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		uint32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = ___m0;
		NullCheck(L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14;
		L_14 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_13, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15 = ___m0;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_15, NULL);
		uint32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, 1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = ___m0;
		NullCheck(L_22);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23;
		L_23 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_22, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24 = ___m0;
		NullCheck(L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25;
		L_25 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_24, NULL);
		uint32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, 2));
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		int32_t L_29 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_31 = ____triangles1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_32 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_31);
		uint32_t L_33 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_1;
		(&V_4)->___a_0 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		(&V_4)->___b_1 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		(&V_4)->___c_2 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_41, NULL);
		float L_43;
		L_43 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_39, L_42, NULL);
		(&V_4)->___area_3 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_47, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_46, L_49, NULL);
		(&V_4)->___normal_4 = L_50;
		tri_t90963DB750977684A03671680E6B60436986240D L_51 = V_4;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((uint32_t)(int32_t)L_33/(uint32_t)(int32_t)3))), (tri_t90963DB750977684A03671680E6B60436986240D)L_51);
		uint32_t L_52 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, 3));
	}

IL_00bf:
	{
		uint32_t L_53 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_54 = ___m0;
		NullCheck(L_54);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55;
		L_55 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_54, NULL);
		NullCheck(L_55);
		V_5 = (bool)((((int64_t)((int64_t)(uint64_t)L_53)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))? 1 : 0);
		bool L_56 = V_5;
		if (L_56)
		{
			goto IL_0019;
		}
	}
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_57 = ___wetTris3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_58 = ____triangles1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_59 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_58);
		NullCheck(L_59);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_60 = (triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)SZArrayNew(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_59)->max_length)), 2)), 1)));
		*((RuntimeObject**)L_57) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_57, (void*)(RuntimeObject*)L_60);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_61 = ___dryTris4;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_62 = ____triangles1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_63 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_62);
		NullCheck(L_63);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_64 = (triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)SZArrayNew(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_63)->max_length)), 2)), 1)));
		*((RuntimeObject**)L_61) = (RuntimeObject*)L_64;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_61, (void*)(RuntimeObject*)L_64);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_65 = ___worldBuffer2;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_66 = ____triangles1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_67 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_66);
		NullCheck(L_67);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_68 = (triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B*)SZArrayNew(triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)));
		*((RuntimeObject**)L_65) = (RuntimeObject*)L_68;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_65, (void*)(RuntimeObject*)L_68);
		return;
	}
}
// System.Void ArchimedsLab.WaterCutter::CookMesh(UnityEngine.Vector3,UnityEngine.Quaternion,ArchimedsLab.tri[]&,ArchimedsLab.tri[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCutter_CookMesh_mEF7655FA53FC18A1D37BDFF1772734A2DE89C09C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___r1, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ____triangles2, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___worldBuffer3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_00b0;
	}

IL_0008:
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_0 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_1 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_0);
		uint32_t L_2 = V_0;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_3 = ____triangles2;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_4 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_3);
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		tri_t90963DB750977684A03671680E6B60436986240D L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (tri_t90963DB750977684A03671680E6B60436986240D)L_7);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_8 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_9 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_8);
		uint32_t L_10 = V_0;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___r1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_12 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_13 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_12);
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___a_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_11, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_17, NULL);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___a_0 = L_18;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_19 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_20 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_19);
		uint32_t L_21 = V_0;
		NullCheck(L_20);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___r1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_23 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_24 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_23);
		uint32_t L_25 = V_0;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___b_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_22, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_28, NULL);
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___b_1 = L_29;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_30 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_31 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_30);
		uint32_t L_32 = V_0;
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = ___r1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_34 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_35 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_34);
		uint32_t L_36 = V_0;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___c_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_33, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_39, NULL);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___c_2 = L_40;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_41 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_42 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_41);
		uint32_t L_43 = V_0;
		NullCheck(L_42);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___r1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_45 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_46 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_45);
		uint32_t L_47 = V_0;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___normal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_44, L_48, NULL);
		((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___normal_4 = L_49;
		uint32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, 1));
	}

IL_00b0:
	{
		uint32_t L_51 = V_0;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_52 = ___worldBuffer3;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_53 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_52);
		NullCheck(L_53);
		V_1 = (bool)((((int64_t)((int64_t)(uint64_t)L_51)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))? 1 : 0);
		bool L_54 = V_1;
		if (L_54)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void ArchimedsLab.WaterCutter::SplitMesh(ArchimedsLab.tri[],ArchimedsLab.tri[]&,ArchimedsLab.tri[]&,System.UInt32&,System.UInt32&,ArchimedsLab.WaterSurface/GetWaterHeight)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCutter_SplitMesh_mA1091B5846478102515C53BF8B718DAC9B23A93B (triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* ___raw0, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___wet1, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___dry2, uint32_t* ___wetNbr3, uint32_t* ___dryNbr4, GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* ___fwater5, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	uint32_t V_6 = 0;
	bool V_7 = false;
	uint32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		uint32_t* L_0 = ___dryNbr4;
		*((int32_t*)L_0) = (int32_t)0;
		uint32_t* L_1 = ___wetNbr3;
		*((int32_t*)L_1) = (int32_t)0;
		V_6 = 0;
		goto IL_0161;
	}

IL_0010:
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_2 = ___raw0;
		uint32_t L_3 = V_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___a_0;
		V_0 = L_4;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_5 = ___raw0;
		uint32_t L_6 = V_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___b_1;
		V_1 = L_7;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_8 = ___raw0;
		uint32_t L_9 = V_6;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___c_2;
		V_2 = L_10;
		GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* L_11 = ___fwater5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		NullCheck(L_11);
		float L_13;
		L_13 = GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_inline(L_11, L_12, NULL);
		V_3 = L_13;
		GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* L_14 = ___fwater5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		NullCheck(L_14);
		float L_16;
		L_16 = GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_inline(L_14, L_15, NULL);
		V_4 = L_16;
		GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* L_17 = ___fwater5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		NullCheck(L_17);
		float L_19;
		L_19 = GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_inline(L_17, L_18, NULL);
		V_5 = L_19;
		float L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___y_3;
		if ((!(((float)L_20) > ((float)L_22))))
		{
			goto IL_0077;
		}
	}
	{
		float L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___y_3;
		if ((!(((float)L_23) > ((float)L_25))))
		{
			goto IL_0077;
		}
	}
	{
		float L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28 = L_27.___y_3;
		G_B5_0 = ((((float)L_26) > ((float)L_28))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B5_0 = 0;
	}

IL_0078:
	{
		V_7 = (bool)G_B5_0;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00cf;
		}
	}
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_30 = ___wet1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_31 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_30);
		uint32_t* L_32 = ___wetNbr3;
		int32_t L_33 = *((uint32_t*)L_32);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_34 = ___raw0;
		uint32_t L_35 = V_6;
		NullCheck(L_34);
		uint32_t L_36 = L_35;
		tri_t90963DB750977684A03671680E6B60436986240D L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (tri_t90963DB750977684A03671680E6B60436986240D)L_37);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_38 = ___wet1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_39 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_38);
		uint32_t* L_40 = ___wetNbr3;
		int32_t L_41 = *((uint32_t*)L_40);
		NullCheck(L_39);
		float L_42 = V_3;
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___da_5 = L_42;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_43 = ___wet1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_44 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_43);
		uint32_t* L_45 = ___wetNbr3;
		int32_t L_46 = *((uint32_t*)L_45);
		NullCheck(L_44);
		float L_47 = V_4;
		((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___db_6 = L_47;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_48 = ___wet1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_49 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_48);
		uint32_t* L_50 = ___wetNbr3;
		uint32_t* L_51 = ___wetNbr3;
		int32_t L_52 = *((uint32_t*)L_51);
		V_8 = L_52;
		uint32_t L_53 = V_8;
		*((int32_t*)L_50) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, 1));
		uint32_t L_54 = V_8;
		NullCheck(L_49);
		float L_55 = V_5;
		((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___dc_7 = L_55;
		goto IL_015a;
	}

IL_00cf:
	{
		float L_56 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_0;
		float L_58 = L_57.___y_3;
		if ((!(((float)L_56) < ((float)L_58))))
		{
			goto IL_00ee;
		}
	}
	{
		float L_59 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_1;
		float L_61 = L_60.___y_3;
		if ((!(((float)L_59) < ((float)L_61))))
		{
			goto IL_00ee;
		}
	}
	{
		float L_62 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_2;
		float L_64 = L_63.___y_3;
		G_B11_0 = ((((float)L_62) < ((float)L_64))? 1 : 0);
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B11_0 = 0;
	}

IL_00ef:
	{
		V_9 = (bool)G_B11_0;
		bool L_65 = V_9;
		if (!L_65)
		{
			goto IL_0116;
		}
	}
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_66 = ___dry2;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_67 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_66);
		uint32_t* L_68 = ___dryNbr4;
		uint32_t* L_69 = ___dryNbr4;
		int32_t L_70 = *((uint32_t*)L_69);
		V_8 = L_70;
		uint32_t L_71 = V_8;
		*((int32_t*)L_68) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, 1));
		uint32_t L_72 = V_8;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_73 = ___raw0;
		uint32_t L_74 = V_6;
		NullCheck(L_73);
		uint32_t L_75 = L_74;
		tri_t90963DB750977684A03671680E6B60436986240D L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (tri_t90963DB750977684A03671680E6B60436986240D)L_76);
		goto IL_015a;
	}

IL_0116:
	{
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_77 = ___raw0;
		uint32_t L_78 = V_6;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___a_0;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_80 = ___raw0;
		uint32_t L_81 = V_6;
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___b_1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_83 = ___raw0;
		uint32_t L_84 = V_6;
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->___c_2;
		float L_86 = V_3;
		float L_87 = V_4;
		float L_88 = V_5;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_89 = ___raw0;
		uint32_t L_90 = V_6;
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)))->___normal_4;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_92 = ___wet1;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_93 = ___dry2;
		uint32_t* L_94 = ___wetNbr3;
		uint32_t* L_95 = ___dryNbr4;
		WaterCutter_CutIt_mFECEFDD77C37D2DD1C8B284205D3F331BB8E4470(L_79, L_82, L_85, L_86, L_87, L_88, L_91, L_92, L_93, L_94, L_95, NULL);
	}

IL_015a:
	{
		uint32_t L_96 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, 1));
	}

IL_0161:
	{
		uint32_t L_97 = V_6;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_98 = ___raw0;
		NullCheck(L_98);
		V_10 = (bool)((((int64_t)((int64_t)(uint64_t)L_97)) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))? 1 : 0);
		bool L_99 = V_10;
		if (L_99)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void ArchimedsLab.WaterCutter::CutIt(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single,UnityEngine.Vector3,ArchimedsLab.tri[]&,ArchimedsLab.tri[]&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCutter_CutIt_mFECEFDD77C37D2DD1C8B284205D3F331BB8E4470 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___h0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___l2, float ___hh3, float ___hm4, float ___hl5, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal6, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___wet7, triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** ___dry8, uint32_t* ___wetNbr9, uint32_t* ___dryNbr10, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint32_t V_9 = 0;
	tri_t90963DB750977684A03671680E6B60436986240D V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___h0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___m1;
		float L_3 = L_2.___y_3;
		V_3 = (bool)((((float)L_1) < ((float)L_3))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___h0;
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___m1;
		___h0 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		___m1 = L_7;
		float L_8 = ___hh3;
		V_1 = L_8;
		float L_9 = ___hm4;
		___hh3 = L_9;
		float L_10 = V_1;
		___hm4 = L_10;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___h0;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___l2;
		float L_14 = L_13.___y_3;
		V_4 = (bool)((((float)L_12) < ((float)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___h0;
		V_0 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___l2;
		___h0 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		___l2 = L_18;
		float L_19 = ___hh3;
		V_1 = L_19;
		float L_20 = ___hl5;
		___hh3 = L_20;
		float L_21 = V_1;
		___hl5 = L_21;
	}

IL_004d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___m1;
		float L_23 = L_22.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___l2;
		float L_25 = L_24.___y_3;
		V_5 = (bool)((((float)L_23) < ((float)L_25))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0075;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___m1;
		V_0 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___l2;
		___m1 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		___l2 = L_29;
		float L_30 = ___hm4;
		V_1 = L_30;
		float L_31 = ___hl5;
		___hm4 = L_31;
		float L_32 = V_1;
		___hl5 = L_32;
	}

IL_0075:
	{
		float L_33 = ___hm4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___m1;
		float L_35 = L_34.___y_3;
		V_2 = (bool)((((float)L_33) > ((float)L_35))? 1 : 0);
		float L_36 = ___hh3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___h0;
		float L_38 = L_37.___y_3;
		___hh3 = ((float)il2cpp_codegen_subtract(L_36, L_38));
		float L_39 = ___hm4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ___m1;
		float L_41 = L_40.___y_3;
		___hm4 = ((float)il2cpp_codegen_subtract(L_39, L_41));
		float L_42 = ___hl5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ___l2;
		float L_44 = L_43.___y_3;
		___hl5 = ((float)il2cpp_codegen_subtract(L_42, L_44));
		bool L_45 = V_2;
		V_6 = L_45;
		bool L_46 = V_6;
		if (!L_46)
		{
			goto IL_0285;
		}
	}
	{
		float L_47 = ___hh3;
		float L_48 = ___hm4;
		if ((((float)((float)il2cpp_codegen_subtract(L_47, L_48))) == ((float)(0.0f))))
		{
			goto IL_00d7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___m1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ___h0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ___m1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_50, L_51, NULL);
		float L_53 = ___hm4;
		float L_54 = ___hh3;
		float L_55 = ___hm4;
		float L_56;
		L_56 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((-L_53))/((float)il2cpp_codegen_subtract(L_54, L_55)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_52, L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_57, NULL);
		G_B10_0 = L_58;
		goto IL_00d8;
	}

IL_00d7:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = ___m1;
		G_B10_0 = L_59;
	}

IL_00d8:
	{
		V_7 = G_B10_0;
		float L_60 = ___hh3;
		float L_61 = ___hl5;
		if ((((float)((float)il2cpp_codegen_subtract(L_60, L_61))) == ((float)(0.0f))))
		{
			goto IL_0106;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___h0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_63, L_64, NULL);
		float L_66 = ___hl5;
		float L_67 = ___hh3;
		float L_68 = ___hl5;
		float L_69;
		L_69 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((-L_66))/((float)il2cpp_codegen_subtract(L_67, L_68)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_65, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_62, L_70, NULL);
		G_B13_0 = L_71;
		goto IL_0107;
	}

IL_0106:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___l2;
		G_B13_0 = L_72;
	}

IL_0107:
	{
		V_8 = G_B13_0;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_73 = ___wet7;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_74 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_73);
		uint32_t* L_75 = ___wetNbr9;
		uint32_t* L_76 = ___wetNbr9;
		int32_t L_77 = *((uint32_t*)L_76);
		V_9 = L_77;
		uint32_t L_78 = V_9;
		*((int32_t*)L_75) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, 1));
		uint32_t L_79 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = ___l2;
		(&V_10)->___a_0 = L_80;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_7;
		(&V_10)->___b_1 = L_81;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_8;
		(&V_10)->___c_2 = L_82;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_83, L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_86, L_87, NULL);
		float L_89;
		L_89 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_85, L_88, NULL);
		(&V_10)->___area_3 = L_89;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = ___normal6;
		(&V_10)->___normal_4 = L_90;
		float L_91 = ___hl5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = ___l2;
		float L_93 = L_92.___y_3;
		(&V_10)->___da_5 = ((float)il2cpp_codegen_add(L_91, L_93));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_7;
		float L_95 = L_94.___y_3;
		(&V_10)->___db_6 = L_95;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_8;
		float L_97 = L_96.___y_3;
		(&V_10)->___dc_7 = L_97;
		tri_t90963DB750977684A03671680E6B60436986240D L_98 = V_10;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (tri_t90963DB750977684A03671680E6B60436986240D)L_98);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_99 = ___wet7;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_100 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_99);
		uint32_t* L_101 = ___wetNbr9;
		uint32_t* L_102 = ___wetNbr9;
		int32_t L_103 = *((uint32_t*)L_102);
		V_9 = L_103;
		uint32_t L_104 = V_9;
		*((int32_t*)L_101) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_104, 1));
		uint32_t L_105 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = ___l2;
		(&V_10)->___a_0 = L_106;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_7;
		(&V_10)->___b_1 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ___m1;
		(&V_10)->___c_2 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_109, L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = ___m1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_112, L_113, NULL);
		float L_115;
		L_115 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_111, L_114, NULL);
		(&V_10)->___area_3 = L_115;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = ___normal6;
		(&V_10)->___normal_4 = L_116;
		float L_117 = ___hl5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = ___l2;
		float L_119 = L_118.___y_3;
		(&V_10)->___da_5 = ((float)il2cpp_codegen_add(L_117, L_119));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_7;
		float L_121 = L_120.___y_3;
		(&V_10)->___db_6 = L_121;
		float L_122 = ___hm4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123 = ___m1;
		float L_124 = L_123.___y_3;
		(&V_10)->___dc_7 = ((float)il2cpp_codegen_add(L_122, L_124));
		tri_t90963DB750977684A03671680E6B60436986240D L_125 = V_10;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (tri_t90963DB750977684A03671680E6B60436986240D)L_125);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_126 = ___dry8;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_127 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_126);
		uint32_t* L_128 = ___dryNbr10;
		uint32_t* L_129 = ___dryNbr10;
		int32_t L_130 = *((uint32_t*)L_129);
		V_9 = L_130;
		uint32_t L_131 = V_9;
		*((int32_t*)L_128) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_131, 1));
		uint32_t L_132 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_8;
		(&V_10)->___a_0 = L_133;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = ___h0;
		(&V_10)->___b_1 = L_134;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135 = V_7;
		(&V_10)->___c_2 = L_135;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = ___h0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_136, L_137, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_139, L_140, NULL);
		float L_142;
		L_142 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_138, L_141, NULL);
		(&V_10)->___area_3 = L_142;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = ___normal6;
		(&V_10)->___normal_4 = L_143;
		tri_t90963DB750977684A03671680E6B60436986240D L_144 = V_10;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (tri_t90963DB750977684A03671680E6B60436986240D)L_144);
		goto IL_042f;
	}

IL_0285:
	{
		float L_145 = ___hh3;
		float L_146 = ___hl5;
		if ((((float)((float)il2cpp_codegen_subtract(L_145, L_146))) == ((float)(0.0f))))
		{
			goto IL_02b2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = ___h0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_148, L_149, NULL);
		float L_151 = ___hl5;
		float L_152 = ___hh3;
		float L_153 = ___hl5;
		float L_154;
		L_154 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((-L_151))/((float)il2cpp_codegen_subtract(L_152, L_153)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_150, L_154, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		L_156 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_147, L_155, NULL);
		G_B17_0 = L_156;
		goto IL_02b3;
	}

IL_02b2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = ___l2;
		G_B17_0 = L_157;
	}

IL_02b3:
	{
		V_11 = G_B17_0;
		float L_158 = ___hh3;
		float L_159 = ___hl5;
		if ((((float)((float)il2cpp_codegen_subtract(L_158, L_159))) == ((float)(0.0f))))
		{
			goto IL_02e2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = ___m1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_161, L_162, NULL);
		float L_164 = ___hl5;
		float L_165 = ___hm4;
		float L_166 = ___hl5;
		float L_167;
		L_167 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((-L_164))/((float)il2cpp_codegen_subtract(L_165, L_166)))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_163, L_167, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169;
		L_169 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_160, L_168, NULL);
		G_B20_0 = L_169;
		goto IL_02e3;
	}

IL_02e2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170 = ___l2;
		G_B20_0 = L_170;
	}

IL_02e3:
	{
		V_12 = G_B20_0;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_171 = ___wet7;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_172 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_171);
		uint32_t* L_173 = ___wetNbr9;
		uint32_t* L_174 = ___wetNbr9;
		int32_t L_175 = *((uint32_t*)L_174);
		V_9 = L_175;
		uint32_t L_176 = V_9;
		*((int32_t*)L_173) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_176, 1));
		uint32_t L_177 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178 = ___l2;
		(&V_10)->___a_0 = L_178;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179 = V_12;
		(&V_10)->___b_1 = L_179;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = V_11;
		(&V_10)->___c_2 = L_180;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_181, L_182, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185 = ___l2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186;
		L_186 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_184, L_185, NULL);
		float L_187;
		L_187 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_183, L_186, NULL);
		(&V_10)->___area_3 = L_187;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = ___normal6;
		(&V_10)->___normal_4 = L_188;
		float L_189 = ___hl5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190 = ___l2;
		float L_191 = L_190.___y_3;
		(&V_10)->___da_5 = ((float)il2cpp_codegen_add(L_189, L_191));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192 = V_12;
		float L_193 = L_192.___y_3;
		(&V_10)->___db_6 = L_193;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = V_11;
		float L_195 = L_194.___y_3;
		(&V_10)->___dc_7 = L_195;
		tri_t90963DB750977684A03671680E6B60436986240D L_196 = V_10;
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_177), (tri_t90963DB750977684A03671680E6B60436986240D)L_196);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_197 = ___dry8;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_198 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_197);
		uint32_t* L_199 = ___dryNbr10;
		uint32_t* L_200 = ___dryNbr10;
		int32_t L_201 = *((uint32_t*)L_200);
		V_9 = L_201;
		uint32_t L_202 = V_9;
		*((int32_t*)L_199) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_202, 1));
		uint32_t L_203 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = V_11;
		(&V_10)->___a_0 = L_204;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205 = ___h0;
		(&V_10)->___b_1 = L_205;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206 = ___m1;
		(&V_10)->___c_2 = L_206;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207 = ___h0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_208 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209;
		L_209 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_207, L_208, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210 = ___m1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_211 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212;
		L_212 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_210, L_211, NULL);
		float L_213;
		L_213 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_209, L_212, NULL);
		(&V_10)->___area_3 = L_213;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214 = ___normal6;
		(&V_10)->___normal_4 = L_214;
		tri_t90963DB750977684A03671680E6B60436986240D L_215 = V_10;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(L_203), (tri_t90963DB750977684A03671680E6B60436986240D)L_215);
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B** L_216 = ___dry8;
		triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B* L_217 = *((triU5BU5D_tAAA6AE21F3456ABA4A13A6880143FBB9441D316B**)L_216);
		uint32_t* L_218 = ___dryNbr10;
		uint32_t* L_219 = ___dryNbr10;
		int32_t L_220 = *((uint32_t*)L_219);
		V_9 = L_220;
		uint32_t L_221 = V_9;
		*((int32_t*)L_218) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_221, 1));
		uint32_t L_222 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(tri_t90963DB750977684A03671680E6B60436986240D));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_223 = V_11;
		(&V_10)->___a_0 = L_223;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_224 = ___m1;
		(&V_10)->___b_1 = L_224;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_225 = V_12;
		(&V_10)->___c_2 = L_225;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_226 = ___m1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_227 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228;
		L_228 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_226, L_227, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_229 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_230 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_231;
		L_231 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_229, L_230, NULL);
		float L_232;
		L_232 = MathHelper_TriangleSurface_mFFC403DD9A4A980F5387399ACCBC787C5F81D026(L_228, L_231, NULL);
		(&V_10)->___area_3 = L_232;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233 = ___normal6;
		(&V_10)->___normal_4 = L_233;
		tri_t90963DB750977684A03671680E6B60436986240D L_234 = V_10;
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(L_222), (tri_t90963DB750977684A03671680E6B60436986240D)L_234);
	}

IL_042f:
	{
		return;
	}
}
// System.Void ArchimedsLab.WaterCutter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCutter__ctor_m14DFCED21AA3B6287C73EB77E22BB2AE8028F106 (WaterCutter_t1E9A8BDA78D72462FA597FC470F8D628158EC81F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ArchimedsLab.WaterSurface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterSurface__cctor_m186E4BEE95953C1D4079A4654005B33C899E415C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_0_m022D22002AC5754B4F00B70893D80B397E716646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_1_mCD0EA5D4F7EEDA28A61FC576F5342535A0CC9A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___waveLengthInverse_0 = (0.100000001f);
		((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Intensity_1 = (10.0f);
		((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Periode_2 = (0.300000012f);
		((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Height_3 = (0.0f);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var);
		U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* L_0 = ((U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* L_1 = (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6*)il2cpp_codegen_object_new(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GetWaterHeight__ctor_m7EDA20CCEC4694C3E56AAC644F55F071788D9AAD(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_0_m022D22002AC5754B4F00B70893D80B397E716646_RuntimeMethod_var), NULL);
		((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___simpleWater_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___simpleWater_5), (void*)L_1);
		U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* L_2 = ((U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* L_3 = (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6*)il2cpp_codegen_object_new(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GetWaterHeight__ctor_m7EDA20CCEC4694C3E56AAC644F55F071788D9AAD(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_1_mCD0EA5D4F7EEDA28A61FC576F5342535A0CC9A4E_RuntimeMethod_var), NULL);
		((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___flatWater_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___flatWater_6), (void*)L_3);
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
float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_Multicast(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* currentDelegate = reinterpret_cast<GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pos0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_OpenInst(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pos0, method);
}
float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_OpenStatic(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pos0, method);
}
float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_OpenStaticInvoker(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___pos0);
}
float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_ClosedStaticInvoker(GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< float, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pos0);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6 (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___pos0);

	return returnValue;
}
// System.Void ArchimedsLab.WaterSurface/GetWaterHeight::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetWaterHeight__ctor_m7EDA20CCEC4694C3E56AAC644F55F071788D9AAD (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_Multicast;
}
// System.Single ArchimedsLab.WaterSurface/GetWaterHeight::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269 (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pos0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ArchimedsLab.WaterSurface/GetWaterHeight::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetWaterHeight_BeginInvoke_mCFFDE5F2B6BA94F2B99B2A361FE6BCAF49F0B80C (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___pos0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Single ArchimedsLab.WaterSurface/GetWaterHeight::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GetWaterHeight_EndInvoke_mC6A63043240DCA689CDACEFBDD83A8FDB2FCE9A3 (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArchimedsLab.WaterSurface/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCB83E1041E2B5DEBB85DF7A6F8056EC58431C68B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* L_0 = (U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635*)il2cpp_codegen_object_new(U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6B6F004BF2FEF62B98AA4701F879D42EAD30DF09(L_0, NULL);
		((U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ArchimedsLab.WaterSurface/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6B6F004BF2FEF62B98AA4701F879D42EAD30DF09 (U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single ArchimedsLab.WaterSurface/<>c::<.cctor>b__8_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3C_cctorU3Eb__8_0_m022D22002AC5754B4F00B70893D80B397E716646 (U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		il2cpp_codegen_runtime_class_init_inline(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var);
		float L_2 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___waveLengthInverse_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		float L_4 = L_3.___z_4;
		float L_5 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___waveLengthInverse_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Periode_2;
		float L_8 = V_0;
		float L_9;
		L_9 = cosf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), L_8)));
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_11 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Periode_2;
		float L_12 = V_1;
		float L_13;
		L_13 = sinf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, L_11)), L_12)));
		float L_14 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Intensity_1;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_9, L_13)), L_14)), (0.25f)));
		float L_15 = V_2;
		float L_16 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Height_3;
		V_3 = ((float)il2cpp_codegen_add(L_15, L_16));
		goto IL_0057;
	}

IL_0057:
	{
		float L_17 = V_3;
		return L_17;
	}
}
// System.Single ArchimedsLab.WaterSurface/<>c::<.cctor>b__8_1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3C_cctorU3Eb__8_1_mCD0EA5D4F7EEDA28A61FC576F5342535A0CC9A4E (U3CU3Ec_tBF5409340B2B630BAAD3D2B3170953FF8C30D635* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		il2cpp_codegen_runtime_class_init_inline(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var);
		float L_0 = ((WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_StaticFields*)il2cpp_codegen_static_fields_for(WaterSurface_t866F14D937CFEAA8E9D3E361ABBCA983CAAA8EFA_il2cpp_TypeInfo_var))->___Height_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		float L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlotFunction_Invoke_m97E46D2D6D513E1E08BB78B285C18FBEBC1E4EAB_inline (PlotFunction_t707787A4BEC52F4E48757EFEF55E949DFCB69B2E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___x0, ___y1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) < ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GetWaterHeight_Invoke_mD7ECFD378BF8CB644C15E216CD3CFA91D539C269_inline (GetWaterHeight_t90CB71198A0C9245B07B4398ACB069CAF48105C6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pos0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
