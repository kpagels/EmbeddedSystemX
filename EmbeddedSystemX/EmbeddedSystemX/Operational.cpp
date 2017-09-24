#include "stdafx.h"
#include <iostream>
#include "Operational.h"
#include "PowerOnSelfTest.h"

using namespace std;

void Operational::Restart(EmbeddedSystemX* t) {
	cout << "Operational -> PowerOnSelfTest" << endl;
	ChangeState(t,PowerOnSelfTest::Instance());
}