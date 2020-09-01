#include <iostream>

using namespace std;

int main()
{
    int num = 240;
    int *p_num = nullptr; // can't assign to address of double
    cout << "before \t" << p_num << endl;
    p_num = &num;
    cout << "after \t" << p_num << endl
         << endl;

    int nums[3];
    nums[0] = 4;
    nums[1] = 2;
    nums[2] = 1;
    for (int i = 0; i < 3; i++)
        cout << "arr \t" << nums[i] << "\t" << nums + i << endl;

    char *p_char = "ABC";
    for (int i = 0; i < 3; i++)
        cout << "char" << i << "\t" << (p_char + i) << "\t" << (void *)(p_char + i) << endl;
}