// Multi Level Inheritance

#include <iostream>
using namespace std;

class Animal
{

public:
    Animal()
    {
        cout << "Animal obj created\n";
    }
    void eat()
    {
        cout << "Animal is eating\n";
    }

    void walk()
    {
        cout << "Animal is walking\n";
    }
};

class Dog : public Animal
{

public:
    Dog()
    {
        cout << "Dog obj created\n";
    }
    void bark()
    {
        cout << "Dog is barking\n";
    }
};
class Puppy : public Dog
{

public:
    Puppy()
    {
        cout << "Puppy obj created\n";
    }
    void weep()
    {
        cout << "Puppy is Weeping\n";
    }

    // Function overriding
    /*
    1. Two or more function with the same name one in base class and one in derived class
    is called as function overriding
    */
    void walk()
    {
        cout << "Puppy is walking\n";
    }
};

int main()
{
    Puppy p1;

    p1.weep();
    p1.bark();
    p1.eat();
    p1.walk();

    Animal animal;
    animal.eat();
    animal.walk();
}
