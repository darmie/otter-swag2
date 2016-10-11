#ifndef INCLUDED_GameManager
#define INCLUDED_GameManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <linc_sdl.h>
HX_DECLARE_CLASS0(GameManager)


class HXCPP_CLASS_ATTRIBUTES  GameManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameManager_obj OBJ_;
		GameManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="GameManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GameManager","\x7b","\xa0","\xaa","\xdc"); }

		static void __boot();
		static int SCREEN_WIDTH;
		static int SCREEN_HEIGHT;
		static int FRAMES_PER_SECOND;
		static ::cpp::Pointer< SDL_Surface > screen;
};


#endif /* INCLUDED_GameManager */ 
