// 1. WAP to  print fibonacci series till n

#include <iostream>
using namespace std;
int main()
{
    int currNum = 0, prevNum = 1, nextNum;
    int i, n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Fibonacci series till n is : \n";
    i = 0;
    while (i <= n)
    {
        cout << currNum << " ";
        nextNum = currNum + prevNum;
        currNum = prevNum;
        prevNum = nextNum;

        i++;
    }
}