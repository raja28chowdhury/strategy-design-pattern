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
	void quack() override;

};


class SpecialQuackB :public IQuackBehaviour
{
public:
	void quack() override;

};

class SpecialQuackC :public IQuackBehaviour
{
public:
	void quack() override;

};

