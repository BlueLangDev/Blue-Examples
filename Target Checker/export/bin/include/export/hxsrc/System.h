#ifndef INCLUDED_export_hxsrc_System
#define INCLUDED_export_hxsrc_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_hx_export,hxsrc,System)

namespace _hx_export{
namespace hxsrc{


class HXCPP_CLASS_ATTRIBUTES System_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef System_obj OBJ_;
		System_obj();

	public:
		enum { _hx_ClassId = 0x13740b67 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="export.hxsrc.System")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"export.hxsrc.System"); }

		inline static ::hx::ObjectPtr< System_obj > __new() {
			::hx::ObjectPtr< System_obj > __this = new System_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< System_obj > __alloc(::hx::Ctx *_hx_ctx) {
			System_obj *__this = (System_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(System_obj), false, "export.hxsrc.System"));
			*(void **)__this = System_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("System",0f,0b,77,27); }

		static void runcmd( ::Dynamic command);
		static ::Dynamic runcmd_dyn();

		static void shutdown( ::Dynamic exitCode);
		static ::Dynamic shutdown_dyn();

		static void varTrace( ::Dynamic variable);
		static ::Dynamic varTrace_dyn();

		static ::String varRead( ::Dynamic prompt);
		static ::Dynamic varRead_dyn();

};

} // end namespace export
} // end namespace hxsrc

#endif /* INCLUDED_export_hxsrc_System */ 