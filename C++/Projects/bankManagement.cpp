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
};

class Bank
{
public:
    static int accountNumberReference;
    static int indexPosition;

private:
    // ACCOUNTS -> Array of Account obj
    Account accounts[MAX_CAPACITY];
};
int Bank::accountNumberReference = 10001;
int Bank::indexPosition = 0;
int main()
{
}