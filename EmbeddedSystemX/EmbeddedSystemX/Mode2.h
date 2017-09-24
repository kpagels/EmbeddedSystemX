#pragma once
#include "RealTimeLoop.h"
class Mode2 : public RealTimeLoop
{
private:
	static EmbeddedState* _instance;
public:
	static EmbeddedState* Instance();
	void chMode(EmbeddedSystemX* t);
	char * WhatCanWeDo();
	Mode2();
	~Mode2();
};

