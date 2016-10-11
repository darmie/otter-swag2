#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_MenuScreen
#include <MenuScreen.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void MenuScreen_obj::__construct(::String filename,int r,int g,int b)
{
HX_STACK_FRAME("MenuScreen","new",0xdbc5bcfd,"MenuScreen.new","MenuScreen.hx",19,0x06b9b113)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(g,"g")
HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(21)
	super::__construct((int)2);
	HX_STACK_LINE(22)
	this->TITLE = (int)0;
	HX_STACK_LINE(23)
	this->REPLAY = (int)1;
	HX_STACK_LINE(25)
	this->hasCollided = false;
	HX_STACK_LINE(26)
	this->hasPlayed = false;
	HX_STACK_LINE(29)
	this->offSetX = (int)0;
	HX_STACK_LINE(30)
	this->offSetY = (int)0;
	HX_STACK_LINE(31)
	this->velocityX = (int)0;
	HX_STACK_LINE(32)
	this->velocityY = (int)0;
	HX_STACK_LINE(36)
	this->frame = (int)0;
	HX_STACK_LINE(37)
	int tmp = this->TITLE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	this->status = tmp;
	HX_STACK_LINE(40)
	::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	int tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	int tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	::cpp::Pointer< SDL_Surface > tmp5 = this->load_image(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	this->sprite = tmp5;
	HX_STACK_LINE(43)
	this->set_clips();
}
;
	return null();
}

//MenuScreen_obj::~MenuScreen_obj() { }

Dynamic MenuScreen_obj::__CreateEmpty() { return  new MenuScreen_obj; }
hx::ObjectPtr< MenuScreen_obj > MenuScreen_obj::__new(::String filename,int r,int g,int b)
{  hx::ObjectPtr< MenuScreen_obj > _result_ = new MenuScreen_obj();
	_result_->__construct(filename,r,g,b);
	return _result_;}

Dynamic MenuScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuScreen_obj > _result_ = new MenuScreen_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

int MenuScreen_obj::getOffSetX( ){
	HX_STACK_FRAME("MenuScreen","getOffSetX",0x8b734c92,"MenuScreen.getOffSetX","MenuScreen.hx",47,0x06b9b113)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	int tmp = this->offSetX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


int MenuScreen_obj::getOffSetY( ){
	HX_STACK_FRAME("MenuScreen","getOffSetY",0x8b734c93,"MenuScreen.getOffSetY","MenuScreen.hx",53,0x06b9b113)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	int tmp = this->offSetY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


Void MenuScreen_obj::setHasPlayed( bool p){
{
		HX_STACK_FRAME("MenuScreen","setHasPlayed",0xdf8d760e,"MenuScreen.setHasPlayed","MenuScreen.hx",62,0x06b9b113)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(62)
		this->hasPlayed = p;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuScreen_obj,setHasPlayed,(void))

Void MenuScreen_obj::set_clips( ){
{
		HX_STACK_FRAME("MenuScreen","set_clips",0x3fad9063,"MenuScreen.set_clips","MenuScreen.hx",66,0x06b9b113)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp1 = this->states;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			cpp::ArrayBase tmp2 = tmp1->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp2))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(70)
			Dynamic tmp3 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			tmp = tmp3;
		}
		HX_STACK_LINE(70)
		tmp->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)12;
		HX_STACK_LINE(71)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Array< ::Dynamic > tmp2 = this->states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			cpp::ArrayBase tmp3 = tmp2->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp3))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(71)
			Dynamic tmp4 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			tmp1 = tmp4;
		}
		HX_STACK_LINE(71)
		tmp1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(72)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp3 = this->states;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			cpp::ArrayBase tmp4 = tmp3->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp4))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(72)
			Dynamic tmp5 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(72)
		tmp2->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)480;
		HX_STACK_LINE(73)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Array< ::Dynamic > tmp4 = this->states;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			cpp::ArrayBase tmp5 = tmp4->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp5))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(73)
			Dynamic tmp6 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			tmp3 = tmp6;
		}
		HX_STACK_LINE(73)
		tmp3->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)320;
		HX_STACK_LINE(75)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(75)
			Dynamic tmp7 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			tmp4 = tmp7;
		}
		HX_STACK_LINE(75)
		tmp4->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)505;
		HX_STACK_LINE(76)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(76)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			tmp5 = tmp8;
		}
		HX_STACK_LINE(76)
		tmp5->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(77)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Array< ::Dynamic > tmp7 = this->states;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			cpp::ArrayBase tmp8 = tmp7->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp8))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(77)
			Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			tmp6 = tmp9;
		}
		HX_STACK_LINE(77)
		tmp6->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)480;
		HX_STACK_LINE(78)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(78)
			Dynamic tmp10 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(78)
			tmp7 = tmp10;
		}
		HX_STACK_LINE(78)
		tmp7->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)320;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuScreen_obj,set_clips,(void))

bool MenuScreen_obj::handle_event( ::cpp::Struct<SDL_Event> event){
	HX_STACK_FRAME("MenuScreen","handle_event",0xcddfd8c6,"MenuScreen.handle_event","MenuScreen.hx",83,0x06b9b113)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(86)
	bool tmp = (event->type == (int)768);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(88)
		SDL_Keysym tmp1 = event->key.keysym;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		int tmp2 = tmp1.sym;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		 const ::cpp::Char *  tmp3 = SDL_GetKeyName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		::String tmp4 = ((::String)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		::String tmp5 = (HX_HCSTRING("Menu Screen event name:: ","\x5c","\xae","\x76","\xd2") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("MenuScreen.hx","\x13","\xb1","\xb9","\x06"),88,HX_HCSTRING("MenuScreen","\x8b","\x7a","\x92","\x20"),HX_HCSTRING("handle_event","\x03","\xc1","\x43","\x8b"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			SDL_Keysym tmp7 = event->key.keysym;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			int tmp8 = tmp7.sym;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			 const ::cpp::Char *  tmp9 = SDL_GetKeyName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(89)
			::String _g = ((::String)(tmp9));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(89)
			::String _switch_1 = (tmp10);
			if (  ( _switch_1==HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14"))){
				HX_STACK_LINE(91)
				return true;
			}
		}
	}
	HX_STACK_LINE(95)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(MenuScreen_obj,handle_event,return )

int MenuScreen_obj::collision( ){
	HX_STACK_FRAME("MenuScreen","collision",0xab8f68cf,"MenuScreen.collision","MenuScreen.hx",101,0x06b9b113)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	return (int)0;
}


Void MenuScreen_obj::move( ){
{
		HX_STACK_FRAME("MenuScreen","move",0x709dffd4,"MenuScreen.move","MenuScreen.hx",105,0x06b9b113)
		HX_STACK_THIS(this)
	}
return null();
}


Void MenuScreen_obj::show( ::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("MenuScreen","show",0x748ff1c0,"MenuScreen.show","MenuScreen.hx",110,0x06b9b113)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(113)
		bool tmp = this->hasPlayed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(114)
			this->frame = (int)0;
		}
		else{
			HX_STACK_LINE(117)
			this->frame = (int)1;
		}
		HX_STACK_LINE(119)
		::cpp::Pointer< SDL_Surface > tmp2 = this->sprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::cpp::Pointer< SDL_Surface > tmp3 = screen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(119)
			int tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			tmp4 = tmp8;
		}
		HX_STACK_LINE(119)
		this->apply_surface(null(),null(),tmp2,tmp3,tmp4);
	}
return null();
}



MenuScreen_obj::MenuScreen_obj()
{
}

Dynamic MenuScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"TITLE") ) { return TITLE; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REPLAY") ) { return REPLAY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasPlayed") ) { return hasPlayed; }
		if (HX_FIELD_EQ(inName,"set_clips") ) { return set_clips_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOffSetX") ) { return getOffSetX_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffSetY") ) { return getOffSetY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setHasPlayed") ) { return setHasPlayed_dyn(); }
		if (HX_FIELD_EQ(inName,"handle_event") ) { return handle_event_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"TITLE") ) { TITLE=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"REPLAY") ) { REPLAY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasPlayed") ) { hasPlayed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hasPlayed","\x4d","\x9e","\xa1","\x78"));
	outFields->push(HX_HCSTRING("TITLE","\x78","\x4d","\x29","\x8e"));
	outFields->push(HX_HCSTRING("REPLAY","\x27","\x93","\x04","\xb9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MenuScreen_obj,hasPlayed),HX_HCSTRING("hasPlayed","\x4d","\x9e","\xa1","\x78")},
	{hx::fsInt,(int)offsetof(MenuScreen_obj,TITLE),HX_HCSTRING("TITLE","\x78","\x4d","\x29","\x8e")},
	{hx::fsInt,(int)offsetof(MenuScreen_obj,REPLAY),HX_HCSTRING("REPLAY","\x27","\x93","\x04","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hasPlayed","\x4d","\x9e","\xa1","\x78"),
	HX_HCSTRING("TITLE","\x78","\x4d","\x29","\x8e"),
	HX_HCSTRING("REPLAY","\x27","\x93","\x04","\xb9"),
	HX_HCSTRING("getOffSetX","\x8f","\xbb","\x9f","\x11"),
	HX_HCSTRING("getOffSetY","\x90","\xbb","\x9f","\x11"),
	HX_HCSTRING("setHasPlayed","\x4b","\x5e","\xf1","\x9c"),
	HX_HCSTRING("set_clips","\x06","\xd0","\x58","\x6f"),
	HX_HCSTRING("handle_event","\x03","\xc1","\x43","\x8b"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuScreen_obj::__mClass;

void MenuScreen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuScreen","\x8b","\x7a","\x92","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuScreen_obj >;
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

