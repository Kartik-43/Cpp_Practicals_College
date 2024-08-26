#include <iostream>

using namespace std;


class Complex
{
    int real, img;

public :

    Complex()
    {
        real = 0;
        img = 0;
        cout << "Deafualt Constructer Used !" << endl;
    }

    Complex(int x)
    {
        real = img = x;
        cout << "\nOne Argument Constructer Used !" << endl;
    }

    Complex(int x, int y)
    {
        real = x;
        img = y;
        cout << "\nTwo Argument Constructer Used !" << endl;
    }

    void display(void)
    {
        cout << "( " << real << " + " << img << "i )" << endl;
    }

    static void sum(Complex &, Complex &);
};


void Complex :: sum(Complex & o1, Complex & o2)
{
    int sr = o1.real + o2.real;
    int si = o1.img + o2.img;

    cout << "\n\nThe sum of " << "( " << o1.real << " + " << o1.img << "i )" << " and " << "( " << o2.real << " + " << o2.img << "i )" << " is ==> " << "( " << sr << " + " << si << "i )\n\n" << endl;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Complex o1;
    cout << "Object 1 = ";
    o1.display();

    Complex o2 = 10 ;
    cout << "Object 2 = ";
    o2.display();

    Complex o3(20, 11) ;
    cout << "Object 3 = ";
    o3.display();

    Complex o4(17, 92) ;
    cout << "Object 4 = ";
    o4.display();

    Complex::sum(o3, o4);

    return 0;
}
