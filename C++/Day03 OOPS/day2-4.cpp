// Class and Objects
// Parameterized constructor
#include <iostream>

using namespace std;

class Person
{

    string name;

    int age;

    string gender;

public:
    Person()
    {
        cout << "Default cosntructor of person\n";
        // age = 0;
        // name = "SPRK";
        // gender = "Female";
    }

    // parameterized constructor
    Person(string name, string gender, int age)
    {
        cout << "Parameterized constructor of person is called\n";
        this->name = name;
        this->gender = gender;
        this->age = age;
    }

    //  getters / setters
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }

    void displayData()
    {
        cout << "~~~~~~Person Information~~~~~~\n";
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Person p1("Shoaib Khan", "Male", 30);
    Person p2("Pranjal Desai", "Female", 20);

    p1.displayData();
    p2.displayData();
}