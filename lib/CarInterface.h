#ifndef CAR_INTERFACE_H
#define CAR_INTERFACE_H

#include <string>

class CarInterface {
public:
    CarInterface() = default;
    virtual ~CarInterface() = default;
    virtual std::string getMake() const = 0;
    virtual std::string getModel() const = 0;
    virtual int getYear() const = 0;
    virtual int getRegistration() const = 0;
};

#endif /* CAR_INTERFACE_H */