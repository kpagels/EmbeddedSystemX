#pragma once
class EmbeddedState
{
public:
	EmbeddedState();
	virtual void Handle() = 0;
	virtual void SelfTestOk();
	virtual void Initialized();
	virtual void Restart();
	virtual void Configure();
	virtual void configurationEnded();
	virtual void Exit();
	virtual void Stop();
	virtual void Start();
	virtual void Suspend();
	virtual void Resume();
	virtual void SelfTestFailed();
	virtual void ConfigX();
	virtual void chMode();
	virtual void eventX();
	virtual void eventY();
	~EmbeddedState();
};

