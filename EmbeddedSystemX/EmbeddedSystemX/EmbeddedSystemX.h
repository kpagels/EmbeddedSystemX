#pragma once
#include "EmbeddedState.h"
#include "Failure.h"
#include "Initializing.h"
#include "Operational.h"
#include "PowerOnSelfTest.h"
using namespace std;

class EmbeddedSystemX{

public:
	EmbeddedSystemX(); //constructor
	~EmbeddedSystemX();
	void SelfTestOk();
	void Initialized();
	void Restart();
	void Configure();
	void ConfigurationEnded();
	void Exit();
	void Stop();
	void Start();
	void Suspend();
	void Resume();
	void SelfTestFailed(int ErrorNo);
	void ConfigX();
	void chMode();
	void eventX();
	void eventY();
	void ChangeState(EmbeddedState*);
	char * getStateCapabilities(void);

	// Methods to simulate work
	bool systemSelftest();
	void display(int ErrorNo);
	void startInitializing();
	void readConfigurationInfo();
	void PerformConfigurationX();
	void responseM1eventX();
	void responseM2eventX();
	void responseM2eventY();
	void responseM3eventX();

	// Dummy vars for functionality
	bool systemSelftest_result;
	int selftest_errorno;

private:
	friend class EmbeddedState;
	EmbeddedState* _state; 



};