#include <hxcpp.h>

#include "hxMath.h"
#include "linc_sdl.h"
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_ScoreCounter
#include <ScoreCounter.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif

Void ScoreCounter_obj::__construct(::String filename,int r,int g,int b)
{
HX_STACK_FRAME("ScoreCounter","new",0xae027bdc,"ScoreCounter.new","ScoreCounter.hx",19,0x94deb314)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(g,"g")
HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(20)
	super::__construct((int)1);
	HX_STACK_LINE(21)
	this->COUNT = (int)0;
	HX_STACK_LINE(24)
	this->isStarted = false;
	HX_STACK_LINE(25)
	this->score = (int)0;
	HX_STACK_LINE(26)
	this->hasCollided = false;
	HX_STACK_LINE(27)
	this->title = true;
	HX_STACK_LINE(30)
	this->frame = (int)0;
	HX_STACK_LINE(31)
	int tmp = this->COUNT;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->status = tmp;
	HX_STACK_LINE(34)
	::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	int tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	int tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	::cpp::Pointer< SDL_Surface > tmp5 = this->load_image(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	this->sprite = tmp5;
	HX_STACK_LINE(36)
	this->set_clips();
}
;
	return null();
}

//ScoreCounter_obj::~ScoreCounter_obj() { }

Dynamic ScoreCounter_obj::__CreateEmpty() { return  new ScoreCounter_obj; }
hx::ObjectPtr< ScoreCounter_obj > ScoreCounter_obj::__new(::String filename,int r,int g,int b)
{  hx::ObjectPtr< ScoreCounter_obj > _result_ = new ScoreCounter_obj();
	_result_->__construct(filename,r,g,b);
	return _result_;}

Dynamic ScoreCounter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScoreCounter_obj > _result_ = new ScoreCounter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void ScoreCounter_obj::set_clips( ){
{
		HX_STACK_FRAME("ScoreCounter","set_clips",0x8e3f4082,"ScoreCounter.set_clips","ScoreCounter.hx",41,0x94deb314)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			Array< ::Dynamic > tmp1 = this->states;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			cpp::ArrayBase tmp2 = tmp1->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp2))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(44)
			Dynamic tmp3 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			tmp = tmp3;
		}
		HX_STACK_LINE(44)
		tmp->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)287;
		HX_STACK_LINE(45)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			Array< ::Dynamic > tmp2 = this->states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			cpp::ArrayBase tmp3 = tmp2->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp3))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(45)
			Dynamic tmp4 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			tmp1 = tmp4;
		}
		HX_STACK_LINE(45)
		tmp1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(46)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			Array< ::Dynamic > tmp3 = this->states;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			cpp::ArrayBase tmp4 = tmp3->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp4))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(46)
			Dynamic tmp5 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(46)
		tmp2->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)21;
		HX_STACK_LINE(47)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			Array< ::Dynamic > tmp4 = this->states;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			cpp::ArrayBase tmp5 = tmp4->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp5))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(47)
			Dynamic tmp6 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			tmp3 = tmp6;
		}
		HX_STACK_LINE(47)
		tmp3->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(49)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(49)
			Dynamic tmp7 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			tmp4 = tmp7;
		}
		HX_STACK_LINE(49)
		tmp4->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(50)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(50)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(50)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			tmp5 = tmp8;
		}
		HX_STACK_LINE(50)
		tmp5->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(51)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Array< ::Dynamic > tmp7 = this->states;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			cpp::ArrayBase tmp8 = tmp7->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp8))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(51)
			Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			tmp6 = tmp9;
		}
		HX_STACK_LINE(51)
		tmp6->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)20;
		HX_STACK_LINE(52)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(52)
			Dynamic tmp10 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			tmp7 = tmp10;
		}
		HX_STACK_LINE(52)
		tmp7->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(54)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Array< ::Dynamic > tmp9 = this->states;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			cpp::ArrayBase tmp10 = tmp9->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(54)
			Dynamic tmp11 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			tmp8 = tmp11;
		}
		HX_STACK_LINE(54)
		tmp8->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)30;
		HX_STACK_LINE(55)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Array< ::Dynamic > tmp10 = this->states;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			cpp::ArrayBase tmp11 = tmp10->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp11))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(55)
			Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			tmp9 = tmp12;
		}
		HX_STACK_LINE(55)
		tmp9->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(56)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Array< ::Dynamic > tmp11 = this->states;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			cpp::ArrayBase tmp12 = tmp11->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp12))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(56)
			Dynamic tmp13 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			tmp10 = tmp13;
		}
		HX_STACK_LINE(56)
		tmp10->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)24;
		HX_STACK_LINE(57)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp12 = this->states;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(57)
			cpp::ArrayBase tmp13 = tmp12->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(57)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp13))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			Dynamic tmp14 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(57)
			tmp11 = tmp14;
		}
		HX_STACK_LINE(57)
		tmp11->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(59)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Array< ::Dynamic > tmp13 = this->states;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(59)
			cpp::ArrayBase tmp14 = tmp13->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(59)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp14))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(59)
			Dynamic tmp15 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(59)
			tmp12 = tmp15;
		}
		HX_STACK_LINE(59)
		tmp12->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)62;
		HX_STACK_LINE(60)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			Array< ::Dynamic > tmp14 = this->states;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			cpp::ArrayBase tmp15 = tmp14->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp15))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(60)
			Dynamic tmp16 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(60)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(60)
		tmp13->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(61)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Array< ::Dynamic > tmp15 = this->states;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(61)
			cpp::ArrayBase tmp16 = tmp15->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(61)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp16))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(61)
			Dynamic tmp17 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(61)
			tmp14 = tmp17;
		}
		HX_STACK_LINE(61)
		tmp14->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)23;
		HX_STACK_LINE(62)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Array< ::Dynamic > tmp16 = this->states;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			cpp::ArrayBase tmp17 = tmp16->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(62)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp17))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(62)
			Dynamic tmp18 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(62)
			tmp15 = tmp18;
		}
		HX_STACK_LINE(62)
		tmp15->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(64)
		Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Array< ::Dynamic > tmp17 = this->states;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(64)
			cpp::ArrayBase tmp18 = tmp17->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(64)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp18))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(64)
			Dynamic tmp19 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(64)
			tmp16 = tmp19;
		}
		HX_STACK_LINE(64)
		tmp16->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)93;
		HX_STACK_LINE(65)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Array< ::Dynamic > tmp18 = this->states;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(65)
			cpp::ArrayBase tmp19 = tmp18->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(65)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp19))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(65)
			Dynamic tmp20 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(65)
			tmp17 = tmp20;
		}
		HX_STACK_LINE(65)
		tmp17->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(66)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			Array< ::Dynamic > tmp19 = this->states;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			cpp::ArrayBase tmp20 = tmp19->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(66)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp20))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(66)
			Dynamic tmp21 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			tmp18 = tmp21;
		}
		HX_STACK_LINE(66)
		tmp18->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(67)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Array< ::Dynamic > tmp20 = this->states;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			cpp::ArrayBase tmp21 = tmp20->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp21))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(67)
			Dynamic tmp22 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(67)
			tmp19 = tmp22;
		}
		HX_STACK_LINE(67)
		tmp19->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(69)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Array< ::Dynamic > tmp21 = this->states;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(69)
			cpp::ArrayBase tmp22 = tmp21->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(69)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp22))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			Dynamic tmp23 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(69)
			tmp20 = tmp23;
		}
		HX_STACK_LINE(69)
		tmp20->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)126;
		HX_STACK_LINE(70)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp22 = this->states;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(70)
			cpp::ArrayBase tmp23 = tmp22->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(70)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp23))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(70)
			Dynamic tmp24 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(70)
			tmp21 = tmp24;
		}
		HX_STACK_LINE(70)
		tmp21->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(71)
		Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Array< ::Dynamic > tmp23 = this->states;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(71)
			cpp::ArrayBase tmp24 = tmp23->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(71)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp24))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(71)
			Dynamic tmp25 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(71)
			tmp22 = tmp25;
		}
		HX_STACK_LINE(71)
		tmp22->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)25;
		HX_STACK_LINE(72)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp24 = this->states;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(72)
			cpp::ArrayBase tmp25 = tmp24->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(72)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp25))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(72)
			Dynamic tmp26 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(72)
			tmp23 = tmp26;
		}
		HX_STACK_LINE(72)
		tmp23->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(74)
		Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Array< ::Dynamic > tmp25 = this->states;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(74)
			cpp::ArrayBase tmp26 = tmp25->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(74)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp26))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(74)
			Dynamic tmp27 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(74)
			tmp24 = tmp27;
		}
		HX_STACK_LINE(74)
		tmp24->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)157;
		HX_STACK_LINE(75)
		Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			Array< ::Dynamic > tmp26 = this->states;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(75)
			cpp::ArrayBase tmp27 = tmp26->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(75)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp27))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(75)
			Dynamic tmp28 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(75)
			tmp25 = tmp28;
		}
		HX_STACK_LINE(75)
		tmp25->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(76)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp27 = this->states;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(76)
			cpp::ArrayBase tmp28 = tmp27->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(76)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp28))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(76)
			Dynamic tmp29 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(76)
			tmp26 = tmp29;
		}
		HX_STACK_LINE(76)
		tmp26->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(77)
		Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Array< ::Dynamic > tmp28 = this->states;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(77)
			cpp::ArrayBase tmp29 = tmp28->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(77)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp29))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(77)
			Dynamic tmp30 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(77)
			tmp27 = tmp30;
		}
		HX_STACK_LINE(77)
		tmp27->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(79)
		Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			Array< ::Dynamic > tmp29 = this->states;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(79)
			cpp::ArrayBase tmp30 = tmp29->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(79)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp30))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(79)
			Dynamic tmp31 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(79)
			tmp28 = tmp31;
		}
		HX_STACK_LINE(79)
		tmp28->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)189;
		HX_STACK_LINE(80)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			Array< ::Dynamic > tmp30 = this->states;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(80)
			cpp::ArrayBase tmp31 = tmp30->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(80)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp31))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(80)
			Dynamic tmp32 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(80)
			tmp29 = tmp32;
		}
		HX_STACK_LINE(80)
		tmp29->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(81)
		Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			Array< ::Dynamic > tmp31 = this->states;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(81)
			cpp::ArrayBase tmp32 = tmp31->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(81)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp32))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(81)
			Dynamic tmp33 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(81)
			tmp30 = tmp33;
		}
		HX_STACK_LINE(81)
		tmp30->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(82)
		Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			Array< ::Dynamic > tmp32 = this->states;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(82)
			cpp::ArrayBase tmp33 = tmp32->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(82)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp33))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(82)
			Dynamic tmp34 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(82)
			tmp31 = tmp34;
		}
		HX_STACK_LINE(82)
		tmp31->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(84)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Array< ::Dynamic > tmp33 = this->states;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(84)
			cpp::ArrayBase tmp34 = tmp33->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(84)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp34))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(84)
			Dynamic tmp35 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(84)
			tmp32 = tmp35;
		}
		HX_STACK_LINE(84)
		tmp32->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)221;
		HX_STACK_LINE(85)
		Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			Array< ::Dynamic > tmp34 = this->states;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(85)
			cpp::ArrayBase tmp35 = tmp34->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(85)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp35))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(85)
			Dynamic tmp36 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(85)
			tmp33 = tmp36;
		}
		HX_STACK_LINE(85)
		tmp33->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(86)
		Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Array< ::Dynamic > tmp35 = this->states;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(86)
			cpp::ArrayBase tmp36 = tmp35->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(86)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp36))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(86)
			Dynamic tmp37 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(86)
			tmp34 = tmp37;
		}
		HX_STACK_LINE(86)
		tmp34->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(87)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			Array< ::Dynamic > tmp36 = this->states;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(87)
			cpp::ArrayBase tmp37 = tmp36->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(87)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp37))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(87)
			Dynamic tmp38 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(87)
			tmp35 = tmp38;
		}
		HX_STACK_LINE(87)
		tmp35->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
		HX_STACK_LINE(89)
		Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			Array< ::Dynamic > tmp37 = this->states;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(89)
			cpp::ArrayBase tmp38 = tmp37->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(89)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp38))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(89)
			Dynamic tmp39 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(89)
			tmp36 = tmp39;
		}
		HX_STACK_LINE(89)
		tmp36->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)253;
		HX_STACK_LINE(90)
		Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			Array< ::Dynamic > tmp38 = this->states;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(90)
			cpp::ArrayBase tmp39 = tmp38->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(90)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp39))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(90)
			Dynamic tmp40 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(90)
			tmp37 = tmp40;
		}
		HX_STACK_LINE(90)
		tmp37->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(91)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp39 = this->states;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(91)
			cpp::ArrayBase tmp40 = tmp39->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(91)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp40))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(91)
			Dynamic tmp41 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(91)
			tmp38 = tmp41;
		}
		HX_STACK_LINE(91)
		tmp38->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(92)
		Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			Array< ::Dynamic > tmp40 = this->states;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(92)
			cpp::ArrayBase tmp41 = tmp40->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(92)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp41))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(92)
			Dynamic tmp42 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(92)
			tmp39 = tmp42;
		}
		HX_STACK_LINE(92)
		tmp39->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)28;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScoreCounter_obj,set_clips,(void))

int ScoreCounter_obj::getOffSetX( ){
	HX_STACK_FRAME("ScoreCounter","getOffSetX",0xfc5bb793,"ScoreCounter.getOffSetX","ScoreCounter.hx",98,0x94deb314)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	int tmp = this->offSetX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


int ScoreCounter_obj::getOffSetY( ){
	HX_STACK_FRAME("ScoreCounter","getOffSetY",0xfc5bb794,"ScoreCounter.getOffSetY","ScoreCounter.hx",104,0x94deb314)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	int tmp = this->offSetY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	return tmp;
}


int ScoreCounter_obj::collision( ){
	HX_STACK_FRAME("ScoreCounter","collision",0xfa2118ee,"ScoreCounter.collision","ScoreCounter.hx",112,0x94deb314)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	return (int)0;
}


Void ScoreCounter_obj::apply_surface( Dynamic x,Dynamic y,::cpp::Pointer< SDL_Surface > source,::cpp::Pointer< SDL_Surface > destination,Dynamic clip){
{
		HX_STACK_FRAME("ScoreCounter","apply_surface",0xce13c198,"ScoreCounter.apply_surface","ScoreCounter.hx",116,0x94deb314)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(destination,"destination")
		HX_STACK_ARG(clip,"clip")
		HX_STACK_LINE(117)
		::cpp::Pointer< SDL_Surface > tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::cpp::Pointer< SDL_Surface > tmp1 = destination;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Dynamic tmp2 = clip;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		this->super::apply_surface(null(),null(),tmp,tmp1,tmp2);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ScoreCounter.hx",120,0x94deb314)
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
		HX_STACK_LINE(120)
		Dynamic tmp3 = _Function_1_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		Dynamic shift = tmp3;		HX_STACK_VAR(shift,"shift");
		HX_STACK_LINE(124)
		shift->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = x;
		HX_STACK_LINE(125)
		shift->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = y;
		HX_STACK_LINE(129)
		::cpp::Pointer< SDL_Surface > tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		Dynamic tmp5 = clip;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		::cpp::Pointer< SDL_Surface > tmp6 = destination;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		Dynamic tmp7 = shift;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		linc::sdl::blitSurface(tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


Void ScoreCounter_obj::setScore( int num){
{
		HX_STACK_FRAME("ScoreCounter","setScore",0x1d940f54,"ScoreCounter.setScore","ScoreCounter.hx",135,0x94deb314)
		HX_STACK_THIS(this)
		HX_STACK_ARG(num,"num")
		HX_STACK_LINE(135)
		this->score = num;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScoreCounter_obj,setScore,(void))

Void ScoreCounter_obj::setTitle( bool val){
{
		HX_STACK_FRAME("ScoreCounter","setTitle",0xb4f5b19a,"ScoreCounter.setTitle","ScoreCounter.hx",143,0x94deb314)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(143)
		this->title = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScoreCounter_obj,setTitle,(void))

Void ScoreCounter_obj::show( ::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("ScoreCounter","show",0x977a3601,"ScoreCounter.show","ScoreCounter.hx",148,0x94deb314)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(149)
		::cpp::Pointer< SDL_Surface > tmp = screen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		this->super::show(tmp);
		HX_STACK_LINE(151)
		int tmp1 = this->SCREEN_WIDTH;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		int tmp2 = (int)168;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		int xPos = tmp3;		HX_STACK_VAR(xPos,"xPos");
		HX_STACK_LINE(152)
		this->isStarted = false;
		HX_STACK_LINE(153)
		int digits = (int)0;		HX_STACK_VAR(digits,"digits");
		HX_STACK_LINE(154)
		int i = (int)6;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(155)
		while((true)){
			HX_STACK_LINE(155)
			bool tmp4 = (i > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			if ((tmp5)){
				HX_STACK_LINE(155)
				break;
			}
			HX_STACK_LINE(156)
			int tmp6 = this->score;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			int tmp7 = (i - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			Float tmp8 = ::Math_obj::pow((int)10,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			tmp10 = hx::TCast< ::Int >::cast(tmp9);
			HX_STACK_LINE(156)
			this->frame = tmp10;
			HX_STACK_LINE(157)
			int tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			int tmp12 = hx::Mod(tmp11,(int)10);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(157)
			this->frame = tmp12;
			HX_STACK_LINE(158)
			bool tmp13 = this->isStarted;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(158)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(158)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			if ((tmp14)){
				HX_STACK_LINE(158)
				int tmp16 = this->frame;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(158)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(158)
				tmp15 = (tmp17 != (int)0);
			}
			else{
				HX_STACK_LINE(158)
				tmp15 = true;
			}
			HX_STACK_LINE(158)
			if ((tmp15)){
				HX_STACK_LINE(159)
				bool tmp16 = this->title;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(159)
				if ((tmp16)){
					HX_STACK_LINE(160)
					int tmp17 = xPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(160)
					::cpp::Pointer< SDL_Surface > tmp18 = this->sprite;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(160)
					::cpp::Pointer< SDL_Surface > tmp19 = screen;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(160)
					Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(160)
					{
						HX_STACK_LINE(160)
						Array< ::Dynamic > tmp21 = this->states;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(160)
						cpp::ArrayBase tmp22 = tmp21->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(160)
						cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp22))));		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(160)
						int tmp23 = this->frame;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(160)
						Dynamic tmp24 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(160)
						tmp20 = tmp24;
					}
					HX_STACK_LINE(160)
					this->apply_surface(tmp17,(int)0,tmp18,tmp19,tmp20);
				}
				else{
					HX_STACK_LINE(162)
					(digits)++;
					HX_STACK_LINE(164)
					int tmp17 = (digits + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(164)
					int tmp18 = (tmp17 * (int)28);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(164)
					int tmp19 = ((int)480 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(164)
					Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(164)
					Float tmp21 = (tmp20 - (int)10);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(164)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(164)
					tmp22 = hx::TCast< ::Int >::cast(tmp21);
					HX_STACK_LINE(164)
					hx::SubEq(xPos,tmp22);
					HX_STACK_LINE(165)
					int tmp23 = xPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(165)
					::cpp::Pointer< SDL_Surface > tmp24 = this->sprite;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(165)
					::cpp::Pointer< SDL_Surface > tmp25 = screen;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(165)
					Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(165)
					{
						HX_STACK_LINE(165)
						Array< ::Dynamic > tmp27 = this->states;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(165)
						cpp::ArrayBase tmp28 = tmp27->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(165)
						cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp28))));		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(165)
						int tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(165)
						Dynamic tmp30 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(165)
						tmp26 = tmp30;
					}
					HX_STACK_LINE(165)
					this->apply_surface(tmp23,(int)135,tmp24,tmp25,tmp26);
					HX_STACK_LINE(166)
					int tmp27 = (digits + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(166)
					int tmp28 = (tmp27 * (int)28);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(166)
					int tmp29 = ((int)480 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(166)
					Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(166)
					Float tmp31 = (tmp30 - (int)10);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(166)
					int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(166)
					tmp32 = hx::TCast< ::Int >::cast(tmp31);
					HX_STACK_LINE(166)
					hx::AddEq(xPos,tmp32);
				}
				HX_STACK_LINE(169)
				this->isStarted = true;
			}
			HX_STACK_LINE(171)
			hx::AddEq(xPos,(int)28);
			HX_STACK_LINE(172)
			(i)--;
		}
	}
return null();
}



ScoreCounter_obj::ScoreCounter_obj()
{
}

Dynamic ScoreCounter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COUNT") ) { return COUNT; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScore") ) { return setScore_dyn(); }
		if (HX_FIELD_EQ(inName,"setTitle") ) { return setTitle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isStarted") ) { return isStarted; }
		if (HX_FIELD_EQ(inName,"set_clips") ) { return set_clips_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOffSetX") ) { return getOffSetX_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffSetY") ) { return getOffSetY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"apply_surface") ) { return apply_surface_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScoreCounter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"COUNT") ) { COUNT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isStarted") ) { isStarted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScoreCounter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COUNT","\xaf","\x7c","\x51","\xc8"));
	outFields->push(HX_HCSTRING("score","\x52","\x73","\xd9","\x78"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("isStarted","\x77","\xa6","\x19","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ScoreCounter_obj,COUNT),HX_HCSTRING("COUNT","\xaf","\x7c","\x51","\xc8")},
	{hx::fsInt,(int)offsetof(ScoreCounter_obj,score),HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{hx::fsBool,(int)offsetof(ScoreCounter_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsBool,(int)offsetof(ScoreCounter_obj,isStarted),HX_HCSTRING("isStarted","\x77","\xa6","\x19","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("COUNT","\xaf","\x7c","\x51","\xc8"),
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("isStarted","\x77","\xa6","\x19","\x39"),
	HX_HCSTRING("set_clips","\x06","\xd0","\x58","\x6f"),
	HX_HCSTRING("getOffSetX","\x8f","\xbb","\x9f","\x11"),
	HX_HCSTRING("getOffSetY","\x90","\xbb","\x9f","\x11"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("apply_surface","\x1c","\x63","\x85","\xfd"),
	HX_HCSTRING("setScore","\x50","\xdc","\x0d","\x87"),
	HX_HCSTRING("setTitle","\x96","\x7e","\x6f","\x1e"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScoreCounter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScoreCounter_obj::__mClass,"__mClass");
};

#endif

hx::Class ScoreCounter_obj::__mClass;

void ScoreCounter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ScoreCounter","\xea","\x9d","\x70","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScoreCounter_obj >;
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

