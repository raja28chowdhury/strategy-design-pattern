#include "duck.h"
#include "IQuackBehaviour.h"

void duck::quack_duck() {
	quackBehaviour->quack();
}

duck::duck(IQuackBehaviour* quack_behaviour) {
	quackBehaviour = quack_behaviour;
}