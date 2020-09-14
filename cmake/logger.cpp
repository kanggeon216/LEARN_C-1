#ifndef LOG_H
#define LOG_H

#include <fmt/core.h>
#include <iostream>

using namespace std;

enum Level
{
    DEBUG,
    INFO,
    WARN,
    ERROR
};

struct CONFIG
{
    bool headers = false;
    Level level = WARN;
};

extern CONFIG config;

class Logger
{
    Level level = DEBUG;

public:
    Logger() {}
    Logger(Level lv) : level(lv) {}
    ~Logger()
    {
        cout << endl;
    }
    template <class T>
    Logger &operator<<(const T &msg)
    {
        format("{__FILE__}\t{__LINE__}", __FILE__, __LINE__);
        cout << msg;
        return *this;
    }
};

#endif