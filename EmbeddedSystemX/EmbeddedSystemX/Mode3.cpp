#include "stdafx.h"
#include <iostream>
#include "Mode3.h"
#include "Mode1.h"
using namespace std;

EmbeddedState* Mode3::_instance = 0;
Mode3::Mode3(){}

EmbeddedState* Mode3::Instance() {
	if (_instance == 0) {
		_instance = new Mode3;
	}
	return _instance;
}

void Mode3::chMode(EmbeddedSystemX* t) {
	cout << "Mode3 -> Mode1" << endl;
	ChangeState(t, Mode1::Instance());
}

char* Mode3::WhatCanWeDo() {
	return "Mode3: chMode / stop / suspend\n";
}

void Mode3::eventX(EmbeddedSystemX * system)
{
	system->responseM3eventX();
}

Mode3::~Mode3()
{
}
