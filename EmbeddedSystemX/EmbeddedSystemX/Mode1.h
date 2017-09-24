#pragma once
#include "RealTimeLoop.h"
class Mode1 : public RealTimeLoop
{
private:
	static EmbeddedState* _instance;
public:
	static EmbeddedState* Instance();
	void chMode(EmbeddedSystemX* t);
	char * WhatCanWeDo();
	void eventX(EmbeddedSystemX* system);
protected:
	Mode1();
	~Mode1();
};

