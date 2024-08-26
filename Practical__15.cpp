#include <iostream>
#include <string.h>

using namespace std;


class String
{
    char * str;

public :

    String() 
    {
        str = nullptr;
        cout << "Default Constructor is called !" << endl;
    }

    String(const char * a)
    {
        if (a) 
        {
            str = new char[strlen(a) + 1];
            strcpy(str, a);
        } 

        else 
        {
            str = nullptr;
        }

        cout << "Parameterized Constructor is called !" << endl;
    }

    String(const String &ob1)
    {
        if (ob1.str) 
        {
            str = new char[strlen(ob1.str) + 1];
            strcpy(str, ob1.str);
        } 

        else 
        {
            str = nullptr;
        }

        cout << "Copy Constructor is called !" << endl;
    }

    ~String() 
    {
        cout << "Destructor is called!\n" << endl;
        delete[] str;
    }

    void display(void)
    {
        if (str)
        {
            cout << "Value of str = " << str << "\n" << endl;
        }
        
        else
        {
            cout << "str is Null Pointer !\n" << endl;
        }
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    cout << "Using the Example given :- \n" << endl;

    String name1;
    name1.display();

    String name2 = "ABC";
    name2.display();

    String name3 = name2;
    name3.display();

    return 0;
}
