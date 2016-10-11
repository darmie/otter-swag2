#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_Fish
#include <Fish.h>
#endif
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif

Void Fish_obj::__construct(::String filename,int r,int g,int b,int randY)
{
HX_STACK_FRAME("Fish","new",0xad8b5daa,"Fish.new","Fish.hx",14,0xd64d8506)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(g,"g")
HX_STACK_ARG(b,"b")
HX_STACK_ARG(randY,"randY")
{
	HX_STACK_LINE(15)
	super::__construct((int)2);
	HX_STACK_LINE(16)
	this->SWIM = (int)0;
	HX_STACK_LINE(17)
	this->EATEN = (int)0;
	HX_STACK_LINE(19)
	this->hasCollided = false;
	HX_STACK_LINE(22)
	this->offSetY = randY;
	HX_STACK_LINE(23)
	int tmp = this->SCREEN_WIDTH;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->offSetX = tmp;
	HX_STACK_LINE(24)
	this->velocityX = (int)10;
	HX_STACK_LINE(25)
	this->velocityY = (int)0;
	HX_STACK_LINE(28)
	this->frame = (int)0;
	HX_STACK_LINE(29)
	int tmp1 = this->SWIM;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	this->status = tmp1;
	HX_STACK_LINE(32)
	::String tmp2 = filename;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	int tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	int tmp4 = g;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	::cpp::Pointer< SDL_Surface > tmp6 = this->load_image(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	this->sprite = tmp6;
	HX_STACK_LINE(35)
	this->set_clips();
}
;
	return null();
}

//Fish_obj::~Fish_obj() { }

Dynamic Fish_obj::__CreateEmpty() { return  new Fish_obj; }
hx::ObjectPtr< Fish_obj > Fish_obj::__new(::String filename,int r,int g,int b,int randY)
{  hx::ObjectPtr< Fish_obj > _result_ = new Fish_obj();
	_result_->__construct(filename,r,g,b,randY);
	return _result_;}

Dynamic Fish_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fish_obj > _result_ = new Fish_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Fish_obj::set_clips( ){
{
		HX_STACK_FRAME("Fish","set_clips",0xb76c70d0,"Fish.set_clips","Fish.hx",40,0xd64d8506)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			Array< ::Dynamic > tmp1 = this->states;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			cpp::ArrayBase tmp2 = tmp1->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp2))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(42)
			Dynamic tmp3 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			tmp = tmp3;
		}
		HX_STACK_LINE(42)
		tmp->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)281;
		HX_STACK_LINE(43)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			Array< ::Dynamic > tmp2 = this->states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			cpp::ArrayBase tmp3 = tmp2->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp3))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(43)
			Dynamic tmp4 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			tmp1 = tmp4;
		}
		HX_STACK_LINE(43)
		tmp1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)15;
		HX_STACK_LINE(44)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			Array< ::Dynamic > tmp3 = this->states;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			cpp::ArrayBase tmp4 = tmp3->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp4))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(44)
			Dynamic tmp5 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(44)
		tmp2->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)31;
		HX_STACK_LINE(45)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			Array< ::Dynamic > tmp4 = this->states;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			cpp::ArrayBase tmp5 = tmp4->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp5))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(45)
			Dynamic tmp6 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			tmp3 = tmp6;
		}
		HX_STACK_LINE(45)
		tmp3->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)17;
		HX_STACK_LINE(47)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(47)
			Dynamic tmp7 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			tmp4 = tmp7;
		}
		HX_STACK_LINE(47)
		tmp4->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)241;
		HX_STACK_LINE(48)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(48)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			tmp5 = tmp8;
		}
		HX_STACK_LINE(48)
		tmp5->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)13;
		HX_STACK_LINE(49)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			Array< ::Dynamic > tmp7 = this->states;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			cpp::ArrayBase tmp8 = tmp7->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp8))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(49)
			Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			tmp6 = tmp9;
		}
		HX_STACK_LINE(49)
		tmp6->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)30;
		HX_STACK_LINE(50)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(50)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(50)
			Dynamic tmp10 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(50)
			tmp7 = tmp10;
		}
		HX_STACK_LINE(50)
		tmp7->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)18;
		HX_STACK_LINE(52)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			Array< ::Dynamic > tmp9 = this->states;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			cpp::ArrayBase tmp10 = tmp9->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(52)
			Dynamic tmp11 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			tmp8 = tmp11;
		}
		HX_STACK_LINE(52)
		tmp8->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)323;
		HX_STACK_LINE(53)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			Array< ::Dynamic > tmp10 = this->states;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			cpp::ArrayBase tmp11 = tmp10->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp11))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(53)
			Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			tmp9 = tmp12;
		}
		HX_STACK_LINE(53)
		tmp9->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)10;
		HX_STACK_LINE(54)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Array< ::Dynamic > tmp11 = this->states;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			cpp::ArrayBase tmp12 = tmp11->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp12))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(54)
			Dynamic tmp13 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(54)
			tmp10 = tmp13;
		}
		HX_STACK_LINE(54)
		tmp10->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)30;
		HX_STACK_LINE(55)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Array< ::Dynamic > tmp12 = this->states;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			cpp::ArrayBase tmp13 = tmp12->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp13))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(55)
			Dynamic tmp14 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			tmp11 = tmp14;
		}
		HX_STACK_LINE(55)
		tmp11->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)23;
		HX_STACK_LINE(57)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp13 = this->states;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(57)
			cpp::ArrayBase tmp14 = tmp13->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(57)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp14))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			Dynamic tmp15 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(57)
			tmp12 = tmp15;
		}
		HX_STACK_LINE(57)
		tmp12->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)405;
		HX_STACK_LINE(58)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Array< ::Dynamic > tmp14 = this->states;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(58)
			cpp::ArrayBase tmp15 = tmp14->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(58)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp15))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(58)
			Dynamic tmp16 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(58)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(58)
		tmp13->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)5;
		HX_STACK_LINE(59)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Array< ::Dynamic > tmp15 = this->states;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(59)
			cpp::ArrayBase tmp16 = tmp15->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(59)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp16))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(59)
			Dynamic tmp17 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(59)
			tmp14 = tmp17;
		}
		HX_STACK_LINE(59)
		tmp14->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)30;
		HX_STACK_LINE(60)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			Array< ::Dynamic > tmp16 = this->states;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(60)
			cpp::ArrayBase tmp17 = tmp16->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(60)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp17))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(60)
			Dynamic tmp18 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(60)
			tmp15 = tmp18;
		}
		HX_STACK_LINE(60)
		tmp15->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(62)
		Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Array< ::Dynamic > tmp17 = this->states;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(62)
			cpp::ArrayBase tmp18 = tmp17->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(62)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp18))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(62)
			Dynamic tmp19 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(62)
			tmp16 = tmp19;
		}
		HX_STACK_LINE(62)
		tmp16->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)364;
		HX_STACK_LINE(63)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			Array< ::Dynamic > tmp18 = this->states;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(63)
			cpp::ArrayBase tmp19 = tmp18->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(63)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp19))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(63)
			Dynamic tmp20 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(63)
			tmp17 = tmp20;
		}
		HX_STACK_LINE(63)
		tmp17->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)5;
		HX_STACK_LINE(64)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Array< ::Dynamic > tmp19 = this->states;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(64)
			cpp::ArrayBase tmp20 = tmp19->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(64)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp20))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(64)
			Dynamic tmp21 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(64)
			tmp18 = tmp21;
		}
		HX_STACK_LINE(64)
		tmp18->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)30;
		HX_STACK_LINE(65)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Array< ::Dynamic > tmp20 = this->states;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(65)
			cpp::ArrayBase tmp21 = tmp20->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(65)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp21))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(65)
			Dynamic tmp22 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(65)
			tmp19 = tmp22;
		}
		HX_STACK_LINE(65)
		tmp19->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)27;
		HX_STACK_LINE(67)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Array< ::Dynamic > tmp21 = this->states;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			cpp::ArrayBase tmp22 = tmp21->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(67)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp22))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(67)
			Dynamic tmp23 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(67)
			tmp20 = tmp23;
		}
		HX_STACK_LINE(67)
		tmp20->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(68)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Array< ::Dynamic > tmp22 = this->states;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(68)
			cpp::ArrayBase tmp23 = tmp22->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(68)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp23))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(68)
			Dynamic tmp24 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(68)
			tmp21 = tmp24;
		}
		HX_STACK_LINE(68)
		tmp21->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(69)
		Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Array< ::Dynamic > tmp23 = this->states;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(69)
			cpp::ArrayBase tmp24 = tmp23->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(69)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp24))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			Dynamic tmp25 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(69)
			tmp22 = tmp25;
		}
		HX_STACK_LINE(69)
		tmp22->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)1;
		HX_STACK_LINE(70)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp24 = this->states;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(70)
			cpp::ArrayBase tmp25 = tmp24->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(70)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp25))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(70)
			Dynamic tmp26 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(70)
			tmp23 = tmp26;
		}
		HX_STACK_LINE(70)
		tmp23->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Fish_obj,set_clips,(void))

int Fish_obj::collision( ){
	HX_STACK_FRAME("Fish","collision",0x234e493c,"Fish.collision","Fish.hx",74,0xd64d8506)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	int tmp = this->EATEN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->status = tmp;
	HX_STACK_LINE(77)
	this->hasCollided = true;
	HX_STACK_LINE(78)
	return (int)3;
}


Void Fish_obj::move( ){
{
		HX_STACK_FRAME("Fish","move",0x2bc4f687,"Fish.move","Fish.hx",83,0xd64d8506)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		int tmp = this->velocityX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		hx::SubEq(this->offSetX,tmp);
	}
return null();
}


Void Fish_obj::show( ::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("Fish","show",0x2fb6e873,"Fish.show","Fish.hx",89,0xd64d8506)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(91)
		int tmp = this->status;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		int tmp1 = this->SWIM;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(92)
			int tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			bool tmp4 = (tmp3 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			if ((tmp4)){
				HX_STACK_LINE(93)
				(this->frame)++;
			}
			else{
				HX_STACK_LINE(95)
				this->frame = (int)0;
			}
			HX_STACK_LINE(97)
			::cpp::Pointer< SDL_Surface > tmp5 = this->sprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			::cpp::Pointer< SDL_Surface > tmp6 = screen;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			{
				HX_STACK_LINE(97)
				Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(97)
				int tmp10 = this->frame;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(97)
				Dynamic tmp11 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				tmp7 = tmp11;
			}
			HX_STACK_LINE(97)
			this->apply_surface(null(),null(),tmp5,tmp6,tmp7);
		}
		HX_STACK_LINE(99)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		int tmp4 = this->EATEN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		if ((tmp5)){
			HX_STACK_LINE(100)
			this->frame = (int)0;
			HX_STACK_LINE(102)
			::cpp::Pointer< SDL_Surface > tmp6 = this->sprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			::cpp::Pointer< SDL_Surface > tmp7 = screen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				Array< ::Dynamic > tmp9 = this->states;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				cpp::ArrayBase tmp10 = tmp9->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(102)
				int tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				tmp8 = tmp12;
			}
			HX_STACK_LINE(102)
			this->apply_surface(null(),null(),tmp6,tmp7,tmp8);
		}
	}
return null();
}



Fish_obj::Fish_obj()
{
}

Dynamic Fish_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SWIM") ) { return SWIM; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EATEN") ) { return EATEN; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_clips") ) { return set_clips_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fish_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SWIM") ) { SWIM=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EATEN") ) { EATEN=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fish_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SWIM","\x88","\xf9","\x1e","\x37"));
	outFields->push(HX_HCSTRING("EATEN","\xe1","\xde","\xdc","\xe5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Fish_obj,SWIM),HX_HCSTRING("SWIM","\x88","\xf9","\x1e","\x37")},
	{hx::fsInt,(int)offsetof(Fish_obj,EATEN),HX_HCSTRING("EATEN","\xe1","\xde","\xdc","\xe5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SWIM","\x88","\xf9","\x1e","\x37"),
	HX_HCSTRING("EATEN","\xe1","\xde","\xdc","\xe5"),
	HX_HCSTRING("set_clips","\x06","\xd0","\x58","\x6f"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fish_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fish_obj::__mClass,"__mClass");
};

#endif

hx::Class Fish_obj::__mClass;

void Fish_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Fish","\xb8","\x00","\x95","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fish_obj >;
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

