#pragma once
#include "EmbeddedState.h"
#include "EmbeddedSystemX.h"

class State;

class Failure : public EmbeddedState
{

private:
	static EmbeddedState* _instance;

public:
	static EmbeddedState* Instance();
	void Handle();
	void Restart();
	void Exit();
	~Failure();
protected:
	Failure();
};

