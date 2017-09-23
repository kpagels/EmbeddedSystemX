#pragma once
class EmbeddedState
{
public:
	EmbeddedState();
	virtual void Handle() = 0;
	~EmbeddedState();
};

