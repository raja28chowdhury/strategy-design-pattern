#pragma once
#include <stdio.h>
class IFlyBehaviour
{
public:
	virtual void fly() = 0;
};

class lowSpeedFly : public IFlyBehaviour {
public:
	void fly() override {
		printf("low speed flying behaviour\n");
	}
};

class highSpeedFly : public IFlyBehaviour {
public:
	void fly() override {
		printf("high speed flying behaviour\n");
	}
};

class noFly : public IFlyBehaviour {
public:
	void fly() override {
		printf("no flying behaviour\n");
	}
};