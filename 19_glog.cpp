#include <glog/logging.h>

int main()
{
    google::InitGoogleLogging("INFO");
    FLAGS_logtostderr = 1;
    int num_cookies = 0;

    LOG(INFO) << "1. Conditional Logging";
    for (num_cookies = 0; num_cookies < 30; num_cookies++)
    {
        LOG_IF(INFO, num_cookies > 10) << "Got lots of cookies";
    }

    return 0;
}