#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex pencil;
once_flag flag;
int counts = 0;

void count_million(int i)
{
    call_once(flag, []() { cout << "Called once" << endl; });
    pencil.lock();
    for (int i = 0; i < 1000000; i++)
    {
        counts += 1;
    }
    pencil.unlock();
}

int main()
{
    thread threads[3];

    for (int i = 0; i < 3; i++)
    {
        threads[i] = thread(count_million, i);
    }
    cout << "staring" << endl;
    for (int i = 0; i < 3; i++)
    {
        threads[i].join();
    }
    cout << "total counts \t" << counts << endl;

    return 0;
}