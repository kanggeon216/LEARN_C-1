#include <iostream>
#include <vector>

using namespace std;

void auto_()
{
    std::vector<int> alpha{1, 2, 3};
    auto gamma = {1, 2, 3}; // initializer_list<int>
    auto delta = std::vector<int>{1, 2, 3};
}

void const_()
{
    const int a = 1;
    const int *p_a = &a; // pointer to const int type
    // (*p_a)++; WRONG
    p_a++;

    int b = 10;
    int *const p_b = &b; // const pointer to int
    // p_b++; WRONG
}

void try_catch_()
{
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

void enum_switch_()
{
    enum class BattleCondition
    {
        red,
        yellow,
        green
    };
    auto currentLight = BattleCondition::green;
    const auto shieldLevel = [&]() { //reference scoping
        switch (currentLight)
        {
        case BattleCondition::green:
            return 30;
        case BattleCondition::yellow:
            return 50;
        case BattleCondition::red:
        default:
            return 100;
        }
    }();
    std::cout << "current shield " << shieldLevel << std::endl;
}
int main()
{
    auto_();
    const_();
    try_catch_();
    enum_switch_();
}