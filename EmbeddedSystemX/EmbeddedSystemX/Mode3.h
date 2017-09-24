#pragma once
#include "RealTimeLoop.h"
class Mode3 : public RealTimeLoop
{
private:
	static EmbeddedState* _instance;

public:
	static EmbeddedState* Instance();
	void chMode(EmbeddedSystemX* t);
	char * WhatCanWeDo();
	void eventX(EmbeddedSystemX* system);
	Mode3();
	~Mode3();
};

