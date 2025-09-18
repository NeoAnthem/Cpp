/* WAP to print the following pattern :

*                       *
*   *               *   *
*   *   *       *   *   *
*   *   *   *   *   *   *
*   *   *       *   *   *
*   *               *   *
*                       *

 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i && i <= n / 2 + 1)
            {
                cout << " * ";
            }
            else if (i > n / 2 + 1 && j <= n - i + 1)
            {
                cout << " * ";
            }
            else if (j >= n - i + 1 && i <= n / 2 + 1)
            {
                cout << " * ";
            }
            else if (i > n / 2 + 1 && j >= i)
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
