package;
import sdl.Surface;



/**
 * ...
 * @author Darmie Akinlaja
 */
class ISprite
{

	public function move(){};
	public function show(screen:Surface){};
	public function set_clips():Void{};
	public function collision():Int{ return 0; };
	public function getOffSetX():Int{ return 0; };
	public function getOffSetY():Int{return 0; };
	
}