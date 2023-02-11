#include <iostream>
using namespace std;
class account
{
public:
    int acn, balance, minbal, wd, dp, bal;
    char name[25];
    void info()
    {
        cout << "Enter account number : ";
        cin >> acn;
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter balance : ";
        cin >> balance;
        cout << "Enter amount to withdraw : ";
        cin >> wd;
        cout << "Enter amount to deposit : ";
        cin >> dp;
    }
    void savings()
    {
        minbal = 1000;
        bal = balance - wd + dp;
        cout << "Minimum balance is : " << minbal << endl;
    }

    void current()
    {
        bal = balance - wd + dp;
        cout << "Current balance is : " << bal << endl;
    }

    virtual void data() = 0;
};
class savings : public account
{
public:
    void data()
    {
        cout << "Account number : " << acn << endl;
        cout << "Customer name : " << name << endl;
        if (bal < minbal)
            cout << "You cannow withdraw below minimum balance, which is Rs. " << minbal << endl;
        else
            cout << "Balance is : " << bal << endl;
    }
};
class current : public account
{
public:
    void data()
    {
        cout << "Account number : " << acn << endl;
        cout << "Customer name : " << name << endl;
        if (bal < 0)
        {
            cout << "Amount Overdued." << endl;
        }
        else
        {
            cout << "Balance is : " << bal << endl;
        }
    }
};

int main()
{
    int ch;
    savings s;
    account *as = &s;

    current c;
    account *ac = &c;

    while (1)
    {
        cout << "1. Savings" << endl;
        cout << "2. Current" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Savings Account." << endl;
            as->info();
            as->savings();
            as->data();
            break;

        case 2:
            cout << "Current Account." << endl;

            ac->info();
            ac->current();
            ac->data();
            break;

        case 3:
            return 0;
        default:
            cout << "Wrong Choice!!" << endl;
        }
    }
}