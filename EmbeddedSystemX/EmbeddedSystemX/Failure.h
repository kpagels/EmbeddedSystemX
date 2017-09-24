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
	void Handle();
	void Restart();
	void Exit();
	~Failure();
protected:
	Failure();
};

