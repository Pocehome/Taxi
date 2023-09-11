#include "Car.h"

bool Car::check_status() {
    if (this->is_on_parking) {
        std::cout << "On parking" << std::endl;
    }
    else {
        std::cout << "On way" << std::endl;
    }
    return this->is_on_parking;
}

void Car::send_on_way() {
    this->is_on_parking = false;
}

void Car::send_on_parking() {
    this->is_on_parking = true;
}
