#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"
using namespace std;

class EmbeddedState;

class Initializing: public EmbeddedState{
public:
	static EmbeddedState* Instance();
	virtual char* WhatCanWeDo(void);
	void Initialized();
	
protected:
	Initializing();
	~Initializing();
private:
	static EmbeddedState* _instance;


};

