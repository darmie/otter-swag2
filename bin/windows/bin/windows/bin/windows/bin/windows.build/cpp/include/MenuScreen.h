#ifndef INCLUDED_MenuScreen
#define INCLUDED_MenuScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS0(ISprite)
HX_DECLARE_CLASS0(MenuScreen)
HX_DECLARE_CLASS0(Sprite)


class HXCPP_CLASS_ATTRIBUTES  MenuScreen_obj : public ::Sprite_obj{
	public:
		typedef ::Sprite_obj super;
		typedef MenuScreen_obj OBJ_;
		MenuScreen_obj();
		Void __construct(::String filename,int r,int g,int b);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MenuScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MenuScreen_obj > __new(::String filename,int r,int g,int b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MenuScreen","\x8b","\x7a","\x92","\x20"); }

		bool hasPlayed;
		int TITLE;
		int REPLAY;
		virtual int getOffSetX( );

		virtual int getOffSetY( );

		virtual Void setHasPlayed( bool p);
		Dynamic setHasPlayed_dyn();

		virtual Void set_clips( );
		Dynamic set_clips_dyn();

		virtual bool handle_event( ::cpp::Struct<SDL_Event> event);
		Dynamic handle_event_dyn();

		virtual int collision( );

		virtual Void move( );

		virtual Void show( ::cpp::Pointer< SDL_Surface > screen);
		Dynamic show_dyn();

};


#endif /* INCLUDED_MenuScreen */ 
