#include <iostream>
#include <string>

using namespace std;


class Student
{
protected:
    string name;
    int rollNo;

public:
    void setStudentDetails()
    {
        cout << "Enter student's name: ";
        getline(cin, name);

        cout << "Enter student's roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};


class Exam : public Student
{
protected:
    int marks[5];

public:
    void setMarks()
    {
        cout << "\nEnter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " : ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "\nMarks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};


class Result : public Exam
{
    int totalMarks;

public:
    void calculateTotal()
    {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
    }

    void displayResult()
    {
        cout << "\nDisplaying Student's Data :- " << endl;
        calculateTotal();
        displayStudentDetails();
        displayMarks();
        cout << "===> Total Marks : " << totalMarks << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Result studentResult;

    studentResult.setStudentDetails();
    studentResult.setMarks();
    studentResult.displayResult();

    return 0;
}
