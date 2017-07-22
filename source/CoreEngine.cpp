#include <CoreEngine.h>


CoreEngine::CoreEngine()
{
		

}

bool CoreEngine::Init()
{
	return false;
}

void CoreEngine::runTests()
{
	
}

pGameObject CoreEngine::RegisterGameObject()
{
	m_gameObjects.push_back( (pGameObject)(new GameObject()) );
	return m_gameObjects.back();
}

bool CoreEngine::DeRegisterGameObject(pGameObject pointer)
{
	try 
	{
		DEBUG_LOG("deleting a gameobject, test");
	}
	catch (...)
	{
		return false;
	}

	return true;
}
