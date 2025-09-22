// Class and Objects

#include <iostream>
using namespace std;

class Person
{

    string name;

    int age;

    string gender;

public:
    // create 1 method / function that will take input
    void acceptData()
    {
        cout << "Enter your name: ";
        // cin >> name;
        getline(cin, name);
        cout << "Enter your gender: ";
        cin >> gender;
        cout << "Enter your age: ";
        cin >> age;

        fflush(stdin);
    }

    void displayData()
    {
        cout << "~~~~~~Person Information~~~~~~\n";
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    Person p1;
    Person p2;

    p1.acceptData();
    p2.acceptData();

    p1.displayData();
    p2.displayData();
}