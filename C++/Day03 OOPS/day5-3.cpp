// static method

#include <iostream>
using namespace std;

class Helper
{

public:
    static void doHelp()
    {
        cout << "I am helping externally without my object creation\n";
    }
};

int main()
{
    Helper::doHelp();
}