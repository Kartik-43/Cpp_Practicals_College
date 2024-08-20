#include <iostream>

using namespace std;


class Serial
{
    int serialCode;
    string title;
    float duration;
    int noOfEpisodes;

public :
    Serial()
    {
        duration = 30;
        noOfEpisodes = 10;
    }

    void newSerial(void)
    {
        cout << "Enter the value of Serial Code :- ";
        cin >> serialCode;

        cout << "Enter the value of Serial Title :- ";
        cin.ignore();
        getline(cin, title);
    }

    void otherEntries(float dur, int noe)
    {
        duration = dur;
        noOfEpisodes = noe;
    }

    void dispData(void)
    {
        cout << "\nInformation for " << title << " Serial :- " << endl;
        cout << "\nName :- " << title << endl;
        cout << "\nSerial Code :- " << serialCode << endl;
        cout << "\nDuration :- " << duration << " minutes" << endl;
        cout << "\nNumber of Episodes :- " << noOfEpisodes<< "\n\n" << endl;
    }
};


int main()
{
    float dur;
    int noe;
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Serial S1, S2;

    S1.newSerial();
    S1.dispData();

    S2.newSerial();
    cout << "Enter the Duration and Number of Episodes in this series :- " << endl;
    cin >> dur >> noe;
    S2.otherEntries(dur, noe);
    S2.dispData();

    return 0;
}
