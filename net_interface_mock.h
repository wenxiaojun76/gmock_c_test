#ifndef __DOIP_CLI_MOCK__
#define __DOIP_CLI_MOCK__
#include "gtest/gtest.h"
#include <gmock/gmock.h>

class mock_foo {
public:
    MOCK_METHOD1(mock_get_link_status,int(int *));
};
extern mock_foo mocker;
#endif
