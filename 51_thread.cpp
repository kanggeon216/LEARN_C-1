#include <thread>
#include <iostream>

int add(int a, int b);

using namespace std;

bool running = true;

void yell(const char *name)
{
    unsigned int count = 0;
    cout << "yell thread \t" << this_thread::get_id() << "\n";
    while (running)
    {
        count++;
    }
    cout << "Total Counting \t" << count << endl;
}

void counter()
{
    cout << "counter thread \t" << this_thread::get_id() << "\n";
    for (int i = 0; i < 100; i++)
    {
        this_thread::sleep_for(chrono::seconds(1));
        cout << i << "\t second" << endl;
        running = false;
    }
}

int main()
{
    thread watch(counter);
    thread person(yell, "sean");
    watch.detach();
    person.join();
}