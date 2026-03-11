/*Scenario:
Store account details and display balance.
Class Name:
BankAccount
Attributes:
•	string accountHolderName
•	int accountNumber
•	double balance
Methods:
•	void inputDetails()
•	void displayDetails()
•	void deposit(double amount)
•	void withdraw(double amount)
*/

#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolderName;
    int accountNumber;
    double balance;

    public:
    void inputDetails()
    {
        cout << "Enter account holder name: ";
        cin >> accountHolderName;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void displayDetails()
    {
        cout << "\nAccount Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }
};

int main()
{
    BankAccount account;
    account.inputDetails();
    account.displayDetails();

    double depositAmount, withdrawAmount;

    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);
    account.displayDetails();

    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    account.displayDetails();

    return 0;
}