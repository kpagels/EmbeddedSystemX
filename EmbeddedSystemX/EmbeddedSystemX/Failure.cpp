#include "stdafx.h"
#include "Failure.h"
#include <iostream>
#include "PowerOnSelfTest.h"
using namespace std;

EmbeddedState* Failure::_instance = 0;

Failure::Failure() {}

EmbeddedState* Failure::Instance() {
	if (_instance == 0) {
		_instance = new Failure;
	}
	return _instance;

}


char* Failure::WhatCanWeDo() {
	return "WhatCanWeDo: Failure\n";
}

void Failure::Handle()
{
	cout << "Failure " << endl;
	//_context->ChangeState(new PowerOnSelfTest(_context));
}

void Failure::Restart(EmbeddedSystemX* system){
	// cout restaring ...
	system->ChangeState(PowerOnSelfTest::Instance());
}
void Failure::Exit(EmbeddedSystemX* system){
	//terrminate
}

Failure::~Failure(){}
