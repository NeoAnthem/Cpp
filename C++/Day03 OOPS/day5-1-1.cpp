// Static Fields and Methods

#include <iostream>
using namespace std;
class Person
{

public:
    int count = 1;

    Person()
    {
        cout << "Obj constructed\n";
        cout << "Value of count = " << count << endl;
        count++;
    }
};
int main()
{
    Person p1;
    cout << "Value of count is main after p1 = " << p1.count << endl;
    Person p2;
    cout << "Value of count is main after p2 = " << p1.count << endl;
}