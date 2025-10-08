#include <iostream>
#include <vector>

// GLOBAL VARIABLES
#define MIN_BALANCE 1500
// Small Scale -> Max capacity of customer 5
#define MAX_CAPACITY 5
using namespace std;
class Account
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    Account() {}
    Account(int accountNumber, string name, double balance)
    {
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
    }

    string getName()
    {
        return name;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }
    double getBalance()
    {
        return balance;
    }

    void credit(double amount)
    {
        balance += amount;

        cout << "Account with acc number " << accountNumber << " is credited with INR " << amount << " successfully\nAvailable Balance is " << balance << endl;
    }
    void debit(double amount)
    {
        balance -= amount;

        cout << "Account with acc number " << accountNumber << " is debitted with INR " << amount << " successfully\nAvailable Balance is " << balance << endl;
    }
    void displayAccountInfo()
    {
        cout << "-------------------------------------------------------\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "-------------------------------------------------------\n";
    }
};

class Bank
{
public:
    static int accountNumberReference;
    static int indexPosition;

private:
    // ACCOUNTS -> Array of Account obj
    Account accounts[MAX_CAPACITY];

    int getIndexWithAccNumber(int accNumber)
    {
        int i;
        for (i = 0; i < MAX_CAPACITY; i++)
        {
            if (accounts[i].getAccountNumber() == accNumber)
            {
                return i;
            }
        }
        return -1;
    }

public:
    Bank() {}

    void createAccount(string name, double initialAmount)
    {
        // checking -> indexPosition < MAX_CAPACITY
        if (indexPosition < MAX_CAPACITY)
        {
            // But first we will check initialAmount >= MINIMUM_BALANCE
            if (initialAmount >= MIN_BALANCE)
            {
                // We will create account
                Account customer(accountNumberReference, name, initialAmount);
                // Add this customer to bank account array
                accounts[indexPosition] = customer;
                cout << "Account Opened Succesfully\n";
                customer.displayAccountInfo();
                accountNumberReference++;
                indexPosition++;
            }
            else
            {
                cout << "Minimum Balance is " << MIN_BALANCE << "\nYour Initial Payment Didn't satisfy our criteria please try again with minimum balance = " << MIN_BALANCE << endl;
            }
        }
        else
        {
            cout << "Sorry " << name << ", We are sorry to not serve you! Give us sometime we will create your account! Thankyou\n";
        }
    }

    void depositAmount(int accNumber, double depositAmount)
    {
        // Search account exists in our array with that account number
        int index = getIndexWithAccNumber(accNumber);
        if (index == -1)
        {
            cout << "Sorry currently you are not avialable in our system first register your account with us!!\nThankyou";
        }
        else
        {
            // index -> Account -> Deposit
            Account existingCustomer = accounts[index];
            existingCustomer.credit(depositAmount);
            accounts[index] = existingCustomer;
        }
    }
    void getAccountDetails(int accNumber)
    {
        // Search account exists in our array with that account number
        int index = getIndexWithAccNumber(accNumber);
        if (index == -1)
        {
            cout << "Sorry currently you are not avialable in our system first register your account with us!!\nThankyou";
        }
        else
        {
            // index -> Account -> Deposit
            accounts[index].displayAccountInfo();
        }
    }
};
int Bank::accountNumberReference = 10001;
int Bank::indexPosition = 0;
int main()
{
    Bank bank;
    bank.createAccount("Ayush Tambe", -500);
    bank.createAccount("Shruti Deshmukh", 1500);
    bank.createAccount("Shoaib Khatib", 2500);
    bank.createAccount("Preeti Jadhav", 3900);
    bank.createAccount("Mayuri Palande", 4500);
    bank.createAccount("Sohail Khan", 1800);
    bank.createAccount("John Michael", 2500);

    bank.depositAmount(10004, 2000);
    bank.getAccountDetails(10004);
}