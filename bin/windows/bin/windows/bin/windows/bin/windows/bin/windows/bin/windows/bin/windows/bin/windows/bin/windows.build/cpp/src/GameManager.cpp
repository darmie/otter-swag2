#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif

Void GameManager_obj::__construct()
{
	return null();
}

//GameManager_obj::~GameManager_obj() { }

Dynamic GameManager_obj::__CreateEmpty() { return  new GameManager_obj; }
hx::ObjectPtr< GameManager_obj > GameManager_obj::__new()
{  hx::ObjectPtr< GameManager_obj > _result_ = new GameManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameManager_obj > _result_ = new GameManager_obj();
	_result_->__construct();
	return _result_;}

int GameManager_obj::SCREEN_WIDTH;

int GameManager_obj::SCREEN_HEIGHT;

int GameManager_obj::FRAMES_PER_SECOND;

::cpp::Pointer< SDL_Surface > GameManager_obj::screen;


GameManager_obj::GameManager_obj()
{
}

bool GameManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = screen; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SCREEN_WIDTH") ) { outValue = SCREEN_WIDTH; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_HEIGHT") ) { outValue = SCREEN_HEIGHT; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FRAMES_PER_SECOND") ) { outValue = FRAMES_PER_SECOND; return true;  }
	}
	return false;
}

bool GameManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=ioValue.Cast< ::cpp::Pointer< SDL_Surface > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SCREEN_WIDTH") ) { SCREEN_WIDTH=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_HEIGHT") ) { SCREEN_HEIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FRAMES_PER_SECOND") ) { FRAMES_PER_SECOND=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GameManager_obj::SCREEN_WIDTH,HX_HCSTRING("SCREEN_WIDTH","\x93","\x75","\x8d","\xd8")},
	{hx::fsInt,(void *) &GameManager_obj::SCREEN_HEIGHT,HX_HCSTRING("SCREEN_HEIGHT","\x9a","\xe3","\x88","\x59")},
	{hx::fsInt,(void *) &GameManager_obj::FRAMES_PER_SECOND,HX_HCSTRING("FRAMES_PER_SECOND","\x2f","\x45","\x5b","\xb8")},
	{hx::fsObject /*::cpp::Pointer< SDL_Surface >*/ ,(void *) &GameManager_obj::screen,HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameManager_obj::SCREEN_WIDTH,"SCREEN_WIDTH");
	HX_MARK_MEMBER_NAME(GameManager_obj::SCREEN_HEIGHT,"SCREEN_HEIGHT");
	HX_MARK_MEMBER_NAME(GameManager_obj::FRAMES_PER_SECOND,"FRAMES_PER_SECOND");
	HX_MARK_MEMBER_NAME(GameManager_obj::screen,"screen");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameManager_obj::SCREEN_WIDTH,"SCREEN_WIDTH");
	HX_VISIT_MEMBER_NAME(GameManager_obj::SCREEN_HEIGHT,"SCREEN_HEIGHT");
	HX_VISIT_MEMBER_NAME(GameManager_obj::FRAMES_PER_SECOND,"FRAMES_PER_SECOND");
	HX_VISIT_MEMBER_NAME(GameManager_obj::screen,"screen");
};

#endif

hx::Class GameManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SCREEN_WIDTH","\x93","\x75","\x8d","\xd8"),
	HX_HCSTRING("SCREEN_HEIGHT","\x9a","\xe3","\x88","\x59"),
	HX_HCSTRING("FRAMES_PER_SECOND","\x2f","\x45","\x5b","\xb8"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	::String(null()) };

void GameManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("GameManager","\x7b","\xa0","\xaa","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameManager_obj::__GetStatic;
	__mClass->mSetStaticField = &GameManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GameManager_obj >;
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

void GameManager_obj::__boot()
{
	SCREEN_WIDTH= (int)480;
	SCREEN_HEIGHT= (int)320;
	FRAMES_PER_SECOND= (int)10;
	screen= null();
}

