#pragma once

#include <stdio.h>
class IEatBehaviour
{
public:
	virtual void eat() = 0;
};

class EatWithHand : public IEatBehaviour {

public:
	void eat()override;
};

class EatWithmouth : public IEatBehaviour {

public:
	void eat()override;
};

class EatDisabled : public IEatBehaviour {

public:
	void eat()override;
};
