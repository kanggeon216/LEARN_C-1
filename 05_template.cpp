#include <iostream>

template <typename T>
T summer(T v)
{
    return v;
}

template <typename T, typename... Args>
T summer(T first, Args... args)
{
    return first + summer(args...);
}

template <typename T>
T *summer(T *v)
{
    return v;
}
void template_()
{

    std::cout << "summer(1, 2, 13) \t" << summer(1, 2, 13) << std::endl;
    std::cout << "summer(1) \t" << summer((void *)0x123) << std::endl;
}

int main()
{
    template_();
    return 0;
}