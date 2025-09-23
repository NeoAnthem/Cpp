// Inheritance:
/*
1. The ability of class to reuse code and avoid duplication is called as inheritance
2. Terminologies in Inheritance
    a. Base Class / Super Class / Parent Class: A class which gives its own properties to derived classes is called as base class.
    b. Derived Class / Sub Class / Child Class: A class which takes properties from base class is called as derived class.
    Only public and protected fields and method will be inherited from base class

*/
/*
1. Create a class employee with empId, salary,
name, gender, age
*/
#include <iostream>

using namespace std;

// Base Class
class Person
{
protected:
    string name;
    int age;
    string gender;

public:
    Person()
    {
        cout << "Default cosntructor of person\n";
    }

    // parameterized constructor
    Person(string name, string gender, int age)
    {
        cout << "Parameterized constructor of person is called\n";
        this->name = name;
        this->gender = gender;
        this->age = age;
    }

    void displayData()
    {
        cout << "~~~~~~Person Information~~~~~~\n";
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Age = " << age << endl;
    }
};
// Inheritance
// Derived Class
class Employee : public Person
{

    int empId;
    double salary;

public:
    Employee()
    {
        cout << "Default cosntructor of Employee\n";
    }
    Employee(int empId, string name, int age, string gender, double salary)
    {
        cout << "Parameterized cosntructor of Employee\n";
        this->empId = empId;
        this->salary = salary;
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    void displayData()
    {
        cout << "~~~~~~Employee Information~~~~~~\n";

        cout << "Emp id = " << empId << endl;
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Age = " << age << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Employee e1(1001, "Krutik Kadam", 20, "Male", 2500);

    e1.displayData();
}