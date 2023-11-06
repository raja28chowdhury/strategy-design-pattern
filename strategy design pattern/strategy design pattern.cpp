// strategy design pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "duck.h"
#include "IQuackBehaviour.h"
#include "IFlyBehaviour.h"

int main()
{
    std::cout << "print quack behaviour!\n";
    
    std::shared_ptr<IQuackBehaviour> quack_a= std::make_shared<SpecialQuackA>();
    quack_a->quack();
    std::shared_ptr<IQuackBehaviour> quack_b = std::make_shared<SpecialQuackB>();
    quack_b->quack();
    std::shared_ptr<IQuackBehaviour> quack_c = std::make_shared<SpecialQuackC>();
    quack_c->quack();
    printf("\n\n print fly behaviour \n");

    std::shared_ptr<IFlyBehaviour> fly_a = std::make_shared<highSpeedFly>();
    fly_a->fly();
    std::shared_ptr<IFlyBehaviour> fly_b = std::make_shared<lowSpeedFly>();
    fly_b->fly();
    std::shared_ptr<IFlyBehaviour> fly_c = std::make_shared<noFly>();
    fly_c->fly();

    printf("-------------------------------------------------\n");

    printf("print functionality\n");

    duck my_duckA(quack_a,fly_a);
    my_duckA.quack_duck();
    my_duckA.fly_duck();

    duck my_duckB(quack_b,fly_b);
    my_duckB.quack_duck();
    my_duckB.fly_duck();

    duck my_duckC(quack_c,fly_c);
    my_duckC.quack_duck();
    my_duckC.fly_duck();
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
