#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class Failure : public EmbeddedState
{

private:
	EmbeddedSystemX* _context;

public:
	Failure(EmbeddedSystemX* context);
	void Handle();
	~Failure();
};

