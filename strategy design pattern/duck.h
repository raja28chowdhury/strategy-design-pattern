#pragma once
#include "IQuackBehaviour.h"

#include <iostream>

class duck
{
private:
	std::shared_ptr<IQuackBehaviour>  quackBehaviour;
public:
	duck(std::shared_ptr<IQuackBehaviour> quack_behaviour);
	void quack_duck();
};

