#include "stdafx.h"
#include <iostream>
#include "PowerOnSelfTest.h"
#include "Failure.h"

using namespace std;

PowerOnSelfTest::PowerOnSelfTest(EmbeddedSystemX* context) : _context(context) {};

void PowerOnSelfTest::Handle()
{
	cout << "PowerOnSelfTest " << endl;
	_context->setState(new Failure(_context));
}



PowerOnSelfTest::~PowerOnSelfTest()
{
}
