#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif

Void Sprite_obj::__construct(int count)
{
HX_STACK_FRAME("Sprite","new",0xd0216797,"Sprite.new","Sprite.hx",51,0xf7bfd7b9)
HX_STACK_THIS(this)
HX_STACK_ARG(count,"count")
{
	HX_STACK_LINE(52)
	Array< ::Dynamic > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(52)
		this1 = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(52)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		this1->__SetSizeExact(tmp1);
		HX_STACK_LINE(52)
		tmp = this1;
	}
	HX_STACK_LINE(52)
	this->states = tmp;
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		while((true)){
			HX_STACK_LINE(54)
			bool tmp1 = (_g < count);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			if ((tmp2)){
				HX_STACK_LINE(54)
				break;
			}
			HX_STACK_LINE(54)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				cpp::ArrayBase tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					cpp::ArrayBase this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(55)
					this1 = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(55)
					this1->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )((int)15);
					HX_STACK_LINE(55)
					tmp4 = ((cpp::ArrayBase)(this1));
				}
				HX_STACK_LINE(55)
				cpp::ArrayBase val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(55)
				Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(55)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				cpp::ArrayBase tmp7 = val;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				cpp::ArrayBase tmp8 = tmp5->__unsafe_set(tmp6,tmp7).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				tmp8;
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					bool tmp4 = (_g1 < (int)15);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(57)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					if ((tmp5)){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(57)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					int j = tmp6;		HX_STACK_VAR(j,"j");
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Sprite.hx",58,0xf7bfd7b9)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)0,false);
								__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)0,false);
								__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
								__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(58)
					Dynamic tmp7 = _Function_5_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(58)
					Dynamic rect = tmp7;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(59)
					{
						HX_STACK_LINE(59)
						Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(59)
						int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(59)
						cpp::ArrayBase tmp10 = tmp8->__unsafe_get(tmp9).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(59)
						cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(59)
						int tmp11 = j;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(59)
						Dynamic tmp12 = rect;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(59)
						Dynamic tmp13 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_set","\xe9","\xea","\xa4","\x60"), hx::paccDynamic )(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(59)
						tmp13;
					}
				}
			}
		}
	}
	HX_STACK_LINE(65)
	this->SCREEN_WIDTH = (int)400;
	HX_STACK_LINE(66)
	this->SCREEN_HEIGHT = (int)320;
	HX_STACK_LINE(67)
	this->SCREEN_BPP = (int)32;
	HX_STACK_LINE(68)
	this->FRAMES_PER_SECOND = (int)10;
	HX_STACK_LINE(69)
	this->SPRITE_DOWN = (int)0;
	HX_STACK_LINE(70)
	this->SPRITE_UP = (int)1;
	HX_STACK_LINE(71)
	this->SPRITE_WALK = (int)2;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(int count)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(count);
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Sprite_obj::getHasCollided( ){
	HX_STACK_FRAME("Sprite","getHasCollided",0x87476dd3,"Sprite.getHasCollided","Sprite.hx",76,0xf7bfd7b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	bool tmp = this->hasCollided;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,getHasCollided,return )

Void Sprite_obj::apply_surface( Dynamic x,Dynamic y,::cpp::Pointer< SDL_Surface > source,::cpp::Pointer< SDL_Surface > destination,Dynamic clip){
{
		HX_STACK_FRAME("Sprite","apply_surface",0x509ec513,"Sprite.apply_surface","Sprite.hx",80,0xf7bfd7b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
		HX_STACK_ARG(clip,"clip")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Sprite.hx",82,0xf7bfd7b9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
					__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(82)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		Dynamic shift = tmp;		HX_STACK_VAR(shift,"shift");
		HX_STACK_LINE(85)
		int tmp1 = this->offSetX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		shift->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = tmp1;
		HX_STACK_LINE(86)
		int tmp2 = this->offSetY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		shift->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = tmp2;
		HX_STACK_LINE(89)
		::cpp::Pointer< SDL_Surface > tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		Dynamic tmp4 = clip;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		::cpp::Pointer< SDL_Surface > tmp5 = destination;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		Dynamic tmp6 = shift;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		linc::sdl::blitSurface(tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sprite_obj,apply_surface,(void))

::cpp::Pointer< SDL_Surface > Sprite_obj::load_image( ::String filename,int r,int g,int b){
	HX_STACK_FRAME("Sprite","load_image",0xb8e0eeeb,"Sprite.load_image","Sprite.hx",93,0xf7bfd7b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(96)
	::cpp::Pointer< SDL_Surface > loadedImage = null();		HX_STACK_VAR(loadedImage,"loadedImage");
	HX_STACK_LINE(102)
	::String tmp = filename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	::cpp::Pointer< SDL_RWops > tmp1 = ::cpp::Pointer< SDL_RWops >(SDL_RWFromFile(tmp,HX_HCSTRING("rb","\xb0","\x63","\x00","\x00")));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::cpp::Pointer< SDL_RWops > haxe_file = tmp1;		HX_STACK_VAR(haxe_file,"haxe_file");
	HX_STACK_LINE(103)
	::cpp::Pointer< SDL_RWops > tmp2 = haxe_file;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	::cpp::Pointer< SDL_Surface > tmp3 = ::cpp::Pointer< SDL_Surface >(SDL_LoadBMP_RW(tmp2,(int)1));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	loadedImage = tmp3;
	HX_STACK_LINE(112)
	::cpp::Pointer< SDL_Surface > tmp4 = loadedImage;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(Sprite_obj,load_image,return )


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(hasCollided,"hasCollided");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(offSetX,"offSetX");
	HX_MARK_MEMBER_NAME(offSetY,"offSetY");
	HX_MARK_MEMBER_NAME(velocityX,"velocityX");
	HX_MARK_MEMBER_NAME(velocityY,"velocityY");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(SCREEN_WIDTH,"SCREEN_WIDTH");
	HX_MARK_MEMBER_NAME(SCREEN_HEIGHT,"SCREEN_HEIGHT");
	HX_MARK_MEMBER_NAME(SCREEN_BPP,"SCREEN_BPP");
	HX_MARK_MEMBER_NAME(FRAMES_PER_SECOND,"FRAMES_PER_SECOND");
	HX_MARK_MEMBER_NAME(SPRITE_DOWN,"SPRITE_DOWN");
	HX_MARK_MEMBER_NAME(SPRITE_UP,"SPRITE_UP");
	HX_MARK_MEMBER_NAME(SPRITE_WALK,"SPRITE_WALK");
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(hasCollided,"hasCollided");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(offSetX,"offSetX");
	HX_VISIT_MEMBER_NAME(offSetY,"offSetY");
	HX_VISIT_MEMBER_NAME(velocityX,"velocityX");
	HX_VISIT_MEMBER_NAME(velocityY,"velocityY");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(SCREEN_WIDTH,"SCREEN_WIDTH");
	HX_VISIT_MEMBER_NAME(SCREEN_HEIGHT,"SCREEN_HEIGHT");
	HX_VISIT_MEMBER_NAME(SCREEN_BPP,"SCREEN_BPP");
	HX_VISIT_MEMBER_NAME(FRAMES_PER_SECOND,"FRAMES_PER_SECOND");
	HX_VISIT_MEMBER_NAME(SPRITE_DOWN,"SPRITE_DOWN");
	HX_VISIT_MEMBER_NAME(SPRITE_UP,"SPRITE_UP");
	HX_VISIT_MEMBER_NAME(SPRITE_WALK,"SPRITE_WALK");
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offSetX") ) { return offSetX; }
		if (HX_FIELD_EQ(inName,"offSetY") ) { return offSetY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"velocityX") ) { return velocityX; }
		if (HX_FIELD_EQ(inName,"velocityY") ) { return velocityY; }
		if (HX_FIELD_EQ(inName,"SPRITE_UP") ) { return SPRITE_UP; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SCREEN_BPP") ) { return SCREEN_BPP; }
		if (HX_FIELD_EQ(inName,"load_image") ) { return load_image_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasCollided") ) { return hasCollided; }
		if (HX_FIELD_EQ(inName,"SPRITE_DOWN") ) { return SPRITE_DOWN; }
		if (HX_FIELD_EQ(inName,"SPRITE_WALK") ) { return SPRITE_WALK; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SCREEN_WIDTH") ) { return SCREEN_WIDTH; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_HEIGHT") ) { return SCREEN_HEIGHT; }
		if (HX_FIELD_EQ(inName,"apply_surface") ) { return apply_surface_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getHasCollided") ) { return getHasCollided_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FRAMES_PER_SECOND") ) { return FRAMES_PER_SECOND; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::cpp::Pointer< SDL_Surface > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offSetX") ) { offSetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offSetY") ) { offSetY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"velocityX") ) { velocityX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocityY") ) { velocityY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPRITE_UP") ) { SPRITE_UP=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SCREEN_BPP") ) { SCREEN_BPP=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasCollided") ) { hasCollided=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPRITE_DOWN") ) { SPRITE_DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPRITE_WALK") ) { SPRITE_WALK=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SCREEN_WIDTH") ) { SCREEN_WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SCREEN_HEIGHT") ) { SCREEN_HEIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FRAMES_PER_SECOND") ) { FRAMES_PER_SECOND=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("hasCollided","\xa0","\xc4","\x8c","\x9c"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("offSetX","\x85","\x35","\x3e","\xc2"));
	outFields->push(HX_HCSTRING("offSetY","\x86","\x35","\x3e","\xc2"));
	outFields->push(HX_HCSTRING("velocityX","\x9b","\xd7","\x43","\xff"));
	outFields->push(HX_HCSTRING("velocityY","\x9c","\xd7","\x43","\xff"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("SCREEN_WIDTH","\x93","\x75","\x8d","\xd8"));
	outFields->push(HX_HCSTRING("SCREEN_HEIGHT","\x9a","\xe3","\x88","\x59"));
	outFields->push(HX_HCSTRING("SCREEN_BPP","\x2f","\xad","\xa3","\xd3"));
	outFields->push(HX_HCSTRING("FRAMES_PER_SECOND","\x2f","\x45","\x5b","\xb8"));
	outFields->push(HX_HCSTRING("SPRITE_DOWN","\x1c","\x22","\x03","\xdc"));
	outFields->push(HX_HCSTRING("SPRITE_UP","\x95","\xe9","\x82","\x51"));
	outFields->push(HX_HCSTRING("SPRITE_WALK","\xc3","\x86","\x87","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sprite_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsObject /*::cpp::Pointer< SDL_Surface >*/ ,(int)offsetof(Sprite_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsBool,(int)offsetof(Sprite_obj,hasCollided),HX_HCSTRING("hasCollided","\xa0","\xc4","\x8c","\x9c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Sprite_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsInt,(int)offsetof(Sprite_obj,offSetX),HX_HCSTRING("offSetX","\x85","\x35","\x3e","\xc2")},
	{hx::fsInt,(int)offsetof(Sprite_obj,offSetY),HX_HCSTRING("offSetY","\x86","\x35","\x3e","\xc2")},
	{hx::fsInt,(int)offsetof(Sprite_obj,velocityX),HX_HCSTRING("velocityX","\x9b","\xd7","\x43","\xff")},
	{hx::fsInt,(int)offsetof(Sprite_obj,velocityY),HX_HCSTRING("velocityY","\x9c","\xd7","\x43","\xff")},
	{hx::fsInt,(int)offsetof(Sprite_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsInt,(int)offsetof(Sprite_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Sprite_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Sprite_obj,SCREEN_WIDTH),HX_HCSTRING("SCREEN_WIDTH","\x93","\x75","\x8d","\xd8")},
	{hx::fsInt,(int)offsetof(Sprite_obj,SCREEN_HEIGHT),HX_HCSTRING("SCREEN_HEIGHT","\x9a","\xe3","\x88","\x59")},
	{hx::fsInt,(int)offsetof(Sprite_obj,SCREEN_BPP),HX_HCSTRING("SCREEN_BPP","\x2f","\xad","\xa3","\xd3")},
	{hx::fsInt,(int)offsetof(Sprite_obj,FRAMES_PER_SECOND),HX_HCSTRING("FRAMES_PER_SECOND","\x2f","\x45","\x5b","\xb8")},
	{hx::fsInt,(int)offsetof(Sprite_obj,SPRITE_DOWN),HX_HCSTRING("SPRITE_DOWN","\x1c","\x22","\x03","\xdc")},
	{hx::fsInt,(int)offsetof(Sprite_obj,SPRITE_UP),HX_HCSTRING("SPRITE_UP","\x95","\xe9","\x82","\x51")},
	{hx::fsInt,(int)offsetof(Sprite_obj,SPRITE_WALK),HX_HCSTRING("SPRITE_WALK","\xc3","\x86","\x87","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("hasCollided","\xa0","\xc4","\x8c","\x9c"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("offSetX","\x85","\x35","\x3e","\xc2"),
	HX_HCSTRING("offSetY","\x86","\x35","\x3e","\xc2"),
	HX_HCSTRING("velocityX","\x9b","\xd7","\x43","\xff"),
	HX_HCSTRING("velocityY","\x9c","\xd7","\x43","\xff"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("SCREEN_WIDTH","\x93","\x75","\x8d","\xd8"),
	HX_HCSTRING("SCREEN_HEIGHT","\x9a","\xe3","\x88","\x59"),
	HX_HCSTRING("SCREEN_BPP","\x2f","\xad","\xa3","\xd3"),
	HX_HCSTRING("FRAMES_PER_SECOND","\x2f","\x45","\x5b","\xb8"),
	HX_HCSTRING("SPRITE_DOWN","\x1c","\x22","\x03","\xdc"),
	HX_HCSTRING("SPRITE_UP","\x95","\xe9","\x82","\x51"),
	HX_HCSTRING("SPRITE_WALK","\xc3","\x86","\x87","\xe8"),
	HX_HCSTRING("getHasCollided","\xaa","\x17","\x2b","\x24"),
	HX_HCSTRING("apply_surface","\x1c","\x63","\x85","\xfd"),
	HX_HCSTRING("load_image","\x42","\x21","\xe7","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sprite","\x25","\x50","\x2a","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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

