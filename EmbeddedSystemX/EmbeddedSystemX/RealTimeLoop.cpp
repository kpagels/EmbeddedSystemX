#include "stdafx.h"
#include "RealTimeLoop.h"
#include "Ready.h"
#include "Suspended.h"

void RealTimeLoop::Stop(EmbeddedSystemX* t) {
	ChangeState(t, Ready::Instance());
}
void RealTimeLoop::Suspend(EmbeddedSystemX * t){
	ChangeState(t, Suspended::Instance());
}

RealTimeLoop::RealTimeLoop(){}

RealTimeLoop::~RealTimeLoop(){}
