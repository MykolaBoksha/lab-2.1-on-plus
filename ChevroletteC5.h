#pragma once
#include "Car.h"
#include <string>

class ChevroletteC5 : public Car {
private:
    std::string transaxle;
    int EngineHorsePower;

public:
    ChevroletteC5() : Car() {
        transaxle = "torque tube";
        EngineHorsePower = 405;
    }

    ChevroletteC5(const std::string& brand, int speed, const std::string& transaxle, int EngineHorsePower)
        : Car(brand, speed) {
        this->transaxle = transaxle;
        this->EngineHorsePower = EngineHorsePower;
    }

    ChevroletteC5(const ChevroletteC5& other) : Car(other) {
        transaxle = other.transaxle;
        EngineHorsePower = other.EngineHorsePower;
    }

    std::string GetTransaxle() const {
        return transaxle;
    }

    int GetEngineHorsePower() const {
        return EngineHorsePower;
    }

    std::string Identify() const override {
        return "its a car: " + GetBrand() + " with " + transaxle;
    }
};


