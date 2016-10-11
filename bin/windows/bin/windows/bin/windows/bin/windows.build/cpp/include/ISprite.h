#ifndef INCLUDED_ISprite
#define INCLUDED_ISprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ISprite)


class HXCPP_CLASS_ATTRIBUTES  ISprite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ISprite_obj OBJ_;
		ISprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ISprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ISprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ISprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ISprite","\x2e","\x2d","\xc9","\xd3"); }

		virtual Void move( );
		Dynamic move_dyn();

		virtual int collision( );
		Dynamic collision_dyn();

		virtual int getOffSetX( );
		Dynamic getOffSetX_dyn();

		virtual int getOffSetY( );
		Dynamic getOffSetY_dyn();

};


#endif /* INCLUDED_ISprite */ 
