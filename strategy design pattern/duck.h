#pragma once
#include "IQuackBehaviour.h"
#include "IEatBehaviour.h"


class duck
{
private:
	IQuackBehaviour &quackBehaviour;
	IEatBehaviour& eatBehaviour;

public:
	duck(IQuackBehaviour& quack_behaviour, IEatBehaviour& eat_Behaviour);


	void quack_duck();
	void eat_duck();
};

