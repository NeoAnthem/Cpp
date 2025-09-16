// WAP to print factorial of n
#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1, i;
    cout << "Enter a number: ";
    cin >> n;
    i = n;
    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }
    cout << "Factorial of " << n << " is = " << fact << endl;
}