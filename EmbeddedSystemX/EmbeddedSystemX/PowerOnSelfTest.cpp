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
	cout << "PowerOnSelfTest -> Failure" << endl;
	ChangeState(t, Failure::Instance());
}

void PowerOnSelfTest::SelfTestOk(EmbeddedSystemX* t){
	cout << "PoweronSelfTest -> Initializing" << endl;
	ChangeState(t, Initializing::Instance());
}

char* PowerOnSelfTest::WhatCanWeDo(void)
{
	return "SelfTestOk / SelfTestFailed\n";
}
