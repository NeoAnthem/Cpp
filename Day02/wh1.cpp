// WAP to print first n natural numebr in reverse order
// start = n, stop = 1, gap = -1
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a Number: ";
    cin >> n;
    // Init i with start
    i = n;

    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}