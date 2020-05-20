# gmock_c_test
a example to use gmock to mock a c interface
* Introduction 
  This code is for demostrating the use of gmock to mock a c api.As assumption you will wirite a testcase
 to test your c code(netlink.c) in which it will call a another c api(net_interface.h) implemented by others.
* files 
 |--net_interface.h
    c api that will be mocked here
 |--net_interface_mock.cpp
    to mock the c functions
 |--net_interface_mock.h
    mock class for the c api
 |--netlink.c
    the c code will call the mocked c api
 |--netlink.h
    header file 
 |--gmock_c_test.cpp
    the testcase code 
 |--CMakeLists.txt

* build steps
  1. firstly to download the googletest code in the directory where README resides
    git clone https://github.com/google/googletest.git
  2. mkdir build
  3. cd build
  4. cmake ..
  5. make

* run the test
 ./gmock_c_test
