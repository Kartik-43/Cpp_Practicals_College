#include <iostream>
#include <cmath>

using namespace std;


class Point
{
protected:
    double x;
    double y;

public:
    void readCoordinates()
    {
        cout << "Enter X coordinate : ";
        cin >> x;
        cout << "Enter Y coordinate : ";
        cin >> y;
    }

    void displayCoordinates()
    {
        cout << "\nCoordinates : (" << x << ", " << y << ")" << endl;
    }
};


class DistancePoint : public Point
{
public:
    double calculateDistance()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    void displayDistance()
    {
        double distance = calculateDistance();
        cout << "\nDistance from the origin: " << distance << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    DistancePoint point;

    point.readCoordinates();
    point.displayCoordinates();
    point.displayDistance();

    return 0;
}
