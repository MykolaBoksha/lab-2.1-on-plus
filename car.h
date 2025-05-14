#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    int speed;

public:
    Car() : brand("Unknown"), speed(0) {}
    Car(std::string brand, int speed) : brand(brand), speed(speed) {}
    Car(const Car& other) : brand(other.brand), speed(other.speed) {}

    std::string GetBrand() const {
        return brand;
    }

    int GetSpeed() const {
        return speed;
    }
};

#endif


