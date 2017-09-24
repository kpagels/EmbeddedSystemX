#pragma once
#include "Operational.h"
class RealTimeLoop : public EmbeddedState
{
public:
	void Stop(EmbeddedSystemX* t);
	void Suspend(EmbeddedSystemX* t);
	RealTimeLoop();
	~RealTimeLoop();

};

