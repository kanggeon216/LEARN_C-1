#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

namespace bw
{
    const std::string prefix = "(bw::string)";
    class string
    {
        std::string _s = "";
        string();

    public:
        string(const std::string &s) : _s(prefix + s) {}
        const char *c_str() const { return _s.c_str(); }
    };
}; // namespace bw

int main()
{
    const string s1("This is a string");
    puts(s1.c_str());

    const bw::string s2(s1);
    cout << s2.c_str() << endl;
    return 0;
}