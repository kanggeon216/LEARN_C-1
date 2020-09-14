#include <iostream>

using namespace std;

void set_pointer()
{
    int num = 240;
    int *p_num = nullptr; // can't assign to address of double
    cout << "before \t" << p_num << "\n";
    p_num = &num;
    cout << "after \t" << p_num << "\n\n";
}
void pointer()
{
    char *p_char = "ABC";
    for (int i = 0; i < 3; i++)
        cout << "char \t" << p_char[i] << "\t" << (void *)(p_char[i]) << endl;

    for (int i = 0; i < 3; i++)
        cout << "char \t" << (p_char + i) << "\t" << (void *)(p_char + i) << endl;
}
int main()
{
    set_pointer();
    pointer();
}