#include <iostream>
#include <string>

using namespace std;


class Date
{
    int day, month, year;

public:
    void setDate(int d, int m, int y);
    void displayDate(void);
    int getYear() { return year; }
};


class Hospital
{
protected:
    string name;
    string disease;
    Date dateOfAdmission;
    Date dateOfDischarge;
    int age;

public:
    void input(void);
    void displayPatient(void);
    int getAge() { return age; }
};


class PediatricPatient : public Hospital
{
public:
    void input(void);
    void displayPediatricPatients(Hospital *patients, int num);
};


void Date::setDate(int d, int m, int y)
{
    if (m < 1 || m > 12 || d < 1)
    {
        cout << "Enter Correct input!" << endl;
        day = month = year = 0;
        return;
    }

    int daysInMonth;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        daysInMonth = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysInMonth = 30;
        break;
    case 2:
        daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        break;
    }

    if (d > daysInMonth)
    {
        cout << "Enter Correct input!" << endl;
        day = month = year = 0;
    }
    else
    {
        day = d;
        month = m;
        year = y;
    }
}


void Date::displayDate(void)
{
    cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
}


void Hospital::input(void)
{
    int d1, m1, y1, d2, m2, y2;
    char ch;

    cout << "\nEnter the name of the Patient: ";
    cin >> name;
    cin.ignore();

    cout << "Enter the disease of the patient: ";
    cin >> disease;
    cin.ignore();

    cout << "Enter the age of the patient: ";
    cin >> age;
    cin.ignore();

    cout << "Enter the day of admission for " << name << ": ";
    cin >> d1;
    cout << "Enter the month of admission for " << name << ": ";
    cin >> m1;
    cout << "Enter the year of admission for " << name << ": ";
    cin >> y1;
    dateOfAdmission.setDate(d1, m1, y1);

    cout << "Is the Patient Discharged (Y/n): ";
    cin >> ch;
    cin.ignore();

    if (ch == 'Y' || ch == 'y')
    {
        cout << "Enter the day of discharge for " << name << ": ";
        cin >> d2;
        cout << "Enter the month of discharge for " << name << ": ";
        cin >> m2;
        cout << "Enter the year of discharge for " << name << ": ";
        cin >> y2;
        dateOfDischarge.setDate(d2, m2, y2);
    }
    else
    {
        dateOfDischarge.setDate(1, 1, 0);
    }
}


void Hospital::displayPatient(void)
{
    cout << "\nPatient Name: " << name << endl;
    cout << "Disease: " << disease << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Admission: ";
    dateOfAdmission.displayDate();

    if (dateOfDischarge.getYear() == 0)
    {
        cout << "This patient is not yet Discharged!" << endl;
    }
    else
    {
        cout << "Date of Discharge: ";
        dateOfDischarge.displayDate();
    }
}


void PediatricPatient::input(void)
{
    Hospital::input();
}


void PediatricPatient::displayPediatricPatients(Hospital *patients, int num)
{
    cout << "\nPediatric Patients (Under 12 years):\n";
    for (int i = 0; i < num; i++)
    {
        if (patients[i].getAge() < 12)
        {
            patients[i].displayPatient();
        }
    }
}


int main()
{
    cout << "\nKartik Garg \nEnrolment Number - 01813203123" << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;

    int num;

    cout << "Enter the number of patients in the Hospital: ";
    cin >> num;
    cin.ignore();

    Hospital *patients = new Hospital[num];

    cout << "\nTaking Input Of the Patients..." << endl;

    for (int i = 0; i < num; i++)
    {
        PediatricPatient pp;
        pp.input();
        patients[i] = pp;
    }

    cout << "\nDisplaying all Patients...\n"<< endl;

    for (int i = 0; i < num; i++)
    {
        patients[i].displayPatient();
    }

    PediatricPatient().displayPediatricPatients(patients, num);

    delete[] patients;
    return 0;

}
