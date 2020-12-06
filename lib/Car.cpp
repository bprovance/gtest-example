#include "Car.h"

Car::Car(const string& make, const string& model, const int& year) :
    _make(make),
    _model(model),
    _year(year) {

    srand(static_cast<int>(time(0))); // Seed random number generator
    _registration = (rand() % 999999) + 1000; // Creates a random number between 1000 and 999999
}

string Car::getMake() const {
    return _make;
}

string Car::getModel() const {
    return _model;
}

int Car::getYear() const {
    return _year;
}

int Car::getRegistration() const {
    return _registration;
}