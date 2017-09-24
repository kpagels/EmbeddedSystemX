#include "stdafx.h"
#include <iostream>
#include "Mode2.h"
#include "Mode3.h"
using namespace std;

EmbeddedState* Mode2::_instance = 0;

Mode2::Mode2(){}

EmbeddedState* Mode2::Instance() {
	if (_instance == 0) {
		_instance = new Mode2;
	}
	return _instance;
}

void Mode2::chMode(EmbeddedSystemX* t) {
	cout << "Mode2 -> Mode3" << endl;
	ChangeState(t, Mode3::Instance());
}

char* Mode2::WhatCanWeDo() {
	return "Mode2: chMode / stop / suspend\n";
}

void Mode2::eventX(EmbeddedSystemX * system)
{
	system->responseM2eventX();
}

void Mode2::eventY(EmbeddedSystemX * system)
{
	system->responseM2eventY();
}

Mode2::~Mode2()
{
}
