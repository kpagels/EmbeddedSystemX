// Exercise1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

#include "EmbeddedSystemX.h"
#include "EmbeddedState.h"
#include "Failure.h"
#include "PowerOnSelfTest.h"
using namespace std;


int main(int argc, char* argv[])
{
	EmbeddedSystemX* Embed10 = new EmbeddedSystemX();
	Embed10->SelfTestOk();
	printf(Embed10->getStateCapabilities());
	Embed10->Initialized();
	printf(Embed10->getStateCapabilities());
	Embed10->Configure();
	printf(Embed10->getStateCapabilities());
	Embed10->ConfigurationEnded();
	printf(Embed10->getStateCapabilities());
	Embed10->Start();
	printf(Embed10->getStateCapabilities());
	Embed10->Suspend();
	printf(Embed10->getStateCapabilities());
	Embed10->Resume();
	printf(Embed10->getStateCapabilities());
	Embed10->chMode();
	printf(Embed10->getStateCapabilities());
	Embed10->chMode();
	printf(Embed10->getStateCapabilities());
	Embed10->chMode();
	printf(Embed10->getStateCapabilities());
	printf("Calling Stop - should change to Ready\n");
	Embed10->Stop();
	printf(Embed10->getStateCapabilities());
	printf("Calling Restart - should change to PowerOnSelfTest\n");
	Embed10->Restart();
	printf(Embed10->getStateCapabilities()); 
	Embed10->SelfTestOk();
	printf(Embed10->getStateCapabilities());
	Embed10->Initialized();
	printf(Embed10->getStateCapabilities());
	Embed10->Start();
	printf(Embed10->getStateCapabilities());
	printf("Calling suspend  should change to Suspended \n");
	Embed10->Suspend();
	printf(Embed10->getStateCapabilities());
	return 0;
}

