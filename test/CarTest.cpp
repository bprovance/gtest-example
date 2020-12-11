#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <Car.h>
#include <string>

namespace MyTests {

using namespace testing;
using std::string;

class CarTests: public Test {
public:
    CarTests() :
        myCar("Ford", "Mustang", 1999) {

    } 
    virtual ~CarTests() = default;

    Car myCar;
};


TEST_F(CarTests, GetYearReturnsExpectedValue) {
    const int expectedYear(1999);
    EXPECT_THAT(myCar.getYear(), Eq(expectedYear));
}

TEST_F(CarTests, GetRegistrationReturnsExpectedValue) {
    int registration = myCar.getRegistration();
    EXPECT_GT(registration, 1000);
    EXPECT_LT(registration, 999999);
}

TEST_F(CarTests, GetLicensePlateReturnsCorrectLengthString) {
    const string licensePlate = myCar.getLicensePlate();
    EXPECT_THAT(licensePlate.length(), Eq(6));
}

} // MyTests