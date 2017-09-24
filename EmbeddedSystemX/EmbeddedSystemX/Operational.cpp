#include "stdafx.h"
#include "Operational.h"

EmbeddedState* Operational::_instance = 0;

Operational::Operational() {}

EmbeddedState* Operational::Instance() {
	return _instance;
}

void Operational::Restart() {}

Operational::~Operational()
{
}
