// Operator Overloading... -> 2
#include <iostream>

using namespace std;

class Demo
{

public:
    int a;
    int b;

    Demo()
    {
    }
    Demo(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    Demo operator*(Demo otherObj)
    {
        Demo newObj;
        newObj.a = a * otherObj.a;
        newObj.b = b * otherObj.b;
        return newObj;
    }
};

int main()
{
    Demo d1(10, 9);
    Demo d2(4, 6);
    Demo d3 = d1 * d2;

    cout << "D3 Object\n";
    cout << "a = " << d3.a << endl;
    cout << "b = " << d3.b << endl;
}