#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    copy(arr, arr + sizeof(arr) / sizeof(int), ostream_iterator<int>(cout, " "));
    cout << endl;
}