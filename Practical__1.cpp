#include <iostream>

using namespace std;

class Student
{
    string name;
    int roll_no;
    float marks[5];

    public:
        void getStudentMarks(void);
        void calculateBranch(void);
};


void Student :: getStudentMarks(void)
{
    cout << "Enter the name of the student: " << endl;
    getline(cin, name);
    cout << "\nEnter the roll number of the student: " << endl;
    cin >> roll_no;
    cout << "\nEnter the marks of " << name << " :- " <<endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Subject " << i+1 << " :- ";
        cin >> marks[i];
    }
}


void Student :: calculateBranch(void)
{
    float avg = 0;
    
    for(int i = 0; i < 5; i++)
    {
        avg += marks[i];
    }
    
    avg = avg / 5;
    cout << "\n" << name <<" got " << avg << " average marks !" << "\n" << endl;

    if (avg >= 96)
    {
        cout << "\n" << name << " has been alloted Computer Science !" << "\n" << endl;
    }

    else if (avg < 96 && avg >= 91)
    {
        cout << "\n" << name << " has been alloted Electronics !" << "\n" << endl;
    }

    else if (avg > 85 && avg <= 90)
    {
        cout << "\n" << name << " has been alloted Mechanical !" << "\n" << endl;
    }
    
    else if (avg > 80 && avg <= 85)
    {
        cout << "\n" << name << " has been alloted Electrical !" << "\n" << endl;
    }

    else if (avg > 75 && avg <= 80)
    {
        cout << "\n" << name << " has been alloted Chemical !" << "\n" << endl;
    }
    
    else if (avg > 70 && avg <= 75)
    {
        cout << "\n" << name << " has been alloted Civil" << "\n" << endl;
    }

    else
    {
        cout << "\n" << "No stream alloted !\n" << endl;
    }
    
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Student S1;
    S1.getStudentMarks();
    S1.calculateBranch();

    return 0;
}
