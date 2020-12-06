#ifndef CAR_MOCK_H
#define CAR_MOCK_H

#include <string>
#include <gmock/gmock.h>
#include <CarInterface.h>

namespace Automobile {
namespace AutomobileMocks {
using std::string;

class CarMock: public Automobile::CarInterface {
public:
    CarMock() = default;
    virtual ~CarMock() = default;
    MOCK_METHOD(string, getMake, (), (const, final));
    MOCK_METHOD(string, getModel, (), (const, final));
    MOCK_METHOD(int, getYear, (), (const, final));
    MOCK_METHOD(int, getRegistration, (), (const, final));
};

} // AutomobileMocks
} // Automobile

#endif /* CAR_MOCK_H */