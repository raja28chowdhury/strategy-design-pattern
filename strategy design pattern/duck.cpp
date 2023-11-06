#include "duck.h"
#include "IQuackBehaviour.h"

void duck::quack_duck() {
	quackBehaviour->quack();
}

void duck::fly_duck() {
	flyBehaviour->fly();
}

duck::duck(std::shared_ptr<IQuackBehaviour> quack_behaviour, std::shared_ptr<IFlyBehaviour> fly_behaviour) :
	quackBehaviour(quack_behaviour), flyBehaviour(fly_behaviour) {}