#include <iostream>

using namespace std;


inline int maxOfThree(int a, int b, int c)
{
    return ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}


#define MAX_OF_THREE(a, b, c) ((a > b) ? ((a > c) ? (a) : (c)) : ((b > c) ? (b) : (c)))


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    int a, b, c;

    cout << "\nEnter the Value of first number :-  " << endl;
    cin >> a;    
    
    cout << "Enter the Value of second number :-  " << endl;
    cin >> b;    
    
    cout << "Enter the Value of third number :-  " << endl;
    cin >> c;

    cout << "The Largest of the three entered number " << a << " , " << b << " , " << c << " is  :-  " << endl;
    cout <<"\nBy using INLINE FUNCTION :-   " << maxOfThree(a, b, c) << endl;
    cout <<"By using MACRO DEFINITION :-   " << MAX_OF_THREE(a, b, c) << endl;

    return 0;
}
