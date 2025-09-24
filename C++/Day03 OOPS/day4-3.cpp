// Multiple inheritance
#include <iostream>
using namespace std;

// Water Animal
class WaterAnimal
{
public:
    WaterAnimal()
    {
        cout << "Water animal is created\n";
    }

    void swim()
    {
        cout << "I am swiming\n";
    }
    void eat()
    {
        cout << "I am eating in water\n";
    }
};
// Land Animal
class LandAnimal
{
public:
    LandAnimal()
    {
        cout << "Land Animal is created\n";
    }

    void eat()
    {
        cout << "I am eating on land\n";
    }
    void walk()
    {
        cout << "I am walking\n";
    }
};
// Turtle -> Water , Land Animal
class Turtle : public LandAnimal, public WaterAnimal
{
public:
    Turtle()
    {
        cout << "Turtle is created\n";
    }

    // override same method if exists in all base classes
    void eat()
    {
        cout << "I am eating fish\n";
    }
};

int main()
{

    Turtle t1;
    t1.walk();
    t1.swim();
    t1.eat();
}