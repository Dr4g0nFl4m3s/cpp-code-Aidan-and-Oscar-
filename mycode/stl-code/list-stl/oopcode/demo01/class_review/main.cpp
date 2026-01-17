#include<iostream>

using namespace std;

class Animal
{
private:
    string species;
    int age;
    int legs;
public:
    Animal(string s, int a, int l)
    {
        species = s;
        age = a;
        legs = l;
    }
    string getSpecies(void)
    {
        return species;
    }
    int getAge(void)
    {
        return age;
    }
    int getLegs(void)
    {
        return legs;
    }
    void setSpecies(string s)
    {
        species = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setLegs(int l)
    {
        legs = l;
    }
};

int main(void)
{
    Animal a1("Dog", 4, 4);
    Animal a2("Cat", 2, 4);
    Animal a3("Snake", 5, 0);
    cout << a2.getLegs() << endl;
    return 0;
}