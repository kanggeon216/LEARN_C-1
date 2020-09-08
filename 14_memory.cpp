#include <iostream>
#include <cstdio>
#include <memory>
#include <utility>
#include <cstddef>
#include <string>

using namespace std;

class strc
{
public:
    string data;

    strc();
    strc(string data) : data(data)
    {
        cout << "constructing \t" << data << endl;
    };
    ~strc()
    {
        cout << "destructing \t" << data << endl;
        data = "";
    }
    strc &operator=(strc);
    friend ostream &operator<<(ostream &os, strc str);
};

ostream &operator<<(ostream &os, strc str)
{
    return os << str.data << endl;
}

template <typename T>
void display(T ptr)
{
    cout << ptr << "\t" << (ptr ? (*ptr).data : "null");
}

int main()
{
    cout << "[1] Creating \n";
    std::unique_ptr<strc> a(new strc("A")); // auto a = std::make_unique<strc>("one")
    std::shared_ptr<strc> b(new strc("B"));

    cout << "[2] Resetting \n";
    a.reset(b);
    cout << "after *a \t" << *a << endl;

    cout << "[3] Moving \n";
    auto b = move(a);
    cout << "after a \t" << a << endl;
    cout << "after *b \t" << *b;
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