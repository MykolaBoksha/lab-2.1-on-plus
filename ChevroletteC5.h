#ifndef CHEVROLETTEC5_H
#define CHEVROLETTEC5_H

#include "Car.h"

class ChevroletteC5 : public Car {
private:
    std::string transaxle;
    int engineHorsePower;

public:
    ChevroletteC5() : Car(), transaxle("torque tube"), engineHorsePower(405) {}

    ChevroletteC5(std::string brand, int speed, std::string transaxle, int engineHorsePower)
        : Car(brand, speed), transaxle(transaxle), engineHorsePower(engineHorsePower) {}

    ChevroletteC5(const ChevroletteC5& other)
        : Car(other), transaxle(other.transaxle), engineHorsePower(other.engineHorsePower) {}

    std::string GetTransaxle() const {
        return transaxle;
    }

    int GetEngineHorsePower() const {
        return engineHorsePower;
    }
};

#endif

