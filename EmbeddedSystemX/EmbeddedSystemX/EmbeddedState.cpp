#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "EmbeddedState.h"


EmbeddedState::EmbeddedState(){}

void EmbeddedState::SelfTestOk() {}
void EmbeddedState::Initialized() {}
void EmbeddedState::Restart() {}
void EmbeddedState::Configure() {}
void EmbeddedState::configurationEnded() {}
void EmbeddedState::Exit() {}
void EmbeddedState::Stop() {}
void EmbeddedState::Start() {}
void EmbeddedState::Suspend() {}
void EmbeddedState::Resume() {}
void EmbeddedState::SelfTestFailed() {}
void EmbeddedState::ConfigX() {}
void EmbeddedState::chMode() {}
void EmbeddedState::eventX() {}
void EmbeddedState::eventY() {}

char* EmbeddedState::WhatCanWeDo(void) {
	return "nothing";
}
void EmbeddedState::ChangeState(EmbeddedSystemX* t, EmbeddedState* s) {
	t->ChangeState(s);
}

EmbeddedState::~EmbeddedState(){}