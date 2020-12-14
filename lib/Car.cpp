#include "Car.h"

using std::string;

Car::Car(const string& make, const string& model, const int& year) :
    _make(make),
    _model(model),
    _year(year) {

    srand(static_cast<int>(time(0))); // Seed random number generator
    _registration = (rand() % 999999) + 1000; // Creates a random number between 1000 and 999999

    string alphabet("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    std::random_device rd;
    std::mt19937 generator(rd());
    std::shuffle(alphabet.begin(), alphabet.end(), generator);    
    _licensePlate = alphabet.substr(0, 6);
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

string Car::getLicensePlate() const {
    return _licensePlate;
}