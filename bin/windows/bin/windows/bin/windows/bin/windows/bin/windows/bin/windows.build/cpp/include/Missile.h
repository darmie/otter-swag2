#ifndef INCLUDED_Missile
#define INCLUDED_Missile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS0(ISprite)
HX_DECLARE_CLASS0(Missile)
HX_DECLARE_CLASS0(Sprite)


class HXCPP_CLASS_ATTRIBUTES  Missile_obj : public ::Sprite_obj{
	public:
		typedef ::Sprite_obj super;
		typedef Missile_obj OBJ_;
		Missile_obj();
		Void __construct(::String filename,int r,int g,int b,int randY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Missile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Missile_obj > __new(::String filename,int r,int g,int b,int randY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Missile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Missile","\x86","\xe5","\xd5","\x00"); }

		int SHOOT;
		int EXPLODE;
		virtual int getOffSetX( );

		virtual int getOffSetY( );

		virtual Void set_clips( );
		Dynamic set_clips_dyn();

		virtual int collision( );

		virtual Void move( );

		virtual Void show( ::cpp::Pointer< SDL_Surface > screen);

};


#endif /* INCLUDED_Missile */ 
