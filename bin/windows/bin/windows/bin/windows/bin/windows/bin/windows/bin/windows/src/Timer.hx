package;
import sdl.SDL;

/**
 * ...
 * @author Darmie Akinlaja
 */
class Timer 
{
	private var startTicks:Int; 
    private var pausedTicks:Int;
    private var paused:Bool;
    private var started:Bool;
	
	public function new() 
	{
		//Initialize the variables
		startTicks = 0;
		pausedTicks = 0;
		paused = false;
		started = false;		
	}
	
	
	public function start(){
		//Start the timer
		started = true;

		//Unpause the timer
		paused = false;

		//Get the current clock time
		startTicks = SDL.getTicks();		
	}
	
	
	public function stop(){
		//Stop the timer
		started = false;

		//Unpause the timer
		paused = false;		
	}
	
	public function pause(){
		//If the timer is running and isn't already paused
		if((started == true) && (paused == false)){
			//Pause the timer
			paused = true;

			//Calculate the paused ticks
			pausedTicks = SDL.getTicks() - startTicks;
		}		
	}
	
	public function unpause(){
		//If the timer is paused
		if( paused == true )
		{
			//Unpause the timer
			paused = false;

			//Reset the starting ticks
			startTicks = SDL.getTicks() - pausedTicks;

			//Reset the paused ticks
			pausedTicks = 0;
		}
	}
	
	public function get_ticks():Float{
		//If the timer is running
		if( started == true )
		{
			//If the timer is paused
			if( paused == true )
			{
				//Return the number of ticks when the timer was paused
				return pausedTicks;
			}
			else
			{
				//Return the current time minus the start time
				return SDL.getTicks() - startTicks;
			}
		}

		//If the timer isn't running
		return 0;		
	}
	
	public function is_started(){
		return started;
	}
	
	public function is_paused(){
		return paused;
	}
}