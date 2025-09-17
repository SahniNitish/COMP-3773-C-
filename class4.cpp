#include <iostream>
#include <string>
using namespace std;

// Base class: BankAccount
class BankAccount {
protected:
    string name;
    double balance;

public:
    // Constructor
    BankAccount(string n, double b) {
        name = n;
        balance = b;
        cout << "BankAccount created for " << name << endl;
    }

    // Basic functions
    void deposit(double amount) {
        balance += amount;
        cout << name << " deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << name << " withdrew $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Not enough money!" << endl;
        }
    }

    void showBalance() {
        cout << name << "'s balance: $" << balance << endl;
    }
};

// Derived class: CheckingAccount
class CheckingAccount : public BankAccount {
public:
    // Constructor
    CheckingAccount(string n, double b) : BankAccount(n, b) {
        cout << "CheckingAccount created" << endl;
    }

    // Checking-specific function
    void writeCheck(double amount) {
        cout << name << " wrote a check for $" << amount << endl;
        withdraw(amount);  // Use inherited function
    }
};

// Derived class: SavingAccount
class SavingAccount : public BankAccount {
public:
    // Constructor
    SavingAccount(string n, double b) : BankAccount(n, b) {
        cout << "SavingAccount created" << endl;
    }

    // Savings-specific function
    void addInterest() {
        double interest = balance * 0.05;  // 5% interest
        balance += interest;
        cout << name << " earned $" << interest << " interest!" << endl;
    }
};

int main() {
    cout << "=== Simple Bank Inheritance ===" << endl;
    cout << "Student: Nitish Sahni (0263900s)" << endl;
    cout << "==============================" << endl;

    // Create accounts
    cout << "\n1. Creating accounts:" << endl;
    CheckingAccount checking("John", 1000.0);
    SavingAccount savings("Jane", 2000.0);

    // Use basic functions (inherited)
    cout << "\n2. Using basic functions:" << endl;
    checking.deposit(500.0);
    savings.deposit(300.0);

    checking.withdraw(200.0);
    savings.withdraw(100.0);

    // Use specific functions
    cout << "\n3. Using specific functions:" << endl;
    checking.writeCheck(150.0);
    savings.addInterest();

    // Show final balances
    cout << "\n4. Final balances:" << endl;
    checking.showBalance();
    savings.showBalance();

    cout << "\n=== Program completed ===" << endl;
    return 0;
}
