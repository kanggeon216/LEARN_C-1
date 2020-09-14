#include <thread>
#include <iostream>

int add(int a, int b);

using namespace std;

int main()
{
    count_sec();

    class thread_guard
    {
        std::thread &t;

    public:
        explicit thread_guard(thread &t_) : t(t_)
        {
        }
        ~thread_guard()
        {
            if (t.joinable())
            {
                t.join();
            }
        }
        thread_guard(thread_guard const &) = delete;
        thread_guard operator=(thread_guard const &) = delete;
    };
}