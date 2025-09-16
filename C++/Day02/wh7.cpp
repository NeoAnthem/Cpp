// 4. WAP to print series of prime number from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are : ";

    int num = 2;
    while (num <= n)
    {
        bool isPrime = true;
        int i = 2;
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
            i++;
        }
        if (isPrime)
        {
            cout << num << " ";
        }
        num++;
    }
}
