#include <thread>
#include <chrono>
#include <iostream>

using namespace std;
int main()
{
    auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << now << endl;
    //std::string formatted_time = s << now << "message" << std::endl;
}