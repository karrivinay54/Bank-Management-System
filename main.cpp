#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

// ===============================
// Bank Account Class
// ===============================
class BankAccount
{
private:
    int accountNumber;
    string customerName;
    int age;
    string phoneNumber;
    string address;
    string accountType;
    double balance;

public:

    // Default Constructor
    BankAccount()
    {
        accountNumber = 0;
        customerName = "";
        age = 0;
        phoneNumber = "";
        address = "";
        accountType = "";
        balance = 0.0;
    }

    // Function to take account details from user
    void inputDetails()
    {
        cout << "\n========== CREATE NEW ACCOUNT ==========\n";

        cout << "Enter Account Number : ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Customer Name : ";
        getline(cin, customerName);

        cout << "Enter Age : ";
        cin >> age;

        cin.ignore();

        cout << "Enter Phone Number : ";
        getline(cin, phoneNumber);

        cout << "Enter Address : ";
        getline(cin, address);

        cout << "Enter Account Type (Savings/Current): ";
        getline(cin, accountType);

        cout << "Enter Initial Balance : ";
        cin >> balance;
    }

    // Function to display account details
    void displayDetails()
    {
        cout << "\n----------------------------------------\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "Age            : " << age << endl;
        cout << "Phone Number   : " << phoneNumber << endl;
        cout << "Address        : " << address << endl;
        cout << "Account Type   : " << accountType << endl;
        cout << "Balance        : Rs. " << fixed << setprecision(2) << balance << endl;
        cout << "----------------------------------------\n";
    }

    // Function to save account to file
    void saveToFile()
{
    ofstream file("accounts.txt", ios::app);

    if (file.is_open())
    {
        file << accountNumber << "|"
             << customerName << "|"
             << age << "|"
             << phoneNumber << "|"
             << address << "|"
             << accountType << "|"
             << balance << endl;

        file.close();

        cout << "\nAccount saved successfully!\n";
    }
    else
    {
        cout << "\nError opening accounts.txt\n";
    }
}

// Load account details from a line in the file
void loadFromString(string line)
{
    stringstream ss(line);
    string temp;

    getline(ss, temp, '|');
    accountNumber = stoi(temp);

    getline(ss, customerName, '|');

    getline(ss, temp, '|');
    age = stoi(temp);

    getline(ss, phoneNumber, '|');

    getline(ss, address, '|');

    getline(ss, accountType, '|');

    getline(ss, temp);
    balance = stod(temp);
}

int getAccountNumber()
{
    return accountNumber;
}


};

void displayAllAccounts()
{
    ifstream file("accounts.txt");

    if (!file)
    {
        cout << "\nNo accounts found.\n";
        return;
    }

    string line;

    cout << "\n========== ALL ACCOUNTS ==========\n";

    while (getline(file, line))
    {
        BankAccount account;

        account.loadFromString(line);

        account.displayDetails();
    }

    file.close();
}
void searchAccount()
{
    ifstream file("accounts.txt");

    if (!file)
    {
        cout << "\nNo accounts found!\n";
        return;
    }

    int searchNumber;

    cout << "\nEnter Account Number to Search: ";
    cin >> searchNumber;

    string line;

    bool found = false;

    while (getline(file, line))
    {
        BankAccount account;

        account.loadFromString(line);

        if (account.getAccountNumber() == searchNumber)
        {
            cout << "\nAccount Found!\n";

            account.displayDetails();

            found = true;

            break;
        }
    }

    file.close();

    if (!found)
    {
        cout << "\nAccount not found.\n";
    }
}


int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "        BANK MANAGEMENT SYSTEM\n";
        cout << "=========================================\n";

        cout << "1. Create New Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Check Balance\n";
        cout << "7. Update Account\n";
        cout << "8. Delete Account\n";
        cout << "9. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
          case 1:
{
    BankAccount account;

    account.inputDetails();

    account.displayDetails();

    account.saveToFile();

    break;
}

            case 2:
{
    displayAllAccounts();
    break;
}

            case 3:
{
    searchAccount();
    break;
}

            case 4:
                cout << "\nDeposit Selected.\n";
                break;

            case 5:
                cout << "\nWithdraw Selected.\n";
                break;

            case 6:
                cout << "\nCheck Balance Selected.\n";
                break;

            case 7:
                cout << "\nUpdate Account Selected.\n";
                break;

            case 8:
                cout << "\nDelete Account Selected.\n";
                break;

            case 9:
                cout << "\nThank you for using Bank Management System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please try again.\n";
        }

    } while(choice != 9);

    return 0;
}