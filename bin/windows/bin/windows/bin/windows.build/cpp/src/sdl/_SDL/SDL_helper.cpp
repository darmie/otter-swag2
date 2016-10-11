#include <hxcpp.h>

#include "cpp/Pointer.h"
#include "linc_sdl.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_sdl__SDL_SDL_helper
#include <sdl/_SDL/SDL_helper.h>
#endif
namespace sdl{
namespace _SDL{

Void SDL_helper_obj::__construct()
{
	return null();
}

//SDL_helper_obj::~SDL_helper_obj() { }

Dynamic SDL_helper_obj::__CreateEmpty() { return  new SDL_helper_obj; }
hx::ObjectPtr< SDL_helper_obj > SDL_helper_obj::__new()
{  hx::ObjectPtr< SDL_helper_obj > _result_ = new SDL_helper_obj();
	_result_->__construct();
	return _result_;}

Dynamic SDL_helper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SDL_helper_obj > _result_ = new SDL_helper_obj();
	_result_->__construct();
	return _result_;}

Void SDL_helper_obj::quit( ){
{
		HX_STACK_FRAME("sdl._SDL.SDL_helper","quit",0x7fc39fac,"sdl._SDL.SDL_helper.quit","sdl/SDL.hx",1269,0x14b7af17)
		HX_STACK_LINE(1270)
		::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1270)
		{
			HX_STACK_LINE(1270)
			::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1270)
			::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1270)
			tmp = tmp2;
		}
		HX_STACK_LINE(1270)
		::sdl::_SDL::SDL_helper_obj::timers = tmp;
		HX_STACK_LINE(1271)
		::sdl::_SDL::SDL_helper_obj::timer_callback_set = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SDL_helper_obj,quit,(void))

::haxe::ds::IntMap SDL_helper_obj::timers;

bool SDL_helper_obj::timer_callback_set;

int SDL_helper_obj::add_timer( int interval,Dynamic callback,Dynamic userdata){
	HX_STACK_FRAME("sdl._SDL.SDL_helper","add_timer",0xe079c6ea,"sdl._SDL.SDL_helper.add_timer","sdl/SDL.hx",1282,0x14b7af17)
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(callback,"callback")
	HX_STACK_ARG(userdata,"userdata")
	HX_STACK_LINE(1284)
	bool tmp = ::sdl::_SDL::SDL_helper_obj::timer_callback_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1284)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1284)
	if ((tmp1)){
		HX_STACK_LINE(1285)
		::sdl::_SDL::SDL_helper_obj::timer_callback_set = true;
		HX_STACK_LINE(1286)
		linc::sdl::init_timer(::cpp::Function< int ( int _timerid)>(&::sdl::_SDL::SDL_helper_obj::timer_callback ));
	}
	HX_STACK_LINE(1289)
	int tmp2 = interval;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1289)
	int tmp3 = linc::sdl::addTimer(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1289)
	int _timerid = tmp3;		HX_STACK_VAR(_timerid,"_timerid");
	HX_STACK_LINE(1291)
	::haxe::ds::IntMap tmp4 = ::sdl::_SDL::SDL_helper_obj::timers;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1291)
	int tmp5 = _timerid;		HX_STACK_VAR(tmp5,"tmp5");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &callback,int &_timerid,Dynamic &userdata,int &interval){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sdl/SDL.hx",1291,0x14b7af17)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f") , callback,false);
				__result->Add(HX_HCSTRING("timerid","\xe0","\x56","\xf9","\xd8") , _timerid,false);
				__result->Add(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a") , userdata,false);
				__result->Add(HX_HCSTRING("interval","\x45","\x79","\x7c","\x28") , interval,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1291)
	Dynamic tmp6 = _Function_1_1::Block(callback,_timerid,userdata,interval);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1291)
	tmp4->set(tmp5,tmp6);
	HX_STACK_LINE(1298)
	int tmp7 = _timerid;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1298)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SDL_helper_obj,add_timer,return )

bool SDL_helper_obj::remove_timer( int _timerid){
	HX_STACK_FRAME("sdl._SDL.SDL_helper","remove_timer",0x0cce3327,"sdl._SDL.SDL_helper.remove_timer","sdl/SDL.hx",1302,0x14b7af17)
	HX_STACK_ARG(_timerid,"_timerid")
	HX_STACK_LINE(1304)
	::haxe::ds::IntMap tmp = ::sdl::_SDL::SDL_helper_obj::timers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1304)
	int tmp1 = _timerid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1304)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1304)
	Dynamic _info = tmp2;		HX_STACK_VAR(_info,"_info");
	HX_STACK_LINE(1306)
	bool tmp3 = (_info == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1306)
	if ((tmp3)){
		HX_STACK_LINE(1306)
		return false;
	}
	HX_STACK_LINE(1308)
	::haxe::ds::IntMap tmp4 = ::sdl::_SDL::SDL_helper_obj::timers;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1308)
	int tmp5 = _timerid;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1308)
	tmp4->remove(tmp5);
	HX_STACK_LINE(1310)
	int tmp6 = _info->__Field(HX_HCSTRING("timerid","\xe0","\x56","\xf9","\xd8"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1310)
	bool tmp7 = linc::sdl::removeTimer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1310)
	bool _result = tmp7;		HX_STACK_VAR(_result,"_result");
	HX_STACK_LINE(1312)
	_info = null();
	HX_STACK_LINE(1314)
	bool tmp8 = _result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1314)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDL_helper_obj,remove_timer,return )

int SDL_helper_obj::timer_callback( int _timerid){
	HX_STACK_FRAME("sdl._SDL.SDL_helper","timer_callback",0x904de6dc,"sdl._SDL.SDL_helper.timer_callback","sdl/SDL.hx",1318,0x14b7af17)
	HX_STACK_ARG(_timerid,"_timerid")
	HX_STACK_LINE(1320)
	::haxe::ds::IntMap tmp = ::sdl::_SDL::SDL_helper_obj::timers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1320)
	int tmp1 = _timerid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1320)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1320)
	Dynamic _timer = tmp2;		HX_STACK_VAR(_timer,"_timer");
	HX_STACK_LINE(1321)
	bool tmp3 = (_timer != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1321)
	if ((tmp3)){
		HX_STACK_LINE(1322)
		int tmp4 = _timer->__Field(HX_HCSTRING("interval","\x45","\x79","\x7c","\x28"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1322)
		Dynamic tmp5 = _timer->__Field(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1322)
		int tmp6 = _timer->__Field(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"), hx::paccDynamic )(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1322)
		return tmp6;
	}
	HX_STACK_LINE(1325)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDL_helper_obj,timer_callback,return )

::haxe::ds::IntMap SDL_helper_obj::event_watchs;

bool SDL_helper_obj::watch_callback_set;

Array< int > SDL_helper_obj::removed_watchs;

int SDL_helper_obj::add_event_watch( Dynamic func,Dynamic userdata){
	HX_STACK_FRAME("sdl._SDL.SDL_helper","add_event_watch",0x53e2a60f,"sdl._SDL.SDL_helper.add_event_watch","sdl/SDL.hx",1361,0x14b7af17)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(userdata,"userdata")
	HX_STACK_LINE(1363)
	bool tmp = ::sdl::_SDL::SDL_helper_obj::watch_callback_set;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1363)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1363)
	if ((tmp1)){
		HX_STACK_LINE(1364)
		::sdl::_SDL::SDL_helper_obj::watch_callback_set = true;
		HX_STACK_LINE(1365)
		linc::sdl::init_event_watch(::cpp::Function< int ( int _watchid,::cpp::Reference<SDL_Event> _event)>(&::sdl::_SDL::SDL_helper_obj::event_watch_callback ));
	}
	HX_STACK_LINE(1368)
	int tmp2 = linc::sdl::addEventWatch();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1368)
	int _watchid = tmp2;		HX_STACK_VAR(_watchid,"_watchid");
	HX_STACK_LINE(1370)
	::haxe::ds::IntMap tmp3 = ::sdl::_SDL::SDL_helper_obj::event_watchs;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1370)
	int tmp4 = _watchid;		HX_STACK_VAR(tmp4,"tmp4");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &func,int &_watchid,Dynamic &userdata){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sdl/SDL.hx",1370,0x14b7af17)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f") , func,false);
				__result->Add(HX_HCSTRING("watchid","\xea","\xe3","\x52","\x29") , _watchid,false);
				__result->Add(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a") , userdata,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1370)
	Dynamic tmp5 = _Function_1_1::Block(func,_watchid,userdata);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1370)
	tmp3->set(tmp4,tmp5);
	HX_STACK_LINE(1376)
	int tmp6 = _watchid;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1376)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SDL_helper_obj,add_event_watch,return )

Void SDL_helper_obj::del_event_watch( Dynamic func){
{
		HX_STACK_FRAME("sdl._SDL.SDL_helper","del_event_watch",0x0386c4b9,"sdl._SDL.SDL_helper.del_event_watch","sdl/SDL.hx",1380,0x14b7af17)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(1382)
		Dynamic _found = null();		HX_STACK_VAR(_found,"_found");
		HX_STACK_LINE(1384)
		::haxe::ds::IntMap tmp = ::sdl::_SDL::SDL_helper_obj::event_watchs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1384)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1384)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
			Dynamic _watch = __it->next();
			{
				HX_STACK_LINE(1385)
				bool tmp2 = (_watch->__Field(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"), hx::paccDynamic ) == func);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1385)
				if ((tmp2)){
					HX_STACK_LINE(1386)
					_found = _watch;
					HX_STACK_LINE(1387)
					break;
				}
			}
;
		}
		HX_STACK_LINE(1391)
		bool tmp2 = (_found == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1391)
		if ((tmp2)){
			HX_STACK_LINE(1391)
			HX_STACK_DO_THROW(HX_HCSTRING("Can't find event watch to remove, was it added?","\x3b","\xd5","\x79","\xd0"));
		}
		HX_STACK_LINE(1393)
		::haxe::ds::IntMap tmp3 = ::sdl::_SDL::SDL_helper_obj::event_watchs;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1393)
		int tmp4 = _found->__Field(HX_HCSTRING("watchid","\xea","\xe3","\x52","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1393)
		tmp3->remove(tmp4);
		HX_STACK_LINE(1394)
		int tmp5 = _found->__Field(HX_HCSTRING("watchid","\xea","\xe3","\x52","\x29"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1394)
		linc::sdl::delEventWatch(tmp5);
		HX_STACK_LINE(1395)
		_found = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDL_helper_obj,del_event_watch,(void))

int SDL_helper_obj::event_watch_callback( int _watchid,::cpp::Reference<SDL_Event> _event){
	HX_STACK_FRAME("sdl._SDL.SDL_helper","event_watch_callback",0xbb641097,"sdl._SDL.SDL_helper.event_watch_callback","sdl/SDL.hx",1399,0x14b7af17)
	HX_STACK_ARG(_watchid,"_watchid")
	HX_STACK_ARG(_event,"_event")
	HX_STACK_LINE(1401)
	::haxe::ds::IntMap tmp = ::sdl::_SDL::SDL_helper_obj::event_watchs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1401)
	int tmp1 = _watchid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1401)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1401)
	Dynamic _watch = tmp2;		HX_STACK_VAR(_watch,"_watch");
	HX_STACK_LINE(1402)
	bool tmp3 = (_watch != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1402)
	if ((tmp3)){
		HX_STACK_LINE(1403)
		Dynamic tmp4 = _watch->__Field(HX_HCSTRING("userdata","\xf5","\x69","\x4f","\x1a"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1403)
		::cpp::Struct<SDL_Event> tmp5 = ((::cpp::Struct<SDL_Event>)(_event));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1403)
		int tmp6 = _watch->__Field(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"), hx::paccDynamic )(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1403)
		return tmp6;
	}
	HX_STACK_LINE(1406)
	return (int)1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SDL_helper_obj,event_watch_callback,return )


SDL_helper_obj::SDL_helper_obj()
{
}

bool SDL_helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"quit") ) { outValue = quit_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { outValue = timers; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_timer") ) { outValue = add_timer_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"remove_timer") ) { outValue = remove_timer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"event_watchs") ) { outValue = event_watchs; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"timer_callback") ) { outValue = timer_callback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removed_watchs") ) { outValue = removed_watchs; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"add_event_watch") ) { outValue = add_event_watch_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"del_event_watch") ) { outValue = del_event_watch_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"timer_callback_set") ) { outValue = timer_callback_set; return true;  }
		if (HX_FIELD_EQ(inName,"watch_callback_set") ) { outValue = watch_callback_set; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"event_watch_callback") ) { outValue = event_watch_callback_dyn(); return true;  }
	}
	return false;
}

bool SDL_helper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { timers=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"event_watchs") ) { event_watchs=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removed_watchs") ) { removed_watchs=ioValue.Cast< Array< int > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"timer_callback_set") ) { timer_callback_set=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"watch_callback_set") ) { watch_callback_set=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &SDL_helper_obj::timers,HX_HCSTRING("timers","\x0e","\x0d","\xd2","\x1e")},
	{hx::fsBool,(void *) &SDL_helper_obj::timer_callback_set,HX_HCSTRING("timer_callback_set","\xe2","\xdc","\x88","\xab")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &SDL_helper_obj::event_watchs,HX_HCSTRING("event_watchs","\x09","\x50","\xc9","\xec")},
	{hx::fsBool,(void *) &SDL_helper_obj::watch_callback_set,HX_HCSTRING("watch_callback_set","\x18","\xb8","\xaa","\x78")},
	{hx::fsObject /*Array< int >*/ ,(void *) &SDL_helper_obj::removed_watchs,HX_HCSTRING("removed_watchs","\x43","\x95","\x1e","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SDL_helper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::timers,"timers");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::timer_callback_set,"timer_callback_set");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::event_watchs,"event_watchs");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::watch_callback_set,"watch_callback_set");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::removed_watchs,"removed_watchs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::timers,"timers");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::timer_callback_set,"timer_callback_set");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::event_watchs,"event_watchs");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::watch_callback_set,"watch_callback_set");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::removed_watchs,"removed_watchs");
};

#endif

hx::Class SDL_helper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("quit","\xcf","\x3f","\x0a","\x4b"),
	HX_HCSTRING("timers","\x0e","\x0d","\xd2","\x1e"),
	HX_HCSTRING("timer_callback_set","\xe2","\xdc","\x88","\xab"),
	HX_HCSTRING("add_timer","\xe7","\xc7","\xac","\x8f"),
	HX_HCSTRING("remove_timer","\x4a","\x2e","\xb6","\x46"),
	HX_HCSTRING("timer_callback","\xbf","\x30","\x85","\x10"),
	HX_HCSTRING("event_watchs","\x09","\x50","\xc9","\xec"),
	HX_HCSTRING("watch_callback_set","\x18","\xb8","\xaa","\x78"),
	HX_HCSTRING("removed_watchs","\x43","\x95","\x1e","\x72"),
	HX_HCSTRING("add_event_watch","\xcc","\x02","\x0c","\x04"),
	HX_HCSTRING("del_event_watch","\x76","\x21","\xb0","\xb3"),
	HX_HCSTRING("event_watch_callback","\xba","\x66","\x40","\x3d"),
	::String(null()) };

void SDL_helper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sdl._SDL.SDL_helper","\xb1","\x0d","\xf1","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SDL_helper_obj::__GetStatic;
	__mClass->mSetStaticField = &SDL_helper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SDL_helper_obj >;
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

void SDL_helper_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sdl/SDL.hx",1279,0x14b7af17)
		{
			HX_STACK_LINE(1279)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1279)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1279)
			return tmp1;
		}
		return null();
	}
};
	timers= _Function_0_1::Block();
	timer_callback_set= false;
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sdl/SDL.hx",1357,0x14b7af17)
		{
			HX_STACK_LINE(1357)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1357)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1357)
			return tmp1;
		}
		return null();
	}
};
	event_watchs= _Function_0_2::Block();
	watch_callback_set= false;
	removed_watchs= Array_obj< int >::__new();
}

} // end namespace sdl
} // end namespace _SDL
