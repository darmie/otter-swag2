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
#ifndef INCLUDED_Std
#include <Std.h>
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
		bool _started = false;		HX_STACK_VAR(_started,"_started");
		HX_STACK_LINE(52)
		bool isExploding = false;		HX_STACK_VAR(isExploding,"isExploding");
		HX_STACK_LINE(53)
		int explodeCount = (int)0;		HX_STACK_VAR(explodeCount,"explodeCount");
		HX_STACK_LINE(55)
		score = (int)0;
		HX_STACK_LINE(57)
		::ScoreCounter tmp8 = ::ScoreCounter_obj::__new(HX_HCSTRING("numbers.bmp","\x61","\x83","\x22","\x4a"),(int)255,(int)255,(int)255);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		scoreCount = tmp8;
		HX_STACK_LINE(58)
		::Otter tmp9 = ::Otter_obj::__new(HX_HCSTRING("otter.bmp","\xb3","\x2c","\xae","\x5d"),(int)255,(int)255,(int)255);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(58)
		otter = tmp9;
		HX_STACK_LINE(60)
		::cpp::Pointer< SDL_Surface > tmp10 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(60)
		::Background tmp11 = ::Background_obj::__new(HX_HCSTRING("background.bmp","\xc5","\xaf","\xf3","\x07"),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(60)
		background = tmp11;
		HX_STACK_LINE(62)
		::MenuScreen tmp12 = ::MenuScreen_obj::__new(HX_HCSTRING("menuScreens.bmp","\x7f","\xa8","\x09","\xa1"),(int)255,(int)0,(int)255);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		menu = tmp12;
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			bool tmp13 = (quit == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			if ((tmp14)){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				bool tmp15 = (start == false);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(70)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(70)
				if ((tmp16)){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(71)
				scoreCount->setTitle(false);
				HX_STACK_LINE(72)
				isExploding = false;
				HX_STACK_LINE(73)
				explodeCount = (int)0;
				HX_STACK_LINE(75)
				::Timer tmp17 = ::Timer_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(75)
				::Timer mps = tmp17;		HX_STACK_VAR(mps,"mps");
				HX_STACK_LINE(76)
				mps->start();
				HX_STACK_LINE(78)
				while((true)){
					HX_STACK_LINE(78)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						SDL_PumpEvents();
						HX_STACK_LINE(78)
						tmp18 = SDL_HasEvents((int)0,(int)65535);
					}
					HX_STACK_LINE(78)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(78)
					if ((tmp19)){
						HX_STACK_LINE(78)
						break;
					}
					HX_STACK_LINE(80)
					::cpp::Struct<SDL_Event> tmp20 = linc::sdl::pollEvent();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(80)
					::cpp::Struct<SDL_Event> event = tmp20;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(82)
					::cpp::Struct<SDL_Event> tmp21 = event;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(82)
					bool tmp22 = menu->handle_event(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(82)
					bool tmp23 = (tmp22 == true);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(82)
					if ((tmp23)){
						HX_STACK_LINE(83)
						::cpp::Struct<SDL_Event> tmp24 = event;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(83)
						bool tmp25 = menu->handle_event(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(83)
						start = tmp25;
					}
				}
				HX_STACK_LINE(91)
				::cpp::Pointer< SDL_Surface > tmp18 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(91)
				background->scroll((int)10,tmp18);
				HX_STACK_LINE(92)
				::cpp::Pointer< SDL_Surface > tmp19 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(92)
				menu->show(tmp19);
				HX_STACK_LINE(93)
				::cpp::Pointer< SDL_Surface > tmp20 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(93)
				scoreCount->show(tmp20);
				HX_STACK_LINE(95)
				Dynamic tmp21 = ::Main_obj::state;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(95)
				::cpp::Pointer< SDL_Window > tmp22 = tmp21->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(95)
				SDL_UpdateWindowSurface(tmp22);
				HX_STACK_LINE(96)
				Dynamic tmp23 = ::Main_obj::state;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(96)
				::cpp::Pointer< SDL_Renderer > tmp24 = tmp23->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(96)
				::cpp::Pointer< SDL_Surface > tmp25 = menu->sprite;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(96)
				::cpp::Pointer< SDL_Texture > tmp26 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp24,tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(96)
				::cpp::Pointer< SDL_Texture > texture = tmp26;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(99)
				Dynamic tmp27 = ::Main_obj::state;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(99)
				::cpp::Pointer< SDL_Renderer > tmp28 = tmp27->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(99)
				::cpp::Pointer< SDL_Texture > tmp29 = texture;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(99)
				int tmp30 = menu->getOffSetX();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(99)
				int tmp31 = menu->getOffSetY();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(99)
				int tmp32 = menu->width;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(99)
				int tmp33 = scoreCount->height;		HX_STACK_VAR(tmp33,"tmp33");
				struct _Function_3_1{
					inline static Dynamic Block( int &tmp33,int &tmp31,int &tmp32,int &tmp30){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",99,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp30,false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp31,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp32,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp33,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(99)
				Dynamic tmp34 = _Function_3_1::Block(tmp33,tmp31,tmp32,tmp30);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(99)
				linc::sdl::renderCopyEx(tmp28,tmp29,null(),tmp34,(int)90,null(),(int)2);
				HX_STACK_LINE(101)
				Dynamic tmp35 = ::Main_obj::state;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(101)
				::cpp::Pointer< SDL_Window > tmp36 = tmp35->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(101)
				SDL_UpdateWindowSurface(tmp36);
				HX_STACK_LINE(102)
				Dynamic tmp37 = ::Main_obj::state;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(102)
				::cpp::Pointer< SDL_Renderer > tmp38 = tmp37->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(102)
				::cpp::Pointer< SDL_Surface > tmp39 = scoreCount->sprite;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(102)
				::cpp::Pointer< SDL_Texture > tmp40 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp38,tmp39));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(102)
				::cpp::Pointer< SDL_Texture > texture1 = tmp40;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(105)
				Dynamic tmp41 = ::Main_obj::state;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(105)
				::cpp::Pointer< SDL_Renderer > tmp42 = tmp41->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(105)
				::cpp::Pointer< SDL_Texture > tmp43 = texture1;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(105)
				int tmp44 = scoreCount->getOffSetX();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(105)
				int tmp45 = scoreCount->getOffSetY();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(105)
				int tmp46 = scoreCount->width;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(105)
				int tmp47 = scoreCount->height;		HX_STACK_VAR(tmp47,"tmp47");
				struct _Function_3_2{
					inline static Dynamic Block( int &tmp46,int &tmp44,int &tmp47,int &tmp45){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",105,0x087e5c05)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp44,false);
							__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp45,false);
							__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp46,false);
							__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp47,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(105)
				Dynamic tmp48 = _Function_3_2::Block(tmp46,tmp44,tmp47,tmp45);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(105)
				linc::sdl::renderCopyEx(tmp42,tmp43,null(),tmp48,(int)90,null(),(int)2);
				HX_STACK_LINE(111)
				Float tmp49 = mps->get_ticks();		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(111)
				int tmp50 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(111)
				Float tmp51 = (Float((int)1000) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(111)
				bool tmp52 = (tmp49 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(111)
				if ((tmp52)){
					HX_STACK_LINE(112)
					int tmp53 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(112)
					Float tmp54 = (Float((int)1000) / Float(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(112)
					Float tmp55 = mps->get_ticks();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(112)
					Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(112)
					int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(112)
					tmp57 = hx::TCast< ::Int >::cast(tmp56);
					HX_STACK_LINE(112)
					SDL_Delay(tmp57);
				}
				HX_STACK_LINE(116)
				bool tmp53 = (score > (int)0);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(116)
				if ((tmp53)){
					HX_STACK_LINE(117)
					score = (int)0;
					HX_STACK_LINE(118)
					otter->setIsVisible(true);
				}
				HX_STACK_LINE(120)
				otter->setStarting(true);
				HX_STACK_LINE(121)
				otter->setOffSetY((int)-35);
			}
			HX_STACK_LINE(128)
			scoreCount->setTitle(true);
			HX_STACK_LINE(129)
			menu->setHasPlayed(true);
			HX_STACK_LINE(130)
			fps->start();
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					SDL_PumpEvents();
					HX_STACK_LINE(133)
					tmp15 = SDL_HasEvents((int)0,(int)65535);
				}
				HX_STACK_LINE(133)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(133)
				if ((tmp16)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(136)
				::cpp::Struct<SDL_Event> tmp17 = linc::sdl::pollEvent();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(136)
				::cpp::Struct<SDL_Event> event = tmp17;		HX_STACK_VAR(event,"event");
				HX_STACK_LINE(137)
				::cpp::Struct<SDL_Event> tmp18 = event;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(137)
				otter->handle_events(tmp18);
				HX_STACK_LINE(140)
				bool tmp19 = (event->type == (int)256);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(140)
				if ((tmp19)){
				}
			}
			HX_STACK_LINE(150)
			bool tmp15 = expertMode;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(150)
			if ((tmp15)){
				HX_STACK_LINE(151)
				Float tmp16 = obstacleTimer;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(151)
				Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(151)
				Float tmp18 = ((int)25 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(151)
				Float tmp19 = (tmp18 + (int)375);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(151)
				obstacleSpawnRate = tmp19;
			}
			else{
				HX_STACK_LINE(153)
				Float tmp16 = obstacleAmplitude;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(153)
				Float tmp17 = obstacleTimer;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(153)
				Float tmp18 = ::Math_obj::sin(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(153)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(153)
				Float tmp20 = obstacleIntercept;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(153)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(153)
				obstacleSpawnRate = tmp21;
				HX_STACK_LINE(154)
				bool tmp22 = (obstacleSpawnRate > (int)400);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(154)
				if ((tmp22)){
					HX_STACK_LINE(155)
					expertMode = true;
				}
				HX_STACK_LINE(158)
				int tmp23 = score;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(158)
				int tmp24 = (obstacleScore + (int)1000);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(158)
				bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(158)
				if ((tmp25)){
					HX_STACK_LINE(159)
					obstacleAmplitude = (int)50;
					HX_STACK_LINE(160)
					hx::AddEq(obstacleIntercept,(int)10);
					HX_STACK_LINE(161)
					obstacleScore = score;
				}
				HX_STACK_LINE(164)
				hx::SubEq(obstacleAmplitude,((Float).1));
			}
			HX_STACK_LINE(168)
			hx::AddEq(obstacleTimer,((Float).1));
			HX_STACK_LINE(171)
			Float tmp16 = ::Math_obj::random();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(171)
			Float tmp17 = hx::Mod(tmp16,(int)1000);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(171)
			Float tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(171)
			Float spawnObstacle = tmp18;		HX_STACK_VAR(spawnObstacle,"spawnObstacle");
			HX_STACK_LINE(172)
			bool tmp19 = (spawnObstacle < obstacleSpawnRate);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(172)
			if ((tmp19)){
				HX_STACK_LINE(173)
				Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(173)
				Float tmp21 = hx::Mod(tmp20,(int)11);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(173)
				Float tmp22 = (tmp21 * (int)24);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(173)
				Float tmp23 = (tmp22 + (int)50);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(173)
				Float randY = tmp23;		HX_STACK_VAR(randY,"randY");
				HX_STACK_LINE(174)
				::Missile tmp24 = ::Missile_obj::__new(HX_HCSTRING("missiles.bmp","\x64","\x4b","\x33","\xb6"),(int)127,(int)127,(int)127,randY);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(174)
				::Missile temp = tmp24;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(175)
				::Missile tmp25 = temp;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(175)
				obstacles->push(tmp25);
			}
			HX_STACK_LINE(178)
			Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(178)
			Float tmp21 = hx::Mod(tmp20,(int)1000);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(178)
			Float tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(178)
			Float spawnCoin = tmp22;		HX_STACK_VAR(spawnCoin,"spawnCoin");
			HX_STACK_LINE(179)
			bool tmp23 = (spawnCoin < (int)50);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(179)
			if ((tmp23)){
				HX_STACK_LINE(180)
				Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(180)
				Float tmp25 = hx::Mod(tmp24,(int)400);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(180)
				Float tmp26 = (tmp25 + (int)100);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(180)
				Float randX = tmp26;		HX_STACK_VAR(randX,"randX");
				HX_STACK_LINE(181)
				Float tmp27 = randX;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(181)
				int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(181)
				::Coin tmp29 = ::Coin_obj::__new(HX_HCSTRING("coins.bmp","\x99","\xbf","\x91","\xbf"),(int)48,(int)120,(int)128,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(181)
				::Coin money = tmp29;		HX_STACK_VAR(money,"money");
				HX_STACK_LINE(182)
				::Coin tmp30 = money;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(182)
				obstacles->push(tmp30);
			}
			HX_STACK_LINE(185)
			Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(185)
			Float tmp25 = hx::Mod(tmp24,(int)1000);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(185)
			Float tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(185)
			Float spawnFish = tmp26;		HX_STACK_VAR(spawnFish,"spawnFish");
			HX_STACK_LINE(186)
			bool tmp27 = (spawnFish < (int)3);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(186)
			if ((tmp27)){
				HX_STACK_LINE(187)
				Float tmp28 = ::Math_obj::random();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(187)
				Float tmp29 = hx::Mod(tmp28,(int)10);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(187)
				Float tmp30 = (tmp29 * (int)25);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(187)
				Float tmp31 = (tmp30 + (int)50);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(187)
				Float fRandY = tmp31;		HX_STACK_VAR(fRandY,"fRandY");
				HX_STACK_LINE(188)
				Float tmp32 = fRandY;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(188)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(188)
				::Fish tmp34 = ::Fish_obj::__new(HX_HCSTRING("LoveFish.bmp","\x21","\x04","\x59","\xee"),(int)85,(int)109,(int)143,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(188)
				::Fish food = tmp34;		HX_STACK_VAR(food,"food");
				HX_STACK_LINE(189)
				::Fish tmp35 = food;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(189)
				obstacles->push(tmp35);
			}
			HX_STACK_LINE(193)
			bool collide;		HX_STACK_VAR(collide,"collide");
			HX_STACK_LINE(194)
			otter->move();
			HX_STACK_LINE(195)
			int obstacleSize = obstacles->length;		HX_STACK_VAR(obstacleSize,"obstacleSize");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(196)
				while((true)){
					HX_STACK_LINE(196)
					bool tmp28 = (_g < obstacleSize);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(196)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(196)
					if ((tmp29)){
						HX_STACK_LINE(196)
						break;
					}
					HX_STACK_LINE(196)
					int tmp30 = (_g)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(196)
					int i = tmp30;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(197)
					collide = false;
					HX_STACK_LINE(198)
					::Sprite tmp31 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(198)
					bool tmp32 = otter->check_collision(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(198)
					collide = tmp32;
					HX_STACK_LINE(200)
					bool tmp33 = collide;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(200)
					if ((tmp33)){
						HX_STACK_LINE(201)
						action = (int)0;
						HX_STACK_LINE(202)
						::Sprite tmp34 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(202)
						int tmp35 = tmp34->collision();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(202)
						action = tmp35;
						HX_STACK_LINE(203)
						bool tmp36 = (action == (int)2);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(203)
						if ((tmp36)){
							HX_STACK_LINE(204)
							hx::AddEq(score,(int)100);
						}
						HX_STACK_LINE(207)
						bool tmp37 = (action == (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(207)
						if ((tmp37)){
							HX_STACK_LINE(209)
							int tmp38 = otter->getStatus();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(209)
							bool tmp39 = (tmp38 != (int)3);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(209)
							if ((tmp39)){
								HX_STACK_LINE(210)
								otter->setDead(true);
								HX_STACK_LINE(211)
								otter->setIsVisible(false);
								HX_STACK_LINE(212)
								collider = i;
								HX_STACK_LINE(213)
								isExploding = true;
								HX_STACK_LINE(214)
								break;
							}
							else{
								HX_STACK_LINE(216)
								hx::AddEq(score,(int)200);
							}
						}
						HX_STACK_LINE(219)
						bool tmp38 = (action == (int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(219)
						if ((tmp38)){
							HX_STACK_LINE(221)
							otter->setInvincible(true);
							HX_STACK_LINE(222)
							invincibleCheck = (int)0;
						}
					}
					HX_STACK_LINE(225)
					::Sprite tmp34 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(225)
					tmp34->move();
				}
			}
			HX_STACK_LINE(228)
			int tmp28 = otter->getStatus();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(228)
			bool tmp29 = (tmp28 == (int)3);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(228)
			if ((tmp29)){
				HX_STACK_LINE(231)
				bool tmp30 = (invincibleCheck == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(231)
				if ((tmp30)){
					HX_STACK_LINE(231)
					int tmp31 = (score + (int)2000);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(231)
					invincibleCheck = tmp31;
				}
				else{
					HX_STACK_LINE(234)
					bool tmp31 = (score >= invincibleCheck);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(234)
					if ((tmp31)){
						HX_STACK_LINE(236)
						otter->setInvincible(false);
					}
				}
			}
			HX_STACK_LINE(242)
			hx::AddEq(score,(int)7);
			HX_STACK_LINE(243)
			int tmp30 = score;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(243)
			scoreCount->setScore(tmp30);
			HX_STACK_LINE(246)
			::cpp::Pointer< SDL_Surface > tmp31 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(246)
			background->scroll((int)10,tmp31);
			HX_STACK_LINE(247)
			::cpp::Pointer< SDL_Surface > tmp32 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(247)
			otter->show(tmp32);
			HX_STACK_LINE(248)
			::cpp::Pointer< SDL_Surface > tmp33 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(248)
			scoreCount->show(tmp33);
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(251)
				int _g = obstacles->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(251)
				while((true)){
					HX_STACK_LINE(251)
					bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(251)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(251)
					if ((tmp35)){
						HX_STACK_LINE(251)
						break;
					}
					HX_STACK_LINE(251)
					int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(251)
					int i = tmp36;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(251)
					::Sprite tmp37 = obstacles->__get(i).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(251)
					::cpp::Pointer< SDL_Surface > tmp38 = ::GameManager_obj::screen;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(251)
					tmp37->show(tmp38);
				}
			}
			HX_STACK_LINE(254)
			Dynamic tmp34 = ::Main_obj::state;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(254)
			::cpp::Pointer< SDL_Window > tmp35 = tmp34->__Field(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(254)
			SDL_UpdateWindowSurface(tmp35);
			HX_STACK_LINE(255)
			Dynamic tmp36 = ::Main_obj::state;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(255)
			::cpp::Pointer< SDL_Renderer > tmp37 = tmp36->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(255)
			::cpp::Pointer< SDL_Surface > tmp38 = otter->sprite;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(255)
			::cpp::Pointer< SDL_Texture > tmp39 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp37,tmp38));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(255)
			::cpp::Pointer< SDL_Texture > texture = tmp39;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(260)
			Dynamic tmp40 = ::Main_obj::state;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(260)
			::cpp::Pointer< SDL_Renderer > tmp41 = tmp40->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(260)
			::cpp::Pointer< SDL_Texture > tmp42 = texture;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(260)
			int tmp43 = otter->getOffSetX();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(260)
			int tmp44 = otter->getOffSetY();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(260)
			int tmp45 = otter->width;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(260)
			int tmp46 = otter->height;		HX_STACK_VAR(tmp46,"tmp46");
			struct _Function_2_1{
				inline static Dynamic Block( int &tmp46,int &tmp44,int &tmp45,int &tmp43){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",260,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp43,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp44,false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp45,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp46,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(260)
			Dynamic tmp47 = _Function_2_1::Block(tmp46,tmp44,tmp45,tmp43);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(260)
			linc::sdl::renderCopyEx(tmp41,tmp42,null(),tmp47,(int)90,null(),(int)2);
			HX_STACK_LINE(273)
			Dynamic tmp48 = ::Main_obj::state;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(273)
			::cpp::Pointer< SDL_Renderer > tmp49 = tmp48->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(273)
			::cpp::Pointer< SDL_Surface > tmp50 = scoreCount->sprite;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(273)
			::cpp::Pointer< SDL_Texture > tmp51 = ::cpp::Pointer< SDL_Texture >(SDL_CreateTextureFromSurface(tmp49,tmp50));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(273)
			::cpp::Pointer< SDL_Texture > texture1 = tmp51;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(279)
			Dynamic tmp52 = ::Main_obj::state;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(279)
			::cpp::Pointer< SDL_Renderer > tmp53 = tmp52->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(279)
			::cpp::Pointer< SDL_Texture > tmp54 = texture1;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(279)
			int tmp55 = scoreCount->getOffSetX();		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(279)
			int tmp56 = scoreCount->getOffSetY();		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(279)
			int tmp57 = scoreCount->width;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(279)
			int tmp58 = scoreCount->height;		HX_STACK_VAR(tmp58,"tmp58");
			struct _Function_2_2{
				inline static Dynamic Block( int &tmp55,int &tmp56,int &tmp58,int &tmp57){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",279,0x087e5c05)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp55,false);
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp56,false);
						__result->Add(HX_HCSTRING("w","\x77","\x00","\x00","\x00") , tmp57,false);
						__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp58,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(279)
			Dynamic tmp59 = _Function_2_2::Block(tmp55,tmp56,tmp58,tmp57);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(279)
			linc::sdl::renderCopyEx(tmp53,tmp54,null(),tmp59,(int)90,null(),(int)2);
			HX_STACK_LINE(283)
			Float tmp60 = fps->get_ticks();		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(283)
			int tmp61 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(283)
			Float tmp62 = (Float((int)1000) / Float(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(283)
			bool tmp63 = (tmp60 < tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(283)
			if ((tmp63)){
				HX_STACK_LINE(284)
				int tmp64 = ::GameManager_obj::FRAMES_PER_SECOND;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(284)
				Float tmp65 = (Float((int)1000) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(284)
				Float tmp66 = fps->get_ticks();		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(284)
				Float tmp67 = (tmp65 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(284)
				int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(284)
				tmp68 = hx::TCast< ::Int >::cast(tmp67);
				HX_STACK_LINE(284)
				SDL_Delay(tmp68);
			}
			HX_STACK_LINE(297)
			bool tmp64 = isExploding;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(297)
			if ((tmp64)){
				HX_STACK_LINE(297)
				(explodeCount)++;
			}
			HX_STACK_LINE(300)
			bool tmp65 = (explodeCount == (int)13);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(300)
			if ((tmp65)){
				HX_STACK_LINE(301)
				start = false;
				HX_STACK_LINE(302)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(303)
				while((true)){
					HX_STACK_LINE(303)
					bool tmp66 = (j < obstacles->length);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(303)
					bool tmp67 = !(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(303)
					if ((tmp67)){
						HX_STACK_LINE(303)
						break;
					}
					HX_STACK_LINE(306)
					::Sprite tmp68 = obstacles->__get(j).StaticCast< ::Sprite >();		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(306)
					obstacles->remove(tmp68);
					HX_STACK_LINE(307)
					(j)--;
				}
				HX_STACK_LINE(309)
				obstacleScore = (int)0;
				HX_STACK_LINE(310)
				obstacleTimer = (int)0;
				HX_STACK_LINE(311)
				obstacleSpawnRate = (int)0;
				HX_STACK_LINE(312)
				obstacleAmplitude = ((Float)50.0);
				HX_STACK_LINE(313)
				obstacleIntercept = ((Float)50.0);
				HX_STACK_LINE(314)
				invincibleCheck = ((Float)0.0);
				HX_STACK_LINE(315)
				expertMode = false;
				HX_STACK_LINE(316)
				otter->setDead(false);
			}
			HX_STACK_LINE(323)
			::cpp::Pointer< SDL_Surface > tmp66 = menu->sprite;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(323)
			SDL_FreeSurface(tmp66);
			HX_STACK_LINE(324)
			::cpp::Pointer< SDL_Surface > tmp67 = scoreCount->sprite;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(324)
			SDL_FreeSurface(tmp67);
			HX_STACK_LINE(325)
			::cpp::Pointer< SDL_Surface > tmp68 = otter->sprite;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(325)
			SDL_FreeSurface(tmp68);
			HX_STACK_LINE(326)
			Dynamic tmp69 = ::Main_obj::state;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(326)
			::cpp::Pointer< SDL_Renderer > tmp70 = tmp69->__Field(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"), hx::paccDynamic );		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(326)
			SDL_RenderPresent(tmp70);
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				::sdl::_SDL::SDL_helper_obj::quit();
				HX_STACK_LINE(327)
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

