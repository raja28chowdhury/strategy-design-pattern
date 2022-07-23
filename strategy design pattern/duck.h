#pragma once
#include "IQuackBehaviour.h"
class duck
{
private:
	IQuackBehaviour &quackBehaviour;
public:
	duck(IQuackBehaviour &quack_behaviour) :quackBehaviour(quack_behaviour){}


	void quack_duck() {
		quackBehaviour.quack();
	}
};

