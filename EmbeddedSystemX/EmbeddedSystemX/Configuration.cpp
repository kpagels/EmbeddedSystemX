#include "stdafx.h"
#include <iostream>
#include "EmbeddedState.h"
#include "Configuration.h"
#include "Ready.h"
using namespace std;

EmbeddedState* Configuration::_instance = 0;

EmbeddedState* Configuration::Instance() {
	if (_instance == 0){
		_instance = new Configuration();
	}
	return _instance;
}
void Configuration::ConfigurationEnded(EmbeddedSystemX* t){
	cout << "Configuration -> Ready" << endl;
	ChangeState(t, Ready::Instance());
}

char* Configuration::WhatCanWeDo() {
	return "ConfigurationEnded\n";
}

Configuration::Configuration(){}

Configuration::~Configuration(){}
