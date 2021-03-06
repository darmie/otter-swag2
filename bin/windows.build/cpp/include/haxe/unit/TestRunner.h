#ifndef INCLUDED_haxe_unit_TestRunner
#define INCLUDED_haxe_unit_TestRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,unit,TestRunner)
namespace haxe{
namespace unit{


class HXCPP_CLASS_ATTRIBUTES  TestRunner_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestRunner_obj OBJ_;
		TestRunner_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.unit.TestRunner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TestRunner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestRunner_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TestRunner","\x02","\x94","\x3f","\x4b"); }

		static void __boot();
		static Dynamic print;
		static inline Dynamic &print_dyn() {return print; }

};

} // end namespace haxe
} // end namespace unit

#endif /* INCLUDED_haxe_unit_TestRunner */ 
