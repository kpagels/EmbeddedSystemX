#include "stdafx.h"
#include <iostream>
#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

using namespace std;

PowerOnSelfTest::PowerOnSelfTest(){}


void PowerOnSelfTest::Handle()
{
	cout << "PowerOnSelfTest " << endl;
	//_context->ChangeState(new Failure(_context));
}

EmbeddedState* PowerOnSelfTest::_instance = 0;

EmbeddedState* PowerOnSelfTest::Instance()
{
	//should be singleton
	if (_instance == 0)
	{
		_instance = new PowerOnSelfTest;
	}
	return _instance;

}

void PowerOnSelfTest::SelfTestFailed(){}
void PowerOnSelfTest::SelfTestOk(){}
