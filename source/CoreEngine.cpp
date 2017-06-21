#include <CoreEngine.h>

#include <iostream>

CoreEngine::CoreEngine()
{
		

}

void CoreEngine::runTests()
{
	
}

void CoreEngine::RegisterGameObject(GameObject* pGameObject)
{
	gameObjects.Add(pGameObject);
}

void CoreEngine::DeRegisterGameObject(GameObject* pGameObject)
{
	//removeGameObjectFromList(pGameObject);
	//delete pGameObject;
}
