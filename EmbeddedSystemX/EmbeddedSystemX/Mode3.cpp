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
	return "chMode / stop / suspend\n";
}

Mode3::~Mode3()
{
}
