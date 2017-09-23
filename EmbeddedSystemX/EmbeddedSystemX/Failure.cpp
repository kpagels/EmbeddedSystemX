#include "stdafx.h"
#include "Failure.h"
#include <iostream>
#include "PowerOnSelfTest.h"
using namespace std;

EmbeddedState* Failure::_instance = 0;

Failure::Failure() {}

EmbeddedState* Failure::Instance() {
	//should be singleton
	if (_instance == 0) {
		_instance = new Failure;
	}
	return _instance;

}

void Failure::Handle()
{
	cout << "Failure " << endl;
	//_context->ChangeState(new PowerOnSelfTest(_context));
}

void Failure::Restart(){
}
void Failure::Exit(){}

Failure::~Failure(){}
