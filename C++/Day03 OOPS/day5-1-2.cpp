// Static Fields count

#include <iostream>
using namespace std;
class Person
{

public:
    static int count;

    Person()
    {
        cout << "Obj constructed\n";
        cout << "Value of count = " << count << endl;
        count++;
    }
};
int Person::count = 1;
int main()
{
    Person p1;
    cout << "Value of count is main after p1 = " << p1.count << endl;
    Person p2;
    cout << "Value of count is main after p2 = " << p1.count << endl;
    Person p3;
    cout << "Value of count is main after p3 = " << p1.count << endl;
}