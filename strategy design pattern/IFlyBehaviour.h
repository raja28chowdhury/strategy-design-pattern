#pragma once
class IFlyBehaviour
{
public:
	virtual void fly() = 0;
};

class FlyWithWings : public IFlyBehaviour {

public:
	void fly() override;
};


class FlyWithJetPack : public IFlyBehaviour {

public:
	void fly() override;
};