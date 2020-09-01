#include <iostream>
#include <cstdio>
#include <memory>
#include <utility>
#include <cstddef>

using namespace std;

class strc
{
private:
    char *data = nullptr;

public:
    strc();
    strc(const char *s);
    ~strc()
    {
        cout << "deleting " << data;
        delete[] data;
    }
    strc &operator=(strc);
    friend ostream &operator<<(ostream &os, strc str);
};

ostream &operator<<(ostream &os, strc str)
{
    if (str.data == nullptr)
    {
        os << "null";
    }
    os << *str.data;
    return os;
}

int main()
{
    std::unique_ptr<strc> a(new strc("one")); // auto a = std::make_unique<strc>("one")
    cout << "unique pointer \t " << *a << endl;

    a.reset(new strc("three"));
    cout << "reset pointer \t " << *a << endl;

    auto b = std::move(a);
    cout << "a \t" << a << endl;
    cout << "*b \t" << *b << endl;
    //    disp(b);
    //    disp(c);
    //
    //    a.reset();
    //    disp(a);
    //    disp(b);
    //    disp(c);
    //
    //    c.release();
    //    disp(a);
    //    disp(b);
    //    disp(c);
    //
    return 0;
}