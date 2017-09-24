#include "stdafx.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "EmbeddedState.h"
#include <iostream>
using namespace std;

EmbeddedSystemX::EmbeddedSystemX(){
	cout << " EmbeddedSystemX constructor" << endl;
	_state = NULL;
	ChangeState(PowerOnSelfTest::Instance());
	//_state = PowerOnSelfTest::Instance();
}

void EmbeddedSystemX::ChangeState(EmbeddedState* s){
	if (s != _state){
		_state = s;
	}
}

char* EmbeddedSystemX::getStateCapabilities(void){
	return _state->WhatCanWeDo();
}

void EmbeddedSystemX::Handle(){
	cout << " Handle: EmbeddedSystemX " << _state << endl;
	_state->Handle();
}

void EmbeddedSystemX::SelfTestOk() { 
	_state->SelfTestOk(); 
}
void EmbeddedSystemX::Initialized() {
	_state->Initialized();
}
void EmbeddedSystemX::Restart() {
	_state->Restart();
}
void EmbeddedSystemX::Configure() {
	_state->Configure();
}
void EmbeddedSystemX::configurationEnded() {
	_state->configurationEnded();
}
void EmbeddedSystemX::Exit() {
	_state->Exit();
}
void EmbeddedSystemX::Stop() {
	_state->Stop();
}
void EmbeddedSystemX::Start() {
	_state->Start();
}
void EmbeddedSystemX::Suspend() {
	_state->Suspend();
}

void EmbeddedSystemX::Resume() {
	_state->Resume();
}
void EmbeddedSystemX::SelfTestFailed() {
	_state->SelfTestFailed();
}
void EmbeddedSystemX::ConfigX() {
	_state->ConfigX();
}
void EmbeddedSystemX::chMode() {
	_state->chMode();
}
void EmbeddedSystemX::eventX() {
	_state->eventX();
}
void EmbeddedSystemX::eventY() {
	_state->eventY();
}
EmbeddedSystemX::~EmbeddedSystemX(){
	cout << "EmbeddedSystemX destructor" << endl;
}