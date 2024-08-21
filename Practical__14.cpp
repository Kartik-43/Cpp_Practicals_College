#include <iostream>

using namespace std;


class Student
{
    int rollNo;
    string name;
    string class_st;
    double marks[5];
    double percentage;

    void calculate(void)
    {
        double total;

        for ( int i = 0 ; i < 5 ; i++ )
        {
            total += marks[i];
        }

        percentage = ( total / 500) * 100;
    }

public:
    Student()
    {
        cout << "Enter Student Details :- " << endl;
        cout << "\nEnter Roll No. :- " << endl;
        cin >> rollNo;

        cout << "\nEnter Name :- " << endl;
        cin.ignore();
        getline(cin, name);

        cout << "\nEnter Class :- " << endl;
        getline(cin, class_st);
    }

    void readMarks(void)
    {
        cout << "\n" << endl;
        for ( int i = 0 ; i < 5 ; i++ )
        {
            cout << "Enter marks for subject " << i+1 << "( out of 100 ) :-  " << endl;
            cin >> marks[i];
        }

        calculate();
    }

    void displayData(void)
    {
        cout << "\n\nThe Data of Roll Number " << rollNo << " is :- " << endl;
        cout << "\nName :- " << name << endl;
        cout << "Class :- " << class_st << endl;
        cout << "Roll Number :- " << rollNo << endl;
        cout << "Percentage :- " << percentage << "\n" << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Student S1;
    S1.readMarks();
    S1.displayData();

    return 0;
}
