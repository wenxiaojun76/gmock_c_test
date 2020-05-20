#include <stdio.h>
#include "netlink.h"
#include "net_interface.h"
int get_net_status(void)
{
    int status;
    int ret;

    ret = get_link_status(&status);
    printf("the link status: %d\n",status);
    return ret;
}
