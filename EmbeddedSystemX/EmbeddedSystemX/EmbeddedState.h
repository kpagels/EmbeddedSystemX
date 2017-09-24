#pragma once

class EmbeddedSystemX;

class EmbeddedState{
public:
	EmbeddedState();
	virtual void EnterState(EmbeddedSystemX* system);
	virtual void SelfTestOk(EmbeddedSystemX* system);
	virtual void Initialized(EmbeddedSystemX* system);
	virtual void Restart(EmbeddedSystemX* system);
	virtual void Configure(EmbeddedSystemX* system);
	virtual void ConfigurationEnded(EmbeddedSystemX* system);
	virtual void Exit(EmbeddedSystemX* system);
	virtual void Stop(EmbeddedSystemX* system);
	virtual void Start(EmbeddedSystemX* system);
	virtual void Suspend(EmbeddedSystemX* system);
	virtual void Resume(EmbeddedSystemX* system);
	virtual void SelfTestFailed(EmbeddedSystemX* system);
	virtual void ConfigX(EmbeddedSystemX* system);
	virtual void chMode(EmbeddedSystemX* system);
	virtual void eventX(EmbeddedSystemX* system);
	virtual void eventY(EmbeddedSystemX* system);
	virtual char* WhatCanWeDo();
protected:

	void ChangeState(EmbeddedSystemX* t,EmbeddedState* s);
	~EmbeddedState();
};

