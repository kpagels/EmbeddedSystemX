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
	printf("Starting program\n");
	EmbeddedSystemX *Embed1 = new EmbeddedSystemX();
	printf(Embed1->getStateCapabilities());
	Embed1->Start();
	printf(Embed1->getStateCapabilities());
	Embed1->Initialized();
	printf(Embed1->getStateCapabilities());
	Embed1->Restart();
	printf(Embed1->getStateCapabilities());
	cout << "Trying to call restart while in PowerOnSelfTest" << endl;
	Embed1->Restart();
	cout << " Calling SelfTestFailed " << endl;
	Embed1->SelfTestFailed();
	printf(Embed1->getStateCapabilities());

	return 0;
}

