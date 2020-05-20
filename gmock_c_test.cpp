#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "net_interface_mock.h"
#include "netlink.h"
using namespace testing;
    
TEST(Test_group1, get_net_status)
{
    int ret;
    int *status_ptr = new(int);
    
    *status_ptr= 1;

    EXPECT_CALL(mocker,mock_get_link_status(_)).WillRepeatedly(DoAll(SetArgumentPointee<0>(*status_ptr), Return(0)));
    ret = get_net_status();
    free(status_ptr);
    EXPECT_EQ(0,ret);

}
