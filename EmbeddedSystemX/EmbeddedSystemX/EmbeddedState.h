#pragma once

class EmbeddedSystemX;

class EmbeddedState{
public:
	EmbeddedState();
	virtual void EmbeddedState::SelfTestOk(EmbeddedSystemX* system);
	virtual void EmbeddedState::Initialized(EmbeddedSystemX* system);
	virtual void EmbeddedState::Restart(EmbeddedSystemX* system);
	virtual void EmbeddedState::Configure(EmbeddedSystemX* system);
	virtual void EmbeddedState::configurationEnded(EmbeddedSystemX* system);
	virtual void EmbeddedState::Exit(EmbeddedSystemX* system);
	virtual void EmbeddedState::Stop(EmbeddedSystemX* system);
	virtual void EmbeddedState::Start(EmbeddedSystemX* system);
	virtual void EmbeddedState::Suspend(EmbeddedSystemX* system);
	virtual void EmbeddedState::Resume(EmbeddedSystemX* system);
	virtual void EmbeddedState::SelfTestFailed(EmbeddedSystemX* system);
	virtual void EmbeddedState::ConfigX(EmbeddedSystemX* system);
	virtual void EmbeddedState::chMode(EmbeddedSystemX* system);
	virtual void EmbeddedState::eventX(EmbeddedSystemX* system);
	virtual void EmbeddedState::eventY(EmbeddedSystemX* system);
	virtual char* WhatCanWeDo(void);
protected:

	void ChangeState(EmbeddedSystemX* t,EmbeddedState* s);
	~EmbeddedState();
};

