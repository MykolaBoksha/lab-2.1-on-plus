#include <iostream>
#include "Car.h"
#include "ChevroletteC5.h"

int main() {
    Car car("Audi", 120);
    ChevroletteC5 C5("Chevrolette", 350, "torque tube", 405);

    Car* ref1 = &car;
    Car* ref2 = &C5;

    std::cout << ref1->Identify() << std::endl;
    std::cout << ref2->Identify() << std::endl; // поліморфізм

    return 0;
}


