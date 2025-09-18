// Basics of class and objects

#include <iostream>
using namespace std;
// Class definition
// Class Name -> PascalCase -> UserInfo
class Person
{
    // Fields -> Variables
public: // Temporary I have made my object transparent
    string name;
    int age;
    string gender;

    // Methods -> Functions
};

int main()
{
    // Object
    Person p1;
    p1.name = "SPRK TECH";
    p1.age = 30;
    p1.gender = "Female";

    Person p2;
    p2.name = "Abdul";
    p2.gender = "Male";
    p2.age = 25;

    cout << "Person Information\n";
    cout << "Name = " << p1.name << endl;
    cout << "Age = " << p1.age << endl;
    cout << "Gender = " << p1.gender << endl;
    cout << "Person Information\n";
    cout << "Name = " << p2.name << endl;
    cout << "Age = " << p2.age << endl;
    cout << "Gender = " << p2.gender << endl;
}