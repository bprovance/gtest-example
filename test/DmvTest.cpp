#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <Dmv.h>
#include <CarInterface.h>
#include <string>
#include <memory>
#include "CarMock.h"

namespace MyTests {

using namespace Automobile;
using namespace testing;
using namespace AutomobileMocks;
using std::string;
using std::unique_ptr;

class DmvTests: public Test {
public:
    DmvTests() : 
        mockCar(new NiceMock<CarMock>) {
    } 
    virtual ~DmvTests() = default;

    unique_ptr<CarMock> mockCar;
};

TEST_F(DmvTests, DMVGetRegistrationReturnsExpectedValue) {
    ON_CALL(*mockCar, getRegistration()).WillByDefault(Return(999999));
    ON_CALL(*mockCar, getMake()).WillByDefault(Return("Tesla"));
    ON_CALL(*mockCar, getModel()).WillByDefault(Return("Model S"));
    Dmv dmv(std::move(mockCar));
    EXPECT_THAT(dmv.getRegistration("Tesla", "Model S"), Eq(999999));
}

TEST_F(DmvTests, DMVAddCarAppendsCarList) {
    unique_ptr<CarInterface> otherMockCar = std::make_unique<NiceMock<CarMock>>();
    Dmv dmv(std::move(mockCar));
    EXPECT_THAT(dmv.getNumCars(), Eq(1));

    dmv.addCar(std::move(otherMockCar));
    EXPECT_THAT(dmv.getNumCars(), Eq(2));
}

} // MyTests