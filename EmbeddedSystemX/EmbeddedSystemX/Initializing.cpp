#include "stdafx.h"
#include <iostream>
#include "Initializing.h"

using namespace std;

EmbeddedState* Initializing::_instance = 0;

Initializing::Initializing() {}

EmbeddedState* Initializing::Instance() {
	if (_instance == 0) {
		_instance = new Initializing;
	}
	return _instance;
}
void Initializing::Initialized(EmbeddedSystemX* t) {
	//ChangeState(t, Operational::Instance());
}

char * Initializing::WhatCanWeDo(void){
	return "WhatCanWeDo: Initializing\n";
}

Initializing::~Initializing(){}
