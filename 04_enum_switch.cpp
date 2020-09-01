#include <iostream>
#include <vector>

enum class BattleCondition {
    red, yellow, green
};
int main(){
    std::vector<int> nums{2,3,4};
    std::for_each(nums.begin(), nums.end(), [](const int &n) {std::cout << "-"<<n;});
    std::cout << std::endl;

    // [1] switch expression
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