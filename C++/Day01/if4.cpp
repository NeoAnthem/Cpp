// 1. WAP to check whether the number is divisible by 3 and 5 both or not

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "The number is divisible by both 3 and 5";
    }
    else
    {
        cout << "The number is not divisible by both 3 and 5";
    }
}
