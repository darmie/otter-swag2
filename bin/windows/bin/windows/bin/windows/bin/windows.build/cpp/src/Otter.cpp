#include <hxcpp.h>

#include "linc_sdl.h"
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Otter
#include <Otter.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif

Void Otter_obj::__construct(::String filename,int r,int g,int b)
{
HX_STACK_FRAME("Otter","new",0xff8a20ae,"Otter.new","Otter.hx",25,0x52a70e82)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(r,"r")
HX_STACK_ARG(g,"g")
HX_STACK_ARG(b,"b")
{
	HX_STACK_LINE(26)
	super::__construct((int)4);
	HX_STACK_LINE(28)
	this->SPRITE_DOWN = (int)0;
	HX_STACK_LINE(29)
	this->SPRITE_UP = (int)1;
	HX_STACK_LINE(30)
	this->SPRITE_WALK = (int)2;
	HX_STACK_LINE(31)
	this->ROLL = (int)3;
	HX_STACK_LINE(35)
	this->height = (int)32;
	HX_STACK_LINE(36)
	this->width = (int)32;
	HX_STACK_LINE(39)
	this->offSetY = (int)-35;
	HX_STACK_LINE(40)
	this->offSetX = (int)50;
	HX_STACK_LINE(41)
	this->velocityX = (int)0;
	HX_STACK_LINE(42)
	this->velocityY = (int)0;
	HX_STACK_LINE(44)
	this->isStarting = true;
	HX_STACK_LINE(47)
	this->frame = (int)0;
	HX_STACK_LINE(48)
	int tmp = this->SPRITE_DOWN;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	this->status = tmp;
	HX_STACK_LINE(51)
	::String tmp1 = filename;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	int tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	int tmp3 = g;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	::cpp::Pointer< SDL_Surface > tmp5 = this->load_image(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	this->sprite = tmp5;
	HX_STACK_LINE(54)
	this->set_clips();
	HX_STACK_LINE(56)
	this->isVisible = true;
	HX_STACK_LINE(57)
	this->isDead = false;
}
;
	return null();
}

//Otter_obj::~Otter_obj() { }

Dynamic Otter_obj::__CreateEmpty() { return  new Otter_obj; }
hx::ObjectPtr< Otter_obj > Otter_obj::__new(::String filename,int r,int g,int b)
{  hx::ObjectPtr< Otter_obj > _result_ = new Otter_obj();
	_result_->__construct(filename,r,g,b);
	return _result_;}

Dynamic Otter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Otter_obj > _result_ = new Otter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Otter_obj::setDead( bool dead){
{
		HX_STACK_FRAME("Otter","setDead",0xd1ca1eb4,"Otter.setDead","Otter.hx",61,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dead,"dead")
		HX_STACK_LINE(62)
		bool tmp = dead;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(62)
			this->isDead = true;
		}
		else{
			HX_STACK_LINE(63)
			this->isDead = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,setDead,(void))

Void Otter_obj::set_clips( ){
{
		HX_STACK_FRAME("Otter","set_clips",0x1bb54ed4,"Otter.set_clips","Otter.hx",66,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Array< ::Dynamic > tmp1 = this->states;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			cpp::ArrayBase tmp2 = tmp1->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp2))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(68)
			Dynamic tmp3 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			tmp = tmp3;
		}
		HX_STACK_LINE(68)
		tmp->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)215;
		HX_STACK_LINE(69)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			Array< ::Dynamic > tmp2 = this->states;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			cpp::ArrayBase tmp3 = tmp2->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp3))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(69)
			Dynamic tmp4 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			tmp1 = tmp4;
		}
		HX_STACK_LINE(69)
		tmp1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(70)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			Array< ::Dynamic > tmp3 = this->states;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			cpp::ArrayBase tmp4 = tmp3->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp4))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(70)
			Dynamic tmp5 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			tmp2 = tmp5;
		}
		HX_STACK_LINE(70)
		tmp2->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)33;
		HX_STACK_LINE(71)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Array< ::Dynamic > tmp5 = this->states;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			cpp::ArrayBase tmp6 = tmp5->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp6))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(71)
			Dynamic tmp7 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			tmp4 = tmp7;
		}
		HX_STACK_LINE(71)
		tmp4->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp3;
		HX_STACK_LINE(73)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Array< ::Dynamic > tmp6 = this->states;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(73)
			cpp::ArrayBase tmp7 = tmp6->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp7))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(73)
			Dynamic tmp8 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			tmp5 = tmp8;
		}
		HX_STACK_LINE(73)
		tmp5->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)248;
		HX_STACK_LINE(74)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			Array< ::Dynamic > tmp7 = this->states;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			cpp::ArrayBase tmp8 = tmp7->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp8))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(74)
			Dynamic tmp9 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			tmp6 = tmp9;
		}
		HX_STACK_LINE(74)
		tmp6->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(75)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			Array< ::Dynamic > tmp8 = this->states;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(75)
			cpp::ArrayBase tmp9 = tmp8->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(75)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp9))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(75)
			Dynamic tmp10 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(75)
			tmp7 = tmp10;
		}
		HX_STACK_LINE(75)
		tmp7->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(76)
		int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			Array< ::Dynamic > tmp10 = this->states;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(76)
			cpp::ArrayBase tmp11 = tmp10->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(76)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp11))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(76)
			Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			tmp9 = tmp12;
		}
		HX_STACK_LINE(76)
		tmp9->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp8;
		HX_STACK_LINE(78)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Array< ::Dynamic > tmp11 = this->states;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(78)
			cpp::ArrayBase tmp12 = tmp11->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(78)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp12))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(78)
			Dynamic tmp13 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(78)
			tmp10 = tmp13;
		}
		HX_STACK_LINE(78)
		tmp10->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)411;
		HX_STACK_LINE(79)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			Array< ::Dynamic > tmp12 = this->states;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			cpp::ArrayBase tmp13 = tmp12->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(79)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp13))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(79)
			Dynamic tmp14 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(79)
			tmp11 = tmp14;
		}
		HX_STACK_LINE(79)
		tmp11->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(80)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			Array< ::Dynamic > tmp13 = this->states;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(80)
			cpp::ArrayBase tmp14 = tmp13->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(80)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp14))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(80)
			Dynamic tmp15 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(80)
			tmp12 = tmp15;
		}
		HX_STACK_LINE(80)
		tmp12->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(81)
		int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			Array< ::Dynamic > tmp15 = this->states;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			cpp::ArrayBase tmp16 = tmp15->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(81)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp16))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(81)
			Dynamic tmp17 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(81)
			tmp14 = tmp17;
		}
		HX_STACK_LINE(81)
		tmp14->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp13;
		HX_STACK_LINE(83)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			Array< ::Dynamic > tmp16 = this->states;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(83)
			cpp::ArrayBase tmp17 = tmp16->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(83)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp17))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(83)
			Dynamic tmp18 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(83)
			tmp15 = tmp18;
		}
		HX_STACK_LINE(83)
		tmp15->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)411;
		HX_STACK_LINE(84)
		Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Array< ::Dynamic > tmp17 = this->states;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			cpp::ArrayBase tmp18 = tmp17->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp18))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(84)
			Dynamic tmp19 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(84)
			tmp16 = tmp19;
		}
		HX_STACK_LINE(84)
		tmp16->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(85)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			Array< ::Dynamic > tmp18 = this->states;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(85)
			cpp::ArrayBase tmp19 = tmp18->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(85)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp19))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(85)
			Dynamic tmp20 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(85)
			tmp17 = tmp20;
		}
		HX_STACK_LINE(85)
		tmp17->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)32;
		HX_STACK_LINE(86)
		int tmp18 = this->height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(86)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Array< ::Dynamic > tmp20 = this->states;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(86)
			cpp::ArrayBase tmp21 = tmp20->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(86)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp21))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(86)
			Dynamic tmp22 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(86)
			tmp19 = tmp22;
		}
		HX_STACK_LINE(86)
		tmp19->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp18;
		HX_STACK_LINE(88)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			Array< ::Dynamic > tmp21 = this->states;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(88)
			cpp::ArrayBase tmp22 = tmp21->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(88)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp22))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(88)
			Dynamic tmp23 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(88)
			tmp20 = tmp23;
		}
		HX_STACK_LINE(88)
		tmp20->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)312;
		HX_STACK_LINE(89)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			Array< ::Dynamic > tmp22 = this->states;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(89)
			cpp::ArrayBase tmp23 = tmp22->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(89)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp23))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(89)
			Dynamic tmp24 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(89)
			tmp21 = tmp24;
		}
		HX_STACK_LINE(89)
		tmp21->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(90)
		Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			Array< ::Dynamic > tmp23 = this->states;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(90)
			cpp::ArrayBase tmp24 = tmp23->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(90)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp24))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(90)
			Dynamic tmp25 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(90)
			tmp22 = tmp25;
		}
		HX_STACK_LINE(90)
		tmp22->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)33;
		HX_STACK_LINE(91)
		int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(91)
		Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Array< ::Dynamic > tmp25 = this->states;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(91)
			cpp::ArrayBase tmp26 = tmp25->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(91)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp26))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(91)
			Dynamic tmp27 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(91)
			tmp24 = tmp27;
		}
		HX_STACK_LINE(91)
		tmp24->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp23;
		HX_STACK_LINE(93)
		Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			Array< ::Dynamic > tmp26 = this->states;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(93)
			cpp::ArrayBase tmp27 = tmp26->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(93)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp27))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(93)
			Dynamic tmp28 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(93)
			tmp25 = tmp28;
		}
		HX_STACK_LINE(93)
		tmp25->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)345;
		HX_STACK_LINE(94)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Array< ::Dynamic > tmp27 = this->states;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(94)
			cpp::ArrayBase tmp28 = tmp27->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(94)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp28))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(94)
			Dynamic tmp29 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(94)
			tmp26 = tmp29;
		}
		HX_STACK_LINE(94)
		tmp26->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(95)
		Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			Array< ::Dynamic > tmp28 = this->states;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(95)
			cpp::ArrayBase tmp29 = tmp28->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(95)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp29))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(95)
			Dynamic tmp30 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(95)
			tmp27 = tmp30;
		}
		HX_STACK_LINE(95)
		tmp27->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)33;
		HX_STACK_LINE(96)
		int tmp28 = this->height;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(96)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Array< ::Dynamic > tmp30 = this->states;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(96)
			cpp::ArrayBase tmp31 = tmp30->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(96)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp31))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(96)
			Dynamic tmp32 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(96)
			tmp29 = tmp32;
		}
		HX_STACK_LINE(96)
		tmp29->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp28;
		HX_STACK_LINE(98)
		Dynamic tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			Array< ::Dynamic > tmp31 = this->states;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(98)
			cpp::ArrayBase tmp32 = tmp31->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(98)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp32))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(98)
			Dynamic tmp33 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(98)
			tmp30 = tmp33;
		}
		HX_STACK_LINE(98)
		tmp30->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)64;
		HX_STACK_LINE(99)
		Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			Array< ::Dynamic > tmp32 = this->states;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(99)
			cpp::ArrayBase tmp33 = tmp32->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(99)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp33))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(99)
			Dynamic tmp34 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(99)
			tmp31 = tmp34;
		}
		HX_STACK_LINE(99)
		tmp31->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(100)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Array< ::Dynamic > tmp33 = this->states;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(100)
			cpp::ArrayBase tmp34 = tmp33->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(100)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp34))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(100)
			Dynamic tmp35 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(100)
			tmp32 = tmp35;
		}
		HX_STACK_LINE(100)
		tmp32->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)33;
		HX_STACK_LINE(101)
		int tmp33 = this->height;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(101)
		Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			Array< ::Dynamic > tmp35 = this->states;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(101)
			cpp::ArrayBase tmp36 = tmp35->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(101)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp36))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(101)
			Dynamic tmp37 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)0);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(101)
			tmp34 = tmp37;
		}
		HX_STACK_LINE(101)
		tmp34->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp33;
		HX_STACK_LINE(103)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			Array< ::Dynamic > tmp36 = this->states;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(103)
			cpp::ArrayBase tmp37 = tmp36->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(103)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp37))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(103)
			Dynamic tmp38 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(103)
			tmp35 = tmp38;
		}
		HX_STACK_LINE(103)
		tmp35->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)97;
		HX_STACK_LINE(104)
		Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			Array< ::Dynamic > tmp37 = this->states;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(104)
			cpp::ArrayBase tmp38 = tmp37->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(104)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp38))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(104)
			Dynamic tmp39 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(104)
			tmp36 = tmp39;
		}
		HX_STACK_LINE(104)
		tmp36->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(105)
		Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			Array< ::Dynamic > tmp38 = this->states;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(105)
			cpp::ArrayBase tmp39 = tmp38->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(105)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp39))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(105)
			Dynamic tmp40 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(105)
			tmp37 = tmp40;
		}
		HX_STACK_LINE(105)
		tmp37->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(106)
		int tmp38 = this->height;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(106)
		Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Array< ::Dynamic > tmp40 = this->states;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(106)
			cpp::ArrayBase tmp41 = tmp40->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(106)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp41))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(106)
			Dynamic tmp42 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)1);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(106)
			tmp39 = tmp42;
		}
		HX_STACK_LINE(106)
		tmp39->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp38;
		HX_STACK_LINE(108)
		Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			Array< ::Dynamic > tmp41 = this->states;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(108)
			cpp::ArrayBase tmp42 = tmp41->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(108)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp42))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(108)
			Dynamic tmp43 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(108)
			tmp40 = tmp43;
		}
		HX_STACK_LINE(108)
		tmp40->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)123;
		HX_STACK_LINE(109)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Array< ::Dynamic > tmp42 = this->states;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(109)
			cpp::ArrayBase tmp43 = tmp42->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(109)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp43))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(109)
			Dynamic tmp44 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(109)
			tmp41 = tmp44;
		}
		HX_STACK_LINE(109)
		tmp41->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(110)
		Dynamic tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			Array< ::Dynamic > tmp43 = this->states;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(110)
			cpp::ArrayBase tmp44 = tmp43->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(110)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp44))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(110)
			Dynamic tmp45 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(110)
			tmp42 = tmp45;
		}
		HX_STACK_LINE(110)
		tmp42->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)33;
		HX_STACK_LINE(111)
		int tmp43 = this->height;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(111)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Array< ::Dynamic > tmp45 = this->states;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(111)
			cpp::ArrayBase tmp46 = tmp45->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(111)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp46))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(111)
			Dynamic tmp47 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)2);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(111)
			tmp44 = tmp47;
		}
		HX_STACK_LINE(111)
		tmp44->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp43;
		HX_STACK_LINE(113)
		Dynamic tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			Array< ::Dynamic > tmp46 = this->states;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(113)
			cpp::ArrayBase tmp47 = tmp46->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(113)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp47))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(113)
			Dynamic tmp48 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(113)
			tmp45 = tmp48;
		}
		HX_STACK_LINE(113)
		tmp45->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = (int)156;
		HX_STACK_LINE(114)
		Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			Array< ::Dynamic > tmp47 = this->states;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(114)
			cpp::ArrayBase tmp48 = tmp47->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(114)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp48))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(114)
			Dynamic tmp49 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(114)
			tmp46 = tmp49;
		}
		HX_STACK_LINE(114)
		tmp46->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = (int)0;
		HX_STACK_LINE(115)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			Array< ::Dynamic > tmp48 = this->states;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(115)
			cpp::ArrayBase tmp49 = tmp48->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(115)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp49))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(115)
			Dynamic tmp50 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(115)
			tmp47 = tmp50;
		}
		HX_STACK_LINE(115)
		tmp47->__FieldRef(HX_HCSTRING("w","\x77","\x00","\x00","\x00")) = (int)26;
		HX_STACK_LINE(116)
		int tmp48 = this->height;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(116)
		Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			Array< ::Dynamic > tmp50 = this->states;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(116)
			cpp::ArrayBase tmp51 = tmp50->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(116)
			cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp51))));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(116)
			Dynamic tmp52 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )((int)3);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(116)
			tmp49 = tmp52;
		}
		HX_STACK_LINE(116)
		tmp49->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp48;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Otter_obj,set_clips,(void))

int Otter_obj::getOffSetX( ){
	HX_STACK_FRAME("Otter","getOffSetX",0x36323101,"Otter.getOffSetX","Otter.hx",120,0x52a70e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	int tmp = this->offSetX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	return tmp;
}


int Otter_obj::getOffSetY( ){
	HX_STACK_FRAME("Otter","getOffSetY",0x36323102,"Otter.getOffSetY","Otter.hx",124,0x52a70e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	int tmp = this->offSetX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


Void Otter_obj::setOffSetY( int num){
{
		HX_STACK_FRAME("Otter","setOffSetY",0x39afcf76,"Otter.setOffSetY","Otter.hx",130,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(num,"num")
		HX_STACK_LINE(130)
		this->offSetY = num;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,setOffSetY,(void))

Void Otter_obj::setStarting( bool val){
{
		HX_STACK_FRAME("Otter","setStarting",0x4ea119d0,"Otter.setStarting","Otter.hx",134,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(134)
		this->isStarting = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,setStarting,(void))

int Otter_obj::collision( ){
	HX_STACK_FRAME("Otter","collision",0x87972740,"Otter.collision","Otter.hx",139,0x52a70e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	return (int)0;
}


Void Otter_obj::setIsVisible( bool vis){
{
		HX_STACK_FRAME("Otter","setIsVisible",0x11a2eb98,"Otter.setIsVisible","Otter.hx",143,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vis,"vis")
		HX_STACK_LINE(143)
		this->isVisible = vis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,setIsVisible,(void))

bool Otter_obj::check_collision( ::Sprite obstacle){
	HX_STACK_FRAME("Otter","check_collision",0x199a1449,"Otter.check_collision","Otter.hx",147,0x52a70e82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obstacle,"obstacle")
	HX_STACK_LINE(148)
	bool tmp = this->isDead;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	if ((tmp)){
		HX_STACK_LINE(148)
		return false;
	}
	HX_STACK_LINE(149)
	bool tmp1 = obstacle->getHasCollided();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	if ((tmp1)){
		HX_STACK_LINE(149)
		return false;
	}
	HX_STACK_LINE(151)
	int tmp2 = obstacle->getOffSetX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	int x = tmp2;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(152)
	int tmp3 = obstacle->getOffSetY();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	int y = tmp3;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(154)
	int leftOtter;		HX_STACK_VAR(leftOtter,"leftOtter");
	HX_STACK_LINE(154)
	int leftObstacle;		HX_STACK_VAR(leftObstacle,"leftObstacle");
	HX_STACK_LINE(155)
	int rightOtter;		HX_STACK_VAR(rightOtter,"rightOtter");
	HX_STACK_LINE(155)
	int rightObstacle;		HX_STACK_VAR(rightObstacle,"rightObstacle");
	HX_STACK_LINE(156)
	int topOtter;		HX_STACK_VAR(topOtter,"topOtter");
	HX_STACK_LINE(156)
	int topObstacle;		HX_STACK_VAR(topObstacle,"topObstacle");
	HX_STACK_LINE(157)
	int bottomOtter;		HX_STACK_VAR(bottomOtter,"bottomOtter");
	HX_STACK_LINE(157)
	int bottomObstacle;		HX_STACK_VAR(bottomObstacle,"bottomObstacle");
	HX_STACK_LINE(160)
	leftObstacle = x;
	HX_STACK_LINE(161)
	int tmp4 = (x + (int)24);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	rightObstacle = tmp4;
	HX_STACK_LINE(162)
	topObstacle = y;
	HX_STACK_LINE(163)
	int tmp5 = (y + (int)10);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(163)
	bottomObstacle = tmp5;
	HX_STACK_LINE(164)
	bottomOtter = (int)0;
	HX_STACK_LINE(165)
	topOtter = (int)0;
	HX_STACK_LINE(166)
	rightOtter = (int)0;
	HX_STACK_LINE(167)
	leftOtter = (int)0;
	HX_STACK_LINE(170)
	int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(170)
	int tmp7 = this->SPRITE_UP;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(170)
	bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(170)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(170)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(170)
	if ((tmp9)){
		HX_STACK_LINE(170)
		int tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(170)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		tmp10 = (tmp12 == (int)0);
	}
	else{
		HX_STACK_LINE(170)
		tmp10 = true;
	}
	HX_STACK_LINE(170)
	if ((tmp10)){
		HX_STACK_LINE(171)
		int tmp11 = this->offSetX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(171)
		leftOtter = tmp11;
		HX_STACK_LINE(172)
		int tmp12 = this->offSetX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(172)
		int tmp13 = (tmp12 + (int)32);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(172)
		rightOtter = tmp13;
		HX_STACK_LINE(173)
		int tmp14 = this->offSetY;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(173)
		int tmp15 = (tmp14 + (int)7);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(173)
		topOtter = tmp15;
		HX_STACK_LINE(174)
		int tmp16 = this->offSetY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(174)
		int tmp17 = (tmp16 + (int)31);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(174)
		bottomOtter = tmp17;
	}
	HX_STACK_LINE(177)
	int tmp11 = this->status;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(177)
	int tmp12 = this->SPRITE_UP;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(177)
	bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(177)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(177)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(177)
	if ((tmp14)){
		HX_STACK_LINE(177)
		int tmp16 = this->frame;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(177)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(177)
		tmp15 = (tmp17 == (int)1);
	}
	else{
		HX_STACK_LINE(177)
		tmp15 = true;
	}
	HX_STACK_LINE(177)
	if ((tmp15)){
		HX_STACK_LINE(178)
		int tmp16 = this->offSetX;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(178)
		leftOtter = tmp16;
		HX_STACK_LINE(179)
		int tmp17 = this->offSetX;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(179)
		int tmp18 = (tmp17 + (int)32);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(179)
		rightOtter = tmp18;
		HX_STACK_LINE(180)
		int tmp19 = this->offSetY;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(180)
		int tmp20 = (tmp19 + (int)3);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(180)
		topOtter = tmp20;
		HX_STACK_LINE(181)
		int tmp21 = this->offSetY;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(181)
		int tmp22 = (tmp21 + (int)31);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(181)
		bottomOtter = tmp22;
	}
	HX_STACK_LINE(184)
	int tmp16 = this->status;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(184)
	int tmp17 = this->SPRITE_DOWN;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(184)
	bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(184)
	if ((tmp18)){
		HX_STACK_LINE(185)
		int tmp19 = this->offSetX;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(185)
		leftOtter = tmp19;
		HX_STACK_LINE(186)
		int tmp20 = this->offSetX;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(186)
		int tmp21 = (tmp20 + (int)32);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(186)
		rightOtter = tmp21;
		HX_STACK_LINE(187)
		int tmp22 = this->offSetY;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(187)
		int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(187)
		topOtter = tmp23;
		HX_STACK_LINE(188)
		int tmp24 = this->offSetY;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(188)
		int tmp25 = (tmp24 + (int)31);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(188)
		bottomOtter = tmp25;
	}
	HX_STACK_LINE(191)
	int tmp19 = this->status;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(191)
	int tmp20 = this->SPRITE_WALK;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(191)
	bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(191)
	if ((tmp21)){
		HX_STACK_LINE(192)
		int tmp22 = this->offSetX;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(192)
		leftOtter = tmp22;
		HX_STACK_LINE(193)
		int tmp23 = this->offSetX;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(193)
		int tmp24 = (tmp23 + (int)31);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(193)
		rightOtter = tmp24;
		HX_STACK_LINE(194)
		int tmp25 = this->offSetY;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(194)
		int tmp26 = (tmp25 + (int)13);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(194)
		topOtter = tmp26;
		HX_STACK_LINE(195)
		int tmp27 = this->offSetY;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(195)
		int tmp28 = (tmp27 + (int)31);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(195)
		bottomOtter = tmp28;
	}
	HX_STACK_LINE(199)
	int tmp22 = this->status;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(199)
	int tmp23 = this->ROLL;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(199)
	bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(199)
	bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(199)
	if ((tmp24)){
		HX_STACK_LINE(199)
		int tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(199)
		int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(199)
		bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(199)
		bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(199)
		bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(199)
		bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(199)
		bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(199)
		bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(199)
		if ((tmp33)){
			HX_STACK_LINE(199)
			int tmp34 = this->frame;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(199)
			int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(199)
			int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(199)
			tmp25 = (tmp36 == (int)2);
		}
		else{
			HX_STACK_LINE(199)
			tmp25 = true;
		}
	}
	else{
		HX_STACK_LINE(199)
		tmp25 = false;
	}
	HX_STACK_LINE(199)
	if ((tmp25)){
		HX_STACK_LINE(200)
		int tmp26 = this->offSetX;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(200)
		leftOtter = tmp26;
		HX_STACK_LINE(201)
		int tmp27 = this->offSetX;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(201)
		int tmp28 = (tmp27 + (int)33);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(201)
		rightOtter = tmp28;
		HX_STACK_LINE(202)
		int tmp29 = this->offSetY;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(202)
		int tmp30 = (tmp29 + (int)6);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(202)
		topOtter = tmp30;
		HX_STACK_LINE(203)
		int tmp31 = this->offSetY;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(203)
		int tmp32 = (tmp31 + (int)32);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(203)
		bottomOtter = tmp32;
	}
	HX_STACK_LINE(206)
	int tmp26 = this->status;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(206)
	int tmp27 = this->ROLL;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(206)
	bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(206)
	bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(206)
	if ((tmp28)){
		HX_STACK_LINE(206)
		int tmp30 = this->frame;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(206)
		int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(206)
		bool tmp32 = (tmp31 == (int)1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(206)
		bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(206)
		bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(206)
		bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(206)
		bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(206)
		bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(206)
		if ((tmp37)){
			HX_STACK_LINE(206)
			int tmp38 = this->frame;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(206)
			int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(206)
			int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(206)
			tmp29 = (tmp40 == (int)3);
		}
		else{
			HX_STACK_LINE(206)
			tmp29 = true;
		}
	}
	else{
		HX_STACK_LINE(206)
		tmp29 = false;
	}
	HX_STACK_LINE(206)
	if ((tmp29)){
		HX_STACK_LINE(207)
		int tmp30 = this->offSetX;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(207)
		leftOtter = tmp30;
		HX_STACK_LINE(208)
		int tmp31 = this->offSetX;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(208)
		int tmp32 = (tmp31 + (int)26);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(208)
		rightOtter = tmp32;
		HX_STACK_LINE(209)
		int tmp33 = this->offSetY;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(209)
		topOtter = tmp33;
		HX_STACK_LINE(210)
		int tmp34 = this->offSetY;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(210)
		int tmp35 = (tmp34 + (int)32);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(210)
		bottomOtter = tmp35;
	}
	HX_STACK_LINE(214)
	bool tmp30 = (bottomOtter <= topObstacle);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(214)
	if ((tmp30)){
		HX_STACK_LINE(215)
		return false;
	}
	HX_STACK_LINE(218)
	bool tmp31 = (topOtter >= bottomObstacle);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(218)
	if ((tmp31)){
		HX_STACK_LINE(219)
		return false;
	}
	HX_STACK_LINE(222)
	bool tmp32 = (rightOtter <= leftObstacle);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(222)
	if ((tmp32)){
		HX_STACK_LINE(223)
		return false;
	}
	HX_STACK_LINE(226)
	bool tmp33 = (leftOtter >= rightObstacle);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(226)
	if ((tmp33)){
		HX_STACK_LINE(227)
		return false;
	}
	HX_STACK_LINE(231)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,check_collision,return )

Void Otter_obj::handle_events( ::cpp::Struct<SDL_Event> event){
{
		HX_STACK_FRAME("Otter","handle_events",0x74041fde,"Otter.handle_events","Otter.hx",235,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(237)
		bool tmp = (event->type == (int)768);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		if ((tmp)){
			HX_STACK_LINE(238)
			SDL_Keysym tmp1 = event->key.keysym;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(238)
			int tmp2 = tmp1.sym;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(238)
			 const ::cpp::Char *  tmp3 = SDL_GetKeyName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			::String _g = ((::String)(tmp3));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			::String tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			::String _switch_1 = (tmp4);
			if (  ( _switch_1==HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14"))){
				HX_STACK_LINE(239)
				int tmp5 = (int)-1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(239)
				int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(239)
				Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(239)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(239)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(239)
				this->velocityY = tmp9;
			}
		}
		HX_STACK_LINE(244)
		bool tmp1 = (event->type == (int)769);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		if ((tmp1)){
			HX_STACK_LINE(246)
			SDL_Keysym tmp2 = event->key.keysym;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			int tmp3 = tmp2.sym;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			 const ::cpp::Char *  tmp4 = SDL_GetKeyName(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			::String _g = ((::String)(tmp4));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(246)
			::String tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(246)
			::String _switch_2 = (tmp5);
			if (  ( _switch_2==HX_HCSTRING("Space","\xa6","\xfc","\x93","\x14"))){
				HX_STACK_LINE(247)
				int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(247)
				Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(247)
				int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				this->velocityY = tmp8;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,handle_events,(void))

Void Otter_obj::move( ){
{
		HX_STACK_FRAME("Otter","move",0x98b0d703,"Otter.move","Otter.hx",256,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(258)
		bool tmp = this->isStarting;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		if ((tmp)){
			HX_STACK_LINE(260)
			int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(260)
			Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			tmp3 = hx::TCast< ::Int >::cast(tmp2);
			HX_STACK_LINE(260)
			hx::AddEq(this->offSetY,tmp3);
			HX_STACK_LINE(261)
			bool tmp4 = this->isStarting;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(261)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			if ((tmp4)){
				HX_STACK_LINE(261)
				int tmp6 = this->offSetY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(261)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(261)
				tmp5 = (tmp7 > (int)20);
			}
			else{
				HX_STACK_LINE(261)
				tmp5 = false;
			}
			HX_STACK_LINE(261)
			if ((tmp5)){
				HX_STACK_LINE(261)
				this->isStarting = false;
			}
		}
		else{
			HX_STACK_LINE(264)
			int tmp1 = this->velocityY;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(264)
			hx::AddEq(this->offSetY,tmp1);
			HX_STACK_LINE(267)
			int tmp2 = this->offSetY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(267)
			bool tmp3 = (tmp2 < (int)20);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(267)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			if ((tmp5)){
				HX_STACK_LINE(267)
				int tmp7 = this->offSetY;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(267)
				int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(267)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(267)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(267)
				int tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(267)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(267)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(267)
				int tmp16 = this->SCREEN_HEIGHT;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(267)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(267)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(267)
				tmp6 = (tmp15 > tmp18);
			}
			else{
				HX_STACK_LINE(267)
				tmp6 = true;
			}
			HX_STACK_LINE(267)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			if ((tmp6)){
				HX_STACK_LINE(267)
				bool tmp8 = this->isStarting;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(267)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(267)
				tmp7 = !(tmp10);
			}
			else{
				HX_STACK_LINE(267)
				tmp7 = false;
			}
			HX_STACK_LINE(267)
			if ((tmp7)){
				HX_STACK_LINE(268)
				int tmp8 = this->velocityY;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(268)
				hx::SubEq(this->offSetY,tmp8);
			}
		}
	}
return null();
}


Void Otter_obj::show( ::cpp::Pointer< SDL_Surface > screen){
{
		HX_STACK_FRAME("Otter","show",0x9ca2c8ef,"Otter.show","Otter.hx",276,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screen,"screen")
		HX_STACK_LINE(278)
		bool tmp = this->isVisible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		if ((tmp)){
			HX_STACK_LINE(280)
			int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			int tmp2 = this->ROLL;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(280)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			if ((tmp3)){
				HX_STACK_LINE(282)
				int tmp4 = this->velocityY;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(282)
				bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(282)
				if ((tmp5)){
					HX_STACK_LINE(284)
					int tmp6 = this->offSetY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(284)
					bool tmp7 = (tmp6 > (int)280);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(284)
					if ((tmp7)){
						HX_STACK_LINE(285)
						int tmp8 = this->SPRITE_WALK;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(285)
						this->status = tmp8;
					}
					else{
						HX_STACK_LINE(288)
						int tmp8 = this->SPRITE_DOWN;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(288)
						this->status = tmp8;
					}
					HX_STACK_LINE(291)
					(this->frame)++;
				}
				else{
					HX_STACK_LINE(294)
					int tmp6 = this->velocityY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(294)
					bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					if ((tmp7)){
						HX_STACK_LINE(295)
						int tmp8 = this->SPRITE_UP;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(295)
						this->status = tmp8;
						HX_STACK_LINE(296)
						(this->frame)++;
					}
					else{
						HX_STACK_LINE(299)
						this->frame = (int)0;
					}
				}
				HX_STACK_LINE(303)
				int tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(303)
				bool tmp7 = (tmp6 > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(303)
				if ((tmp7)){
					HX_STACK_LINE(304)
					this->frame = (int)0;
				}
				HX_STACK_LINE(308)
				int tmp8 = this->status;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(308)
				int tmp9 = this->SPRITE_UP;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(308)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(308)
				if ((tmp10)){
					HX_STACK_LINE(309)
					::cpp::Pointer< SDL_Surface > tmp11 = this->sprite;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(309)
					::cpp::Pointer< SDL_Surface > tmp12 = screen;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(309)
					Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(309)
					{
						HX_STACK_LINE(309)
						Array< ::Dynamic > tmp14 = this->states;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(309)
						cpp::ArrayBase tmp15 = tmp14->__unsafe_get((int)0).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(309)
						cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp15))));		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(309)
						int tmp16 = this->frame;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(309)
						Dynamic tmp17 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(309)
						tmp13 = tmp17;
					}
					HX_STACK_LINE(309)
					this->apply_surface(null(),null(),tmp11,tmp12,tmp13);
				}
				else{
					HX_STACK_LINE(311)
					int tmp11 = this->status;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(311)
					int tmp12 = this->SPRITE_DOWN;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(311)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(311)
					if ((tmp13)){
						HX_STACK_LINE(312)
						::cpp::Pointer< SDL_Surface > tmp14 = this->sprite;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(312)
						::cpp::Pointer< SDL_Surface > tmp15 = screen;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(312)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							Array< ::Dynamic > tmp17 = this->states;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(312)
							cpp::ArrayBase tmp18 = tmp17->__unsafe_get((int)1).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(312)
							cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp18))));		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(312)
							int tmp19 = this->frame;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(312)
							Dynamic tmp20 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(312)
							tmp16 = tmp20;
						}
						HX_STACK_LINE(312)
						this->apply_surface(null(),null(),tmp14,tmp15,tmp16);
					}
					else{
						HX_STACK_LINE(314)
						int tmp14 = this->status;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(314)
						int tmp15 = this->SPRITE_WALK;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(314)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(314)
						if ((tmp16)){
							HX_STACK_LINE(315)
							::cpp::Pointer< SDL_Surface > tmp17 = this->sprite;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(315)
							::cpp::Pointer< SDL_Surface > tmp18 = screen;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(315)
							Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(315)
							{
								HX_STACK_LINE(315)
								Array< ::Dynamic > tmp20 = this->states;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(315)
								cpp::ArrayBase tmp21 = tmp20->__unsafe_get((int)2).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(315)
								cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp21))));		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(315)
								int tmp22 = this->frame;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(315)
								Dynamic tmp23 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(315)
								tmp19 = tmp23;
							}
							HX_STACK_LINE(315)
							this->apply_surface(null(),null(),tmp17,tmp18,tmp19);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(319)
				int tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(319)
				bool tmp5 = (tmp4 < (int)3);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(319)
				if ((tmp5)){
					HX_STACK_LINE(320)
					(this->frame)++;
				}
				else{
					HX_STACK_LINE(322)
					this->frame = (int)0;
				}
				HX_STACK_LINE(325)
				::cpp::Pointer< SDL_Surface > tmp6 = this->sprite;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(325)
				::cpp::Pointer< SDL_Surface > tmp7 = screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(325)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					Array< ::Dynamic > tmp9 = this->states;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(325)
					cpp::ArrayBase tmp10 = tmp9->__unsafe_get((int)3).StaticCast< cpp::ArrayBase >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(325)
					cpp::ArrayBase this1 = ((cpp::ArrayBase)(((cpp::ArrayBase)(tmp10))));		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(325)
					int tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(325)
					Dynamic tmp12 = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("__unsafe_get","\xdd","\xcf","\x9b","\x60"), hx::paccDynamic )(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(325)
					tmp8 = tmp12;
				}
				HX_STACK_LINE(325)
				this->apply_surface(null(),null(),tmp6,tmp7,tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,show,(void))

Void Otter_obj::setInvincible( bool on){
{
		HX_STACK_FRAME("Otter","setInvincible",0xf4eb15af,"Otter.setInvincible","Otter.hx",331,0x52a70e82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(332)
		bool tmp = on;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		if ((tmp)){
			HX_STACK_LINE(333)
			int tmp1 = this->ROLL;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(333)
			this->status = tmp1;
		}
		else{
			HX_STACK_LINE(335)
			int tmp1 = this->SPRITE_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(335)
			this->status = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Otter_obj,setInvincible,(void))

int Otter_obj::getStatus( ){
	HX_STACK_FRAME("Otter","getStatus",0x2eaeef36,"Otter.getStatus","Otter.hx",340,0x52a70e82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(341)
	int tmp = this->status;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Otter_obj,getStatus,return )


Otter_obj::Otter_obj()
{
}

Dynamic Otter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ROLL") ) { return ROLL; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isDead") ) { return isDead; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setDead") ) { return setDead_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { return isVisible; }
		if (HX_FIELD_EQ(inName,"set_clips") ) { return set_clips_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
		if (HX_FIELD_EQ(inName,"getStatus") ) { return getStatus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isStarting") ) { return isStarting; }
		if (HX_FIELD_EQ(inName,"getOffSetX") ) { return getOffSetX_dyn(); }
		if (HX_FIELD_EQ(inName,"getOffSetY") ) { return getOffSetY_dyn(); }
		if (HX_FIELD_EQ(inName,"setOffSetY") ) { return setOffSetY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setStarting") ) { return setStarting_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setIsVisible") ) { return setIsVisible_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handle_events") ) { return handle_events_dyn(); }
		if (HX_FIELD_EQ(inName,"setInvincible") ) { return setInvincible_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"check_collision") ) { return check_collision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Otter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ROLL") ) { ROLL=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isDead") ) { isDead=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { isVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isStarting") ) { isStarting=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Otter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ROLL","\x7d","\xb3","\x6f","\x36"));
	outFields->push(HX_HCSTRING("isVisible","\xa8","\xf5","\x22","\xa7"));
	outFields->push(HX_HCSTRING("isStarting","\xca","\x13","\x5b","\xbd"));
	outFields->push(HX_HCSTRING("isDead","\xae","\x13","\xcd","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Otter_obj,ROLL),HX_HCSTRING("ROLL","\x7d","\xb3","\x6f","\x36")},
	{hx::fsBool,(int)offsetof(Otter_obj,isVisible),HX_HCSTRING("isVisible","\xa8","\xf5","\x22","\xa7")},
	{hx::fsBool,(int)offsetof(Otter_obj,isStarting),HX_HCSTRING("isStarting","\xca","\x13","\x5b","\xbd")},
	{hx::fsBool,(int)offsetof(Otter_obj,isDead),HX_HCSTRING("isDead","\xae","\x13","\xcd","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ROLL","\x7d","\xb3","\x6f","\x36"),
	HX_HCSTRING("isVisible","\xa8","\xf5","\x22","\xa7"),
	HX_HCSTRING("isStarting","\xca","\x13","\x5b","\xbd"),
	HX_HCSTRING("isDead","\xae","\x13","\xcd","\x5f"),
	HX_HCSTRING("setDead","\x66","\x8f","\xea","\x07"),
	HX_HCSTRING("set_clips","\x06","\xd0","\x58","\x6f"),
	HX_HCSTRING("getOffSetX","\x8f","\xbb","\x9f","\x11"),
	HX_HCSTRING("getOffSetY","\x90","\xbb","\x9f","\x11"),
	HX_HCSTRING("setOffSetY","\x04","\x5a","\x1d","\x15"),
	HX_HCSTRING("setStarting","\x82","\xcb","\x0c","\x73"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("setIsVisible","\xa6","\xb5","\x72","\xcb"),
	HX_HCSTRING("check_collision","\xfb","\x86","\x85","\xb9"),
	HX_HCSTRING("handle_events","\x10","\x22","\x05","\x50"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("setInvincible","\xe1","\x17","\xec","\xd0"),
	HX_HCSTRING("getStatus","\x68","\x70","\x52","\x82"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Otter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Otter_obj::__mClass,"__mClass");
};

#endif

hx::Class Otter_obj::__mClass;

void Otter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Otter","\xbc","\xf1","\xac","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Otter_obj >;
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

