#include "stdafx.h"
#include "Operational.h"
#include "PowerOnSelfTest.h"


void Operational::Restart(EmbeddedSystemX* t) {
	ChangeState(t,PowerOnSelfTest::Instance());
}