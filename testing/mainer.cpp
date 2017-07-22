#include <stdio.h>
#include <CoreEngine.h>

#include "Player.h"

int main(int argc, char** argv)
{
	CoreEngine engine;

	pGameObject objectID = engine.RegisterGameObject();
	pGameObject objectID_2 = engine.RegisterGameObject();

	engine.DeRegisterGameObject(objectID);
	engine.DeRegisterGameObject(objectID_2);

	return 0;
}
