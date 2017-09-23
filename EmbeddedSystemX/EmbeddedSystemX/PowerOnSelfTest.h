#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class PowerOnSelfTest : public EmbeddedState
{

private:
	EmbeddedSystemX* _context;

public:
	PowerOnSelfTest(EmbeddedSystemX* context);
	void Handle();
	void SelfTestFailed();
	void SelfTestOk();
	~PowerOnSelfTest();
};

