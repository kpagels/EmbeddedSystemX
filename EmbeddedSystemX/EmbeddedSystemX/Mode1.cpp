#include "stdafx.h"
#include <iostream>
#include "Mode1.h"
#include "Mode2.h"
using namespace std;

EmbeddedState* Mode1::_instance = 0;


Mode1::Mode1(){}

EmbeddedState* Mode1::Instance() {
	if (_instance == 0) {
		_instance = new Mode1;
	}
	return _instance;
}

void Mode1::chMode(EmbeddedSystemX* t) {
	cout << "Mode1 -> Mode2" << endl;
	ChangeState(t, Mode2::Instance());
}

char* Mode1::WhatCanWeDo() {
	return "Mode1: chMode / stop / suspend\n";
}

void Mode1::eventX(EmbeddedSystemX * system)
{
	system->responseM1eventX();
}

Mode1::~Mode1()
{
}
