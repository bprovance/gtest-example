#ifndef DMV_H
#define DMV_H

#include <memory>
#include <vector>
#include "DmvInterface.h"
#include "CarInterface.h"

namespace Automobile {

class Dmv: public DmvInterface {
public:
    Dmv(std::unique_ptr<CarInterface> car);
    virtual ~Dmv() = default;
    virtual void addCar(std::unique_ptr<CarInterface> car); 
    virtual int getRegistration(const std::string& make, const std::string& model) const;
    virtual int getNumCars() const; 
private:
    std::vector<std::unique_ptr<CarInterface>> carList;
};

} // Automobile

#endif /* DMV_H */