#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_Background
#include <Background.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Background_obj::__construct(::String image,::cpp::Pointer< SDL_Surface > screen)
{
HX_STACK_FRAME("Background","new",0xb2525800,"Background.new","Background.hx",16,0xd9c4a770)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
HX_STACK_ARG(screen,"screen")
{
	HX_STACK_LINE(17)
	this->dx = (int)0;
	HX_STACK_LINE(18)
	::String tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::cpp::Pointer< SDL_RWops > tmp1 = ::cpp::Pointer< SDL_RWops >(SDL_RWFromFile(tmp,HX_HCSTRING("rb","\xb0","\x63","\x00","\x00")));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::cpp::Pointer< SDL_RWops > haxe_file = tmp1;		HX_STACK_VAR(haxe_file,"haxe_file");
	HX_STACK_LINE(19)
	::cpp::Pointer< SDL_RWops > tmp2 = haxe_file;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	::cpp::Pointer< SDL_Surface > tmp3 = ::cpp::Pointer< SDL_Surface >(SDL_LoadBMP_RW(tmp2,(int)1));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	this->picture = tmp3;
	HX_STACK_LINE(21)
	::cpp::Pointer< SDL_Surface > tmp4 = this->picture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(21)
	if ((tmp5)){
		HX_STACK_LINE(22)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Background.hx","\x70","\xa7","\xc4","\xd9"),22,HX_HCSTRING("Background","\x0e","\x98","\xce","\x1c"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		::haxe::Log_obj::trace(HX_HCSTRING("Error opening image","\x1b","\x7e","\xd2","\xbf"),tmp6);
	}
	HX_STACK_LINE(25)
	::cpp::Pointer< SDL_Surface > tmp6 = this->picture;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	::cpp::Pointer< SDL_Surface > tmp7 = screen;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(25)
	linc::sdl::blitSurface(tmp6,null(),tmp7,null());
	HX_STACK_LINE(29)
	::cpp::Pointer< SDL_Window > tmp8 = this->window;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	SDL_UpdateWindowSurface(tmp8);
}
;
	return null();
}

//Background_obj::~Background_obj() { }

Dynamic Background_obj::__CreateEmpty() { return  new Background_obj; }
hx::ObjectPtr< Background_obj > Background_obj::__new(::String image,::cpp::Pointer< SDL_Surface > screen)
{  hx::ObjectPtr< Background_obj > _result_ = new Background_obj();
	_result_->__construct(image,screen);
	return _result_;}

Dynamic Background_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Background_obj > _result_ = new Background_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Background_obj::scroll( int velocity,::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("Background","scroll",0x0db6d46d,"Background.scroll","Background.hx",35,0xd9c4a770)
		HX_STACK_THIS(this)
		HX_STACK_ARG(velocity,"velocity")
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(37)
		hx::SubEq(this->dx,velocity);
		HX_STACK_LINE(40)
		int tmp = this->dx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		int tmp1 = this->picture->get_value().w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		int tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = (tmp <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		if ((tmp3)){
			HX_STACK_LINE(40)
			this->dx = (int)0;
		}
		HX_STACK_LINE(43)
		int tmp4 = this->dx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::cpp::Pointer< SDL_Surface > tmp5 = this->picture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		::cpp::Pointer< SDL_Surface > tmp6 = screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		this->apply_surface(tmp4,(int)0,tmp5,tmp6);
		HX_STACK_LINE(44)
		int tmp7 = this->dx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		int tmp8 = this->picture->get_value().w;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		::cpp::Pointer< SDL_Surface > tmp10 = this->picture;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		::cpp::Pointer< SDL_Surface > tmp11 = screen;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		this->apply_surface(tmp9,(int)0,tmp10,tmp11);
		HX_STACK_LINE(49)
		::cpp::Pointer< SDL_Window > tmp12 = this->window;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(49)
		SDL_UpdateWindowSurface(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Background_obj,scroll,(void))

Void Background_obj::apply_surface( int x,int y,::cpp::Pointer< SDL_Surface > source,::cpp::Pointer< SDL_Surface > dest){
{
		HX_STACK_FRAME("Background","apply_surface",0x2e95b2bc,"Background.apply_surface","Background.hx",52,0xd9c4a770)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(dest,"dest")
		struct _Function_1_1{
			inline static Dynamic Block( int &x,int &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Background.hx",54,0xd9c4a770)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , y,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , x,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		Dynamic tmp = _Function_1_1::Block(x,y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		Dynamic offset = tmp;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(58)
		::cpp::Pointer< SDL_Surface > tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::cpp::Pointer< SDL_Surface > tmp2 = dest;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Dynamic tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		linc::sdl::blitSurface(tmp1,null(),tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Background_obj,apply_surface,(void))


Background_obj::Background_obj()
{
}

void Background_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Background);
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(picture,"picture");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void Background_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(picture,"picture");
	HX_VISIT_MEMBER_NAME(window,"window");
}

Dynamic Background_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"picture") ) { return picture; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"apply_surface") ) { return apply_surface_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Background_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::cpp::Pointer< SDL_Window > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"picture") ) { picture=inValue.Cast< ::cpp::Pointer< SDL_Surface > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Background_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("picture","\xbe","\x30","\x8e","\x7a"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Background_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsObject /*::cpp::Pointer< SDL_Surface >*/ ,(int)offsetof(Background_obj,picture),HX_HCSTRING("picture","\xbe","\x30","\x8e","\x7a")},
	{hx::fsObject /*::cpp::Pointer< SDL_Window >*/ ,(int)offsetof(Background_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("picture","\xbe","\x30","\x8e","\x7a"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("apply_surface","\x1c","\x63","\x85","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

#endif

hx::Class Background_obj::__mClass;

void Background_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Background","\x0e","\x98","\xce","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Background_obj >;
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

