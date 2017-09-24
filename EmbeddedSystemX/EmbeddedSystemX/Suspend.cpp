#include "stdafx.h"
#include "Suspend.h"
#include "Mode1.h"
#include "Ready.h"

void Suspend::Resume(EmbeddedSystemX* t) {
	ChangeState(t, Mode1::Instance());
}

void Suspend::Stop(EmbeddedSystemX* t) {
	ChangeState(t, Ready::Instance());
}
Suspend::Suspend(){}

Suspend::~Suspend(){}
