#ifndef INCLUDED_Coin
#define INCLUDED_Coin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS0(Coin)
HX_DECLARE_CLASS0(ISprite)
HX_DECLARE_CLASS0(Sprite)


class HXCPP_CLASS_ATTRIBUTES  Coin_obj : public ::Sprite_obj{
	public:
		typedef ::Sprite_obj super;
		typedef Coin_obj OBJ_;
		Coin_obj();
		Void __construct(::String filename,int r,int g,int b,int randX);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Coin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Coin_obj > __new(::String filename,int r,int g,int b,int randX);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Coin_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c"); }

		int SCORE;
		int SPIN;
		virtual int getOffSetX( );

		virtual int getOffSetY( );

		virtual Void set_clips( );
		Dynamic set_clips_dyn();

		virtual int collision( );

		virtual Void move( );

		virtual Void show( ::cpp::Pointer< SDL_Surface > screen);

};


#endif /* INCLUDED_Coin */ 
