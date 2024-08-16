#include <iostream>

using namespace std;

int value = 100;


class Demo
{
private:
    int value;

public:
    void setValue(int val);
    void showValues();
};


void Demo :: setValue(int val)
{
    value = val;
}


void Demo :: showValues()
{
    cout << "\nClass member 'value' :- " << value << endl;
    cout << "\nGlobal 'value' :- " << ::value << endl;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Demo obj;

    int value = 50;

    cout << "Local 'value' in main() :- " << value << endl;

    obj.setValue(200);
    obj.showValues();

    return 0;
}
