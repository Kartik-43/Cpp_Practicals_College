#include <iostream>
#include <cmath>

using namespace std;


class Travel
{
private:
    int numPassengers;
    int busCapacity;

public:
    void getDetails(void);
    int calculateBuses(void);
    void displayDetails(void);
};


void Travel :: getDetails(void)
{
    cout << "Enter the number of passengers: " << endl;
    cin >> numPassengers;

    cout << "\nEnter the seating capacity of one bus: " << endl;
    cin >> busCapacity;
}


int Travel :: calculateBuses(void)
{
    return ceil(static_cast<float>(numPassengers) / busCapacity);
}


void Travel :: displayDetails(void)
{
    int numBuses = calculateBuses();

    cout << "\nNumber of passengers: " << numPassengers << endl;
    cout << "Seating capacity of one bus: " << busCapacity << endl;
    cout << "\nNumber of buses required: " << numBuses << endl;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Travel trip;

    trip.getDetails();
    trip.displayDetails();

    return 0;
}
