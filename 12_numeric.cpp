#include <iostream>
#include <numeric> // numeric includes utility
using namespace std;

void accumulate_()
{
    int sum = accumulate(begin(nums), end(nums), 0, [](int total, int current) {
        return total + current;
    });
    cout << sum << endl;
}

void iota_()
{
    int nums[3];
    iota(begin(nums), end(nums), 1);
    for_each(begin(nums), end(nums), [](const int &n) { cout << n << " "; });
    cout << endl;
}

int main()
{
    accumulate_();
    iota_();

    return 0;
}