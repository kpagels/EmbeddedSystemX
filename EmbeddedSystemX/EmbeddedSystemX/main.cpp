// Exercise1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include<algorithm>
#include "EmbeddedSystemX.h"
#include "EmbeddedState.h"
#include "Failure.h"
#include "PowerOnSelfTest.h"
#include "Command.h"
using namespace std;

int main(int argc, char* argv[])
{
	EmbeddedSystemX* Embed10 = new EmbeddedSystemX();
	std::vector<Command*> cmds;
	cmds.push_back(new CommandRestart(Embed10));
	cmds.push_back(new CommandConfigure(Embed10));
	cmds.push_back(new CommandConfigX(Embed10));
	cmds.push_back(new CommandConfigX(Embed10));
	cmds.push_back(new CommandConfigX(Embed10));
	cmds.push_back(new CommandConfigurationEnded(Embed10));
	cmds.push_back(new CommandStart(Embed10));
	cmds.push_back(new CommandStop(Embed10));
	cmds.push_back(new CommandStart(Embed10));
	cmds.push_back(new CommandSuspend(Embed10));
	cmds.push_back(new CommandResume(Embed10));
	cmds.push_back(new CommandSuspend(Embed10));
	cmds.push_back(new CommandStop(Embed10));
	cmds.push_back(new CommandStart(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandchMode(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandeventY(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandeventY(Embed10));
	cmds.push_back(new CommandchMode(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandchMode(Embed10));
	cmds.push_back(new CommandeventX(Embed10));
	cmds.push_back(new CommandeventX(Embed10));

	auto execute = [](Command* cmd) { cmd->Execute(); };
	std::for_each(cmds.begin(), cmds.end(), execute);
	return 0;
}

