#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class PowerOnSelfTest : public EmbeddedState {

public:
	static EmbeddedState* Instance();

	virtual char* WhatCanWeDo(void);
	void SelfTestFailed(EmbeddedSystemX*);
	void SelfTestOk(EmbeddedSystemX*);
	void systemSelfTest(EmbeddedSystemX*);
	void EnterState(EmbeddedSystemX*);
protected:
	PowerOnSelfTest();
private:
	static EmbeddedState* _instance;

};

