#include <iostream>
#include <utility>
using namespace std;

/**
 *  swap()
 *  make_pair()
 *  forward()
 *  move_if_noexcept()
 *  decival()
 * 
 *  types:
 *  pair
 *  piecewise_construct_t
 * 
 *  namespace:
 *  rel_ops
 */
void move_()
{
    string v1[5] = {"one", "two", "three", "four", "five"};
    string v2[5];

    for_each(begin(v1), end(v1), [](const string &s) { cout << s << " "; });
    cout << endl;
    move(begin(v1), end(v1), v2);
    for_each(begin(v1), end(v1), [](const string &s) { cout << s << " "; });
    cout << endl;
    for_each(begin(v2), end(v2), [](const string &s) { cout << s << " "; });
}
int main()
{
    move_();
    return 0;
}
