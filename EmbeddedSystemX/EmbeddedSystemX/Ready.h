#pragma once
#include "Operational.h"
class Ready: public Operational
{
private:
	static EmbeddedState* _instance;
public:
	static EmbeddedState* Instance();
	void Configure(EmbeddedSystemX* t);
	void Start(EmbeddedSystemX * t);
	char* WhatCanWeDo();
	void Start();
	Ready();
	~Ready();
};

