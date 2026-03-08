#include <iostream>
#include <ctime>
using namespace std;

class ATM
{
private:
    int pin;
    double balance;

public:
    ATM(); // Constructor
    void welcomeScreen();
    void helpScreen();
    bool verifyPin();
    void menuScreen();
    void deposit();
    void withdraw();
    void checkBalance();
};

// Constructor
ATM::ATM()
{
    pin = 12345;
    balance = 20000; // Present balance
}

// Welcome Screen
void ATM::welcomeScreen()
{
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "====================================\n";
    cout << "        WELCOME TO ATM SYSTEM       \n";
    cout << "====================================\n";
    cout << "Current Date & Time: " << dt;
    cout << "\n1. Enter ATM PIN\n";
    cout << "2. Help\n";
    cout << "3. Exit\n";
}

// Help Screen
void ATM::helpScreen()
{
    cout << "\n------ HELP SCREEN ------\n";
    cout << "1. Enter ATM PIN to access your account.\n";
    cout << "2. PIN for this demo is 12345.\n";
    cout << "3. After login you can deposit, withdraw or check balance.\n";
    cout << "-------------------------\n";
}

// Verify PIN
bool ATM::verifyPin()
{
    int enteredPin;

    cout << "\nEnter ATM PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin)
    {
        cout << "PIN Verified Successfully!\n";
        return true;
    }
    else
    {
        cout << "Incorrect PIN. Exiting system.\n";
        return false;
    }
}

// Menu Screen
void ATM::menuScreen()
{
    int choice;

    do
    {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deposit();
            break;

        case 2:
            withdraw();
            break;

        case 3:
            checkBalance();
            break;

        case 4:
            cout << "Thank you for using ATM.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);
}

// Deposit Function
void ATM::deposit()
{
    double amount;

    cout << "\nEnter amount to deposit: ";
    cin >> amount;

    balance += amount;

    cout << "Deposit Successful.\n";
    cout << "Current Balance: Rs. " << balance << endl;
}

// Withdraw Function
void ATM::withdraw()
{
    double amount;

    cout << "\nEnter withdrawal amount: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient Balance. Withdrawal Failed.\n";
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal Successful.\n";
        cout << "Remaining Balance: Rs. " << balance << endl;
    }
}

// Balance Check
void ATM::checkBalance()
{
    cout << "\nYour Current Balance is: Rs. " << balance << endl;
}

// Main Function
int main()
{
    ATM atm;
    int choice;

    atm.welcomeScreen();
    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (atm.verifyPin())
        {
            atm.menuScreen();
        }
        break;

    case 2:
        atm.helpScreen();
        break;

    case 3:
        cout << "Exiting Program.\n";
        break;

    default:
        cout << "Invalid Choice.\n";
    }

    return 0;
}
