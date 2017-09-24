#include "stdafx.h"
#include <iostream>
#include "Suspended.h"
#include "Mode1.h"
#include "Ready.h"
using namespace std;

EmbeddedState* Suspended::_instance = 0;

EmbeddedState* Suspended::Instance() {
	if (_instance == 0) {
		_instance = new Suspended();
	}
	return _instance;
}

void Suspended::Resume(EmbeddedSystemX* t) {
	cout << "Suspended -> Mode1" << endl;
	ChangeState(t, Mode1::Instance());
}

void Suspended::Stop(EmbeddedSystemX* t) {
	cout << "Suspended -> Ready" << endl;
	ChangeState(t, Ready::Instance());
}

Suspended::Suspended()
{
}

Suspended::~Suspended()
{
}
