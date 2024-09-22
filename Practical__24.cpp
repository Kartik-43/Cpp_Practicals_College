#include <iostream>
#include <cmath> // For sqrt() function
using namespace std;


class Shape
{
public:

    double area(double a, double b, double c)
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double area(double length, double width)
    {
        return length * width;
    }

    double area(int side)
    {
        return side * side;
    }

    double area(float radius)
    {
        return 3.14159 * radius * radius;
    }
};


int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123" << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;
    
    Shape shape;
    double a = 3, b = 4, c = 5;
    
    cout << "Area of triangle with sides " << a << ", " << b << ", " << c << " is : " << shape.area(a, b, c) << endl;
    
    double length = 5, width = 6;
    cout << "\nArea of rectangle with length " << length << " and width " << width << " is: "<< shape.area(length, width) << endl;
    
    int side = 4;
    cout << "\nArea of square with side " << side << " is: " << shape.area(side) << endl;
    
    float radius = 3.5;
    cout << "\nArea of circle with radius " << radius << " is: " << shape.area(radius) << "\n\n" << endl;

    return 0;
}
