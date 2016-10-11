package;
import sdl.Surface;
import sdl.SDL;
import sdl.Window;
/**
 * ...
 * @author Darmie Akinlaja
 */
class Background 
{
	private var NULL = null;
	private var dx:Int;
	private var picture:Surface;
	var window:Window;
	public function new(image:String, screen:Surface) 
	{
	  dx = 0;
	  var haxe_file = SDL.RWFromFile(image, "rb");
	  picture = SDL.loadBMP_RW(haxe_file, 1); //load in the picture to be used as background
	  
	  if(picture == null){ //if image doesn't load
		trace("Error opening image");
	  }
	  
	  SDL.blitSurface(picture, null,screen, null); //copy picture to the screen
	  
	  //SDL.flip(screen); //update the screen :Todo:
	  
	  SDL.updateWindowSurface(window);
	 
	  
	}
	
	
	public function scroll(velocity:Int, screen:Surface){
     
		dx -= velocity; //scroll

		//if the background has gone too far
		if(dx <= -picture.value.w){dx = 0;}

		//show the background
		apply_surface(dx,0,picture,screen);
		apply_surface(dx + picture.value.w, 0, picture, screen);
		
		
		
		//SDL.flip(screen);  //update the screen	:TODO:
		SDL.updateWindowSurface(window);
	}
	
	private function apply_surface(x:Int, y:Int, source:Surface, dest:Surface){
		 //Temporary rectangle to hold the offsets
		 var offset:SDLRect = {y:y, x:x, w:0, h:0};//Get the offsets (position)
		 //offset.x = x;
		 //offset.y = y;
		 //Blit the surface
		 SDL.blitSurface(source, null, dest, offset);		
	}
	
}