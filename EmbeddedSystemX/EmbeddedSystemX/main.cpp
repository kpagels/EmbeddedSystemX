// Exercise1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdio.h>

#include "EmbeddedSystemX.h"
#include "EmbeddedState.h"
#include "Failure.h"
#include "PowerOnSelfTest.h"
using namespace std;

void sleep(clock_t wait)
{
	clock_t goal;
	goal = wait + clock();
	while (goal > clock());
}

int main(int argc, char* argv[])
{
	printf("Starting program\n");
	EmbeddedSystemX *Embed1 = new EmbeddedSystemX();
	
	printf(Embed1->getStateCapabilities());
	printf("EMBED STATE: Initial state\n");
	printf("--------\n");
	Embed1->ChangeState(Initializing::Instance());
	printf(Embed1->getStateCapabilities());



	return 0;
}

