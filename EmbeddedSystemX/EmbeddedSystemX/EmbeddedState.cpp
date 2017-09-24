#include "stdafx.h"
#include <iostream>
using namespace std;
#include "EmbeddedSystemX.h"
#include "EmbeddedState.h"


EmbeddedState::EmbeddedState(){}

void EmbeddedState::SelfTestOk(EmbeddedSystemX* system) {}
void EmbeddedState::Initialized(EmbeddedSystemX* system) {}
void EmbeddedState::Restart(EmbeddedSystemX* system) {}
void EmbeddedState::Configure(EmbeddedSystemX* system) {}
void EmbeddedState::configurationEnded(EmbeddedSystemX* system) {}
void EmbeddedState::Exit(EmbeddedSystemX* system) {}
void EmbeddedState::Stop(EmbeddedSystemX* system) {}
void EmbeddedState::Start(EmbeddedSystemX* system) {}
void EmbeddedState::Suspend(EmbeddedSystemX* system) {}
void EmbeddedState::Resume(EmbeddedSystemX* system) {}
void EmbeddedState::SelfTestFailed(EmbeddedSystemX* system) {}
void EmbeddedState::ConfigX(EmbeddedSystemX* system) {}
void EmbeddedState::chMode(EmbeddedSystemX* system) {}
void EmbeddedState::eventX(EmbeddedSystemX* system) {}
void EmbeddedState::eventY(EmbeddedSystemX* system) {}

char* EmbeddedState::WhatCanWeDo(void) {
	return "nothing";
}
void EmbeddedState::ChangeState(EmbeddedSystemX* t, EmbeddedState* s) {
	t->ChangeState(s);
}

EmbeddedState::~EmbeddedState(){}