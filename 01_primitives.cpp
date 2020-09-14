#include <iostream>
#include <typeinfo>
using namespace std;

void get_size()
{
    cout << "bool \t" << sizeof(bool) << endl;
    cout << "char \t" << sizeof(char) << endl;
    cout << "int \t" << sizeof(int) << endl;
    cout << "float \t" << sizeof(float) << endl;
    cout << "long \t" << sizeof(long) << endl;
    cout << "ll \t" << sizeof(long long) << endl;
    cout << "double \t" << sizeof(double) << endl;
    cout << "ld \t" << sizeof(long double) << endl;

    bool *p_bool;
    cout << "p_bool \t" << sizeof(p_bool) << endl;
}
int main()
{
    get_size();
}