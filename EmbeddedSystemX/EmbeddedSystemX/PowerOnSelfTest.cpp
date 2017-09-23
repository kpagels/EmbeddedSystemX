#include "stdafx.h"
#include <iostream>
#include "PowerOnSelfTest.h"
#include "Failure.h"

using namespace std;

PowerOnSelfTest::PowerOnSelfTest(EmbeddedSystemX* context) : _context(context) {};

void PowerOnSelfTest::Handle()
{
	cout << "PowerOnSelfTest " << endl;
	_context->ChangeState(new Failure(_context));
}

void PowerOnSelfTest::SelfTestFailed(){}

void PowerOnSelfTest::SelfTestOk(){}

PowerOnSelfTest::~PowerOnSelfTest(){}
