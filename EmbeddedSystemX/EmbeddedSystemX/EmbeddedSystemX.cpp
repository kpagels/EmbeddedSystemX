#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "EmbeddedState.h"


EmbeddedSystemX::EmbeddedSystemX()
{
	_state = new PowerOnSelfTest(this);
}

void EmbeddedSystemX::setState(EmbeddedState* state)
{
	_state = state;
}

void EmbeddedSystemX::Handle()
{
	_state->Handle();
}


EmbeddedSystemX::~EmbeddedSystemX()
{
}