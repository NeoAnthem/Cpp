/*
WAP to print the following pattern till n:

-                           *  *  *  *  *
-                       *           *
-                   *           *
-               *           *
-           *  *  *  *  *
 */

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, space;
    cout << "Enter a number : ";
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << "   ";
        }
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}