#include "stdafx.h"
#include <iostream>
#include "Initializing.h"
#include "Ready.h"

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
	cout << "Initializing -> Ready" << endl;
	ChangeState(t, Ready::Instance());
}

void Initializing::EnterState(EmbeddedSystemX* t) {
	t->startInitializing();
}


char * Initializing::WhatCanWeDo(void){
	return "Initialized\n";
}

Initializing::~Initializing(){}
