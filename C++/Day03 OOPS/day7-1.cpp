// Operator Overloading... -> 2
#include <iostream>

using namespace std;

class Demo
{

    int number;

public:
    Demo()
    {
    }
    Demo(int number)
    {
        this->number = number;
    }

    // getters
    int getNumber()
    {
        return number;
    }

    void setNumber(int number)
    {
        this->number = number;
    }

    bool operator>(Demo obj)
    {
        return number > obj.number;
    }
};

int main()
{
    /*int x = 50;
    int y = 10;

    if (x > y)
    {
        cout << "X is greater\n";
    }
    else
    {
        cout << "Y is greater\n";
    }*/

    Demo d1(50);
    Demo d2(10);
    if (d1 > d2)
    {
        cout << "d1 Object number: " << d1.getNumber() << " is greater than d2 Object number: " << d2.getNumber() << endl;
    }
    else
    {
        cout << "d1 Object number: " << d1.getNumber() << " is less than d2 Object number: " << d2.getNumber() << endl;
    }

    d1.setNumber(100);
    d2.setNumber(200);
    if (d1 > d2)
    {
        cout << "d1 Object number: " << d1.getNumber() << " is greater than d2 Object number: " << d2.getNumber() << endl;
    }
    else
    {
        cout << "d1 Object number: " << d1.getNumber() << " is less than d2 Object number: " << d2.getNumber() << endl;
    }
}