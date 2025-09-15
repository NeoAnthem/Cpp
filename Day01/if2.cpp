// WAP to check greatest of 2 numbers
// input = 2, conditions = 2 (if else)

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << "Number 1 = " << num1 << " is greater than Number 2 = " << num2 << endl;
    }
    else
    {
        cout << "Number 2 is greater\n";
    }
}