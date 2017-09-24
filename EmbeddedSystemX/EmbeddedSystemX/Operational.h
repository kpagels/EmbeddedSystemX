#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class Operational: public EmbeddedState
{
private:
	Operational();
	/*

public:
	static EmbeddedState* Instance();
	char* WhatCanWeDo();
	void Restart(EmbeddedSystemX*);
	~Operational();
protected:
	Operational();*/
};

