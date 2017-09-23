#pragma once
#include "EmbeddedState.h"
using namespace std;

class EmbeddedSystemX
{

private:
	EmbeddedState* _state;
	friend class EmbeddedState;

public:
	EmbeddedSystemX(); //constructor
	~EmbeddedSystemX();
	void ChangeState(EmbeddedState*);
	void Handle();
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

};