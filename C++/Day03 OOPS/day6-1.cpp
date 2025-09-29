// Polymorphism -> Compile Time -> Function Overloading
/*
Access Modifier:
1. public:
2. private:
3. protected:
*/
#include <iostream>
using namespace std;

class Calculator
{
public:
    void addition(int x, int y)
    {
        cout << "Addition of 2 integer numbers =" << x << ", " << y << " = " << x + y << endl;
    }
    void addition(double x, int y)
    {
        cout << "Addition of 2 decimal numbers double,int =" << x << ", " << y << " = " << x + y << endl;
    }
    void addition(int x, double y)
    {
        cout << "Addition of 2 decimal numbers int, double =" << x << ", " << y << " = " << x + y << endl;
    }
    void addition(double x, double y)
    {
        cout << "Addition of 2 decimal numbers double, double =" << x << ", " << y << " = " << x + y << endl;
    }
    void addition(int x, int y, int z)
    {
        cout << "Addition of 3 integer numbers =" << x << ", " << y << ", " << z << " = " << x + y + z << endl;
    }
    void addition(double x, double y, int z)
    {
        cout << "Addition of 2 double and 1 integer numbers =" << x << ", " << y << ", " << z << " = " << x + y + z << endl;
    }
};
int main()
{
    Calculator *ptr = new Calculator();
    ptr->addition(5, 5);
    ptr->addition(5, 6, 10);
    ptr->addition(10, 2.36);
    ptr->addition(2.5, 2);
    ptr->addition(2.22, 3.14);
    ptr->addition(3.14, 6.23, 4);
}