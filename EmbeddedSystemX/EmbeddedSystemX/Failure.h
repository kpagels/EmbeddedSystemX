#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class Failure : public EmbeddedState
{

private:
	static EmbeddedState* _instance;

public:
	static EmbeddedState* Instance();
	char* WhatCanWeDo();
	void Restart(EmbeddedSystemX * system);
	void Exit(EmbeddedSystemX * system);
	void display(int ErrorNo);
	~Failure();
protected:
	Failure();
};

