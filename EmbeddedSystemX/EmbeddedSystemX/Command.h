#pragma once
#include "EmbeddedSystemX.h"
class Command
{
public:
	Command();
	virtual void Execute() = 0;
	virtual ~Command();
};

class CommandSystemX : public Command
{
public:
	CommandSystemX(EmbeddedSystemX* system);
	EmbeddedSystemX* _system;
};

class CommandSelfTestOk : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandInitialized : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandRestart : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandConfigure : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandConfigurationEnded : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandExit : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandStop : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandStart : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandSuspend : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandResume : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};
class CommandSelfTestFailed : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};
class CommandConfigX : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandchMode : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};

class CommandeventX : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};
class CommandeventY : public CommandSystemX {
public:
	using CommandSystemX::CommandSystemX;
	void Execute();
};