#include "stdafx.h"
#include "Operational.h"

EmbeddedState* Operational::_instance = 0;

Operational::Operational() {}

EmbeddedState* Operational::Instance() {
	_instance = new Operational;
	return _instance;
}

char* Operational::WhatCanWeDo() {
	return "WhatCanWeDo: Operational\n";
}
void Operational::Restart(EmbeddedSystemX* t) {
	ChangeState(t, PowerOnSelfTest::Instance());
}

Operational::~Operational(){}
