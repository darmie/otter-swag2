#ifndef INCLUDED_Background
#define INCLUDED_Background

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <linc_sdl.h>
HX_DECLARE_CLASS0(Background)


class HXCPP_CLASS_ATTRIBUTES  Background_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Background_obj OBJ_;
		Background_obj();
		Void __construct(::String image,::cpp::Pointer< SDL_Surface > screen);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Background")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Background_obj > __new(::String image,::cpp::Pointer< SDL_Surface > screen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Background_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Background","\x0e","\x98","\xce","\x1c"); }

		int dx;
		::cpp::Pointer< SDL_Surface > picture;
		::cpp::Pointer< SDL_Window > window;
		virtual Void scroll( int velocity,::cpp::Pointer< SDL_Surface > screen);
		Dynamic scroll_dyn();

		virtual Void apply_surface( int x,int y,::cpp::Pointer< SDL_Surface > source,::cpp::Pointer< SDL_Surface > dest);
		Dynamic apply_surface_dyn();

};


#endif /* INCLUDED_Background */ 
