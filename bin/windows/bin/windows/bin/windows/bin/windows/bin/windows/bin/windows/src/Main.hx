import sdl.SDL;
import sdl.Window;
import sdl.Renderer;
using haxe.unit.TestCase;

#if (!mac && !android && !ios && !linux && !windows)
    #error "You should define a target, please read and modify build.hxml"
#end

class Main
{
	static var state : { window:Window, renderer:Renderer };

	static function main() 
	{
		
		SDL.init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
		state = SDL.createWindowAndRenderer(GameManager.SCREEN_WIDTH, GameManager.SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
		
		//var window:Window;
		GameManager.screen = SDL.getWindowSurface(state.window);
			
		//trace("hello flow");
		var obstacles:Array<Sprite> = new Array<Sprite>();
		
		var action:Int;
		var collider:Int;
		var obstacleScore:Int = 0;
		var obstacleTimer:Float = 0;
		var obstacleSpawnRate:Float=0;
		var obstacleAmplitude:Float=50.0;
		var obstacleIntercept:Float=50.0;
		var invincibleCheck:Float = 0.0;
		var expertMode:Bool = false;
		
		var scoreCount:ScoreCounter;
		
		//The frame rate regulator
		var fps:Timer = new Timer();
		
		var score:Int;
		
		var quit:Bool = false;
		var initialized:Bool = false;
		var otter:Otter;
		var background:Background;
		
		var menu:MenuScreen;
		
		var start:Bool = false; 
		var _started:Bool = false;
		var isExploding:Bool = false;
		var explodeCount:Int = 0;
		
		score = 0;
		
		scoreCount = new ScoreCounter("numbers.bmp", 255, 255, 255);
		otter = new Otter("otter.bmp", 255, 255, 255);
		
		background = new Background("background.bmp", GameManager.screen);
		
		menu = new MenuScreen("menuScreens.bmp", 255, 0, 255);
	
		//state = {window:snow.modules.sdl.Runtime.window,renderer:SDL.createRenderer(snow.modules.sdl.Runtime.window, -1, 0x00000002)}
		
		
    //While the user hasn't quit
    while(quit == false){
        //Start the frame timer
		while(start==false){ //game has not started yet
			scoreCount.setTitle(false);
			isExploding = false;
			explodeCount = 0;
			
			var mps:Timer = new Timer();
			mps.start();
			
			while(SDL.hasAnEvent()) {
				//Handle events for the stick figure
					var event = SDL.pollEvent();
					 
					if(menu.handle_event(event) == true){
						start = menu.handle_event(event);
						//break;
					}
					//trace("Start:: " + start);
					
			}
			
			//sets variables and settings to initial holding values
			background.scroll(10, GameManager.screen);
			menu.show(GameManager.screen);
			scoreCount.show(GameManager.screen);
			
			SDL.updateWindowSurface(state.window);
			var texture:sdl.Texture = SDL.createTextureFromSurface(state.renderer, menu.sprite);
		    //var query = SDL.queryTexture(texture, {format:0, access:0, w:0, h:0});
		    //SDL.setTextureBlendMode(texture, SDL_BLENDMODE_MOD);
			SDL.renderCopyEx(state.renderer, texture, null, { x:menu.getOffSetX(), y:menu.getOffSetY(), w:menu.width, h:scoreCount.height }, 90, null, SDL_FLIP_VERTICAL);
			
			SDL.updateWindowSurface(state.window);
			var texture:sdl.Texture = SDL.createTextureFromSurface(state.renderer, scoreCount.sprite);
		    //var query = SDL.queryTexture(texture, {format:0, access:0, w:0, h:0});
		    //SDL.setTextureBlendMode(texture, SDL_BLENDMODE_MOD);	
			SDL.renderCopyEx(state.renderer, texture, null, { x:scoreCount.getOffSetX(), y:scoreCount.getOffSetY(), w:scoreCount.width, h:scoreCount.height }, 90, null, SDL_FLIP_VERTICAL);
			/*
			SDL_Flip(screen);
			SDL_Flip(menu.sprite);
			SDL_Flip(scoreCount.sprite);
			 * */
			if(mps.get_ticks() < 1000 / GameManager.FRAMES_PER_SECOND){
				SDL.delay( cast(( 1000 / GameManager.FRAMES_PER_SECOND ) -  mps.get_ticks(), UInt));
			}
			
			//initialize otter variables			
			if (score > 0){
				score = 0;
				otter.setIsVisible(true);
			}
			otter.setStarting(true);
			otter.setOffSetY(-35);
			//continue;
		}
		
		
		//GAME STARTED
		
		scoreCount.setTitle(true);
		menu.setHasPlayed(true);
		fps.start();
			//While there's events to handle
			
			while(SDL.hasAnEvent()) {
				//Handle events for the stick figure
				
					var event = SDL.pollEvent();
					otter.handle_events(event);
				
				//If the user has Xed out the window
				if(event.type == SDL_QUIT){
					//Quit the program
					quit = true;
					SDL.quit();
				}
				
			}
			
		
		//set obstacle spawn rates based on sinusoidal difficulty tracker
		if (expertMode){
			obstacleSpawnRate = 25*Math.sin(obstacleTimer) + 375;
		}else{
			obstacleSpawnRate = obstacleAmplitude * (Math.sin(obstacleTimer)) + obstacleIntercept;
			if (obstacleSpawnRate > 400){
				expertMode = true;
			}
			
			if(score > obstacleScore + 1000){
				obstacleAmplitude=50;
				obstacleIntercept+=10;
				obstacleScore = score;
			}
			
			obstacleAmplitude -= .1;
			
		}
		
		obstacleTimer += .1;
		//spawn obstacles
		//missiles
		var spawnObstacle:Float = Math.random()%1000 + 1;   //randomly create missles
		if (spawnObstacle < obstacleSpawnRate){
		  var randY:Float = (Math.random()%11)*24 + 50; //random height
		  var temp:Missile = new Missile("missiles.bmp",127,127,127,randY); //create missile
		  obstacles.push(temp); //add missile to obstacle pointer vector
		}
		//coins
		var spawnCoin:Float = Math.random()%1000 + 1;
		if (spawnCoin < 50){
		  var randX:Float = Math.random()%400 + 100;     //random x
		  var money:Coin = new Coin("coins.bmp",48,120,128,Std.int(randX));
		  obstacles.push(money);
		}
		//fish
		var spawnFish:Float = Math.random()%1000 + 1;
		if(spawnFish < 3){
		  var fRandY:Float = (Math.random()%10)*25 + 50; //random height
		  var food:Fish = new Fish("LoveFish.bmp",85,109,143, Std.int(fRandY));
		  obstacles.push(food);
		}
		
		
		var collide:Bool;
		otter.move(); //moves otter
		var obstacleSize:Int = obstacles.length;
		for(i in 0...obstacleSize ){
			collide = false;
			collide = otter.check_collision(obstacles[i]); //checks for collision between otter and current obstacle
		
			if(collide){
				action=0;
				action=obstacles[i].collision(); //determines which time of obstacle has been collided with
				if (action==2){ //coin
				  score += 100;
				  //Mix_PlayChannel(-1, coin, 0); //coin sound
				}	
				if (action==1){ //missile
				 //Mix_PlayChannel(-1, boom, 0); //explosion sound
				  if(otter.getStatus()!=3){ //if otter not invincible(from powerup)
					  otter.setDead(true); //otter has died
					  otter.setIsVisible(false); //otter is invisible
					  collider = i; //obstacle index number that killed otter
					  isExploding = true; //trigger explosions
					  break;
				  }else{ //if otter is invincible
					score += 200;
				  }
				}
				if (action==3){ //fish
				//Mix_PlayChannel(-1, powerup, 0);
				otter.setInvincible(true);
				invincibleCheck=0;
				}
			}
			obstacles[i].move(); //moves obstacle to new position based on velocity
		}
		
		if(otter.getStatus()==3) //if otter invincible
		{
			//cout << endl << fps.get_ticks();
			if(invincibleCheck==0) invincibleCheck=score+2000; //if otter just turned invincible, set limit for how long
			else
			{
				if(score>=invincibleCheck)
				{
					otter.setInvincible(false); //turns otter back to normal after set limit has been reached
				}
			}
		}
		
		//increment score
		score += 7;
		scoreCount.setScore(score);
		
		//Show the otter on the screen and scroll the background
		background.scroll(10,GameManager.screen);
			otter.show(GameManager.screen);
		scoreCount.show(GameManager.screen);
		
		
	   for(i in 0...obstacles.length){obstacles[i].show(GameManager.screen);}
		//Update the screen
       // SDL_Flip(screen);
	   SDL.updateWindowSurface(state.window);
	   var texture:sdl.Texture = SDL.createTextureFromSurface(state.renderer, otter.sprite);
	   //var query = SDL.queryTexture(texture, {format:0, access:0, w:0, h:0});
	   //SDL.setTextureBlendMode(texture, SDL_BLENDMODE_MOD);
	   //otter.sprite = null;
	   //SDL_Flip(otter.sprite);
	   SDL.renderCopyEx(state.renderer, texture, null, { x:otter.getOffSetX(), y:otter.getOffSetY(), w:otter.width, h:otter.height }, 90, null, SDL_FLIP_VERTICAL);
		
	  for (i in 0...obstacles.length){
		  //SDL_Flip(obstacles[i].sprite); 
	   var texture:sdl.Texture = SDL.createTextureFromSurface(state.renderer, obstacles[i].sprite);
	   //var query = SDL.queryTexture(texture, {format:0, access:0, w:0, h:0});
	   //SDL.setTextureBlendMode(texture, SDL_BLENDMODE_MOD);
		SDL.freeSurface(obstacles[i].sprite);
	   //obstacles[i].sprite = null;
	   //SDL_Flip(otter.sprite);
	   SDL.renderCopyEx(state.renderer, texture, null, { x:obstacles[i].getOffSetX(), y:obstacles[i].getOffSetY(), w:obstacles[i].width, h:obstacles[i].height }, 90, null, SDL_FLIP_VERTICAL);
	  }	  
	  
	   var texture:sdl.Texture = SDL.createTextureFromSurface(state.renderer, scoreCount.sprite);
	   //var query = SDL.queryTexture(texture, {format:0, access:0, w:0, h:0});
	   //SDL.setTextureBlendMode(texture, SDL_BLENDMODE_MOD);
	   //SDL.freeSurface(scoreCount.sprite);
	   //scoreCount.sprite = null;
	   //SDL_Flip(otter.sprite);
	   SDL.renderCopyEx(state.renderer, texture, null, { x:scoreCount.getOffSetX(), y:scoreCount.getOffSetY(), w:scoreCount.width, h:scoreCount.height }, 90, null, SDL_FLIP_VERTICAL);
		
	   
	   	//Cap the frame rate
       if(fps.get_ticks() < 1000 / GameManager.FRAMES_PER_SECOND){
			SDL.delay( cast(( 1000 / GameManager.FRAMES_PER_SECOND ) - fps.get_ticks() , UInt));
		}
		
		//free obstacles as they exit
		var i:Int = 0;
		while(i < obstacles.length){
		  if(obstacles[i].getOffSetX() < -50){ //if obstacle off screen
			obstacles.remove(obstacles[i]);
			obstacles.splice(obstacles.indexOf(obstacles[0])+i, i);
			i--;
		  }
		}
		
		if(isExploding){explodeCount++;} //if otter has died
		
		//resets variables at end of game for if player wants to replay
		if(explodeCount == 13){ //end of game
			start = false;
			var j:Int = 0;
			while(j < obstacles.length){ //deletes all obstacles
				 //obstacles[j];
				//obstacles.erase(obstacles.begin()+j);
				obstacles.remove(obstacles[j]);
				j--;
			}
			obstacleScore = 0;
				obstacleTimer = 0;
				obstacleSpawnRate=0;
				obstacleAmplitude=50.0;
				obstacleIntercept=50.0;
			invincibleCheck = 0.0;
				expertMode = false;
			otter.setDead(false);
		}
		
		
		
		//SDL.delay(4);
		
		SDL.freeSurface(menu.sprite);
		SDL.freeSurface(scoreCount.sprite);
		SDL.freeSurface(otter.sprite);
		SDL.renderPresent(state.renderer);
		SDL.quit();
		
	}
		
		
       
		
	}
}
