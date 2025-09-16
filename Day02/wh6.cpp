// 3. WAP to check whther the number is a prime number or not

#include<iostream>
using namespace std;
int main(){
    int isPrime = 1;
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n <= 1)
    {
        cout << " is not a Prime Number\n";
    } else {
        int i = 2;
        while (i <= n/2)
        {
            if (n % i == 0)
            {
                isPrime = 0;
            } else {
                isPrime = 1;
            }
            i++;
        }
        
        if (isPrime)
        {
            cout << n << " is a Prime Number";
        } else {
            cout << n << " is Not a Prime Number";
        }
    }
}