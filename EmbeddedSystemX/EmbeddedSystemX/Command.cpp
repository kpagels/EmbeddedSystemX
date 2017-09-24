#include "stdafx.h"
#include "Command.h"


Command::Command()
{
}




Command::~Command()
{
}

CommandSystemX::CommandSystemX(EmbeddedSystemX * system) : _system(system)
{

}

void CommandSelfTestOk::Execute()
{
	this->_system->SelfTestOk();
}

void CommandInitialized::Execute()
{
	_system->Initialized();
}

void CommandRestart::Execute()
{
	_system->Restart();
}

void CommandConfigure::Execute()
{
	_system->Configure();
}

void CommandConfigurationEnded::Execute()
{
	_system->ConfigurationEnded();
}

void CommandExit::Execute()
{
	_system->Exit();
}

void CommandStop::Execute()
{
	_system->Stop();
}

void CommandStart::Execute()
{
	_system->Start();
}

void CommandSuspend::Execute()
{
	_system->Suspend();
}

void CommandResume::Execute()
{
	_system->Resume();
}

void CommandSelfTestFailed::Execute()
{
	_system->SelfTestFailed(-1);
}

void CommandConfigX::Execute()
{
	_system->ConfigX();
}

void CommandchMode::Execute()
{
	_system->chMode();
}

void CommandeventX::Execute()
{
	_system->eventX();
}

void CommandeventY::Execute()
{
	_system->eventY();
}