package;
import sdl.Surface;

/**
 * ...
 * @author Darmie Akinlaja
 */
class Coin extends Sprite
{	
	private var SCORE:Int;
	private var SPIN:Int;

	public function new(filename:String, r:Int, g:Int, b:Int, randX:Int) 
	{
		super(2);
		SPIN = 0;
		SCORE = 1;
		
		hasCollided = false;
	  
		//Initialize movement variables
		offSetY = -50;
		offSetX = randX;
		velocityX = 0;
		velocityY = 7;

		//Initialize animation variables
		frame = 0;
		status = SPIN;

		//Sprite pointer
		sprite = load_image(filename,r,g,b);
		
		//Initialize States
		set_clips();		
	}
	
	override public function getOffSetX():Int //returns x position
	{
		//return super.getOffSetX();
		return offSetX;
	}
	
	override public function getOffSetY():Int //returns y position
	{
		//return super.getOffSetY();
		return offSetY;
	}
	
	override public function set_clips():Void 
	{
		//super.set_clips();
		//Clip the sprites
		states[0][0].x = 6; //spin0
		states[0][0].y = 3;
		states[0][0].w = 14;
		states[0][0].h = 16;

		states[0][1].x = 23; //spin1
		states[0][1].y = 3;
		states[0][1].w = 12;
		states[0][1].h = 16;

		states[0][2].x = 38; //spin2
		states[0][2].y = 3;
		states[0][2].w = 11;
		states[0][2].h = 16;

		states[0][3].x = 52; //spin3
		states[0][3].y = 3;
		states[0][3].w = 9;
		states[0][3].h = 16;
		
		states[0][4].x = 65; //spin4
		states[0][4].y = 3;
		states[0][4].w = 4;
		states[0][4].h = 16;

		states[0][5].x = 73; //spin5
		states[0][5].y = 3;
		states[0][5].w = 9;
		states[0][5].h = 16;

		states[0][6].x = 85; //spin6
		states[0][6].y = 3;
		states[0][6].w = 11;
		states[0][6].h = 16;

		states[0][7].x = 99; //spin7
		states[0][7].y = 3;
		states[0][7].w = 12;
		states[0][7].h = 16;

		states[0][8].x = 114; //spin8
		states[0][8].y = 3;
		states[0][8].w = 14;
		states[0][8].h = 16;
		
		states[0][9].x = 130; //spin9
		states[0][9].y = 3;
		states[0][9].w = 16;
		states[0][9].h = 16;

		states[1][0].x = 153; //points0
		states[1][0].y = 7;
		states[1][0].w = 14;
		states[1][0].h = 8;

		states[1][1].x = 0; //points1
		states[1][1].y = 0;
		states[1][1].w = 0;
		states[1][1].h = 0;		
	}
	
	
	override public function collision():Int //if a collision has happened with a coin
	{
		//return super.collision();
		velocityY=0; //keep at same height
		status = SCORE; //switch to show score sprites instead of coin
		hasCollided = true; //set collided to true
		return 2; //collision was with a coin
	}
	
	override public function move():Void  //moves the coin across the screen
	{
		//super.move();
		// increase the offSet based on the value of the velocity (up or down)
		if (offSetY < 298){ //if not at bottom of screen
			offSetY += velocityY;
		}else{ //at bottom of screen
			velocityY = 0; 
		}
		if (offSetY > 50){ //if coin is within the water
			velocityX = -10;
			offSetX += velocityX;
		}		
	}
	
	override public function show(screen:Surface):Void //rotates between sprite images to show animation
	{
		//super.show(surface);
		if (status == SCORE){
			frame=0;
			apply_surface(sprite, screen, states[1][frame]); //display score sprite
		}
		if (status == SPIN){ //if still in coin
			if (frame < 9){
				frame++; //swap between sprites
			}else{
				frame = 0; //return to first sprite when reach last
			}
			apply_surface(sprite, screen, states[0][frame]); //display sprite
		}		
	}
	
	
	
}	