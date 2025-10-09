#include "bankHeader.hpp"

// Function Declare
void startBank();

int main()
{
    startBank();
}

// Function Definition
void startBank()
{
    Bank bank;
    int choice;
    string name;
    double balance;
    int accNumber;
    do
    {
        cout << "\n-----------------------------------------------------------------";
        cout << "\n\nPlease Enter Choice:\n";
        cout << "1. Create Account\n2. Show Account Details\n3. Debit\n4. Credit\n5. Exit:\n";
        cout << "-----------------------------------------------------------------\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            // create account
            cout << "Enter name: ";
            fflush(stdin);
            getline(cin, name);
            cout << "Enter balance amount: ";
            cin >> balance;
            fflush(stdin);
            bank.createAccount(name, balance);
            break;
        case 2:
            cout << "Enter account number: ";
            cin >> accNumber;
            fflush(stdin);
            bank.getAccountDetails(accNumber);
            break;
        case 3:
            cout << "Enter account number: ";
            cin >> accNumber;
            cout << "Enter amount to be withdrawn: ";
            cin >> balance;
            fflush(stdin);

            bank.withdrawAmount(accNumber, balance);
            break;
        case 4:
            cout << "Enter account number: ";
            cin >> accNumber;
            cout << "Enter amount to be credit: ";
            cin >> balance;
            fflush(stdin);

            bank.depositAmount(accNumber, balance);
            break;
        case 5:
            cout << "Thanks for using our banking system! Do Visit Again\n";
            break;
        default:
            cout << "Please enter correct choice\n";
        }

    } while (choice != 5);
}