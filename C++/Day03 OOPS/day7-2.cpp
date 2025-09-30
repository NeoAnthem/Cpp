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

    Demo operator++(int)
    {
        Demo obj;
        obj.number = number;
        number++;
        return obj;
    }
};

int main()
{
    /*int num = 10;

        cout << "Number = " << num << endl;
        int newNum = num++;
        cout << "Number after increment= " << num << endl;
        cout << "New Number = " << newNum << endl;
     */

    Demo d1(10);
    cout << "Value of number in d1 (before increment) = " << d1.getNumber() << endl;
    Demo d2 = d1++;
    cout << "Value of number in d1 (after increment) = " << d1.getNumber() << endl;
    cout << "Value of number in new Object d2 (after increment) = " << d2.getNumber() << endl;
}