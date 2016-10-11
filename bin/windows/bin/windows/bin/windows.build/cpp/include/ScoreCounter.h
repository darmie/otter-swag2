#ifndef INCLUDED_ScoreCounter
#define INCLUDED_ScoreCounter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS0(ISprite)
HX_DECLARE_CLASS0(ScoreCounter)
HX_DECLARE_CLASS0(Sprite)


class HXCPP_CLASS_ATTRIBUTES  ScoreCounter_obj : public ::Sprite_obj{
	public:
		typedef ::Sprite_obj super;
		typedef ScoreCounter_obj OBJ_;
		ScoreCounter_obj();
		Void __construct(::String filename,int r,int g,int b);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ScoreCounter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScoreCounter_obj > __new(::String filename,int r,int g,int b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScoreCounter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ScoreCounter","\xea","\x9d","\x70","\xf2"); }

		int COUNT;
		int score;
		bool title;
		bool isStarted;
		virtual Void set_clips( );
		Dynamic set_clips_dyn();

		virtual int getOffSetX( );

		virtual int getOffSetY( );

		virtual int collision( );

		virtual Void apply_surface( Dynamic x,Dynamic y,::cpp::Pointer< SDL_Surface > source,::cpp::Pointer< SDL_Surface > destination,Dynamic clip);

		virtual Void setScore( int num);
		Dynamic setScore_dyn();

		virtual Void setTitle( bool val);
		Dynamic setTitle_dyn();

		virtual Void show( ::cpp::Pointer< SDL_Surface > screen);
		Dynamic show_dyn();

};


#endif /* INCLUDED_ScoreCounter */ 
