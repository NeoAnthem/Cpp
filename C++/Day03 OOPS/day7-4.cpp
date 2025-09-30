// Ternary Operator (if else -> ?:)

#include <iostream>
using namespace std;
// check positive or negative
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    string response = num >= 0 ? "Positive" : "Negative";
    // Number = 5 is a positive number
    // Number = -6 is a negative number
    cout << response << endl;
    /*
    if (num >= 0)
    {
        cout << "Number is a positive number";
    }
    else
    {
        cout << "Number is a negative number";
    }
    */
}