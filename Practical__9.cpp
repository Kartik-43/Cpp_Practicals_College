#include <iostream>

using namespace std;

class C2;

class C1
{
    int num1;

public:

    void setNum1(int x) 
    {
        num1 = x;
    }

    friend void :: greater(C1, C2);
};


class C2
{
    int num2;

public:

    void setNum2(int x) 
    {
        num2 = x;
    }

    friend void :: greater(C1, C2);
};


void greater(C1 a, C2 b)
{
    if (a.num1 > b.num2)
    {
        cout << "\nnum1 is greater than num2\n\n" << endl;
    }

    else if (a.num1 < b.num2)
    {
        cout << "\nnum2 is greater than num1\n\n" << endl;
    }

    else
    {
        cout << "\nnum1 & num2 Both are EQUAL\n\n" << endl;
    }
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    int a, b;
    C1 obj1;
    C2 obj2;

    cout << "Enter first number :- " << endl;
    cin >> a;

    cout << "Enter second number :- " << endl;
    cin >> b;

    obj1.setNum1(a);
    obj2.setNum2(b);

    ::greater(obj1, obj2);

    return 0;
}
