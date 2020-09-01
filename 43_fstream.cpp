#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream ioFile("data/fstream.txt"); // ifstream or ofstream for one
    if (ioFile.is_open())
    {
        ioFile << "Hello";
    }

    string line;
    while (getline(ioFile, line))
    {
        cout << line << "\n";
    }

    ioFile.close();
}