#ifndef NUMBER

#define NUMBER 2
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

#endif

#include <iostream>

using namespace std;
int main()
{
    cout << "NUMBER \t " << NUMBER << endl;
    cout << "__TIME__ \t" << __TIME__ << endl;
    cout << "__DATE__ \t" << __DATE__ << endl;
    cout << "__FILE__ \t" << __FILE__ << endl;
    cout << "__LINE__ \t" << __LINE__ << endl;
}