// Operator Overloading -> 1
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

    Demo operator+(Demo otherObj)
    {
        Demo newObj;
        newObj.number = number + otherObj.number;

        return newObj;
    }
};

int main()
{
    // int num1 = 50;
    // int num2 = 20;

    // int result = num1 + num2;

    // cout << "Addition is = " << result << endl;

    Demo d1(50);
    Demo d2(20);
    // Demo d3 = d1.operator+(d2);
    Demo d3 = d1 + d2;
    cout << "Addition of 2 object is = " << d3.getNumber() << endl;
}