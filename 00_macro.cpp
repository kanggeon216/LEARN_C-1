#define NUMBER 2
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

#ifndef NUMBER
#define NEVER_DEFINED 2
#endif

#include <iostream>

using namespace std;
int main()
{
    cout << NUMBER;
}