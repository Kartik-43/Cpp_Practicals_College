#include <iostream>

using namespace std;


class Date
{
    int day, month, year;

public :

    void setDate(int d, int m, int y) 
    {
        if (d > 31 || m > 12)
        {
            cout << "Enter Correct input !" << endl;
        }
        else
        {
            day = d;
            month = m;
            year = y;
        }
    }

    void displayDate(void);
    void subDay(int dy);
    int subDate(Date);
    int totalDays(int d, int m, int y);
    bool leapYear(int y);
    int daysinMonth(int m, int y);
};


void Date :: displayDate(void)
{
    cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
}


void Date :: subDay(int dy)
{
    while (dy > 0) 
    {
            if (day > dy) 
            {
                day -= dy;
                dy = 0;
            } 

            else 
            {
                dy -= day;
                
                if (month == 1) 
                {
                    month = 12;
                    year--;
                } 

                else 
                {
                    month--;
                }

                day = daysinMonth(month, year);
            }
        }
}


int Date :: subDate(Date other) 
{
        int totalDays1 = totalDays(day, month, year);
        int totalDays2 = totalDays(other.day, other.month, other.year);
        return totalDays1 - totalDays2;
}


int Date :: totalDays(int d, int m, int y) 
{
    int totalDays = d;

    for (int i = 1; i < y; i++) 
    {
        totalDays += (leapYear(i) ? 366 : 365);
    }

    for (int i = 1; i < m; i++) 
    {
        totalDays += daysinMonth(i, y);
    }

    return totalDays;
}


bool Date :: leapYear(int y) 
{
    return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}


int Date :: daysinMonth(int m, int y)
{
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }

    if (m == 2) 
    {
        return (leapYear(y) ? 29 : 28);
    }

    return 31;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    int m1, y1, d1, m2, y2, d2, dy;

    Date date1, date2;

    cout << "Enter the Day for date 1 :- ";
    cin >> d1;

    cout << "Enter the Month for date 1 :- ";
    cin >> m1;
    
    cout << "Enter the Year for date 1 :- ";
    cin >> y1;    
    
    cout << "\nEnter the Day for date 2 :- ";
    cin >> d2;

    cout << "Enter the Month for date 2 :- ";
    cin >> m2;
    
    cout << "Enter the Year for date 2 :- ";
    cin >> y2;

    date1.setDate(d1, m1, y1);
    date2.setDate(d2, m2, y2);

    cout << "\nOriginal Date 1: ";
    date1.displayDate();

    cout << "\nOriginal Date 2: ";
    date2.displayDate();

    cout << "\nHow many days do you want to subtract from Date-1 :- ";
    cin >> dy;

    cout << "\nDate-1 after subtracting " << dy << " days : ";
    date1.subDay(dy);
    date1.displayDate();

    int difference = date1.subDate(date2);
    cout << "\nSubtracting Date-1 and Date-2..." << endl;
    cout << "\nDifference between Date-1 and Date-2: " << difference << " days\n\n" << endl;

    return 0;
}
