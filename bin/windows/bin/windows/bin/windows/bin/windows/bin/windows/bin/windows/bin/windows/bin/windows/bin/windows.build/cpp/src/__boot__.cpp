#include <hxcpp.h>

#ifndef INCLUDED_sdl__SDL_SDL_helper
#include <sdl/_SDL/SDL_helper.h>
#endif
#ifndef INCLUDED_haxe_unit_TestRunner
#include <haxe/unit/TestRunner.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_haxe_unit_TestStatus
#include <haxe/unit/TestStatus.h>
#endif
#ifndef INCLUDED_haxe_unit_TestCase
#include <haxe/unit/TestCase.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_Timer
#include <Timer.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_ScoreCounter
#include <ScoreCounter.h>
#endif
#ifndef INCLUDED_Otter
#include <Otter.h>
#endif
#ifndef INCLUDED_Missile
#include <Missile.h>
#endif
#ifndef INCLUDED_MenuScreen
#include <MenuScreen.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Fish
#include <Fish.h>
#endif
#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#ifndef INCLUDED_Background
#include <Background.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sdl::_SDL::SDL_helper_obj::__register();
::haxe::unit::TestRunner_obj::__register();
::haxe::Log_obj::__register();
::GameManager_obj::__register();
::haxe::unit::TestStatus_obj::__register();
::haxe::unit::TestCase_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::IMap_obj::__register();
::cpp::Lib_obj::__register();
::Timer_obj::__register();
::Std_obj::__register();
::ScoreCounter_obj::__register();
::Otter_obj::__register();
::Missile_obj::__register();
::MenuScreen_obj::__register();
::Main_obj::__register();
::Fish_obj::__register();
::Coin_obj::__register();
::Sprite_obj::__register();
::ISprite_obj::__register();
::Background_obj::__register();
::haxe::Log_obj::__boot();
::GameManager_obj::__boot();
::haxe::unit::TestRunner_obj::__boot();
::sdl::_SDL::SDL_helper_obj::__boot();
}

