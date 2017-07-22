#pragma once

#include <stdio.h>
#include <vector>

#include <Macros.h>
#include <GameObject.h>

#define pGameObject GameObject*


class dllspec CoreEngine
{
private:
	std::vector<pGameObject> m_gameObjects;
	
public:
	CoreEngine();
	bool Init();
	void runTests();
			
	pGameObject RegisterGameObject();
	bool DeRegisterGameObject(pGameObject pointer);
	

};
