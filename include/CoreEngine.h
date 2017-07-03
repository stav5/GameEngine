#pragma once

#include <stdio.h>
#include <GameObject.h>
#include <Timer.h>
#include <LinkedList.h>

class __declspec(dllexport) CoreEngine
{
private:
	LinkedList<GameObject> gameObjects;	
	
	bool addGameObjectToList(GameObject* pObj);
	bool removeGameObjectFromList(GameObject* pObj);
	
public:
	CoreEngine();
	bool Init();	
	void runTests();
			
	void RegisterGameObject(GameObject* pGameObject);
	void DeRegisterGameObject(GameObject* pGameObject);
	

};
