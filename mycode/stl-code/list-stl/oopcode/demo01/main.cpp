#include<iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;
    double score;
public:
    Student(string n, int a, double s)
    {
        name = n;
        age = a;
        score = s;
    }
    string getName(void)
    {
        return name;
    }
    int getAge(void)
    {
        return age;
    }
    double getScore(void)
    {
        return score;
    }
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setScore(double s)
    {
        score = s;
    }
};

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
    string name1 = "aidan";
    int age1 = 15;
    double score1 = 99;
    string name2 = "oscar";
    int age2 = 15;
    double score2 = 99;
    cout << name1 << endl;

    Student s1("Aidan", 15, 99);
    Student s2("Oscar", 15, 99);
    Student s3("Jerry", 16, 89);
    cout << s1.getName() << endl;

    Animal a1("Dog", 4, 4);
    Animal a2("Cat", 2, 4);
    Animal a3("Snake", 5, 0);
    cout << a2.getLegs() << endl;
    return 0;
}