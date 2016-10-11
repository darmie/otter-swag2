#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_Timer
#include <Timer.h>
#endif

Void Timer_obj::__construct()
{
HX_STACK_FRAME("Timer","new",0x86000717,"Timer.new","Timer.hx",16,0xdab7a839)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->startTicks = (int)0;
	HX_STACK_LINE(19)
	this->pausedTicks = (int)0;
	HX_STACK_LINE(20)
	this->paused = false;
	HX_STACK_LINE(21)
	this->started = false;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new()
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct();
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct();
	return _result_;}

Void Timer_obj::start( ){
{
		HX_STACK_FRAME("Timer","start",0xf63c06d9,"Timer.start","Timer.hx",25,0xdab7a839)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->started = true;
		HX_STACK_LINE(30)
		this->paused = false;
		HX_STACK_LINE(33)
		int tmp = SDL_GetTicks();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		this->startTicks = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,start,(void))

Float Timer_obj::get_ticks( ){
	HX_STACK_FRAME("Timer","get_ticks",0xa36824c4,"Timer.get_ticks","Timer.hx",71,0xdab7a839)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	bool tmp = this->started;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	if ((tmp1)){
		HX_STACK_LINE(76)
		bool tmp2 = this->paused;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(79)
			int tmp4 = this->pausedTicks;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			return tmp4;
		}
		else{
			HX_STACK_LINE(84)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					int tmp6 = SDL_GetTicks();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(84)
					int a = tmp6;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(84)
					int tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(84)
					int tmp8 = this->startTicks;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(84)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(84)
					tmp5 = (tmp7 - tmp9);
				}
				HX_STACK_LINE(84)
				int this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(84)
				int _int = this1;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(84)
				bool tmp6 = (_int < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				if ((tmp6)){
					HX_STACK_LINE(84)
					tmp4 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(84)
					tmp4 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(84)
			return tmp4;
		}
	}
	HX_STACK_LINE(89)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_ticks,return )


Timer_obj::Timer_obj()
{
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_ticks") ) { return get_ticks_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTicks") ) { return startTicks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pausedTicks") ) { return pausedTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTicks") ) { startTicks=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pausedTicks") ) { pausedTicks=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("startTicks","\xb4","\x06","\x45","\x2c"));
	outFields->push(HX_HCSTRING("pausedTicks","\xe8","\x26","\x88","\x5e"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("started","\x41","\x29","\x1b","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Timer_obj,startTicks),HX_HCSTRING("startTicks","\xb4","\x06","\x45","\x2c")},
	{hx::fsInt,(int)offsetof(Timer_obj,pausedTicks),HX_HCSTRING("pausedTicks","\xe8","\x26","\x88","\x5e")},
	{hx::fsBool,(int)offsetof(Timer_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(Timer_obj,started),HX_HCSTRING("started","\x41","\x29","\x1b","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("startTicks","\xb4","\x06","\x45","\x2c"),
	HX_HCSTRING("pausedTicks","\xe8","\x26","\x88","\x5e"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("get_ticks","\xcd","\x8a","\xd7","\x53"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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

