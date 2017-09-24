#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class EmbeddedState;

class PowerOnSelfTest : public EmbeddedState {

public:
	static EmbeddedState* Instance();

	void Handle();
	void SelfTestFailed();
	void SelfTestOk();
protected:
	PowerOnSelfTest();
private:
	static EmbeddedState* _instance;

};

