#include "stdafx.h"
#include <iostream>
#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

using namespace std;

EmbeddedState* PowerOnSelfTest::_instance = 0;

PowerOnSelfTest::PowerOnSelfTest(){}

EmbeddedState* PowerOnSelfTest::Instance(){
	// A singleton class
	if (_instance == 0){
		_instance = new PowerOnSelfTest;
	}
	return _instance;

}

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* t){
	cout << "PowerOnSelfTest: SelfTestFailed" << endl;
	ChangeState(t, Failure::Instance());
}
void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* t){
	cout << "PoweronSelfTest: SelfTestOk" << endl;
	ChangeState(t, Initializing::Instance());
}

char* PowerOnSelfTest::WhatCanWeDo(void)
{
	return " WhatCanWeDo: PowerOnSelfTest\n";
}
void PowerOnSelfTest::Handle() {
	cout << "PowerOnSelfTest \n" << endl;
	//_context->ChangeState(new Failure(_context));
}
