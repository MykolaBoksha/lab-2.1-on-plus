#pragma once
#include <string>

class Car {
private:
    std::string brand;
    int speed;

public:
    Car() {
        brand = "Unknown";
        speed = 0;
    }

    Car(const std::string& brand, int speed) {
        this->brand = brand;
        this->speed = speed;
    }

    Car(const Car& other) {
        brand = other.brand;
        speed = other.speed;
    }

    std::string GetBrand() const {
        return brand;
    }

    int GetSpeed() const {
        return speed;
    }

    virtual std::string Identify() const {
        return "its a car brand " + brand;
    }

    virtual ~Car() {}
};



