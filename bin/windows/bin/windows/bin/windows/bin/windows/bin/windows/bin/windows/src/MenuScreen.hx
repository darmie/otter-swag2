package;
import sdl.Event;
import sdl.Surface;
import sdl.SDL;


/**
 * ...
 * @author Darmie Akinlaja
 */
class MenuScreen extends Sprite
{
	private var hasPlayed:Bool;
	
	private var TITLE:Int;
	private var REPLAY:Int;

	public function new(filename:String, r:Int, g:Int, b:Int) 
	{
		
		super(2);
		TITLE = 0;
		REPLAY = 1;
		
		hasCollided = false;
		hasPlayed = false;
		
		//Initialize movement variables
		offSetX = 0;
		offSetY = 0;
		velocityX = 0;
		velocityY = 0;
		
		
		//Initialize animation variables
		frame = 0;
		status = TITLE;
		
		//Sprite Pointer
		sprite = load_image(filename, r, g, b);
		
		//Initialize States
		set_clips();
	}
	
	override public function getOffSetX():Int 
	{
		//super.getOffSetX();
		return offSetX;
	}
	
	override public function getOffSetY():Int 
	{
		return offSetY;
	}
	
	public function getHasPlayed(){
		return hasPlayed;
	}
	
	public function setHasPlayed(p:Bool){
		hasPlayed = p;
	}
	
	override public function set_clips():Void 
	{
		//super.set_clips();
		
		//Clip the sprites
		states[0][0].x = 12; //title
		states[0][0].y = 32;
		states[0][0].w = 480;
		states[0][0].h = 320;

		states[0][1].x = 505; //replay
		states[0][1].y = 32;
		states[0][1].w = 480;
		states[0][1].h = 320;

	}
	
	
	public function handle_event(event:Event):Bool{ //watches for spacebar press to start game
		// if the space bar is currently pressed

	    if (event.type == SDL_KEYDOWN){
			
				trace("Menu Screen event name:: " + SDL.getKeyName(event.key.keysym.sym));
	        switch(SDL.getKeyName(event.key.keysym.sym)){
	            
				case "Space": return true;
				
	        }
	    }
		return false;
	}
	
	override public function collision():Int 
	{
		//return super.collision();
		return 0;
	}
	
	override public function move():Void 
	{
		//super.move();
	}
	
	override public function show(screen:Surface):Void 
	{
		//super.show(surface);
		
		if (!hasPlayed){	
			frame = 0; //beginning screen
		}
		else{
			frame=1; //endgame screen with ability to replay
		}
			apply_surface(sprite, screen, states[0][frame]);
	}
	
}