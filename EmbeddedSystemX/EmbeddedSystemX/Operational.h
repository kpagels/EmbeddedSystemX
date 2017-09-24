#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class Operational: public EmbeddedState
{
private:
	static EmbeddedState* _instance;

public:
	static EmbeddedState* Instance();
	char* WhatCanWeDo();
	void Restart();
	void Handle();
	~Operational();
protected:
	Operational();
};

