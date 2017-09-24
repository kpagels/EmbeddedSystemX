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
	return "Restart / Exit\n";
}

void Failure::Restart(EmbeddedSystemX* system){
	cout << "Failure -> PowerOnSelfTest" << endl;
	system->ChangeState(PowerOnSelfTest::Instance());
}
void Failure::Exit(EmbeddedSystemX* system){
	cout << "Failure -> Exit" << endl;
	//terrminate
}

Failure::~Failure(){}
