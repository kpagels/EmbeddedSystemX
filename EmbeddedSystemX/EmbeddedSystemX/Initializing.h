#pragma once
#include "EmbeddedSystemX.h"
#include "EmbeddedState.h"
using namespace std;

class Initializing: public EmbeddedState
{
private:
	EmbeddedSystemX* _context;

public:
	Initializing(EmbeddedSystemX* context);
	void Initialized();
	~Initializing();
};

