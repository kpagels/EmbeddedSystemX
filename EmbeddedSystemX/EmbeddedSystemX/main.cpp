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
	Embed10->systemSelftest_result = true;
	Embed10->Restart();
	Embed10->Configure();
	Embed10->ConfigX();
	Embed10->ConfigX();
	Embed10->ConfigX();
	Embed10->ConfigurationEnded();
	Embed10->Start();
	Embed10->Stop();
	Embed10->Start();
	Embed10->Suspend();
	Embed10->Resume();
	Embed10->Suspend();
	Embed10->Stop();
	Embed10->Start();
	Embed10->eventX();
	Embed10->eventX();
	Embed10->eventX();
	Embed10->chMode();
	Embed10->eventX();
	Embed10->eventY();
	Embed10->eventX();
	Embed10->eventY();
	Embed10->chMode();
	Embed10->eventX();
	Embed10->eventX();
	Embed10->chMode();
	Embed10->eventX();
	Embed10->eventX();
	return 0;
}

