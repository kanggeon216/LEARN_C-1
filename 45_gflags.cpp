#include <iostream>
#include <gflags/gflags.h>

using namespace std;

DEFINE_bool(debug, true, "print debug info");
//DEFINE_string(languages, "english,french,german", "comma-separated list of languages to offer in the 'lang' menu");

int main()
{
    cout << FLAGS_debug;
}