#include "duck.h"

duck::duck(IQuackBehaviour& quack_behaviour) :quackBehaviour(quack_behaviour) {}

void duck::quack_duck() {
	quackBehaviour.quack();
}