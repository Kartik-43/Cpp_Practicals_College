#include <iostream>
#include <string.h>

using namespace std;

class Hospital;

class Date
{
    int day, month, year;

public :
    friend class Hospital;
    void setDate(int d, int m, int y);
    void displayDate(void);
};


class Hospital
{
    string name;
    string disease;
    Date dateOfAdmission;
    Date dateOfDischarge;

public :
    friend class Date;
    void input(void);
    void displayPatient(void);
};


void Hospital :: input(void)
{
    int d1, m1, y1, d2, m2, y2;
    char ch;

    cout << "\n\nEnter the name of the Paitent : ";
    cin >>name;

    cout << "\nEnter the disease of the patient : ";
    cin >> disease;

    cout << "\nEnter the day of admission for " << name << " :- ";
    cin >> d1;
    cout << "Enter the month of admission for " << name << " :- ";
    cin >> m1;
    cout << "Enter the year of admission for " << name << " :- ";
    cin >> y1;
    dateOfAdmission.setDate(d1, m1, y1);

    cout << "Is the Patient Discharged (Y/n) :- ";
    cin >> ch;
    cin.ignore();

    if (ch == 'Y' || ch == 'y')
    {
        cout << "\nEnter the day of discharge for " << name << " :- ";
        cin >> d2;
        cout << "Enter the month of discharge for " << name << " :- ";
        cin >> m2;
        cout << "Enter the year of discharge for " << name << " :- ";
        cin >> y2;
        cin.ignore();
        dateOfDischarge.setDate(d2, m2, y2);
    }

    else
    {
        dateOfDischarge.setDate(0, 0, 0);
    }
}


void Hospital :: displayPatient(void)
{
    cout << "\nPatient Name : " << name << endl;
    cout << "Disease : " << disease << endl;

    cout << "Date of Admission : ";
    dateOfAdmission.displayDate();

    if (dateOfDischarge.day == 0 && dateOfDischarge.month == 0 && dateOfDischarge.year == 0)
    {
        cout << "This patient is not yet Discharged !" << endl;
    }

    else
    {
        cout << "Date of Discharge : ";
        dateOfDischarge.displayDate();
    }
}


void Date :: setDate(int d, int m, int y)
{
    if (d > 31 || d < 0 || m > 12 || m < 0)
    {
        cout << "Enter Correct input !" << endl;
        day = month = year = 0;
    }

    else
    {
        day = d;
        month = m;
        year = y;
    }
}


void Date :: displayDate(void)
{
    cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    int num, d, m, y;

    cout << "Enter the number of patients in the Hospital :- " << endl;
    cin >> num;

    Hospital* Patients = new Hospital[num];

    cout << "\nTaking Input Of the Patients..." << endl;

    for (int i = 0; i < num; i++)
    {
        Patients[i].input();
    }
    
    cout << "\nDisplaying Patients...\n" << endl;

    for (int i = 0; i < num; i++)
    {
        Patients[i].displayPatient();
    }

    delete[] Patients; 

    return 0;
}
