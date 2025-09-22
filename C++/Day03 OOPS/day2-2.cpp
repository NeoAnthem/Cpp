// Class and Objects

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

    //  getters / setters
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Person p1;
    Person p2;

    p1.setName("Anjali Sharma");

    cout << "Person Info\n";
    cout << "Name = " << p1.getName() << endl;
}