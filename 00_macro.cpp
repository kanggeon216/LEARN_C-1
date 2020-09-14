
#include <iostream>

using namespace std;

void set_macro()
{
#ifndef NUMBER

#define NUMBER 2
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

#endif
    cout << MAX(NUMBER, 5) << endl;
}
void print_default()
{
    cout << "__TIME__ \t" << __TIME__ << endl;
    cout << "__DATE__ \t" << __DATE__ << endl;
    cout << "__FILE__ \t" << __FILE__ << endl;
    cout << "__LINE__ \t" << __LINE__ << endl;
}
int main()
{
    set_macro();
    print_default();
}