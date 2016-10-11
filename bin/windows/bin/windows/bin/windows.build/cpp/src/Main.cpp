#include <hxcpp.h>

#include "hxMath.h"
#include "linc_sdl.h"
#ifndef INCLUDED_Background
#include <Background.h>
#endif
#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_Fish
#include <Fish.h>
#endif
#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MenuScreen
#include <MenuScreen.h>
#endif
#ifndef INCLUDED_Missile
#include <Missile.h>
#endif
#ifndef INCLUDED_Otter
#include <Otter.h>
#endif
#ifndef INCLUDED_ScoreCounter
#include <ScoreCounter.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#ifndef INCLUDED_Timer
#include <Timer.h>
#endif
#ifndef INCLUDED_sdl__SDL_SDL_helper
#include <sdl/_SDL/SDL_helper.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::state;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",15,0x087e5c05)
		HX_STACK_LINE(17)
		int tmp = (int((int)32) | int((int)16384));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		SDL_Init(tmp);
		HX_STACK_LINE(18)
		int tmp1 = ::GameManager_obj::SCREEN_WIDTH;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		int tmp2 = ::GameManager_obj::SCREEN_HEIGHT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Dynamic tmp3 = linc::sdl::createWindowAndRenderer(tmp1,tmp2,(int)32);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		::Main_obj::state = tmp3;
		HX_STACK_LINE(21)
		Dynamic tmp4 = ::Main_obj::state;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		::cpp::Pointer< SDL_Window > tmp5 = tmp4->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		::cpp::Pointer< SDL_Surface > tmp6 = ::cpp::Pointer< SDL_Surface >(SDL_GetWindowSurface(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		::GameManager_obj::screen = tmp6;
		HX_STACK_LINE(24)
		Array< ::Dynamic > obstacles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(obstacles,"obstacles");
		HX_STACK_LINE(26)
		int action;		HX_STACK_VAR(action,"action");
		HX_STACK_LINE(27)
		int collider;		HX_STACK_VAR(collider,"collider");
		HX_STACK_LINE(28)
		int obstacleScore = (int)0;		HX_STACK_VAR(obstacleScore,"obstacleScore");
		HX_STACK_LINE(29)
		Float obstacleTimer = (int)0;		HX_STACK_VAR(obstacleTimer,"obstacleTimer");
		HX_STACK_LINE(30)
		Float obstacleSpawnRate = (int)0;		HX_STACK_VAR(obstacleSpawnRate,"obstacleSpawnRate");
		HX_STACK_LINE(31)
		Float obstacleAmplitude = ((Float)50.0);		HX_STACK_VAR(obstacleAmplitude,"obstacleAmplitude");
		HX_STACK_LINE(32)
		Float obstacleIntercept = ((Float)50.0);		HX_STACK_VAR(obstacleIntercept,"obstacleIntercept");
		HX_STACK_LINE(33)
		Float invincibleCheck = ((Float)0.0);		HX_STACK_VAR(invincibleCheck,"invincibleCheck");
		HX_STACK_LINE(34)
		bool expertMode = false;		HX_STACK_VAR(expertMode,"expertMode");
		HX_STACK_LINE(36)
		::ScoreCounter scoreCount;		HX_STACK_VAR(scoreCount,"scoreCount");
		HX_STACK_LINE(39)
		::Timer tmp7 = ::Timer_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		::Timer fps = tmp7;		HX_STACK_VAR(fps,"fps");
		HX_STACK_LINE(41)
		int score;		HX_STACK_VAR(score,"score");
		HX_STACK_LINE(43)
		bool quit = false;		HX_STACK_VAR(quit,"quit");
		HX_STACK_LINE(44)
		bool initialized = false;		HX_STACK_VAR(initialized,"initialized");
		HX_STACK_LINE(45)
		::Otter otter;		HX_STACK_VAR(otter,"otter");
		HX_STACK_LINE(46)
		::Background background;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(48)
		::MenuScreen menu;		HX_STACK_VAR(menu,"menu");
		HX_STACK_LINE(50)
		bool start = false;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(51)
		bool isExploding = false;		HX_STACK_VAR(isExploding,"isExploding");
		HX_STACK_LINE(52)
		int explodeCount = (int)0;		HX_STACK_VAR(explodeCount,"explodeCount");
		HX_STACK_LINE(54)
		score = (int)0;
		HX_STACK_LINE(56)
		::ScoreCounter tmp8 = ::ScoreCounter_obj::__new(HX_HCSTRING("numbers.bmp","\x61","\x83","\x22","\x4a"),(int)255,(int)255,(int)255);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		scoreCount = tmp8;
		HX_STACK_LINE(57)
		::Otter tmp9 = ::Otter_obj::__new(HX_HCSTRING("otter.bmp","\xb3","\x2c","\xae","\x5d"),(int)255,(int)255,(int)255);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		otter = tmp9;
		HX_STACK_LINE(59)
		::cpp::Pointer< SDL_Surface > tmp10 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		::Background tmp11 = ::Background_obj::__new(HX_HCSTRING("background.bmp","\xc5","\xaf","\xf3","\x07"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		background = tmp11;
		HX_STACK_LINE(61)
		::MenuScreen tmp12 = ::MenuScreen_obj::__new(HX_HCSTRING("menuScreens.bmp","\x7f","\xa8","\x09","\xa1"),(int)255,(int)0,(int)255);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		menu = tmp12;
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			bool tmp13 = (quit == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(67)
			if ((tmp14)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(69)
			while((true)){
				HX_STACK_LINE(69)
				bool tmp15 = (start == false);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(69)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(69)
				if ((tmp16)){
					HX_STACK_LINE(69)
					break;
				}
				HX_STACK_LINE(70)
				scoreCount->setTitle(false);
				HX_STACK_LINE(71)
				isExploding = false;
				HX_STACK_LINE(72)
				explodeCount = (int)0;
				HX_STACK_LINE(74)
				::Timer tmp17 = ::Timer_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(74)
				::Timer mps = tmp17;		HX_STACK_VAR(mps,"mps");
				HX_STACK_LINE(75)
				mps->start();
				HX_STACK_LINE(76)
				while((true)){
					HX_STACK_LINE(76)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(76)
					{
						HX_STACK_LINE(76)
						SDL_PumpEvents();
						HX_STACK_LINE(76)
						tmp18 = SDL_HasEvents((int)0,(int)65535);
					}
					HX_STACK_LINE(76)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(76)
					if ((tmp19)){
						HX_STACK_LINE(76)
						break;
					}
					HX_STACK_LINE(78)
					::cpp::Struct<SDL_Event> tmp20 = linc::sdl::pollEvent();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(78)
					::cpp::Struct<SDL_Event> event = tmp20;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(79)
					::cpp::Struct<SDL_Event> tmp21 = event;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(79)
					bool tmp22 = menu->handle_event(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(79)
					start = tmp22;
				}
				HX_STACK_LINE(82)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					SDL_PumpEvents();
					HX_STACK_LINE(82)
					tmp18 = SDL_HasEvents((int)0,(int)65535);
				}
				HX_STACK_LINE(82)
				bool tmp19 = (tmp18 == false);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(82)
				if ((tmp19)){
					HX_STACK_LINE(83)
					SDL_Delay((int)0);
				}
				HX_STACK_LINE(87)
				::cpp::Pointer< SDL_Surface > tmp20 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(87)
				background->scroll((int)10,tmp20);
				HX_STACK_LINE(88)
				::cpp::Pointer< SDL_Surface > tmp21 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(88)
				menu->show(tmp21);
				HX_STACK_LINE(89)
				::cpp::Pointer< SDL_Surface > tmp22 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(89)
				scoreCount->show(tmp22);
				HX_STACK_LINE(91)
				Dynamic tmp23 = ::Main_obj::state;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(91)
				::cpp::Pointer< SDL_Window > tmp24 = tmp23->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(91)
				SDL_UpdateWindowSurface(tmp24);
				HX_STACK_LINE(92)
				Dynamic tmp25 = ::Main_obj::state;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(92)
				::cpp::Pointer< SDL_Renderer > tmp26 = tmp25->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(92)
				::cpp::Pointer< SDL_Surface > tmp27 = menu->sprite;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(92)
				::cpp::Pointer< SDL_Texture > tmp28 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp26,tmp27));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(92)
				::cpp::Pointer< SDL_Texture > texture = tmp28;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(93)
				::cpp::Pointer< SDL_Texture > tmp29 = texture;		HX_STACK_VAR(tmp29,"tmp29");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",93,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , (int)0,false);
							__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , (int)0,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(93)
				Dynamic tmp30 = _Function_3_1::Block();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(93)
				Dynamic tmp31 = linc::sdl::queryTexture(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(93)
				Dynamic query = tmp31;		HX_STACK_VAR(query,"query");
				HX_STACK_LINE(94)
				::cpp::Pointer< SDL_Texture > tmp32 = texture;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(94)
				linc::sdl::setTextureBlendMode(tmp32,(int)4);
				HX_STACK_LINE(95)
				::cpp::Pointer< SDL_Surface > tmp33 = menu->sprite;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(95)
				SDL_FreeSurface(tmp33);
				HX_STACK_LINE(96)
				Dynamic tmp34 = ::Main_obj::state;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(96)
				::cpp::Pointer< SDL_Renderer > tmp35 = tmp34->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(96)
				::cpp::Pointer< SDL_Texture > tmp36 = texture;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(96)
				int tmp37 = menu->getOffSetX();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(96)
				int tmp38 = menu->getOffSetY();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(96)
				int tmp39 = menu->width;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(96)
				int tmp40 = scoreCount->height;		HX_STACK_VAR(tmp40,"tmp40");
				struct _Function_3_2{
					inline static Dynamic Block( int &tmp38,int &tmp40,int &tmp37,int &tmp39){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",96,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp37,false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp38,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp39,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp40,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(96)
				Dynamic tmp41 = _Function_3_2::Block(tmp38,tmp40,tmp37,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(96)
				linc::sdl::renderCopyEx(tmp35,tmp36,null(),tmp41,(int)90,null(),(int)2);
				HX_STACK_LINE(98)
				Dynamic tmp42 = ::Main_obj::state;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(98)
				::cpp::Pointer< SDL_Window > tmp43 = tmp42->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(98)
				SDL_UpdateWindowSurface(tmp43);
				HX_STACK_LINE(99)
				Dynamic tmp44 = ::Main_obj::state;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(99)
				::cpp::Pointer< SDL_Renderer > tmp45 = tmp44->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(99)
				::cpp::Pointer< SDL_Surface > tmp46 = scoreCount->sprite;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(99)
				::cpp::Pointer< SDL_Texture > tmp47 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp45,tmp46));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(99)
				::cpp::Pointer< SDL_Texture > texture1 = tmp47;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(100)
				::cpp::Pointer< SDL_Texture > tmp48 = texture1;		HX_STACK_VAR(tmp48,"tmp48");
				struct _Function_3_3{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",100,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , (int)0,false);
							__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , (int)0,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(100)
				Dynamic tmp49 = _Function_3_3::Block();		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(100)
				Dynamic tmp50 = linc::sdl::queryTexture(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(100)
				Dynamic query1 = tmp50;		HX_STACK_VAR(query1,"query1");
				HX_STACK_LINE(101)
				::cpp::Pointer< SDL_Texture > tmp51 = texture1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(101)
				linc::sdl::setTextureBlendMode(tmp51,(int)4);
				HX_STACK_LINE(102)
				::cpp::Pointer< SDL_Surface > tmp52 = scoreCount->sprite;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(102)
				SDL_FreeSurface(tmp52);
				HX_STACK_LINE(103)
				Dynamic tmp53 = ::Main_obj::state;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(103)
				::cpp::Pointer< SDL_Renderer > tmp54 = tmp53->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(103)
				::cpp::Pointer< SDL_Texture > tmp55 = texture1;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(103)
				int tmp56 = scoreCount->getOffSetX();		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(103)
				int tmp57 = scoreCount->getOffSetY();		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(103)
				int tmp58 = scoreCount->width;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(103)
				int tmp59 = scoreCount->height;		HX_STACK_VAR(tmp59,"tmp59");
				struct _Function_3_4{
					inline static Dynamic Block( int &tmp56,int &tmp59,int &tmp58,int &tmp57){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",103,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp56,false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp57,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp58,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp59,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(103)
				Dynamic tmp60 = _Function_3_4::Block(tmp56,tmp59,tmp58,tmp57);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(103)
				linc::sdl::renderCopyEx(tmp54,tmp55,null(),tmp60,(int)90,null(),(int)2);
				HX_STACK_LINE(109)
				Float tmp61 = mps->get_ticks();		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(109)
				int tmp62 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(109)
				Float tmp63 = (Float((int)1000) / Float(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(109)
				bool tmp64 = (tmp61 < tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(109)
				if ((tmp64)){
					HX_STACK_LINE(110)
					int tmp65 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(110)
					Float tmp66 = (Float((int)1000) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(110)
					Float tmp67 = mps->get_ticks();		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(110)
					Float tmp68 = (tmp66 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(110)
					int tmp69;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(110)
					tmp69 = hx::TCast< ::Int >::cast(tmp68);
					HX_STACK_LINE(110)
					SDL_Delay(tmp69);
				}
				HX_STACK_LINE(114)
				bool tmp65 = (score > (int)0);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(114)
				if ((tmp65)){
					HX_STACK_LINE(115)
					score = (int)0;
					HX_STACK_LINE(116)
					otter->setIsVisible(true);
				}
				HX_STACK_LINE(118)
				otter->setStarting(true);
				HX_STACK_LINE(119)
				otter->setOffSetY((int)-35);
			}
			HX_STACK_LINE(123)
			scoreCount->setTitle(true);
			HX_STACK_LINE(124)
			menu->setHasPlayed(true);
			HX_STACK_LINE(125)
			fps->start();
			HX_STACK_LINE(128)
			while((true)){
				HX_STACK_LINE(128)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(128)
				{
					HX_STACK_LINE(128)
					SDL_PumpEvents();
					HX_STACK_LINE(128)
					tmp15 = SDL_HasEvents((int)0,(int)65535);
				}
				HX_STACK_LINE(128)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(128)
				if ((tmp16)){
					HX_STACK_LINE(128)
					break;
				}
				HX_STACK_LINE(130)
				::cpp::Struct<SDL_Event> tmp17 = linc::sdl::pollEvent();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(130)
				::cpp::Struct<SDL_Event> event = tmp17;		HX_STACK_VAR(event,"event");
				HX_STACK_LINE(132)
				::cpp::Struct<SDL_Event> tmp18 = event;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(132)
				otter->handle_events(tmp18);
				HX_STACK_LINE(135)
				bool tmp19 = (event->type == (int)256);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(135)
				if ((tmp19)){
					HX_STACK_LINE(137)
					quit = true;
				}
			}
			HX_STACK_LINE(142)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				SDL_PumpEvents();
				HX_STACK_LINE(142)
				tmp15 = SDL_HasEvents((int)0,(int)65535);
			}
			HX_STACK_LINE(142)
			bool tmp16 = (tmp15 == false);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(142)
			if ((tmp16)){
				HX_STACK_LINE(143)
				SDL_Delay((int)0);
			}
			HX_STACK_LINE(147)
			bool tmp17 = expertMode;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(147)
			if ((tmp17)){
				HX_STACK_LINE(148)
				Float tmp18 = obstacleTimer;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				Float tmp19 = ::Math_obj::sin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				Float tmp20 = ((int)25 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				Float tmp21 = (tmp20 + (int)375);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				obstacleSpawnRate = tmp21;
			}
			else{
				HX_STACK_LINE(150)
				Float tmp18 = obstacleAmplitude;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(150)
				Float tmp19 = obstacleTimer;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(150)
				Float tmp20 = ::Math_obj::sin(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(150)
				Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(150)
				Float tmp22 = obstacleIntercept;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(150)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(150)
				obstacleSpawnRate = tmp23;
				HX_STACK_LINE(151)
				bool tmp24 = (obstacleSpawnRate > (int)400);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(151)
				if ((tmp24)){
					HX_STACK_LINE(152)
					expertMode = true;
				}
				HX_STACK_LINE(155)
				int tmp25 = score;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(155)
				int tmp26 = (obstacleScore + (int)1000);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(155)
				bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(155)
				if ((tmp27)){
					HX_STACK_LINE(156)
					obstacleAmplitude = (int)50;
					HX_STACK_LINE(157)
					hx::AddEq(obstacleIntercept,(int)10);
					HX_STACK_LINE(158)
					obstacleScore = score;
				}
				HX_STACK_LINE(161)
				hx::SubEq(obstacleAmplitude,((Float).1));
			}
			HX_STACK_LINE(165)
			hx::AddEq(obstacleTimer,((Float).1));
			HX_STACK_LINE(168)
			Float tmp18 = ::Math_obj::random();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(168)
			Float tmp19 = hx::Mod(tmp18,(int)1000);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(168)
			Float tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(168)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(168)
			tmp21 = hx::TCast< ::Int >::cast(tmp20);
			HX_STACK_LINE(168)
			int spawnObstacle = tmp21;		HX_STACK_VAR(spawnObstacle,"spawnObstacle");
			HX_STACK_LINE(169)
			bool tmp22 = (spawnObstacle < obstacleSpawnRate);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(169)
			if ((tmp22)){
				HX_STACK_LINE(170)
				Float tmp23 = ::Math_obj::random();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(170)
				Float tmp24 = hx::Mod(tmp23,(int)11);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				Float tmp25 = (tmp24 * (int)24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				Float tmp26 = (tmp25 + (int)50);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(170)
				int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				tmp27 = hx::TCast< ::Int >::cast(tmp26);
				HX_STACK_LINE(170)
				int randY = tmp27;		HX_STACK_VAR(randY,"randY");
				HX_STACK_LINE(171)
				::Missile tmp28 = ::Missile_obj::__new(HX_HCSTRING("missiles.bmp","\x64","\x4b","\x33","\xb6"),(int)127,(int)127,(int)127,randY);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(171)
				::Missile temp = tmp28;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(172)
				::Missile tmp29 = temp;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(172)
				obstacles->push(tmp29);
			}
			HX_STACK_LINE(175)
			Float tmp23 = ::Math_obj::random();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(175)
			Float tmp24 = hx::Mod(tmp23,(int)1000);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(175)
			Float tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(175)
			Float spawnCoin = tmp25;		HX_STACK_VAR(spawnCoin,"spawnCoin");
			HX_STACK_LINE(176)
			bool tmp26 = (spawnCoin < (int)50);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(176)
			if ((tmp26)){
				HX_STACK_LINE(177)
				Float tmp27 = ::Math_obj::random();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(177)
				Float tmp28 = hx::Mod(tmp27,(int)400);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(177)
				Float tmp29 = (tmp28 + (int)100);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(177)
				Float randX = tmp29;		HX_STACK_VAR(randX,"randX");
				HX_STACK_LINE(178)
				int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(178)
				tmp30 = hx::TCast< ::Int >::cast(randX);
				HX_STACK_LINE(178)
				::Coin tmp31 = ::Coin_obj::__new(HX_HCSTRING("coins.bmp","\x99","\xbf","\x91","\xbf"),(int)48,(int)120,(int)128,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(178)
				::Coin money = tmp31;		HX_STACK_VAR(money,"money");
				HX_STACK_LINE(179)
				::Coin tmp32 = money;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(179)
				obstacles->push(tmp32);
			}
			HX_STACK_LINE(182)
			Float tmp27 = ::Math_obj::random();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(182)
			Float tmp28 = hx::Mod(tmp27,(int)1000);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(182)
			Float tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(182)
			Float spawnFish = tmp29;		HX_STACK_VAR(spawnFish,"spawnFish");
			HX_STACK_LINE(183)
			bool tmp30 = (spawnFish < (int)3);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(183)
			if ((tmp30)){
				HX_STACK_LINE(184)
				Float tmp31 = ::Math_obj::random();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(184)
				Float tmp32 = hx::Mod(tmp31,(int)10);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(184)
				Float tmp33 = (tmp32 * (int)25);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(184)
				Float tmp34 = (tmp33 + (int)50);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(184)
				Float fRandY = tmp34;		HX_STACK_VAR(fRandY,"fRandY");
				HX_STACK_LINE(185)
				int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(185)
				tmp35 = hx::TCast< ::Int >::cast(fRandY);
				HX_STACK_LINE(185)
				::Fish tmp36 = ::Fish_obj::__new(HX_HCSTRING("LoveFish.bmp","\x21","\x04","\x59","\xee"),(int)85,(int)109,(int)143,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(185)
				::Fish food = tmp36;		HX_STACK_VAR(food,"food");
				HX_STACK_LINE(186)
				::Fish tmp37 = food;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(186)
				obstacles->push(tmp37);
			}
			HX_STACK_LINE(190)
			bool collide;		HX_STACK_VAR(collide,"collide");
			HX_STACK_LINE(191)
			otter->move();
			HX_STACK_LINE(192)
			int obstacleSize = obstacles->length;		HX_STACK_VAR(obstacleSize,"obstacleSize");
			HX_STACK_LINE(193)
			{
				HX_STACK_LINE(193)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(193)
				while((true)){
					HX_STACK_LINE(193)
					bool tmp31 = (_g < obstacleSize);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(193)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(193)
					if ((tmp32)){
						HX_STACK_LINE(193)
						break;
					}
					HX_STACK_LINE(193)
					int tmp33 = (_g)++;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(193)
					int i = tmp33;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(194)
					collide = false;
					HX_STACK_LINE(195)
					::Sprite tmp34 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(195)
					bool tmp35 = otter->check_collision(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(195)
					collide = tmp35;
					HX_STACK_LINE(197)
					bool tmp36 = collide;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(197)
					if ((tmp36)){
						HX_STACK_LINE(198)
						action = (int)0;
						HX_STACK_LINE(199)
						::Sprite tmp37 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(199)
						int tmp38 = tmp37->collision();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(199)
						action = tmp38;
						HX_STACK_LINE(200)
						bool tmp39 = (action == (int)2);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(200)
						if ((tmp39)){
							HX_STACK_LINE(201)
							hx::AddEq(score,(int)100);
						}
						HX_STACK_LINE(204)
						bool tmp40 = (action == (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(204)
						if ((tmp40)){
							HX_STACK_LINE(206)
							int tmp41 = otter->getStatus();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(206)
							bool tmp42 = (tmp41 != (int)3);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(206)
							if ((tmp42)){
								HX_STACK_LINE(207)
								otter->setDead(true);
								HX_STACK_LINE(208)
								otter->setIsVisible(false);
								HX_STACK_LINE(209)
								collider = i;
								HX_STACK_LINE(210)
								isExploding = true;
								HX_STACK_LINE(211)
								break;
							}
							else{
								HX_STACK_LINE(213)
								hx::AddEq(score,(int)200);
							}
						}
						HX_STACK_LINE(216)
						bool tmp41 = (action == (int)3);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(216)
						if ((tmp41)){
							HX_STACK_LINE(218)
							otter->setInvincible(true);
							HX_STACK_LINE(219)
							invincibleCheck = (int)0;
						}
					}
					HX_STACK_LINE(222)
					::Sprite tmp37 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(222)
					tmp37->move();
				}
			}
			HX_STACK_LINE(225)
			int tmp31 = otter->getStatus();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(225)
			bool tmp32 = (tmp31 == (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(225)
			if ((tmp32)){
				HX_STACK_LINE(228)
				bool tmp33 = (invincibleCheck == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(228)
				if ((tmp33)){
					HX_STACK_LINE(228)
					int tmp34 = (score + (int)2000);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(228)
					invincibleCheck = tmp34;
				}
				else{
					HX_STACK_LINE(231)
					bool tmp34 = (score >= invincibleCheck);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(231)
					if ((tmp34)){
						HX_STACK_LINE(233)
						otter->setInvincible(false);
					}
				}
			}
			HX_STACK_LINE(239)
			hx::AddEq(score,(int)7);
			HX_STACK_LINE(240)
			int tmp33 = score;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(240)
			scoreCount->setScore(tmp33);
			HX_STACK_LINE(243)
			::cpp::Pointer< SDL_Surface > tmp34 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(243)
			background->scroll((int)10,tmp34);
			HX_STACK_LINE(244)
			::cpp::Pointer< SDL_Surface > tmp35 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(244)
			otter->show(tmp35);
			HX_STACK_LINE(245)
			::cpp::Pointer< SDL_Surface > tmp36 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(245)
			scoreCount->show(tmp36);
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(248)
				int _g = obstacles->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(248)
				while((true)){
					HX_STACK_LINE(248)
					bool tmp37 = (_g1 < _g);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(248)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(248)
					if ((tmp38)){
						HX_STACK_LINE(248)
						break;
					}
					HX_STACK_LINE(248)
					int tmp39 = (_g1)++;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(248)
					int i = tmp39;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(248)
					::Sprite tmp40 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(248)
					::cpp::Pointer< SDL_Surface > tmp41 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(248)
					tmp40->show(tmp41);
				}
			}
			HX_STACK_LINE(251)
			Dynamic tmp37 = ::Main_obj::state;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(251)
			::cpp::Pointer< SDL_Window > tmp38 = tmp37->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(251)
			SDL_UpdateWindowSurface(tmp38);
			HX_STACK_LINE(252)
			Dynamic tmp39 = ::Main_obj::state;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(252)
			::cpp::Pointer< SDL_Renderer > tmp40 = tmp39->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(252)
			::cpp::Pointer< SDL_Surface > tmp41 = otter->sprite;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(252)
			::cpp::Pointer< SDL_Texture > tmp42 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp40,tmp41));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(252)
			::cpp::Pointer< SDL_Texture > texture = tmp42;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(253)
			::cpp::Pointer< SDL_Texture > tmp43 = texture;		HX_STACK_VAR(tmp43,"tmp43");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",253,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , (int)0,false);
						__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , (int)0,false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(253)
			Dynamic tmp44 = _Function_2_1::Block();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(253)
			Dynamic tmp45 = linc::sdl::queryTexture(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(253)
			Dynamic query = tmp45;		HX_STACK_VAR(query,"query");
			HX_STACK_LINE(254)
			::cpp::Pointer< SDL_Texture > tmp46 = texture;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(254)
			linc::sdl::setTextureBlendMode(tmp46,(int)4);
			HX_STACK_LINE(255)
			::cpp::Pointer< SDL_Surface > tmp47 = otter->sprite;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(255)
			SDL_FreeSurface(tmp47);
			HX_STACK_LINE(256)
			otter->sprite = null();
			HX_STACK_LINE(258)
			Dynamic tmp48 = ::Main_obj::state;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(258)
			::cpp::Pointer< SDL_Renderer > tmp49 = tmp48->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(258)
			::cpp::Pointer< SDL_Texture > tmp50 = texture;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(258)
			int tmp51 = otter->getOffSetX();		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(258)
			int tmp52 = otter->getOffSetY();		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(258)
			int tmp53 = otter->width;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(258)
			int tmp54 = otter->height;		HX_STACK_VAR(tmp54,"tmp54");
			struct _Function_2_2{
				inline static Dynamic Block( int &tmp54,int &tmp52,int &tmp51,int &tmp53){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",258,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp51,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp52,false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp53,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp54,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(258)
			Dynamic tmp55 = _Function_2_2::Block(tmp54,tmp52,tmp51,tmp53);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(258)
			linc::sdl::renderCopyEx(tmp49,tmp50,null(),tmp55,(int)90,null(),(int)2);
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(260)
				int _g = obstacles->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(260)
				while((true)){
					HX_STACK_LINE(260)
					bool tmp56 = (_g1 < _g);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(260)
					bool tmp57 = !(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(260)
					if ((tmp57)){
						HX_STACK_LINE(260)
						break;
					}
					HX_STACK_LINE(260)
					int tmp58 = (_g1)++;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(260)
					int i = tmp58;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(262)
					Dynamic tmp59 = ::Main_obj::state;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(262)
					::cpp::Pointer< SDL_Renderer > tmp60 = tmp59->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(262)
					::Sprite tmp61 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(262)
					::cpp::Pointer< SDL_Surface > tmp62 = tmp61->sprite;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(262)
					::cpp::Pointer< SDL_Texture > tmp63 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp60,tmp62));		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(262)
					::cpp::Pointer< SDL_Texture > texture1 = tmp63;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(263)
					::cpp::Pointer< SDL_Texture > tmp64 = texture1;		HX_STACK_VAR(tmp64,"tmp64");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",263,0x087e5c05)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , (int)0,false);
								__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , (int)0,false);
								__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
								__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(263)
					Dynamic tmp65 = _Function_4_1::Block();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(263)
					Dynamic tmp66 = linc::sdl::queryTexture(tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(263)
					Dynamic query1 = tmp66;		HX_STACK_VAR(query1,"query1");
					HX_STACK_LINE(264)
					::cpp::Pointer< SDL_Texture > tmp67 = texture1;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(264)
					linc::sdl::setTextureBlendMode(tmp67,(int)4);
					HX_STACK_LINE(265)
					::Sprite tmp68 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(265)
					::cpp::Pointer< SDL_Surface > tmp69 = tmp68->sprite;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(265)
					SDL_FreeSurface(tmp69);
					HX_STACK_LINE(268)
					Dynamic tmp70 = ::Main_obj::state;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(268)
					::cpp::Pointer< SDL_Renderer > tmp71 = tmp70->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(268)
					::cpp::Pointer< SDL_Texture > tmp72 = texture1;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(268)
					::Sprite tmp73 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(268)
					int tmp74 = tmp73->getOffSetX();		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(268)
					::Sprite tmp75 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(268)
					int tmp76 = tmp75->getOffSetY();		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(268)
					::Sprite tmp77 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(268)
					int tmp78 = tmp77->width;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(268)
					::Sprite tmp79 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(268)
					int tmp80 = tmp79->height;		HX_STACK_VAR(tmp80,"tmp80");
					struct _Function_4_2{
						inline static Dynamic Block( int &tmp80,int &tmp76,int &tmp78,int &tmp74){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",268,0x087e5c05)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp74,false);
								__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp76,false);
								__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp78,false);
								__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp80,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(268)
					Dynamic tmp81 = _Function_4_2::Block(tmp80,tmp76,tmp78,tmp74);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(268)
					linc::sdl::renderCopyEx(tmp71,tmp72,null(),tmp81,(int)90,null(),(int)2);
				}
			}
			HX_STACK_LINE(271)
			Dynamic tmp56 = ::Main_obj::state;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(271)
			::cpp::Pointer< SDL_Renderer > tmp57 = tmp56->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(271)
			::cpp::Pointer< SDL_Surface > tmp58 = scoreCount->sprite;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(271)
			::cpp::Pointer< SDL_Texture > tmp59 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp57,tmp58));		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(271)
			::cpp::Pointer< SDL_Texture > texture1 = tmp59;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(272)
			::cpp::Pointer< SDL_Texture > tmp60 = texture1;		HX_STACK_VAR(tmp60,"tmp60");
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",272,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd") , (int)0,false);
						__result->Add(HX_HCSTRING("access","\xa4","\x95","\x06","\x0b") , (int)0,false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , (int)0,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(272)
			Dynamic tmp61 = _Function_2_3::Block();		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(272)
			Dynamic tmp62 = linc::sdl::queryTexture(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(272)
			Dynamic query1 = tmp62;		HX_STACK_VAR(query1,"query1");
			HX_STACK_LINE(273)
			::cpp::Pointer< SDL_Texture > tmp63 = texture1;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(273)
			linc::sdl::setTextureBlendMode(tmp63,(int)4);
			HX_STACK_LINE(274)
			::cpp::Pointer< SDL_Surface > tmp64 = scoreCount->sprite;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(274)
			SDL_FreeSurface(tmp64);
			HX_STACK_LINE(275)
			scoreCount->sprite = null();
			HX_STACK_LINE(277)
			Dynamic tmp65 = ::Main_obj::state;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(277)
			::cpp::Pointer< SDL_Renderer > tmp66 = tmp65->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(277)
			::cpp::Pointer< SDL_Texture > tmp67 = texture1;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(277)
			int tmp68 = scoreCount->getOffSetX();		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(277)
			int tmp69 = scoreCount->getOffSetY();		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(277)
			int tmp70 = scoreCount->width;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(277)
			int tmp71 = scoreCount->height;		HX_STACK_VAR(tmp71,"tmp71");
			struct _Function_2_4{
				inline static Dynamic Block( int &tmp68,int &tmp71,int &tmp70,int &tmp69){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",277,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp68,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp69,false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp70,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp71,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(277)
			Dynamic tmp72 = _Function_2_4::Block(tmp68,tmp71,tmp70,tmp69);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(277)
			linc::sdl::renderCopyEx(tmp66,tmp67,null(),tmp72,(int)90,null(),(int)2);
			HX_STACK_LINE(281)
			Float tmp73 = fps->get_ticks();		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(281)
			int tmp74 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(281)
			Float tmp75 = (Float((int)1000) / Float(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(281)
			bool tmp76 = (tmp73 < tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(281)
			if ((tmp76)){
				HX_STACK_LINE(282)
				int tmp77 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(282)
				Float tmp78 = (Float((int)1000) / Float(tmp77));		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(282)
				Float tmp79 = fps->get_ticks();		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(282)
				Float tmp80 = (tmp78 - tmp79);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(282)
				int tmp81;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(282)
				tmp81 = hx::TCast< ::Int >::cast(tmp80);
				HX_STACK_LINE(282)
				SDL_Delay(tmp81);
			}
			HX_STACK_LINE(286)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(287)
			while((true)){
				HX_STACK_LINE(287)
				bool tmp77 = (i < obstacles->length);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(287)
				bool tmp78 = !(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(287)
				if ((tmp78)){
					HX_STACK_LINE(287)
					break;
				}
				HX_STACK_LINE(288)
				::Sprite tmp79 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(288)
				int tmp80 = tmp79->getOffSetX();		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(288)
				bool tmp81 = (tmp80 < (int)-50);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(288)
				if ((tmp81)){
					HX_STACK_LINE(289)
					::Sprite tmp82 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(289)
					obstacles->remove(tmp82);
					HX_STACK_LINE(290)
					::Sprite tmp83 = obstacles->__get((int)0).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(290)
					int tmp84 = obstacles->indexOf(tmp83,null());		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(290)
					int tmp85 = i;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(290)
					int tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(290)
					int tmp87 = i;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(290)
					obstacles->splice(tmp86,tmp87);
					HX_STACK_LINE(291)
					(i)--;
				}
			}
			HX_STACK_LINE(295)
			bool tmp77 = isExploding;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(295)
			if ((tmp77)){
				HX_STACK_LINE(295)
				(explodeCount)++;
			}
			HX_STACK_LINE(298)
			bool tmp78 = (explodeCount == (int)13);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(298)
			if ((tmp78)){
				HX_STACK_LINE(299)
				start = false;
				HX_STACK_LINE(300)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(301)
				while((true)){
					HX_STACK_LINE(301)
					bool tmp79 = (j < obstacles->length);		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(301)
					bool tmp80 = !(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(301)
					if ((tmp80)){
						HX_STACK_LINE(301)
						break;
					}
					HX_STACK_LINE(304)
					::Sprite tmp81 = obstacles->__get(j).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(304)
					obstacles->remove(tmp81);
					HX_STACK_LINE(305)
					(j)--;
				}
				HX_STACK_LINE(307)
				obstacleScore = (int)0;
				HX_STACK_LINE(308)
				obstacleTimer = (int)0;
				HX_STACK_LINE(309)
				obstacleSpawnRate = (int)0;
				HX_STACK_LINE(310)
				obstacleAmplitude = ((Float)50.0);
				HX_STACK_LINE(311)
				obstacleIntercept = ((Float)50.0);
				HX_STACK_LINE(312)
				invincibleCheck = ((Float)0.0);
				HX_STACK_LINE(313)
				expertMode = false;
				HX_STACK_LINE(314)
				otter->setDead(false);
			}
			HX_STACK_LINE(316)
			Dynamic tmp79 = ::Main_obj::state;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(316)
			::cpp::Pointer< SDL_Renderer > tmp80 = tmp79->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(316)
			SDL_RenderPresent(tmp80);
			HX_STACK_LINE(318)
			SDL_Delay((int)4);
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				::sdl::_SDL::SDL_helper_obj::quit();
				HX_STACK_LINE(320)
				SDL_Quit();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { outValue = state; return true;  }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Main_obj::state,HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::state,"state");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::state,"state");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

