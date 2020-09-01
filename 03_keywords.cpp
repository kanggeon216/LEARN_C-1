#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /**
     * 1. auto
     */
    std::vector<int> alpha{1, 2, 3};
    auto gamma = {1, 2, 3}; // initializer_list<int>
    auto delta = std::vector<int>{1, 2, 3};

    // auto beta{1, 2, 3};  // ERROR auto contains multiple expressions
    // auto zeta;           //

    /**
     * 2. const
     */
    const int a = 1;
    const int *p_a = &a; // pointer to const int type
    // (*p_a)++; WRONG
    p_a++;

    int b = 10;
    int *const p_b = &b; // const pointer to int
    // p_b++; WRONG

    /**
     * 3. try throw catch
     */
    try
    {
        throw 'a';
    }
    catch (int param)
    {
        cout << "int exception\n";
    }
    catch (...)
    {
        cout << "default exception\n";
    }
}