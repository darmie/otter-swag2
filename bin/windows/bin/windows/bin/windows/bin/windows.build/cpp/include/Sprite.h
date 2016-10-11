#ifndef INCLUDED_Sprite
#define INCLUDED_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ISprite
#include <ISprite.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS0(ISprite)
HX_DECLARE_CLASS0(Sprite)


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::ISprite_obj{
	public:
		typedef ::ISprite_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct(int count);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Sprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sprite_obj > __new(int count);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sprite","\x25","\x50","\x2a","\xf8"); }

		int frame;
		::cpp::Pointer< SDL_Surface > sprite;
		bool hasCollided;
		Array< ::Dynamic > states;
		int offSetX;
		int offSetY;
		int velocityX;
		int velocityY;
		int status;
		int height;
		int width;
		int SCREEN_WIDTH;
		int SCREEN_HEIGHT;
		int SCREEN_BPP;
		int FRAMES_PER_SECOND;
		int SPRITE_DOWN;
		int SPRITE_UP;
		int SPRITE_WALK;
		virtual bool getHasCollided( );
		Dynamic getHasCollided_dyn();

		virtual Void apply_surface( Dynamic x,Dynamic y,::cpp::Pointer< SDL_Surface > source,::cpp::Pointer< SDL_Surface > destination,Dynamic clip);
		Dynamic apply_surface_dyn();

		virtual ::cpp::Pointer< SDL_Surface > load_image( ::String filename,int r,int g,int b);
		Dynamic load_image_dyn();

};


#endif /* INCLUDED_Sprite */ 
