#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <Car.h>
#include <string>

namespace MyTests {

using namespace testing;
using std::string;

class CarTests: public Test {
public:
    CarTests() = default;
    virtual ~CarTests() = default;

};


TEST_F(CarTests, GetYearReturnsExpectedValue) {
    const string make("Ford");
    const string model("Mustang");
    const int year(1999);
    Car myCar(make, model, year);

    EXPECT_THAT(myCar.getYear(), Eq(year));
}

TEST_F(CarTests, GetRegistrationReturnsExpectedValue) {
    const string make("Ford");
    const string model("Mustang");
    const int year(1999);
    Car myCar(make, model, year);

    int registration = myCar.getRegistration();
    EXPECT_GT(registration, 1000);
    EXPECT_LT(registration, 999999);
}

} // MyTests