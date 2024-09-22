#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

    int daysInMonth(int month, int year) const
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                return 29;
            else
                return 28;

        default:
            return 0;
        }
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    Date &operator++()
    {
        day++;
        if (day > daysInMonth(month, year))
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    void display() const
    {
        cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
    }
};

int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123" << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;

    Date date(28, 2, 2020);
    cout << "Original date: ";
    date.display();

    ++date;
    cout << "\nAfter increment: ";
    date.display();

    ++date;
    cout << "\nAfter another increment: ";
    date.display();
    cout << "\n\n";

    return 0;
}
