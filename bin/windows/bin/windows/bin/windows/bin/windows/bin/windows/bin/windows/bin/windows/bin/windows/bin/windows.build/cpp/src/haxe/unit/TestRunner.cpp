#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_unit_TestRunner
#include <haxe/unit/TestRunner.h>
#endif
namespace haxe{
namespace unit{

Void TestRunner_obj::__construct()
{
	return null();
}

//TestRunner_obj::~TestRunner_obj() { }

Dynamic TestRunner_obj::__CreateEmpty() { return  new TestRunner_obj; }
hx::ObjectPtr< TestRunner_obj > TestRunner_obj::__new()
{  hx::ObjectPtr< TestRunner_obj > _result_ = new TestRunner_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestRunner_obj > _result_ = new TestRunner_obj();
	_result_->__construct();
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_print,TestRunner_obj)
Void run(Dynamic v){
{
		HX_STACK_FRAME("haxe.unit.TestRunner","print",0x38bbada3,"haxe.unit.TestRunner.print","C:\\HaxeToolkit\\haxe\\std/haxe/unit/TestRunner.hx",33,0x013a06c1)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(48)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::cpp::Lib_obj::print(tmp);
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Dynamic TestRunner_obj::print;


TestRunner_obj::TestRunner_obj()
{
}

bool TestRunner_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print; return true;  }
	}
	return false;
}

bool TestRunner_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { print=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TestRunner_obj::print,HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TestRunner_obj::print,"print");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestRunner_obj::print,"print");
};

#endif

hx::Class TestRunner_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	::String(null()) };

void TestRunner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.unit.TestRunner","\x64","\x99","\xea","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestRunner_obj::__GetStatic;
	__mClass->mSetStaticField = &TestRunner_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TestRunner_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void TestRunner_obj::__boot()
{
	print = new __default_print;

}

} // end namespace haxe
} // end namespace unit
