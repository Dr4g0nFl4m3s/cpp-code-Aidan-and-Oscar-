#include<iostream>

using namespace std;

class Animal{
    public:
        void eat(){
            cout << "This animal is eating..." << endl;
        }
};

class Dog : public Animal
{
    public:
        void bark()
        {
            cout << "Woof..." << endl;
        }
};

class Cat : public Animal
{
    public:
        void meow()
        {
            cout << "Meow..." << endl;
        }
};

class Siamese : public Cat
{
    public:
        void scratch()
        {
            cout << "The cat scratches you..." << endl;
        }
};

int main(void)
{
    Animal a1;
    a1.eat();
    Dog d1;
    d1.eat();
    d1.bark();
    Cat c1;
    c1.eat();
    c1.meow();
    Siamese s1;
    s1.meow();
    s1.scratch();
    return 0;
}