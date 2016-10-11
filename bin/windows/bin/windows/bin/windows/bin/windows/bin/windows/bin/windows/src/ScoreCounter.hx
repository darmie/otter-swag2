package;
import cpp.Pointer;
import sdl.Surface;
import sdl.SDL;

/**
 * ...
 * @author Darmie Akinlaja
 */
class ScoreCounter extends Sprite
{
	private var COUNT:Int;
	private var score:Int;
	private var title:Bool;
	private var isStarted:Bool;
	

	public function new(filename:String, r:Int, g:Int, b:Int) 
	{
		super(1);
		COUNT = 0;
		
	 
		isStarted = false;
		score = 0;
		hasCollided = false;
		title = true;

		//Initialize animation variables
		frame = 0;
		status = COUNT;

		//Sprite pointer
		sprite = load_image(filename,r,g,b);
		
		set_clips();		
	}
	
	
	override public function set_clips():Void  //sets sprite sheet position clips
	{
		//Clip the sprites
		//states[0][0] = {x:287, y:0, w:21, h:28};
		states[0][0].x = 287; //0
		states[0][0].y = 0;
		states[0][0].w = 21;
		states[0][0].h = 28;

		states[0][1].x = 0; //1
		states[0][1].y = 0;
		states[0][1].w = 20;
		states[0][1].h = 28;

		states[0][2].x = 30; //2
		states[0][2].y = 0;
		states[0][2].w = 24;
		states[0][2].h = 28;

		states[0][3].x = 62; //3
		states[0][3].y = 0;
		states[0][3].w = 23;
		states[0][3].h = 28;

		states[0][4].x = 93; //4
		states[0][4].y = 0;
		states[0][4].w = 26;
		states[0][4].h = 28;

		states[0][5].x = 126; //5
		states[0][5].y = 0;
		states[0][5].w = 25;
		states[0][5].h = 28;

		states[0][6].x = 157; //6
		states[0][6].y = 0;
		states[0][6].w = 26;
		states[0][6].h = 28;

		states[0][7].x = 189; //7
		states[0][7].y = 0;
		states[0][7].w = 26;
		states[0][7].h = 28;

		states[0][8].x = 221; //8
		states[0][8].y = 0;
		states[0][8].w = 26;
		states[0][8].h = 28;

		states[0][9].x = 253; //9
		states[0][9].y = 0;
		states[0][9].w = 26;
		states[0][9].h = 28;	
		
		//trace(states);
	}
	
	override public function getOffSetX():Int 
	{
		//return super.getOffSetX();
		return offSetX;
	}
	
	override public function getOffSetY():Int 
	{
		//return super.getOffSetY();
		return offSetY;
	}
	
	override public function collision():Int 
	{
		//return super.collision();
		return 0;
	}
	
	override public function apply_surface(?x:Int, ?y:Int, source:Surface, destination:Surface, clip:SDLRect)
	{
		super.apply_surface(source, destination, clip);
		
		//Holds offsets
		var shift:SDLRect = {x:0, y:0, w:0, h:0};
		

		//Get offsets
		shift.x = x;
		shift.y = y;
		
		
			//Blit
		SDL.blitSurface(source, clip, destination, shift);	
		
	}
	
	
	public function setScore(num:Int){
		score = num;
	}
	
	public function getTitle(){
		return title;
	}
	
	public function setTitle(val:Bool){
		title = val;
	}
	
	
	override public function show(screen:Surface):Void 
	{
		super.show(screen);
		
		var xPos:Int = SCREEN_WIDTH - (28*6);
		isStarted = false;
		var digits:Int = 0;
		var i:Int = 6;
		  while(i>0){
			frame = cast(score / (Math.pow(10,i-1)), Int);
			frame = frame % 10;
			if (isStarted || frame!=0){
				if (title){
					apply_surface(xPos,0,sprite, screen, states[0][frame]);
				}else{
					digits++;
					//xPos -= 165;
					xPos -= cast(((480-((digits+1)*28))/2)-10, Int);
					apply_surface(xPos,135,sprite, screen, states[0][frame]);	
					xPos += cast(((480-((digits+1)*28))/2)-10, Int);
					//xPos += 165;
				}
			  isStarted = true;
			}
			xPos += 28;
			i--;
		  }		
	}
	
}