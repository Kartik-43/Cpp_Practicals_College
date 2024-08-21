#include <iostream>

using namespace std;


struct name
{
    char first[40];
    char mid[40];
    char last[60];
};


struct phone
{
    char area[5];
    char exch[5];
    char numb[7];
};


class P_rec;

class Name
{
    name u_name;

public :
    friend class P_rec;
    Name()
    {
        cout << "Enter your first name : " << endl;
        cin.getline(u_name.first, 40);

        cout << "\nEnter you middle name (Leave empty if None) : " << endl;
        cin.getline(u_name.mid, 40);

        cout << "\nEnter your last name : " << endl;
        cin.getline(u_name.last, 60);
    }

    void display(P_rec);
};


class P_rec
{
    phone u_phone;

public :
    friend class Name;

    P_rec()
    {
        cout << "\n\nEnter your Area Code : " << endl;
        cin.getline(u_phone.area, 5);

        cout << "\nEnter the Phone EXCH Number : " << endl;
        cin.getline(u_phone.exch, 5);

        cout << "\nEnter your Phone number ( 6 digits ): " << endl;
        cin.getline(u_phone.numb, 7);
    }

    friend void Name :: display(P_rec);
};


void Name :: display(P_rec p)
{
    cout << "\n\nThe name you entered is : " << u_name.first << " " << u_name.mid << " " << u_name.last << endl;
    cout << "\nThe Phone details you entered are : " << p.u_phone.area << " " << p.u_phone.exch << " " << p.u_phone.numb << "\n\n" << endl;
}


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Name N1;
    P_rec P1;
    
    N1.display(P1);

    return 0;
}
