#pragma once
#include "Operational.h"
class Configuration : public Operational
{
private:
	static EmbeddedState* _instance;
	Configuration();
	~Configuration();
public:
	static EmbeddedState* Instance();
	void ConfigurationEnded(EmbeddedSystemX*);
	void ConfigX(EmbeddedSystemX*);
	void EnterState(EmbeddedSystemX*);

	char * WhatCanWeDo();

};

