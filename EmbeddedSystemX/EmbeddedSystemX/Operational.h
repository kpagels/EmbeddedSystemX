#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class Operational: public EmbeddedState
{
private:
	static EmbeddedState* _instance;

public:
	static EmbeddedState* Instance();
	void Restart();
	~Operational();
protected:
	Operational();
};

