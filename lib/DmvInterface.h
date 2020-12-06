#ifndef DMV_INTERFACE_H
#define DMV_INTERFACE_H

#include <memory>
#include <string>
#include "CarInterface.h"

namespace Automobile {

class DmvInterface {
public:
    DmvInterface() = default;
    virtual ~DmvInterface() = default;
    virtual void addCar(std::unique_ptr<CarInterface> car) = 0; 
    virtual int getRegistration(const std::string& make, const std::string& model) const = 0;
    virtual int getNumCars() const = 0;
};

} // Automobile

#endif /* DMV_INTERFACE_H */