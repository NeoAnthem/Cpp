// 1. Create a class employee with empId, salary, name, gender, age and create 2 objects

#include <iostream>
using namespace std;

class Employee
{
public:
    int empID;
    int salary;
    string name;
    string gender;
    int age;
};

int main()
{
    Employee e1;
    e1.empID = 1;
    e1.salary = 100000;
    e1.name = "ABC";
    e1.age = 25;
    e1.gender = "Male";

    Employee e2;
    e2.empID = 2;
    e2.salary = 80000;
    e2.name = "XYZ";
    e2.age = 23;
    e2.gender = "Female";
}