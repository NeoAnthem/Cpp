// WAP to print sum of digit of n
// n = 148 -> 8 + 4 + 1 = 13
#include <iostream>

using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "ENter a number: ";
    cin >> n;
    // Start
    i = n;

    while (i != 0)
    {
        int remainder = i % 10;
        sum = sum + remainder;
        i = i / 10;
    }

    cout << "The sum of digit of " << n << " is = " << sum << endl;
}
