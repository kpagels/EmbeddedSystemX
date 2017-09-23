#pragma once
#include "EmbeddedState.h"
using namespace std;

class EmbeddedSystemX
{

private:
	EmbeddedState* _state;
public:
	EmbeddedSystemX(); //constructor
	~EmbeddedSystemX();
	void setState(EmbeddedState* state);
	void Handle();

};