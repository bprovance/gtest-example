#ifndef CAR_H
#define CAR_H

#include <ctime>
#include <cstdlib>
#include <string>
#include "CarInterface.h"

using std::string;

class Car: public CarInterface {
public:
    Car(const string& make, const string& model, const int& year);
    virtual ~Car() = default;
    virtual string getMake() const;
    virtual string getModel() const;
    virtual int getYear() const;
    virtual int getRegistration() const;
private:
    string _make;
    string _model;
    int _registration;
    int _year;
};

#endif /* CAR_H */