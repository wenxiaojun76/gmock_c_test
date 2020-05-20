#include "gtest/gtest.h"
#include <gmock/gmock.h>
#include <iostream>
#include "net_interface.h"
#include "net_interface_mock.h"
using namespace testing;


mock_foo mocker;

int get_link_status(int *count)
{
    return mocker.mock_get_link_status(count);
}
