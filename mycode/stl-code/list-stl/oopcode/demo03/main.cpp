#include<iostream>

class Person
{
    private:
        std::string name;
        int age;
    public:
        Person(){}
        Person(std::string n, int a){
            name = n;
            age = a;
        }
        void setName(const std::string& name)
        {
            this->name = name;
        }
        const std::string& getName(void) const
        {
            return name;
        }
        void setAge(int age)
        {
            this->age = age;
        }
        int getAge(void) const
        {
            return age;
        }
};

class Lawyer
{
    private:
        std::string name;
        int age;
    public:
        Lawyer(){}
        Lawyer(std::string n, int a){
            name = n;
            age = a;
        }
        void setName(const std::string& name)
        {
            this->name = name;
        }
        const std::string& getName(void) const
        {
            return name;
        }
        void setAge(int age)
        {
            this->age = age;
        }
        int getAge(void) const
        {
            return age;
        }
};

int main(void)
{
    Person p1;
    Person p2("Jerry", 20);
    p1.setName("Tom");
    p1.setAge(18);
    p2.setName("James");
    std::cout << p1.getName() << std::endl;
    Lawyer l1;
    l1.setName("Mark");
    l1.setAge(32);
    std::cout << l1.getName() << std::endl;
    return 0;
}