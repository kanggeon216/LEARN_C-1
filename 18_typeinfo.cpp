#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    float a = 3.5;
    int b = static_cast<int>(a);

    int b = 3;
    const volatile int *bp = &b;
    cout << "bp type \t" << typeid(bp).name() << endl;
    int *cp = const_cast<int *>(bp);
    *cp = 'A';
    cout << "cp type \t" << typeid(cp).name() << endl;
}