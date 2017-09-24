#include "stdafx.h"
#include <iostream>
#include "RealTimeLoop.h"
#include "Ready.h"
#include "Suspended.h"
using namespace std;

void RealTimeLoop::Stop(EmbeddedSystemX* t) {
	cout << " -> Ready" << endl;
	ChangeState(t, Ready::Instance());
}
void RealTimeLoop::Suspend(EmbeddedSystemX * t){
	cout << " -> Suspend" << endl;
	ChangeState(t, Suspended::Instance());
}

RealTimeLoop::RealTimeLoop(){}

RealTimeLoop::~RealTimeLoop(){}
