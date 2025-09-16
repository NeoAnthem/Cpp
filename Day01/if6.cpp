/*
3. WAP to check whether the character contains
    a. Upper case then display character contains upper case
    b. Lower Case then display character contains lower case
    c. digits then display character contains digits
    d. none of the above then display character contains special characters

*/

#include <iostream>
// #include <cctype>
using namespace std;
int main()
{
    char alp;
    cout << "Enter a character : ";
    cin >> alp;

    // if (isupper(alp))
    if (alp >= 'A' && alp <= 'Z')
    {
        cout << "The character contains upper case";
    }
    // else if (islower(alp))
    else if (alp >= 'a' && alp <= 'z')
    {
        cout << "The character contains lower case";
    }
    // else if (isdigit(alp))
    else if (alp >= '0' && alp <= '9')
    {
        cout << "The character contains digits";
    }
    else
    {
        cout << "The character contains special characters";
    }
}