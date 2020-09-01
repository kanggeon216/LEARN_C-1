#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> in_v{1, 2, 3, 4};
    vector<int> out_v;
    transform(in_v.begin(), in_v.end(), back_inserter(out_v), [](const int &value) { return value * 3; });
    for_each(out_v.begin(), out_v.end(), [](const int &n) { std::cout << "-" << n; });
    cout << endl;

    vector<int> filter_v;
    copy_if(out_v.begin(), out_v.end(), back_inserter(filter_v), [](int &value) { return value % 2 != 0; });
    for_each(filter_v.begin(), filter_v.end(), [](const int &n) { std::cout << "-" << n; });
    cout << endl;

    return 0;
}