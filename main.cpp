#include <iostream>
#include "ChevroletteC5.h"

int main() {
    ChevroletteC5 ch1("Chevrolette", 300, "torque tube", 405);

    std::cout << "Default ChevroletteC5: "
              << ch1.GetBrand() << ", "
              << ch1.GetSpeed() << ", "
              << ch1.GetTransaxle() << ", "
              << ch1.GetEngineHorsePower()
              << std::endl;

    return 0;
}

