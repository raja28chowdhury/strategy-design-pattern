#include "duck.h"

duck::duck(IQuackBehaviour& quack_behaviour , IEatBehaviour& eat_Behaviour) :quackBehaviour(quack_behaviour), eatBehaviour(eat_Behaviour){}

void duck::quack_duck() {
	quackBehaviour.quack();
}

void duck::eat_duck() {
	eatBehaviour.eat();
}