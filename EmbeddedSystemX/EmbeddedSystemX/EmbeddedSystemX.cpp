#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "EmbeddedState.h"
#include <iostream>
using namespace std;

EmbeddedSystemX::EmbeddedSystemX(){
	cout << " EmbeddedSystemX constructor" << endl;
	_state = PowerOnSelfTest::Instance(); //initial state
}

void EmbeddedSystemX::ChangeState(EmbeddedState* s){
	if (s != _state){
		_state = s;
	}
}

char* EmbeddedSystemX::getStateCapabilities(void){
	return _state->WhatCanWeDo();
}

void EmbeddedSystemX::SelfTestOk() { 
	_state->SelfTestOk(this); 
}
void EmbeddedSystemX::Initialized() {
	_state->Initialized(this);
}
void EmbeddedSystemX::Restart() {
	_state->Restart(this);
}
void EmbeddedSystemX::Configure() {
	_state->Configure(this);
}
void EmbeddedSystemX::configurationEnded() {
	_state->configurationEnded(this);
}
void EmbeddedSystemX::Exit() {
	_state->Exit(this);
}
void EmbeddedSystemX::Stop() {
	_state->Stop(this);
}
void EmbeddedSystemX::Start() {
	_state->Start(this);
}
void EmbeddedSystemX::Suspend() {
	_state->Suspend(this);
}

void EmbeddedSystemX::Resume() {
	_state->Resume(this);
}
void EmbeddedSystemX::SelfTestFailed() {
	cout << "EmbeddedSystemX: SelfTestFailed" << endl;
	_state->SelfTestFailed(this);
}
void EmbeddedSystemX::ConfigX() {
	_state->ConfigX(this);
}
void EmbeddedSystemX::chMode() {
	_state->chMode(this);
}
void EmbeddedSystemX::eventX() {
	_state->eventX(this);
}
void EmbeddedSystemX::eventY() {
	_state->eventY(this);
}
EmbeddedSystemX::~EmbeddedSystemX(){
	cout << "EmbeddedSystemX destructor" << endl;
}