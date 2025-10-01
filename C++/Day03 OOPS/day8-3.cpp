// Abstraction

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
    void virtual sayHello() = 0;
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

    void sayHello()
    {
        cout << "Hello\n";
    }
};

int main()
{
    Person *person = new Student("SPRK", 35, 10, 85.55);
    person->displayInfo();
    person->sayHello();
}