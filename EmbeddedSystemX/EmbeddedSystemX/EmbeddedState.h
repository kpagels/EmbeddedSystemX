#pragma once
class EmbeddedState
{
public:
	virtual void Handle() = 0;
	EmbeddedState();
	~EmbeddedState();
};

