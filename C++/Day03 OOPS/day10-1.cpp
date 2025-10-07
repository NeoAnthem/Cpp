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
            throw "CANNOT DIVIDE BY ZERO\n";
            cout << "After throw print\n";
        }
        int result = n1 / n2;
        cout << "Division of " << n1 << ", " << n2 << " = " << result << endl;
    }
    catch (int errorCode)
    {
        cout << "Cannot Divide By 0\n";
    }
    catch (string errorMessage)
    {
        cout << errorMessage;
    }
    catch (...)
    {
        cout << "Something bad happen\n";
    }
}