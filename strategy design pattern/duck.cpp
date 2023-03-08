#include "duck.h"

duck::duck(IQuackBehaviour& quack_behaviour , IEatBehaviour& eat_Behaviour, IFlyBehaviour& fly_Behaviour) :quackBehaviour(quack_behaviour), eatBehaviour(eat_Behaviour), flyBehaviour(fly_Behaviour){}

void duck::quack_duck() {
	quackBehaviour.quack();
}

void duck::eat_duck() {
	eatBehaviour.eat();
}

void duck::fly_duck() {
	flyBehaviour.fly();
}
