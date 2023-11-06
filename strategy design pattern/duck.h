#pragma once
#include "IQuackBehaviour.h"
#include "IFlyBehaviour.h"
#include <iostream>

class duck
{
private:
	const std::shared_ptr<IQuackBehaviour>  quackBehaviour;
	const std::shared_ptr<IFlyBehaviour> flyBehaviour;
public:
	duck(std::shared_ptr<IQuackBehaviour> quack_behaviour, std::shared_ptr<IFlyBehaviour> fly_behaviour);
	void quack_duck();
	void fly_duck();
};

