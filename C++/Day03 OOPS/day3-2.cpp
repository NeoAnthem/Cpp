// Inheritance:
/*
Calling base class parameterized constructor from derived class constructor
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
    Employee(int empId, string name, int age, string gender, double salary) : Person(name, gender, age)
    {
        cout << "Parameterized cosntructor of Employee\n";
        this->empId = empId;
        this->salary = salary;
    }

    void displayData()
    {
        // Try to call base class method displayData from here
        // Call Person -> displayData()

        cout << "~~~~~~Employee Information~~~~~~\n";
        cout << "Emp id = " << empId << endl;
        cout << "Salary = " << salary << endl;
        Person::displayData();
    }
};

int main()
{
    Employee e1(1001, "Krutik Kadam", 20, "Male", 2500);

    e1.displayData();
}