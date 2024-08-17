#include <iostream>

using namespace std;


class Entry
{
    static int count;

public:
    static void entryCount(void);
    static void totalEntry(void);
};


int Entry :: count = 0;


void Entry :: entryCount(void)
{
    count++;
    cout << count <<" Entry Registered !\n" << endl;
}


void Entry :: totalEntry(void)
{
    cout << "\nTotal number of people entered in the Stadium are : " << count << "\n\n" << endl;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Entry P1, P2, P3, P4, P5;

    P1.entryCount();
    P2.entryCount();
    P3.entryCount();
    P4.entryCount();
    P5.entryCount();
    Entry :: totalEntry();

    return 0;
}
