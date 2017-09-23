#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class Operational: public EmbeddedState
{
private:
	EmbeddedSystemX* _context;

public:
	Operational(EmbeddedSystemX* context);
	void Restart();
	~Operational();
};

