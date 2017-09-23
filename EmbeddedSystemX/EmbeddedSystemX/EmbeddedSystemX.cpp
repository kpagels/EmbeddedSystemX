#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "EmbeddedState.h"
#include <iostream>
using namespace std;

void EmbeddedSystemX::ChangeState(EmbeddedState* s)
{
	_state = s;
}

EmbeddedSystemX::EmbeddedSystemX()
{
	cout << " EmbeddedSystemX constructor " << endl;
	_state = new PowerOnSelfTest(this);
}


void EmbeddedSystemX::Handle()
{
	cout << " Handle: " << _state << endl;
	cout << " Handle:* " << &_state << endl;
	_state->Handle();
}

void EmbeddedSystemX::SelfTestOk() {}
void EmbeddedSystemX::Initialized() {};
void EmbeddedSystemX::Restart() {};
void EmbeddedSystemX::Configure() {};
void EmbeddedSystemX::configurationEnded() {};
void EmbeddedSystemX::Exit() {};
void EmbeddedSystemX::Stop() {};
void EmbeddedSystemX::Start() {};
void EmbeddedSystemX::Suspend() {};
void EmbeddedSystemX::Resume() {};
void EmbeddedSystemX::SelfTestFailed() {};
void EmbeddedSystemX::ConfigX() {};
void EmbeddedSystemX::chMode() {};
void EmbeddedSystemX::eventX() {};
void EmbeddedSystemX::eventY() {};
EmbeddedSystemX::~EmbeddedSystemX()
{
	cout << "EmbeddedSystemX destructor" << endl;
}