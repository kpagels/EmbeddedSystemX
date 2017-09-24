#include "stdafx.h"
#include "Ready.h"
#include "Configuration.h"
#include "Mode1.h"
#include <iostream>
using namespace std;

EmbeddedState* Ready::_instance = 0;

EmbeddedState* Ready::Instance() {
	if (_instance == 0) {
		_instance = new Ready();
	}
	return _instance;
}

void Ready::Configure(EmbeddedSystemX* t){
	cout << "Ready -> Configuration" << endl;
	ChangeState(t, Configuration::Instance());
}

void Ready::Start(EmbeddedSystemX* t) {
	cout << "Ready -> Mode1" << endl;
	ChangeState(t, Mode1::Instance());
}

char* Ready::WhatCanWeDo() {
	return "Configure / Start\n";
}
void Ready::Start(){}

Ready::Ready(){}


Ready::~Ready(){}
