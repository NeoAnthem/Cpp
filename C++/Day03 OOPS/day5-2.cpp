// Static Fields and Methods

#include <iostream>
using namespace std;
class Employee
{

public:
    static string org;

    Employee()
    {
        cout << "Employee constructed\n";
    }
};
// Initialize static field one time
string Employee::org = "SPRK TECH";
int main()
{
    // Employee e1;
    // Employee e2;
    // cout << "Value of org in e1 = " << e1.org << endl;
    // cout << "Value of org in e2 = " << e2.org << endl;

    cout << "My organization value = " << Employee::org << endl;
}