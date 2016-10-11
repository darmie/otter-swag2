#ifndef INCLUDED_sdl__SDL_SDL_helper
#define INCLUDED_sdl__SDL_SDL_helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <linc_sdl.h>
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(sdl,_SDL,SDL_helper)
namespace sdl{
namespace _SDL{


class HXCPP_CLASS_ATTRIBUTES  SDL_helper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SDL_helper_obj OBJ_;
		SDL_helper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="sdl._SDL.SDL_helper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SDL_helper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SDL_helper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SDL_helper","\xd2","\x31","\x04","\xce"); }

		static void __boot();
		static Void quit( );
		static Dynamic quit_dyn();

		static ::haxe::ds::IntMap timers;
		static bool timer_callback_set;
		static int add_timer( int interval,Dynamic callback,Dynamic userdata);
		static Dynamic add_timer_dyn();

		static bool remove_timer( int _timerid);
		static Dynamic remove_timer_dyn();

		static int timer_callback( int _timerid);
		static Dynamic timer_callback_dyn();

		static ::haxe::ds::IntMap event_watchs;
		static bool watch_callback_set;
		static Array< int > removed_watchs;
		static int add_event_watch( Dynamic func,Dynamic userdata);
		static Dynamic add_event_watch_dyn();

		static Void del_event_watch( Dynamic func);
		static Dynamic del_event_watch_dyn();

		static int event_watch_callback( int _watchid,::cpp::Reference<SDL_Event> _event);
		static Dynamic event_watch_callback_dyn();

};

} // end namespace sdl
} // end namespace _SDL

#endif /* INCLUDED_sdl__SDL_SDL_helper */ 
