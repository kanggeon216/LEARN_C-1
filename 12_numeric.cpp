#include <iostream>
#include <numeric> // numeric includes utility
using namespace std;

int main()
{
    // 1. iota
    int nums[3];
    iota(begin(nums), end(nums), 1);
    for_each(begin(nums), end(nums), [](const int &n) { cout << n << " "; });
    cout << endl;

    // 2. accumulate
    int sum = accumulate(begin(nums), end(nums), 0, [](int total, int current) {
        return total + current;
    });
    cout << sum << endl;

    return 0;
}