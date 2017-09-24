#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class Operational: public EmbeddedState
{	
public:
	void Restart(EmbeddedSystemX*);

};

