#pragma once

class __declspec(dllexport) Timer
{
private:



public:
	
	Timer();

	void SetAttribute();

	int NextFrame();	
	int Start();
	int Stop();

	float GetDelta();

};
