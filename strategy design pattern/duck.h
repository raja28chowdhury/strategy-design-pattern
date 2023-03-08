#pragma once
#include "IQuackBehaviour.h"
#include "IEatBehaviour.h"
#include "IFlyBehaviour.h"


class duck
{
private:
	IQuackBehaviour &quackBehaviour;
	IEatBehaviour& eatBehaviour;
	IFlyBehaviour& flyBehaviour;
public:
	duck(IQuackBehaviour& quack_behaviour, IEatBehaviour& eat_Behaviour, IFlyBehaviour& fly_Behaviour);


	void quack_duck();
	void eat_duck();
	void fly_duck();
};

