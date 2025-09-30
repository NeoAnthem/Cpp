// Function Overriding
/*
1. Two or more function with the same name one in base class
and one in derived class is called as overriding (Inheritance)
*/

#include <iostream>

using namespace std;

// Base Class
class Shape
{

public:
    void sayShape()
    {
        cout << "I have no shape\n";
    }
};
// Derived Class
class Circle : public Shape
{
public:
    void sayShape()
    {
        cout << "I am circular in shape\n";
    }
};
// Derived Class
class Triangle : public Shape
{
public:
    void sayShape()
    {
        cout << "I am triangular in shape\n";
    }
};

int main()
{
    Circle circle;
    circle.sayShape();

    Triangle tr;
    tr.sayShape();
}