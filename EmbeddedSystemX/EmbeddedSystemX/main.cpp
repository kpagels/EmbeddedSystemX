// Exercise1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <time.h>

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
	cout << "Starting program" << endl;
	EmbeddedSystemX *Embed1 = new EmbeddedSystemX();
	

	return 0;
}

