#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Missile
#include <Missile.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif

Void Missile_obj::__construct(::String filename,int r,int g,int b,Float randY)
{
HX_STACK_FRAME("Missile","new",0x9899c178,"Missile.new","Missile.hx",15,0x28dd14f8)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(g,"g")
HX_STACK_ARG(b,"b")
HX_STACK_ARG(randY,"randY")
{
	HX_STACK_LINE(16)
	super::__construct((int)2);
	HX_STACK_LINE(17)
	this->SHOOT = (int)0;
	HX_STACK_LINE(18)
	this->EXPLODE = (int)1;
	HX_STACK_LINE(20)
	this->hasCollided = false;
	HX_STACK_LINE(23)
	Float tmp = randY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	this->offSetY = tmp1;
	HX_STACK_LINE(24)
	int tmp2 = this->SCREEN_WIDTH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	this->offSetX = tmp2;
	HX_STACK_LINE(25)
	this->velocityX = (int)20;
	HX_STACK_LINE(26)
	this->velocityY = (int)0;
	HX_STACK_LINE(29)
	this->frame = (int)0;
	HX_STACK_LINE(30)
	int tmp3 = this->SHOOT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	this->status = tmp3;
	HX_STACK_LINE(33)
	::String tmp4 = filename;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	int tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	int tmp6 = g;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	int tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	::cpp::Pointer< SDL_Surface > tmp8 = this->load_image(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(33)
	this->sprite = tmp8;
	HX_STACK_LINE(36)
	this->set_clips();
}
;
	return null();
}

//Missile_obj::~Missile_obj() { }

Dynamic Missile_obj::__CreateEmpty() { return  new Missile_obj; }
hx::ObjectPtr< Missile_obj > Missile_obj::__new(::String filename,int r,int g,int b,Float randY)
{  hx::ObjectPtr< Missile_obj > _result_ = new Missile_obj();
	_result_->__construct(filename,r,g,b,randY);
	return _result_;}

Dynamic Missile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Missile_obj > _result_ = new Missile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

int Missile_obj::getOffSetX( ){
	HX_STACK_FRAME("Missile","getOffSetX",0x16249d77,"Missile.getOffSetX","Missile.hx",40,0x28dd14f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int tmp = this->offSetX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


int Missile_obj::getOffSetY( ){
	HX_STACK_FRAME("Missile","getOffSetY",0x16249d78,"Missile.getOffSetY","Missile.hx",46,0x28dd14f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	int tmp = this->offSetY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


Void Missile_obj::set_clips( ){
{
		HX_STACK_FRAME("Missile","set_clips",0xa42ca31e,"Missile.set_clips","Missile.hx",52,0x28dd14f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Array< ::Dynamic > tmp1 = this->states;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			cpp::ArrayBase tmp2 = tmp1->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp2))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(56)
			Dynamic tmp3 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			tmp = tmp3;
		}
		HX_STACK_LINE(56)
		tmp->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)13;
		HX_STACK_LINE(57)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp2 = this->states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			cpp::ArrayBase tmp3 = tmp2->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp3))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			Dynamic tmp4 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			tmp1 = tmp4;
		}
		HX_STACK_LINE(57)
		tmp1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(58)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Array< ::Dynamic > tmp3 = this->states;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			cpp::ArrayBase tmp4 = tmp3->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp4))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(58)
			Dynamic tmp5 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(58)
		tmp2->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)33;
		HX_STACK_LINE(59)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Array< ::Dynamic > tmp4 = this->states;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			cpp::ArrayBase tmp5 = tmp4->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp5))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(59)
			Dynamic tmp6 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			tmp3 = tmp6;
		}
		HX_STACK_LINE(59)
		tmp3->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)8;
		HX_STACK_LINE(61)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(61)
			Dynamic tmp7 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			tmp4 = tmp7;
		}
		HX_STACK_LINE(61)
		tmp4->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)58;
		HX_STACK_LINE(62)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(62)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			tmp5 = tmp8;
		}
		HX_STACK_LINE(62)
		tmp5->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(63)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			Array< ::Dynamic > tmp7 = this->states;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			cpp::ArrayBase tmp8 = tmp7->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp8))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(63)
			Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			tmp6 = tmp9;
		}
		HX_STACK_LINE(63)
		tmp6->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(64)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(64)
			Dynamic tmp10 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			tmp7 = tmp10;
		}
		HX_STACK_LINE(64)
		tmp7->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)8;
		HX_STACK_LINE(66)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			Array< ::Dynamic > tmp9 = this->states;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			cpp::ArrayBase tmp10 = tmp9->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(66)
			Dynamic tmp11 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(66)
			tmp8 = tmp11;
		}
		HX_STACK_LINE(66)
		tmp8->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)49;
		HX_STACK_LINE(67)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Array< ::Dynamic > tmp10 = this->states;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			cpp::ArrayBase tmp11 = tmp10->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp11))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(67)
			Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			tmp9 = tmp12;
		}
		HX_STACK_LINE(67)
		tmp9->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)67;
		HX_STACK_LINE(68)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Array< ::Dynamic > tmp11 = this->states;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			cpp::ArrayBase tmp12 = tmp11->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp12))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(68)
			Dynamic tmp13 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			tmp10 = tmp13;
		}
		HX_STACK_LINE(68)
		tmp10->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)35;
		HX_STACK_LINE(69)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Array< ::Dynamic > tmp12 = this->states;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			cpp::ArrayBase tmp13 = tmp12->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp13))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			Dynamic tmp14 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			tmp11 = tmp14;
		}
		HX_STACK_LINE(69)
		tmp11->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(71)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Array< ::Dynamic > tmp13 = this->states;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			cpp::ArrayBase tmp14 = tmp13->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp14))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(71)
			Dynamic tmp15 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			tmp12 = tmp15;
		}
		HX_STACK_LINE(71)
		tmp12->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)148;
		HX_STACK_LINE(72)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp14 = this->states;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			cpp::ArrayBase tmp15 = tmp14->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp15))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(72)
			Dynamic tmp16 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(72)
		tmp13->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)57;
		HX_STACK_LINE(73)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Array< ::Dynamic > tmp15 = this->states;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(73)
			cpp::ArrayBase tmp16 = tmp15->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(73)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp16))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(73)
			Dynamic tmp17 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(73)
			tmp14 = tmp17;
		}
		HX_STACK_LINE(73)
		tmp14->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)52;
		HX_STACK_LINE(74)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Array< ::Dynamic > tmp16 = this->states;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(74)
			cpp::ArrayBase tmp17 = tmp16->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp17))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(74)
			Dynamic tmp18 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			tmp15 = tmp18;
		}
		HX_STACK_LINE(74)
		tmp15->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)42;
		HX_STACK_LINE(76)
		Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp17 = this->states;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(76)
			cpp::ArrayBase tmp18 = tmp17->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(76)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp18))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(76)
			Dynamic tmp19 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(76)
			tmp16 = tmp19;
		}
		HX_STACK_LINE(76)
		tmp16->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)236;
		HX_STACK_LINE(77)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Array< ::Dynamic > tmp18 = this->states;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(77)
			cpp::ArrayBase tmp19 = tmp18->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(77)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp19))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(77)
			Dynamic tmp20 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			tmp17 = tmp20;
		}
		HX_STACK_LINE(77)
		tmp17->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)24;
		HX_STACK_LINE(78)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Array< ::Dynamic > tmp19 = this->states;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(78)
			cpp::ArrayBase tmp20 = tmp19->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(78)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp20))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(78)
			Dynamic tmp21 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(78)
			tmp18 = tmp21;
		}
		HX_STACK_LINE(78)
		tmp18->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)92;
		HX_STACK_LINE(79)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			Array< ::Dynamic > tmp20 = this->states;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(79)
			cpp::ArrayBase tmp21 = tmp20->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(79)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp21))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(79)
			Dynamic tmp22 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(79)
			tmp19 = tmp22;
		}
		HX_STACK_LINE(79)
		tmp19->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)78;
		HX_STACK_LINE(81)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			Array< ::Dynamic > tmp21 = this->states;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(81)
			cpp::ArrayBase tmp22 = tmp21->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(81)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp22))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(81)
			Dynamic tmp23 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(81)
			tmp20 = tmp23;
		}
		HX_STACK_LINE(81)
		tmp20->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)334;
		HX_STACK_LINE(82)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			Array< ::Dynamic > tmp22 = this->states;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(82)
			cpp::ArrayBase tmp23 = tmp22->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(82)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp23))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(82)
			Dynamic tmp24 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(82)
			tmp21 = tmp24;
		}
		HX_STACK_LINE(82)
		tmp21->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)24;
		HX_STACK_LINE(83)
		Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			Array< ::Dynamic > tmp23 = this->states;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(83)
			cpp::ArrayBase tmp24 = tmp23->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(83)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp24))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(83)
			Dynamic tmp25 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(83)
			tmp22 = tmp25;
		}
		HX_STACK_LINE(83)
		tmp22->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)105;
		HX_STACK_LINE(84)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Array< ::Dynamic > tmp24 = this->states;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(84)
			cpp::ArrayBase tmp25 = tmp24->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(84)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp25))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(84)
			Dynamic tmp26 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(84)
			tmp23 = tmp26;
		}
		HX_STACK_LINE(84)
		tmp23->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)78;
		HX_STACK_LINE(86)
		Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Array< ::Dynamic > tmp25 = this->states;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(86)
			cpp::ArrayBase tmp26 = tmp25->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(86)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp26))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(86)
			Dynamic tmp27 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(86)
			tmp24 = tmp27;
		}
		HX_STACK_LINE(86)
		tmp24->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)458;
		HX_STACK_LINE(87)
		Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			Array< ::Dynamic > tmp26 = this->states;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(87)
			cpp::ArrayBase tmp27 = tmp26->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(87)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp27))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(87)
			Dynamic tmp28 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(87)
			tmp25 = tmp28;
		}
		HX_STACK_LINE(87)
		tmp25->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(88)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			Array< ::Dynamic > tmp27 = this->states;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(88)
			cpp::ArrayBase tmp28 = tmp27->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(88)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp28))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(88)
			Dynamic tmp29 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(88)
			tmp26 = tmp29;
		}
		HX_STACK_LINE(88)
		tmp26->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)80;
		HX_STACK_LINE(89)
		Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			Array< ::Dynamic > tmp28 = this->states;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(89)
			cpp::ArrayBase tmp29 = tmp28->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(89)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp29))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(89)
			Dynamic tmp30 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(89)
			tmp27 = tmp30;
		}
		HX_STACK_LINE(89)
		tmp27->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)70;
		HX_STACK_LINE(91)
		Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp29 = this->states;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(91)
			cpp::ArrayBase tmp30 = tmp29->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(91)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp30))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(91)
			Dynamic tmp31 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(91)
			tmp28 = tmp31;
		}
		HX_STACK_LINE(91)
		tmp28->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)568;
		HX_STACK_LINE(92)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			Array< ::Dynamic > tmp30 = this->states;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(92)
			cpp::ArrayBase tmp31 = tmp30->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(92)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp31))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(92)
			Dynamic tmp32 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(92)
			tmp29 = tmp32;
		}
		HX_STACK_LINE(92)
		tmp29->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)41;
		HX_STACK_LINE(93)
		Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			Array< ::Dynamic > tmp31 = this->states;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(93)
			cpp::ArrayBase tmp32 = tmp31->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(93)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp32))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(93)
			Dynamic tmp33 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(93)
			tmp30 = tmp33;
		}
		HX_STACK_LINE(93)
		tmp30->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)76;
		HX_STACK_LINE(94)
		Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Array< ::Dynamic > tmp32 = this->states;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(94)
			cpp::ArrayBase tmp33 = tmp32->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(94)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp33))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(94)
			Dynamic tmp34 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(94)
			tmp31 = tmp34;
		}
		HX_STACK_LINE(94)
		tmp31->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)61;
		HX_STACK_LINE(96)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Array< ::Dynamic > tmp33 = this->states;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(96)
			cpp::ArrayBase tmp34 = tmp33->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(96)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp34))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(96)
			Dynamic tmp35 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(96)
			tmp32 = tmp35;
		}
		HX_STACK_LINE(96)
		tmp32->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(97)
		Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			Array< ::Dynamic > tmp34 = this->states;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(97)
			cpp::ArrayBase tmp35 = tmp34->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(97)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp35))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(97)
			Dynamic tmp36 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(97)
			tmp33 = tmp36;
		}
		HX_STACK_LINE(97)
		tmp33->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)124;
		HX_STACK_LINE(98)
		Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			Array< ::Dynamic > tmp35 = this->states;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(98)
			cpp::ArrayBase tmp36 = tmp35->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(98)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp36))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(98)
			Dynamic tmp37 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(98)
			tmp34 = tmp37;
		}
		HX_STACK_LINE(98)
		tmp34->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)73;
		HX_STACK_LINE(99)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			Array< ::Dynamic > tmp36 = this->states;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(99)
			cpp::ArrayBase tmp37 = tmp36->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(99)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp37))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(99)
			Dynamic tmp38 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(99)
			tmp35 = tmp38;
		}
		HX_STACK_LINE(99)
		tmp35->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)62;
		HX_STACK_LINE(101)
		Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			Array< ::Dynamic > tmp37 = this->states;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(101)
			cpp::ArrayBase tmp38 = tmp37->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(101)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp38))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(101)
			Dynamic tmp39 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(101)
			tmp36 = tmp39;
		}
		HX_STACK_LINE(101)
		tmp36->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)137;
		HX_STACK_LINE(102)
		Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			Array< ::Dynamic > tmp38 = this->states;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(102)
			cpp::ArrayBase tmp39 = tmp38->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(102)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp39))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(102)
			Dynamic tmp40 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(102)
			tmp37 = tmp40;
		}
		HX_STACK_LINE(102)
		tmp37->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)124;
		HX_STACK_LINE(103)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			Array< ::Dynamic > tmp39 = this->states;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(103)
			cpp::ArrayBase tmp40 = tmp39->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(103)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp40))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(103)
			Dynamic tmp41 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(103)
			tmp38 = tmp41;
		}
		HX_STACK_LINE(103)
		tmp38->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)74;
		HX_STACK_LINE(104)
		Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			Array< ::Dynamic > tmp40 = this->states;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(104)
			cpp::ArrayBase tmp41 = tmp40->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(104)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp41))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(104)
			Dynamic tmp42 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(104)
			tmp39 = tmp42;
		}
		HX_STACK_LINE(104)
		tmp39->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)62;
		HX_STACK_LINE(106)
		Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Array< ::Dynamic > tmp41 = this->states;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(106)
			cpp::ArrayBase tmp42 = tmp41->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(106)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp42))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(106)
			Dynamic tmp43 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(106)
			tmp40 = tmp43;
		}
		HX_STACK_LINE(106)
		tmp40->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)242;
		HX_STACK_LINE(107)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			Array< ::Dynamic > tmp42 = this->states;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(107)
			cpp::ArrayBase tmp43 = tmp42->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(107)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp43))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(107)
			Dynamic tmp44 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(107)
			tmp41 = tmp44;
		}
		HX_STACK_LINE(107)
		tmp41->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)117;
		HX_STACK_LINE(108)
		Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Array< ::Dynamic > tmp43 = this->states;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(108)
			cpp::ArrayBase tmp44 = tmp43->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(108)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp44))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(108)
			Dynamic tmp45 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(108)
			tmp42 = tmp45;
		}
		HX_STACK_LINE(108)
		tmp42->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)78;
		HX_STACK_LINE(109)
		Dynamic tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Array< ::Dynamic > tmp44 = this->states;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(109)
			cpp::ArrayBase tmp45 = tmp44->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(109)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp45))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(109)
			Dynamic tmp46 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(109)
			tmp43 = tmp46;
		}
		HX_STACK_LINE(109)
		tmp43->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)69;
		HX_STACK_LINE(111)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Array< ::Dynamic > tmp45 = this->states;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(111)
			cpp::ArrayBase tmp46 = tmp45->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(111)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp46))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(111)
			Dynamic tmp47 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(111)
			tmp44 = tmp47;
		}
		HX_STACK_LINE(111)
		tmp44->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)349;
		HX_STACK_LINE(112)
		Dynamic tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			Array< ::Dynamic > tmp46 = this->states;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(112)
			cpp::ArrayBase tmp47 = tmp46->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(112)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp47))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(112)
			Dynamic tmp48 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(112)
			tmp45 = tmp48;
		}
		HX_STACK_LINE(112)
		tmp45->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)117;
		HX_STACK_LINE(113)
		Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			Array< ::Dynamic > tmp47 = this->states;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(113)
			cpp::ArrayBase tmp48 = tmp47->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(113)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp48))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(113)
			Dynamic tmp49 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(113)
			tmp46 = tmp49;
		}
		HX_STACK_LINE(113)
		tmp46->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)81;
		HX_STACK_LINE(114)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			Array< ::Dynamic > tmp48 = this->states;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(114)
			cpp::ArrayBase tmp49 = tmp48->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(114)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp49))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(114)
			Dynamic tmp50 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(114)
			tmp47 = tmp50;
		}
		HX_STACK_LINE(114)
		tmp47->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)70;
		HX_STACK_LINE(116)
		Dynamic tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			Array< ::Dynamic > tmp49 = this->states;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(116)
			cpp::ArrayBase tmp50 = tmp49->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(116)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp50))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(116)
			Dynamic tmp51 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)10);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(116)
			tmp48 = tmp51;
		}
		HX_STACK_LINE(116)
		tmp48->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)459;
		HX_STACK_LINE(117)
		Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			Array< ::Dynamic > tmp50 = this->states;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(117)
			cpp::ArrayBase tmp51 = tmp50->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(117)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp51))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(117)
			Dynamic tmp52 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)10);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(117)
			tmp49 = tmp52;
		}
		HX_STACK_LINE(117)
		tmp49->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)117;
		HX_STACK_LINE(118)
		Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			Array< ::Dynamic > tmp51 = this->states;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(118)
			cpp::ArrayBase tmp52 = tmp51->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(118)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp52))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(118)
			Dynamic tmp53 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)10);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(118)
			tmp50 = tmp53;
		}
		HX_STACK_LINE(118)
		tmp50->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)79;
		HX_STACK_LINE(119)
		Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			Array< ::Dynamic > tmp52 = this->states;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(119)
			cpp::ArrayBase tmp53 = tmp52->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(119)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp53))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(119)
			Dynamic tmp54 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)10);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(119)
			tmp51 = tmp54;
		}
		HX_STACK_LINE(119)
		tmp51->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)69;
		HX_STACK_LINE(121)
		Dynamic tmp52;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			Array< ::Dynamic > tmp53 = this->states;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(121)
			cpp::ArrayBase tmp54 = tmp53->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(121)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp54))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(121)
			Dynamic tmp55 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)11);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(121)
			tmp52 = tmp55;
		}
		HX_STACK_LINE(121)
		tmp52->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)567;
		HX_STACK_LINE(122)
		Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			Array< ::Dynamic > tmp54 = this->states;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(122)
			cpp::ArrayBase tmp55 = tmp54->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(122)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp55))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(122)
			Dynamic tmp56 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)11);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(122)
			tmp53 = tmp56;
		}
		HX_STACK_LINE(122)
		tmp53->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)117;
		HX_STACK_LINE(123)
		Dynamic tmp54;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			Array< ::Dynamic > tmp55 = this->states;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(123)
			cpp::ArrayBase tmp56 = tmp55->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(123)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp56))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(123)
			Dynamic tmp57 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)11);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(123)
			tmp54 = tmp57;
		}
		HX_STACK_LINE(123)
		tmp54->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)77;
		HX_STACK_LINE(124)
		Dynamic tmp55;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Array< ::Dynamic > tmp56 = this->states;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(124)
			cpp::ArrayBase tmp57 = tmp56->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(124)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp57))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(124)
			Dynamic tmp58 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)11);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(124)
			tmp55 = tmp58;
		}
		HX_STACK_LINE(124)
		tmp55->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)69;
		HX_STACK_LINE(126)
		Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			Array< ::Dynamic > tmp57 = this->states;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(126)
			cpp::ArrayBase tmp58 = tmp57->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(126)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp58))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(126)
			Dynamic tmp59 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)12);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(126)
			tmp56 = tmp59;
		}
		HX_STACK_LINE(126)
		tmp56->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)13;
		HX_STACK_LINE(127)
		Dynamic tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			Array< ::Dynamic > tmp58 = this->states;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(127)
			cpp::ArrayBase tmp59 = tmp58->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(127)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp59))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(127)
			Dynamic tmp60 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)12);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(127)
			tmp57 = tmp60;
		}
		HX_STACK_LINE(127)
		tmp57->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(128)
		Dynamic tmp58;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			Array< ::Dynamic > tmp59 = this->states;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(128)
			cpp::ArrayBase tmp60 = tmp59->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(128)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp60))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(128)
			Dynamic tmp61 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)12);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(128)
			tmp58 = tmp61;
		}
		HX_STACK_LINE(128)
		tmp58->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(129)
		Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			Array< ::Dynamic > tmp60 = this->states;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(129)
			cpp::ArrayBase tmp61 = tmp60->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(129)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp61))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(129)
			Dynamic tmp62 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)12);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(129)
			tmp59 = tmp62;
		}
		HX_STACK_LINE(129)
		tmp59->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Missile_obj,set_clips,(void))

int Missile_obj::collision( ){
	HX_STACK_FRAME("Missile","collision",0x100e7b8a,"Missile.collision","Missile.hx",134,0x28dd14f8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	int tmp = this->EXPLODE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	this->status = tmp;
	HX_STACK_LINE(138)
	this->hasCollided = true;
	HX_STACK_LINE(139)
	return (int)1;
}


Void Missile_obj::move( ){
{
		HX_STACK_FRAME("Missile","move",0xed4de6f9,"Missile.move","Missile.hx",143,0x28dd14f8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		int tmp = this->velocityX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		hx::SubEq(this->offSetX,tmp);
	}
return null();
}



Missile_obj::Missile_obj()
{
}

Dynamic Missile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SHOOT") ) { return SHOOT; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"EXPLODE") ) { return EXPLODE; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_clips") ) { return set_clips_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOffSetX") ) { return getOffSetX_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffSetY") ) { return getOffSetY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Missile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SHOOT") ) { SHOOT=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"EXPLODE") ) { EXPLODE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Missile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SHOOT","\xbf","\xb9","\x15","\xfa"));
	outFields->push(HX_HCSTRING("EXPLODE","\xc1","\x8f","\x37","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Missile_obj,SHOOT),HX_HCSTRING("SHOOT","\xbf","\xb9","\x15","\xfa")},
	{hx::fsInt,(int)offsetof(Missile_obj,EXPLODE),HX_HCSTRING("EXPLODE","\xc1","\x8f","\x37","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SHOOT","\xbf","\xb9","\x15","\xfa"),
	HX_HCSTRING("EXPLODE","\xc1","\x8f","\x37","\xa7"),
	HX_HCSTRING("getOffSetX","\x8f","\xbb","\x9f","\x11"),
	HX_HCSTRING("getOffSetY","\x90","\xbb","\x9f","\x11"),
	HX_HCSTRING("set_clips","\x06","\xd0","\x58","\x6f"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Missile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Missile_obj::__mClass,"__mClass");
};

#endif

hx::Class Missile_obj::__mClass;

void Missile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Missile","\x86","\xe5","\xd5","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Missile_obj >;
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

