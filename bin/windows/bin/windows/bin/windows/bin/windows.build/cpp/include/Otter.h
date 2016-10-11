#ifndef INCLUDED_Otter
#define INCLUDED_Otter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Sprite
#include <Sprite.h>
#endif
#include <linc_sdl.h>
HX_DECLARE_CLASS0(ISprite)
HX_DECLARE_CLASS0(Otter)
HX_DECLARE_CLASS0(Sprite)


class HXCPP_CLASS_ATTRIBUTES  Otter_obj : public ::Sprite_obj{
	public:
		typedef ::Sprite_obj super;
		typedef Otter_obj OBJ_;
		Otter_obj();
		Void __construct(::String filename,int r,int g,int b);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Otter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Otter_obj > __new(::String filename,int r,int g,int b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Otter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Otter","\xbc","\xf1","\xac","\xc9"); }

		int ROLL;
		bool isVisible;
		bool isStarting;
		bool isDead;
		virtual Void setDead( bool dead);
		Dynamic setDead_dyn();

		virtual Void set_clips( );
		Dynamic set_clips_dyn();

		virtual int getOffSetX( );

		virtual int getOffSetY( );

		virtual Void setOffSetY( int num);
		Dynamic setOffSetY_dyn();

		virtual Void setStarting( bool val);
		Dynamic setStarting_dyn();

		virtual int collision( );

		virtual Void setIsVisible( bool vis);
		Dynamic setIsVisible_dyn();

		virtual bool check_collision( ::Sprite obstacle);
		Dynamic check_collision_dyn();

		virtual Void handle_events( ::cpp::Struct<SDL_Event> event);
		Dynamic handle_events_dyn();

		virtual Void move( );

		virtual Void show( ::cpp::Pointer< SDL_Surface > screen);
		Dynamic show_dyn();

		virtual Void setInvincible( bool on);
		Dynamic setInvincible_dyn();

		virtual int getStatus( );
		Dynamic getStatus_dyn();

};


#endif /* INCLUDED_Otter */ 
