#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif

Void Coin_obj::__construct(::String filename,int r,int g,int b,int randX)
{
HX_STACK_FRAME("Coin","new",0x704aaf23,"Coin.new","Coin.hx",14,0x01a6c5ad)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(g,"g")
HX_STACK_ARG(b,"b")
HX_STACK_ARG(randX,"randX")
{
	HX_STACK_LINE(15)
	super::__construct((int)2);
	HX_STACK_LINE(16)
	this->SPIN = (int)0;
	HX_STACK_LINE(17)
	this->SCORE = (int)1;
	HX_STACK_LINE(19)
	this->hasCollided = false;
	HX_STACK_LINE(22)
	this->offSetY = (int)-50;
	HX_STACK_LINE(23)
	this->offSetX = randX;
	HX_STACK_LINE(24)
	this->velocityX = (int)0;
	HX_STACK_LINE(25)
	this->velocityY = (int)7;
	HX_STACK_LINE(28)
	this->frame = (int)0;
	HX_STACK_LINE(29)
	int tmp = this->SPIN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->status = tmp;
	HX_STACK_LINE(32)
	::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	int tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	int tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	::cpp::Pointer< SDL_Surface > tmp5 = this->load_image(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	this->sprite = tmp5;
	HX_STACK_LINE(35)
	this->set_clips();
}
;
	return null();
}

//Coin_obj::~Coin_obj() { }

Dynamic Coin_obj::__CreateEmpty() { return  new Coin_obj; }
hx::ObjectPtr< Coin_obj > Coin_obj::__new(::String filename,int r,int g,int b,int randX)
{  hx::ObjectPtr< Coin_obj > _result_ = new Coin_obj();
	_result_->__construct(filename,r,g,b,randX);
	return _result_;}

Dynamic Coin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Coin_obj > _result_ = new Coin_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

int Coin_obj::getOffSetX( ){
	HX_STACK_FRAME("Coin","getOffSetX",0x7ccd8b2c,"Coin.getOffSetX","Coin.hx",39,0x01a6c5ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp = this->offSetX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


int Coin_obj::getOffSetY( ){
	HX_STACK_FRAME("Coin","getOffSetY",0x7ccd8b2d,"Coin.getOffSetY","Coin.hx",45,0x01a6c5ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	int tmp = this->offSetY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


Void Coin_obj::set_clips( ){
{
		HX_STACK_FRAME("Coin","set_clips",0x85a3a309,"Coin.set_clips","Coin.hx",51,0x01a6c5ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Array< ::Dynamic > tmp1 = this->states;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			cpp::ArrayBase tmp2 = tmp1->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp2))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(54)
			Dynamic tmp3 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			tmp = tmp3;
		}
		HX_STACK_LINE(54)
		tmp->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)6;
		HX_STACK_LINE(55)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Array< ::Dynamic > tmp2 = this->states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			cpp::ArrayBase tmp3 = tmp2->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp3))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(55)
			Dynamic tmp4 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			tmp1 = tmp4;
		}
		HX_STACK_LINE(55)
		tmp1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(56)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Array< ::Dynamic > tmp3 = this->states;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			cpp::ArrayBase tmp4 = tmp3->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp4))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(56)
			Dynamic tmp5 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(56)
		tmp2->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)14;
		HX_STACK_LINE(57)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Array< ::Dynamic > tmp4 = this->states;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			cpp::ArrayBase tmp5 = tmp4->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp5))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(57)
			Dynamic tmp6 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			tmp3 = tmp6;
		}
		HX_STACK_LINE(57)
		tmp3->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(59)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(59)
			Dynamic tmp7 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(59)
			tmp4 = tmp7;
		}
		HX_STACK_LINE(59)
		tmp4->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)23;
		HX_STACK_LINE(60)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(60)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			tmp5 = tmp8;
		}
		HX_STACK_LINE(60)
		tmp5->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(61)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			Array< ::Dynamic > tmp7 = this->states;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			cpp::ArrayBase tmp8 = tmp7->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp8))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(61)
			Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			tmp6 = tmp9;
		}
		HX_STACK_LINE(61)
		tmp6->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)12;
		HX_STACK_LINE(62)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(62)
			Dynamic tmp10 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			tmp7 = tmp10;
		}
		HX_STACK_LINE(62)
		tmp7->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(64)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Array< ::Dynamic > tmp9 = this->states;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(64)
			cpp::ArrayBase tmp10 = tmp9->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(64)
			Dynamic tmp11 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			tmp8 = tmp11;
		}
		HX_STACK_LINE(64)
		tmp8->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)38;
		HX_STACK_LINE(65)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Array< ::Dynamic > tmp10 = this->states;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			cpp::ArrayBase tmp11 = tmp10->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp11))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(65)
			Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			tmp9 = tmp12;
		}
		HX_STACK_LINE(65)
		tmp9->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(66)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			Array< ::Dynamic > tmp11 = this->states;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(66)
			cpp::ArrayBase tmp12 = tmp11->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(66)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp12))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(66)
			Dynamic tmp13 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(66)
			tmp10 = tmp13;
		}
		HX_STACK_LINE(66)
		tmp10->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)11;
		HX_STACK_LINE(67)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Array< ::Dynamic > tmp12 = this->states;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			cpp::ArrayBase tmp13 = tmp12->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp13))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(67)
			Dynamic tmp14 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(67)
			tmp11 = tmp14;
		}
		HX_STACK_LINE(67)
		tmp11->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(69)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Array< ::Dynamic > tmp13 = this->states;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(69)
			cpp::ArrayBase tmp14 = tmp13->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp14))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			Dynamic tmp15 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			tmp12 = tmp15;
		}
		HX_STACK_LINE(69)
		tmp12->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)52;
		HX_STACK_LINE(70)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp14 = this->states;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			cpp::ArrayBase tmp15 = tmp14->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(70)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp15))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(70)
			Dynamic tmp16 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(70)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(70)
		tmp13->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(71)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Array< ::Dynamic > tmp15 = this->states;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			cpp::ArrayBase tmp16 = tmp15->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp16))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(71)
			Dynamic tmp17 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(71)
			tmp14 = tmp17;
		}
		HX_STACK_LINE(71)
		tmp14->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)9;
		HX_STACK_LINE(72)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			Array< ::Dynamic > tmp16 = this->states;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			cpp::ArrayBase tmp17 = tmp16->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(72)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp17))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(72)
			Dynamic tmp18 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(72)
			tmp15 = tmp18;
		}
		HX_STACK_LINE(72)
		tmp15->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(74)
		Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Array< ::Dynamic > tmp17 = this->states;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			cpp::ArrayBase tmp18 = tmp17->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp18))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(74)
			Dynamic tmp19 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(74)
			tmp16 = tmp19;
		}
		HX_STACK_LINE(74)
		tmp16->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)65;
		HX_STACK_LINE(75)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			Array< ::Dynamic > tmp18 = this->states;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(75)
			cpp::ArrayBase tmp19 = tmp18->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(75)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp19))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(75)
			Dynamic tmp20 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(75)
			tmp17 = tmp20;
		}
		HX_STACK_LINE(75)
		tmp17->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(76)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp19 = this->states;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(76)
			cpp::ArrayBase tmp20 = tmp19->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(76)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp20))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(76)
			Dynamic tmp21 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(76)
			tmp18 = tmp21;
		}
		HX_STACK_LINE(76)
		tmp18->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)4;
		HX_STACK_LINE(77)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Array< ::Dynamic > tmp20 = this->states;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			cpp::ArrayBase tmp21 = tmp20->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(77)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp21))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(77)
			Dynamic tmp22 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)4);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(77)
			tmp19 = tmp22;
		}
		HX_STACK_LINE(77)
		tmp19->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(79)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			Array< ::Dynamic > tmp21 = this->states;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(79)
			cpp::ArrayBase tmp22 = tmp21->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(79)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp22))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(79)
			Dynamic tmp23 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(79)
			tmp20 = tmp23;
		}
		HX_STACK_LINE(79)
		tmp20->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)73;
		HX_STACK_LINE(80)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			Array< ::Dynamic > tmp22 = this->states;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(80)
			cpp::ArrayBase tmp23 = tmp22->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(80)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp23))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(80)
			Dynamic tmp24 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(80)
			tmp21 = tmp24;
		}
		HX_STACK_LINE(80)
		tmp21->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(81)
		Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			Array< ::Dynamic > tmp23 = this->states;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(81)
			cpp::ArrayBase tmp24 = tmp23->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(81)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp24))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(81)
			Dynamic tmp25 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(81)
			tmp22 = tmp25;
		}
		HX_STACK_LINE(81)
		tmp22->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)9;
		HX_STACK_LINE(82)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			Array< ::Dynamic > tmp24 = this->states;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(82)
			cpp::ArrayBase tmp25 = tmp24->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(82)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp25))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(82)
			Dynamic tmp26 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)5);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(82)
			tmp23 = tmp26;
		}
		HX_STACK_LINE(82)
		tmp23->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(84)
		Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Array< ::Dynamic > tmp25 = this->states;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(84)
			cpp::ArrayBase tmp26 = tmp25->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(84)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp26))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(84)
			Dynamic tmp27 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(84)
			tmp24 = tmp27;
		}
		HX_STACK_LINE(84)
		tmp24->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)85;
		HX_STACK_LINE(85)
		Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			Array< ::Dynamic > tmp26 = this->states;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(85)
			cpp::ArrayBase tmp27 = tmp26->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(85)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp27))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(85)
			Dynamic tmp28 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(85)
			tmp25 = tmp28;
		}
		HX_STACK_LINE(85)
		tmp25->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(86)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Array< ::Dynamic > tmp27 = this->states;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(86)
			cpp::ArrayBase tmp28 = tmp27->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(86)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp28))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(86)
			Dynamic tmp29 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(86)
			tmp26 = tmp29;
		}
		HX_STACK_LINE(86)
		tmp26->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)11;
		HX_STACK_LINE(87)
		Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			Array< ::Dynamic > tmp28 = this->states;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(87)
			cpp::ArrayBase tmp29 = tmp28->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(87)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp29))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(87)
			Dynamic tmp30 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)6);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(87)
			tmp27 = tmp30;
		}
		HX_STACK_LINE(87)
		tmp27->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(89)
		Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			Array< ::Dynamic > tmp29 = this->states;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(89)
			cpp::ArrayBase tmp30 = tmp29->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(89)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp30))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(89)
			Dynamic tmp31 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(89)
			tmp28 = tmp31;
		}
		HX_STACK_LINE(89)
		tmp28->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)99;
		HX_STACK_LINE(90)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			Array< ::Dynamic > tmp30 = this->states;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(90)
			cpp::ArrayBase tmp31 = tmp30->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(90)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp31))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(90)
			Dynamic tmp32 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(90)
			tmp29 = tmp32;
		}
		HX_STACK_LINE(90)
		tmp29->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(91)
		Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp31 = this->states;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(91)
			cpp::ArrayBase tmp32 = tmp31->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(91)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp32))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(91)
			Dynamic tmp33 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(91)
			tmp30 = tmp33;
		}
		HX_STACK_LINE(91)
		tmp30->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)12;
		HX_STACK_LINE(92)
		Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			Array< ::Dynamic > tmp32 = this->states;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(92)
			cpp::ArrayBase tmp33 = tmp32->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(92)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp33))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(92)
			Dynamic tmp34 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(92)
			tmp31 = tmp34;
		}
		HX_STACK_LINE(92)
		tmp31->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(94)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Array< ::Dynamic > tmp33 = this->states;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(94)
			cpp::ArrayBase tmp34 = tmp33->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(94)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp34))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(94)
			Dynamic tmp35 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(94)
			tmp32 = tmp35;
		}
		HX_STACK_LINE(94)
		tmp32->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)114;
		HX_STACK_LINE(95)
		Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			Array< ::Dynamic > tmp34 = this->states;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(95)
			cpp::ArrayBase tmp35 = tmp34->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(95)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp35))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(95)
			Dynamic tmp36 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(95)
			tmp33 = tmp36;
		}
		HX_STACK_LINE(95)
		tmp33->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(96)
		Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Array< ::Dynamic > tmp35 = this->states;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(96)
			cpp::ArrayBase tmp36 = tmp35->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(96)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp36))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(96)
			Dynamic tmp37 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(96)
			tmp34 = tmp37;
		}
		HX_STACK_LINE(96)
		tmp34->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)14;
		HX_STACK_LINE(97)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			Array< ::Dynamic > tmp36 = this->states;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(97)
			cpp::ArrayBase tmp37 = tmp36->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(97)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp37))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(97)
			Dynamic tmp38 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)8);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(97)
			tmp35 = tmp38;
		}
		HX_STACK_LINE(97)
		tmp35->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(99)
		Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			Array< ::Dynamic > tmp37 = this->states;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(99)
			cpp::ArrayBase tmp38 = tmp37->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(99)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp38))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(99)
			Dynamic tmp39 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(99)
			tmp36 = tmp39;
		}
		HX_STACK_LINE(99)
		tmp36->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)130;
		HX_STACK_LINE(100)
		Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Array< ::Dynamic > tmp38 = this->states;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(100)
			cpp::ArrayBase tmp39 = tmp38->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(100)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp39))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(100)
			Dynamic tmp40 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(100)
			tmp37 = tmp40;
		}
		HX_STACK_LINE(100)
		tmp37->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)3;
		HX_STACK_LINE(101)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			Array< ::Dynamic > tmp39 = this->states;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(101)
			cpp::ArrayBase tmp40 = tmp39->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(101)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp40))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(101)
			Dynamic tmp41 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(101)
			tmp38 = tmp41;
		}
		HX_STACK_LINE(101)
		tmp38->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(102)
		Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			Array< ::Dynamic > tmp40 = this->states;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(102)
			cpp::ArrayBase tmp41 = tmp40->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(102)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp41))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(102)
			Dynamic tmp42 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)9);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(102)
			tmp39 = tmp42;
		}
		HX_STACK_LINE(102)
		tmp39->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)16;
		HX_STACK_LINE(104)
		Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			Array< ::Dynamic > tmp41 = this->states;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(104)
			cpp::ArrayBase tmp42 = tmp41->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(104)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp42))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(104)
			Dynamic tmp43 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(104)
			tmp40 = tmp43;
		}
		HX_STACK_LINE(104)
		tmp40->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)153;
		HX_STACK_LINE(105)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			Array< ::Dynamic > tmp42 = this->states;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(105)
			cpp::ArrayBase tmp43 = tmp42->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(105)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp43))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(105)
			Dynamic tmp44 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(105)
			tmp41 = tmp44;
		}
		HX_STACK_LINE(105)
		tmp41->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)7;
		HX_STACK_LINE(106)
		Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Array< ::Dynamic > tmp43 = this->states;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(106)
			cpp::ArrayBase tmp44 = tmp43->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(106)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp44))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(106)
			Dynamic tmp45 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(106)
			tmp42 = tmp45;
		}
		HX_STACK_LINE(106)
		tmp42->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)14;
		HX_STACK_LINE(107)
		Dynamic tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			Array< ::Dynamic > tmp44 = this->states;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(107)
			cpp::ArrayBase tmp45 = tmp44->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(107)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp45))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(107)
			Dynamic tmp46 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(107)
			tmp43 = tmp46;
		}
		HX_STACK_LINE(107)
		tmp43->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)8;
		HX_STACK_LINE(109)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Array< ::Dynamic > tmp45 = this->states;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(109)
			cpp::ArrayBase tmp46 = tmp45->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(109)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp46))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(109)
			Dynamic tmp47 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(109)
			tmp44 = tmp47;
		}
		HX_STACK_LINE(109)
		tmp44->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(110)
		Dynamic tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			Array< ::Dynamic > tmp46 = this->states;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(110)
			cpp::ArrayBase tmp47 = tmp46->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(110)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp47))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(110)
			Dynamic tmp48 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(110)
			tmp45 = tmp48;
		}
		HX_STACK_LINE(110)
		tmp45->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(111)
		Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Array< ::Dynamic > tmp47 = this->states;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(111)
			cpp::ArrayBase tmp48 = tmp47->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(111)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp48))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(111)
			Dynamic tmp49 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(111)
			tmp46 = tmp49;
		}
		HX_STACK_LINE(111)
		tmp46->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(112)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			Array< ::Dynamic > tmp48 = this->states;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(112)
			cpp::ArrayBase tmp49 = tmp48->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(112)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp49))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(112)
			Dynamic tmp50 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(112)
			tmp47 = tmp50;
		}
		HX_STACK_LINE(112)
		tmp47->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Coin_obj,set_clips,(void))

int Coin_obj::collision( ){
	HX_STACK_FRAME("Coin","collision",0xf1857b75,"Coin.collision","Coin.hx",117,0x01a6c5ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	this->velocityY = (int)0;
	HX_STACK_LINE(120)
	int tmp = this->SCORE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	this->status = tmp;
	HX_STACK_LINE(121)
	this->hasCollided = true;
	HX_STACK_LINE(122)
	return (int)2;
}


Void Coin_obj::move( ){
{
		HX_STACK_FRAME("Coin","move",0xd06ceeee,"Coin.move","Coin.hx",126,0x01a6c5ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		int tmp = this->offSetY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		bool tmp1 = (tmp < (int)298);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		if ((tmp1)){
			HX_STACK_LINE(130)
			int tmp2 = this->velocityY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			hx::AddEq(this->offSetY,tmp2);
		}
		else{
			HX_STACK_LINE(132)
			this->velocityY = (int)0;
		}
		HX_STACK_LINE(134)
		int tmp2 = this->offSetY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		bool tmp3 = (tmp2 > (int)50);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		if ((tmp3)){
			HX_STACK_LINE(135)
			this->velocityX = (int)-10;
			HX_STACK_LINE(136)
			int tmp4 = this->velocityX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			hx::AddEq(this->offSetX,tmp4);
		}
	}
return null();
}


Void Coin_obj::show( ::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("Coin","show",0xd45ee0da,"Coin.show","Coin.hx",141,0x01a6c5ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(143)
		int tmp = this->status;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		int tmp1 = this->SCORE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		if ((tmp2)){
			HX_STACK_LINE(144)
			this->frame = (int)0;
			HX_STACK_LINE(145)
			::cpp::Pointer< SDL_Surface > tmp3 = this->sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::cpp::Pointer< SDL_Surface > tmp4 = screen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(145)
				cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(145)
				cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(145)
				int tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(145)
				Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(145)
				tmp5 = tmp9;
			}
			HX_STACK_LINE(145)
			this->apply_surface(null(),null(),tmp3,tmp4,tmp5);
		}
		HX_STACK_LINE(147)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		int tmp4 = this->SPIN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		if ((tmp5)){
			HX_STACK_LINE(148)
			int tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			bool tmp7 = (tmp6 < (int)9);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			if ((tmp7)){
				HX_STACK_LINE(149)
				(this->frame)++;
			}
			else{
				HX_STACK_LINE(151)
				this->frame = (int)0;
			}
			HX_STACK_LINE(153)
			::cpp::Pointer< SDL_Surface > tmp8 = this->sprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(153)
			::cpp::Pointer< SDL_Surface > tmp9 = screen;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(153)
			Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				Array< ::Dynamic > tmp11 = this->states;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				cpp::ArrayBase tmp12 = tmp11->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(153)
				cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp12))));		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(153)
				int tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(153)
				Dynamic tmp14 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(153)
				tmp10 = tmp14;
			}
			HX_STACK_LINE(153)
			this->apply_surface(null(),null(),tmp8,tmp9,tmp10);
		}
	}
return null();
}



Coin_obj::Coin_obj()
{
}

Dynamic Coin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SPIN") ) { return SPIN; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCORE") ) { return SCORE; }
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

Dynamic Coin_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"SPIN") ) { SPIN=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCORE") ) { SCORE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Coin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SCORE","\x32","\xab","\xc7","\xf6"));
	outFields->push(HX_HCSTRING("SPIN","\xc2","\xa9","\x19","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Coin_obj,SCORE),HX_HCSTRING("SCORE","\x32","\xab","\xc7","\xf6")},
	{hx::fsInt,(int)offsetof(Coin_obj,SPIN),HX_HCSTRING("SPIN","\xc2","\xa9","\x19","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("SCORE","\x32","\xab","\xc7","\xf6"),
	HX_HCSTRING("SPIN","\xc2","\xa9","\x19","\x37"),
	HX_HCSTRING("getOffSetX","\x8f","\xbb","\x9f","\x11"),
	HX_HCSTRING("getOffSetY","\x90","\xbb","\x9f","\x11"),
	HX_HCSTRING("set_clips","\x06","\xd0","\x58","\x6f"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

#endif

hx::Class Coin_obj::__mClass;

void Coin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Coin_obj >;
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

