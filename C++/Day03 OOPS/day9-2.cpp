// Friend Class
#include <iostream>

using namespace std;
class Person
{
private:
    int age;

    string name;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    friend void displayPersonInfo(Person personObj);
};

void displayPersonInfo(Person personObj)
{
    cout << "Person Info From Friend Function\n";
    cout << "Name = " << personObj.name << endl;
    cout << "Age = " << personObj.age << endl;
}

int main()
{
    Person p1("SPRK TECH", 30);

    displayPersonInfo(p1);
}