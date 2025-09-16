// 2. WAP to check whether the number is palindrome or not.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of number n : ";
    cin >> n;

    int lastDigit, rev = 0;
    int revNum;
    revNum = n;

    while (n != 0)
    {
        lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }
    if (revNum == rev)
    {
        cout << revNum << " is a Palindrome Number\n";
    }
    else
    {
        cout << revNum << " is not a Palindrome number\n";
    }
}