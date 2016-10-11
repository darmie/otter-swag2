#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif

Void ISprite_obj::__construct()
{
	return null();
}

//ISprite_obj::~ISprite_obj() { }

Dynamic ISprite_obj::__CreateEmpty() { return  new ISprite_obj; }
hx::ObjectPtr< ISprite_obj > ISprite_obj::__new()
{  hx::ObjectPtr< ISprite_obj > _result_ = new ISprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic ISprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ISprite_obj > _result_ = new ISprite_obj();
	_result_->__construct();
	return _result_;}

Void ISprite_obj::move( ){
{
		HX_STACK_FRAME("ISprite","move",0x0c0dde51,"ISprite.move","ISprite.hx",13,0xccfc0650)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ISprite_obj,move,(void))

Void ISprite_obj::show( ::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("ISprite","show",0x0fffd03d,"ISprite.show","ISprite.hx",14,0xccfc0650)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screen,"screen")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ISprite_obj,show,(void))

int ISprite_obj::collision( ){
	HX_STACK_FRAME("ISprite","collision",0x7276e532,"ISprite.collision","ISprite.hx",16,0xccfc0650)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ISprite_obj,collision,return )

int ISprite_obj::getOffSetX( ){
	HX_STACK_FRAME("ISprite","getOffSetX",0xcf18a6cf,"ISprite.getOffSetX","ISprite.hx",17,0xccfc0650)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ISprite_obj,getOffSetX,return )

int ISprite_obj::getOffSetY( ){
	HX_STACK_FRAME("ISprite","getOffSetY",0xcf18a6d0,"ISprite.getOffSetY","ISprite.hx",18,0xccfc0650)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ISprite_obj,getOffSetY,return )


ISprite_obj::ISprite_obj()
{
}

Dynamic ISprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOffSetX") ) { return getOffSetX_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffSetY") ) { return getOffSetY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("getOffSetX","\x8f","\xbb","\x9f","\x11"),
	HX_HCSTRING("getOffSetY","\x90","\xbb","\x9f","\x11"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ISprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ISprite_obj::__mClass,"__mClass");
};

#endif

hx::Class ISprite_obj::__mClass;

void ISprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ISprite","\x2e","\x2d","\xc9","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ISprite_obj >;
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

