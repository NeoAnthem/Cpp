// WAP to check whether the number is armstrong number or not
// Student will use concepts of functions
#include <iostream>
using namespace std;

// Armstrong number -> sum of power of length of digits

int power(int a, int b)
{
    int pow = 1;
    int i = 1;
    while (i <= b)
    {
        pow = pow * a;
        i++;
    }
    return pow;
}

// Calculate length

int calcLength(int num)
{
    int length = 0;
    while (num != 0)
    {
        num = num / 10;
        length++;
    }
    return length;
}

int main()
{
    int n;
    cout << "Enter a number to check armstrong or not: ";
    cin >> n;
    int length = calcLength(n);
    int i = n;
    int sum = 0;
    while (i != 0)
    {
        int lastDigit = i % 10;
        int pow = power(lastDigit, length);
        sum = sum + pow;
        i = i / 10;
    }

    if (n == sum)
    {
        cout << "Number = " << n << " is Armstrong number\n";
    }
    else
    {
        cout << "Number = " << n << " is not Armstrong number, Bcoz sum = " << sum << " n and sum not equal\n";
    }
}
