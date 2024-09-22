#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imaginary;

public:
    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() const
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123" << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;

    int r1, i1, r2, i2;

    cout << "Enter the real part of first complex number : ";
    cin >> r1;
    cout << "Enter the imaginary part of first complex number : ";
    cin >> i1;

    cout << "\nEnter the real part of second complex number : ";
    cin >> r2;
    cout << "Enter the imaginary part of second complex number : ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex result = c1 + c2;

    cout << "\nComplex number 1: ";
    c1.display();

    cout << "\nComplex number 2: ";
    c2.display();

    cout << "\nSum of complex numbers: ";
    result.display();

    cout << "\n\n";

    return 0;
}
