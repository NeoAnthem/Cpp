// Destructor
#include <iostream>

using namespace std;

class Person
{

private:
    string name;
    int age;

public:
    Person()
    {
        cout << "Default constructor of Person\n";
    }
    Person(string name, int age)
    {
        cout << "Parameterized constructor of Person\n";
        this->name = name;
        this->age = age;
    }

    ~Person()
    {
        cout << "Object is being deleted\n";
        // DB -> Connection
        // CLOSE
    }

    void displayInfo()
    {
        cout << "Person Info\n";
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};
int main()
{
    Person p1; // default
    p1.displayInfo();

    Person *ptr = new Person("Demo 1", 50);

    ptr->displayInfo();
    delete ptr;
    ptr = new Person("Demo 2", 12);
    ptr->displayInfo();
    delete ptr;

    cout << "Exiting the codee\n";
}