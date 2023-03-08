// strategy design pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "duck.h"
#include "IQuackBehaviour.h"
#include "IEatBehaviour.h"
#include "IFlyBehaviour.h"


int main()
{
    std::cout << "quack below !\n";
    
    SpecialQuackA quackA;
    quackA.quack();
    SpecialQuackB quackB;
    quackB.quack();
    SpecialQuackC quackC;
    quackC.quack();

    printf("-------------------------------------------------\n");

    std::cout << "eat below !\n";

    EatWithHand eat_hand;
    eat_hand.eat();
    EatWithmouth eat_mouth;
    eat_mouth.eat();
    EatDisabled eat_disable;
    eat_disable.eat();

    printf("-------------------------------------------------\n");

    std::cout << "fly below !\n";

    FlyWithJetPack fly_jet;
    fly_jet.fly();
    FlyWithWings fly_wings;
    fly_wings.fly();


    printf("-------------------------------------------------\n");


    duck my_duckA(quackA,eat_hand,fly_jet);
    my_duckA.quack_duck();
    my_duckA.eat_duck();
    my_duckA.fly_duck();
    printf("-------------------------------------------------\n");

    duck my_duckB(quackB,eat_mouth,fly_jet);
    my_duckB.quack_duck();
    my_duckB.eat_duck();
    my_duckB.fly_duck();
    printf("-------------------------------------------------\n");

    duck my_duckC(quackC,eat_disable,fly_wings);
    my_duckC.quack_duck();
    my_duckC.eat_duck();
    my_duckC.fly_duck();
    printf("-------------------------------------------------\n");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
