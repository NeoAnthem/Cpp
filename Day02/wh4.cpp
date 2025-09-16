// 1. WAP to print table of n till x iteration.

#include <iostream>
using namespace std;
int main()
{
    int n, i, table, x;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Enter a number : ";
    cin >> x;
    i = 1;
    while (i <= x)
    {
        table = n * i;
        cout << n << " * " << i << " = " << table << endl;
        i++;
    }
}