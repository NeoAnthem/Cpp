// Pointer to Object
#include <iostream>

using namespace std;

class Person
{

private:
    string name;
    int age;
    string gender;

public:
    Person()
    {
        cout << "Default constructor of Person\n ";
    }
    Person(string name, int age, string gender)
    {
        cout << "Parameterized constructor of Person\n ";
        this->name = name;
        this->gender = gender;
        this->age = age;
    }

    // setters
    void setName(string name)
    {
        this->name = name;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    // displayData

    void displayData()
    {
        cout << "~~~~~~~Person Info~~~~~~~\n";
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }
};

int main()
{

    Person *personPtr = new Person();
    personPtr->setAge(50);
    personPtr->setGender("Female");
    personPtr->setName("Daniya Deshmukh");

    personPtr->displayData();

    personPtr = new Person("Demo Demo", 30, "Male");
    personPtr->displayData();
}