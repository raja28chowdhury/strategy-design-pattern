#pragma once
#include <stdio.h>
class IQuackBehaviour
{
public:
	virtual void quack() = 0;

};

class SpecialQuackA:public IQuackBehaviour
{
public:
	void quack() override{
		printf("special quack a\n");
	}

private:
	
};


class SpecialQuackB :public IQuackBehaviour
{
public:
	void quack() override {
		printf("special quack b\n");
	}

private:

};

class SpecialQuackC :public IQuackBehaviour
{
public:
	void quack() override {
		printf("special quack c\n");
	}

private:

};

