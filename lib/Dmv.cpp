#include "Dmv.h"

Dmv::Dmv(std::unique_ptr<CarInterface> car) {
    carList.push_back(std::move(car));
}

void Dmv::addCar(std::unique_ptr<CarInterface> car) {
    carList.push_back(std::move(car));
}

int Dmv::getRegistration(const std::string& make, const std::string& model) const {
    for (const auto& car : carList) {
        if (car->getMake().compare(make) == 0 && car->getModel().compare(model) == 0) {
            return car->getRegistration();
        }
    }

    return -1;
}

int Dmv::getNumCars() const {
    return carList.size();
}