#pragma once
#include "Operational.h"
class Suspend : public Operational
{
public:
	void Resume(EmbeddedSystemX* t);
	void Stop(EmbeddedSystemX * t);
	Suspend();
	~Suspend();
};

