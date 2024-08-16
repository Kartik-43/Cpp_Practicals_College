#include <iostream>
using namespace std;


class Employee
{
private:
    int empNo = 0, basic = 0, hra = 0, da = 0, netPay = 0;
    string eName;
    int Calculate(void);

public:
    void haveData(void);
    void displayData(void);
};


int Employee::Calculate(void)
{
    hra = 0.1 * basic;     
    da = 0.2 * basic;    
    netPay = basic + hra + da;  
    return netPay;
}


void Employee::haveData(void)
{
    cout << "TAKING EMPLOYEE INFORMATION\n" << endl;
    cout << "Enter Employee Number: ";
    cin >> empNo;

    cout << "\nEnter Employee Name: ";
    cin.ignore();
    getline(cin, eName);

    cout << "\nEnter Basic Salary: ";
    cin >> basic;
}


void Employee::displayData(void)
{
    Calculate();
    cout << "\nEMPLOYEE INFORMATION" << endl;
    cout << "Employee Number : " << empNo << endl;
    cout << "Employee Name : " << eName << endl;
    cout << "Basic Salary : " << basic << endl;
    cout << "HRA : " << hra << endl;
    cout << "DA : " << da << endl;
    cout << "Net Pay : " << netPay << endl;
}


int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123 " << endl;
    cout << "IT - 1\nShift 1\n\n\n" << endl;

    Employee E1;

    E1.haveData();
    E1.displayData();

    return 0;
}
