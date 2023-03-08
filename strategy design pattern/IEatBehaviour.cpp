#include "IEatBehaviour.h"

void EatWithHand::eat() {
	printf("eating with hand\n");
}

void EatWithmouth::eat() {
	printf("eating with mouth\n");
}

void EatDisabled::eat() {
	printf("no eating\n");
}