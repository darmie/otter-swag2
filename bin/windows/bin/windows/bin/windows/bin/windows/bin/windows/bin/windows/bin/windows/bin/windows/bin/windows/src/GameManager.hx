package;
import sdl.SDL;
import sdl.Surface;
import sdl.Window;
import util.AbstractClass;

/**
 * ...
 * @author Darmie Akinlaja
 */
class GameManager 
{

	public static var SCREEN_WIDTH:Int = 480;
	public static var SCREEN_HEIGHT:Int = 320;
	public static var SCREEN_BPP:Int = 32;
	
	public static var FRAMES_PER_SECOND :Int = 10;
	
	public static var screen:Surface  = null;
	
	static var window:Window;
	
	public static function init():Bool{
		//Initialize all SDL subsystems
		if(SDL.init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) == -1){
			return false;
		}

		//Set up the screen
		//window= SDL.createWindow("Otta Swag", 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, SDLWindowFlags.SDL_WINDOW_RESIZABLE);



		//Set the window caption
		//SDL_WM_SetCaption("Otter Swag", NULL);

		//If everything initialized fine
		return true;		
	}
	
	
	public static function check_collision(A:SDLRect, B:SDLRect):Bool{
		//The sides of the rectangles
		var leftA:Int, leftB:Int;
		var rightA:Int, rightB:Int;
		var topA:Int, topB:Int;
		var bottomA:Int, bottomB:Int;

		//Calculate the sides of rect A
		leftA = A.x;
		rightA = A.x + A.w;
		topA = A.y;
		bottomA = A.y + A.h;

		//Calculate the sides of rect B
		leftB = B.x;
		rightB = B.x + B.w;
		topB = B.y;
		bottomB = B.y + B.h;

		//If any of the sides from A are outside of B
		if( bottomA <= topB ){
			return false;
		}

		if( topA >= bottomB ){
			return false;
		}

		if( rightA <= leftB ){
			return false;
		}

		if( leftA >= rightB ){
			return false;
		}

		//If none of the sides from A are outside B
		return true;		
	}
	
	
	
}