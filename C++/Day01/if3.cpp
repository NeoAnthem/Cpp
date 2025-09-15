// WAP to check whether the number is divisible by 2 or not
// Even or Odd

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even\n";
    }
    else
    {
        cout << "Number is odd\n";
    }
}