#include "stdafx.h"
#include <iostream>
#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

using namespace std;

EmbeddedState* PowerOnSelfTest::_instance = 0;

PowerOnSelfTest::PowerOnSelfTest(){}

EmbeddedState* PowerOnSelfTest::Instance(){
	//should be singleton
	if (_instance == 0){
		_instance = new PowerOnSelfTest;
	}
	return _instance;

}

void PowerOnSelfTest::SelfTestFailed(){}
void PowerOnSelfTest::SelfTestOk(){}

void PowerOnSelfTest::Handle() {
	cout << "PowerOnSelfTest " << endl;
	//_context->ChangeState(new Failure(_context));
}
