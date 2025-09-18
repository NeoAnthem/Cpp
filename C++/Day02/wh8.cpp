// WAP to check whether the number is perfect number or not
// 28 = sum of its proper positive divisors (divisors excluding the number itself)
// 28 = 1, 2, 4, 7, 14 = 28
// Start = 1, stop = n-1, gap = 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    int sum = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            // add to sum
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
    {
        cout << "Number = " << n << " is a perfect number\n";
    }
    else
    {
        cout << "Number = " << n << " is a not perfect number, Since sum = " << sum << " is not equal to Number " << n << endl;
    }
}