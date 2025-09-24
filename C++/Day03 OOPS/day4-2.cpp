/*
1. Person
2. Employee -> empId, salary
3. PartEmployee : Employee - constructor parameterized -> dailyWage, numOfDays -> salary (dailyWage * numOfDays)
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
        cout << "Default constructor of person\n";
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
// Derived Class Employee | Base class for PartEmployee
class Employee : public Person
{

protected:
    int empId;
    double salary;

public:
    Employee()
    {
        cout << "Default cosntructor of Employee\n";
    }
    Employee(int empId, string name, int age, string gender, double salary) : Person(name, gender, age)
    {
        cout << "Parameterized constructor of Employee\n";
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

    // If salary is greater than 15000 10% tax deducted
    void deductTax()
    {
        if (salary > 15000)
        {
            double deductedAmount = 0.1 * salary;
            cout << "Amount deducted from your salary as tax is: " << deductedAmount << endl;
            salary = salary - deductedAmount;
        }
        else
        {
            cout << "No tax deducted \n";
        }
    }
};

class PartEmployee : public Employee
{
private:
    double dailyWage;
    int numOfDays;

public:
    PartEmployee()
    {
        cout << "Default Constructor of PartEmployee\n";
    }
    PartEmployee(int empId, string name, int age, string gender, double dailyWage, int numOfDays) : Employee(empId, name, age, gender, (dailyWage * numOfDays))
    {
        cout << "Parameterized constructor of PartEmployee\n";
        this->dailyWage = dailyWage;
        this->numOfDays = numOfDays;
    }

    void displayData()
    {
        cout << "~~~~~~Part Employee Information~~~~~~\n";
        cout << "Daily Wage = " << dailyWage << endl;
        cout << "Number of Days = " << numOfDays << endl;
        Employee::displayData();
    }

    // function overriding
    void deductTax()
    {
        cout << "No tax for part employee\n";
    }
};

int main()
{

    // I want to deduct salary if its an employee object
    Employee e1(10002, "Pranjal Sharma", 30, "Female", 60000);
    e1.deductTax();
    e1.displayData();

    // No tax is deducted for parttime
    PartEmployee pte1(10001, "Sholk Verma", 26, "Male", 1000, 30);
    pte1.deductTax();
    pte1.displayData();
}