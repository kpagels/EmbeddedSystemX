#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class PowerOnSelfTest : public EmbeddedState {

public:
	static EmbeddedState* Instance();

	virtual char* WhatCanWeDo(void);
	void Handle();
	void SelfTestFailed(EmbeddedSystemX*);
	void SelfTestOk(EmbeddedSystemX*);
protected:
	PowerOnSelfTest();
private:
	static EmbeddedState* _instance;

};

