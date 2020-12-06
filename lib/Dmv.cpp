#include "Dmv.h"

using namespace Automobile;

Dmv::Dmv(std::unique_ptr<CarInterface> car) {
    carList.push_back(std::move(car));
}

void Dmv::addCar(std::unique_ptr<CarInterface> car) {
    carList.push_back(std::move(car));
}

int Dmv::getRegistration(const std::string& make, const std::string& model) const {
    for (const auto& car : carList) {
        if (car->getMake() == make && car->getModel() == model) {
            return car->getRegistration();
        }
    }

    return -1;
}

int Dmv::getNumCars() const {
    return carList.size();
}