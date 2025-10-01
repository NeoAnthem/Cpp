// Abstraction
/*
1. Hiding the implementation detail and
    showing only necessary part is called as abstraction
2. For Abstraction we need Abstract class.
    a. Abstract Class:
        i. A class which have atleast one pure virtual function.
        ii. We cannot create object of abstract class.
        iii. A class which inherit abstract class always have to override
            pure virtual function.
            If class fails to override pure virtual function then, that class
            will also become abstract class.
*/
#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void virtual displayInfo() = 0;
};

class Student : public Person
{
    int rollNo;
    double percentage;

public:
    Student() {}

    Student(string name, int age, int rollNo, double percentage) : Person(name, age)
    {
        this->rollNo = rollNo;

        this->percentage = percentage;
    }

    void displayInfo()
    {
        cout << "Student Info\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    // Person p1("Demo", 35);
    // p1.displayInfo();
    Student s1("SPRK", 30, 15, 85.55);
    s1.displayInfo();
}