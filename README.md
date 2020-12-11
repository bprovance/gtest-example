## A simple googletest example project

#### Note: googletest should be cloned into the project root directory

This project demonstrates:
 * How to setup CMake to build googletest
 * How interfaces and mocks are used
 * How to write simple unit tests

The library code is not all that interesting. The purpose of this project is to demonstrate the way mocks can be used in place of real objects in your test code. In this project the `Car` class is consumed by the `Dmv` class. To test our `Dmv` class it makes sense to use a mock object in place of a real one because we can set expectations on mocks to test certain conditions in the consuming class.

### Build

```
mkdir build
cd build
cmake ..
make
```

### Run unit tests

```
./build/test/car-test
```
