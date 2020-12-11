#ifndef CAR_H
#define CAR_H

#include <ctime>
#include <cstdlib>
#include <string>
#include <random>
#include "CarInterface.h"

class Car: public CarInterface {
public:
    Car(const std::string& make, const std::string& model, const int& year);
    virtual ~Car() = default;
    virtual std::string getMake() const;
    virtual std::string getModel() const;
    virtual int getYear() const;
    virtual int getRegistration() const;
    virtual std::string getLicensePlate() const;
private:
    std::string _make;
    std::string _model;
    int _registration;
    int _year;
    std::string _licensePlate;
};

#endif /* CAR_H */