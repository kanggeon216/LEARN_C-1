#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

/**
 * struct is public by default
 */
struct Animal
{
    double weight;
    Animal() {}
    ~Animal() {}
};

class Person : public Animal
{
private:
    string name;

public:
    Person() {}
    Person(string name) { this->name = name; }
    void setName(string name) { this->name = name; }
    string getName();
    string getName() const;
};

string Person::getName() { return name; }
string Person::getName() const { return "const " + name; }

void functors()
{
    class Tagger
    {
        string tag;
        Tagger();

    public:
        Tagger(string tag) : tag(tag) {}
        string operator()(string contents) const { return "<" + tag + ">" + contents + "</" + tag + ">"; }
    };

    cout << endl;
    const Tagger pTagger("p");
    const Tagger h1Tagger("h1");
    cout << "pTagger \t" << pTagger("hello") << endl;
    cout << "h1 Tagger \t" << h1Tagger("hello") << endl;
}

class Complex
{
private:
    double real, img;

public:
    Complex(double r = 0, double i = 0) : real(r), img(i) {}
    Complex operator+(Complex const &obj)
    {
        return Complex(real + obj.real, img + obj.img);
    }
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        return os << c.real << "+" << c.img << "i";
    }
};
void overload()
{
    Complex a = Complex(1, 2);
    Complex b = Complex(1, 2);
    cout << "overload a + b \t" << a + b << endl;
}

int main()
{
    Person sean;
    const Person tom("tom");
    sean.setName("sean");
    cout << "sean.getName() \t" << sean.getName() << endl;
    cout << "tom.getName() \t" << tom.getName() << endl;

    Animal tiger, liger, tigon(tiger);
    tiger.weight = 3.0;
    liger = tiger;
    tiger.weight = 2.0;
    cout << "tiger.weight \t" << tiger.weight << endl;
    cout << "tigon.weight \t" << tigon.weight << endl;
    cout << "liger.weight \t" << liger.weight << endl;

    functors();
    overload();
}