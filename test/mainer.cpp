#include <stdio.h>
#include <CoreEngine.h>
#include "Player.h"

int main(int argc, char** argv)
{
	
	CoreEngine engine;
	
	Player p;	
	
	engine.RegisterGameObject(&p);
	
	//engine.runTests();
	
	return 0;
}
