// Exception Handling

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    try
    {
        if (n2 == 0)
        {
            throw new bad_exception();
            cout << "After throw print\n";
        }
        int result = n1 / n2;
        cout << "Division of " << n1 << ", " << n2 << " = " << result << endl;
    }

    catch (exception *ptr)
    {
        cout << "Something bad happen\n";
    }
}