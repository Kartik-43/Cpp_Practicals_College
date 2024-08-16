#include <iostream>

using namespace std;


class Bank
{
    string nameDep;
    int accNo = 0, balanceAmt = 10000;
    char typeAcc;

    public:
        void createAcc(void);
        void depositMoney(void);
        void withdrawMoney(void);
        void displayAccount(void);
};


void Bank :: createAcc(void)
{
    cout << "CREATING THE ACCOUNT" << endl;
    cout << "Enter the name of the depositer : " << endl;
    getline(cin, nameDep);

    cout << "\nEnter the account number :- " << endl;
    cin >> accNo;

    do
    {
    cout << "\nEnter the type of account ( s - for Savings AND c - for Current ) :- " << endl;
    cin >> typeAcc;
    cin.clear();
    cin.ignore(10000, '\n');
    } while ( typeAcc != 's' && typeAcc != 'c' );
}


void Bank :: depositMoney(void)
{
    cout << "\nDEPOSITING MONEY" << endl;
    int amount, acc;

    cout << "Enter the amount to be deposited :- " << endl;
    cin >> amount;

    cout << "\nEnter the account number :- " << endl;
    cin >> acc;
    if(acc == accNo)
    {
        balanceAmt += amount;
        cout << "Money Deposited Succesfuly !\nThe updated balance for account number " << accNo << " is " << balanceAmt << endl;
    }

    else
    {
        cout << "\nInvalid account number" << endl;
    }
}


void Bank :: withdrawMoney(void)
{
    cout << "\nWITHDRAWING MONEY" << endl;
    int amount, acc;
    cout << "Enter the amount to be withdrawn :- " << endl;
    cin >> amount;

    cout << "\nEnter the account number :- " << endl;
    cin >> acc;

    if (acc == accNo)
    {
        if ((balanceAmt - amount) >= 10000)
        {
            balanceAmt = balanceAmt - amount;
            cout << "Money Withdrawn Succesfuly !\nThe updated balance for account number " << accNo << " is " << balanceAmt << endl;
        }
        
        else
        {
            cout << "Balance is Low!\nCannot perform this action! " << endl;
        }
    }

    else
    {
        cout << "\nInvalid account number" << endl;
    }
}


void Bank :: displayAccount(void)
{
    cout << "\nACCOUNT DETAILS" << endl;
    if (typeAcc == 's')
    {
        cout << "Account Holder Name :- " << nameDep << endl;
        cout << "\nAccount Number :- " << accNo << endl;
        cout << "\nAccount Type :- Savings" << endl;
        cout << "\nBalance Amount :- " << balanceAmt << endl;
    }
    
    else
    {
        cout << "Account Holder Name :- " << nameDep << endl;
        cout << "\nAccount Number :- " << accNo << endl;
        cout << "\nAccount Type :- Current" << endl;
        cout << "\nBalance Amount :- " << balanceAmt << endl;
    }
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Bank P1;

    P1.createAcc();
    P1.depositMoney();
    P1.displayAccount();
    P1.withdrawMoney();
    P1.displayAccount();

    return 0;
}
