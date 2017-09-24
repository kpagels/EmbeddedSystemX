#pragma once
#include "EmbeddedState.h"
#include "Failure.h"
#include "Initializing.h"
#include "Operational.h"
#include "PowerOnSelfTest.h"
using namespace std;

class EmbeddedSystemX{

public:
	EmbeddedSystemX(); //constructor
	~EmbeddedSystemX();
	void SelfTestOk();
	void Initialized();
	void Restart();
	void Configure();
	void configurationEnded();
	void Exit();
	void Stop();
	void Start();
	void Suspend();
	void Resume();
	void SelfTestFailed();
	void ConfigX();
	void chMode();
	void eventX();
	void eventY();
	void ChangeState(EmbeddedState*);
	char * getStateCapabilities(void);

private:
	friend class EmbeddedState;
	EmbeddedState* _state; 



};