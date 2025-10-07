// Exceptions
/*
1. Unusual conditions that arises in my code which blocks the normal flow of
program is called as exception

-- We have to handle this situation for smooth user experience is called
as exception handling
*/
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;

    int result = n1 / n2;
    cout << "Division of " << n1 << ", " << n2 << " = " << result << endl;

    int arr[] = {5, 1, 7, 9, 3};

    int index;
    cout << "Enter index to find element: ";
    cin >> index;

    cout << "Element at index: " << index << " = " << arr[index] << endl;
}