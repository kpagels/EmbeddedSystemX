#pragma once
#include "Operational.h"
class Suspended : public Operational
{
private:
	static EmbeddedState* _instance;
public:
	static EmbeddedState* Instance();
	void Resume(EmbeddedSystemX* t);
	void Stop(EmbeddedSystemX * t);
	char * WhatCanWeDo();
	Suspended();
	~Suspended();
};

