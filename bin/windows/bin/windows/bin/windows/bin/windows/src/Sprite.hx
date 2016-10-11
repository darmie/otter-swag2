package;

import cpp.Void;
import sdl.Renderer;
import sdl.SDL;
import sdl.SDL.SDLRect;
import haxe.ds.Vector;
import sdl.Surface;


/**
 * ...
 * @author Darmie Akinlaja
 */
class Sprite extends ISprite
{
	public var frame:Int; // determines which frame of the sprite sheet should be displayed
	public var sprite:Surface; //sprite surface
	
	
	
	private var hasCollided:Bool; //whether object has collided with another
	private var states:Vector< Vector<SDLRect> >; //contains states for sprite sheet clips and animation
	
	private var  offSetX:Int;
	private var offSetY:Int;
	
	
    private var velocityX:Int; // horizontal speed the sprite is moving at
    private var velocityY:Int; //vertical speed the sprite is moving at
    private var status:Int; // determines the status of movement the sprite is in (eg. walk, swim, fall)
	public  var height:Int; //height of image
	public  var width:Int; //width of image
	

	//Screen Dimensions
	private var SCREEN_WIDTH:Int; 
	private var SCREEN_HEIGHT:Int; 
	private var SCREEN_BPP:Int; 

	//FPS
	private var FRAMES_PER_SECOND:Int;

	//Statuses
	private var SPRITE_DOWN:Int;
	private var SPRITE_UP:Int;
	private var SPRITE_WALK:Int;
	
	
	public function new(count:Int) 
	{
		states  = new Vector< Vector<SDLRect> >(count);
		//trace("ScoreCounter frames Count: "+count);
		for(i in 0...count){
			states[i] = new Vector<SDLRect>(15);
			
			for(j in 0...15){
				var rect:SDLRect = {x:0, y:0, w:0, h:0};
				states[i].set(j, rect);
			}
			//trace("ScoreCounter frames: "+i);
			//trace("ScoreCounter Rects: "+states[i]);
		}
		
		SCREEN_WIDTH = 400;
		SCREEN_HEIGHT = 320;
		SCREEN_BPP = 32;
		FRAMES_PER_SECOND = 10;
		SPRITE_DOWN = 0;
		SPRITE_UP = 1;
		SPRITE_WALK = 2;
		
		
	}
	
	public function getHasCollided():Bool{
		return hasCollided;
	}
	
	public function apply_surface(?x:Int = null, ?y:Int = null, source:Surface, destination:Surface, clip:SDLRect){
		//Holds offsets
		var shift:SDLRect = {y:0, x:0, w:0, h:0};
		
		//Get offsets
		shift.x = offSetX;
		shift.y = offSetY;
		
		//Blit
		SDL.blitSurface(source, clip, destination, shift);
		
	}
	
	public function load_image(filename:String, r:Int, g:Int, b:Int):Surface{
		
		//The image that's loaded
		var loadedImage:Surface = null;
		
		//The optimized surface that will be used
		//optimizedImage:Surface = null;
		
		//Load the image
		var haxe_file = SDL.RWFromFile(filename, "rb");
		loadedImage = SDL.loadBMP_RW(haxe_file, 1);
		//var renderer:Renderer;
		//var texture:sdl.Texture = SDL.createTextureFromSurface(renderer, loadedImage);
		
		
		
		//If the image loaded || Todo: optimize surface
		
		
		return loadedImage;
		
		
	}
	
}