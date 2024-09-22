#include <iostream>
#include <string>

using namespace std;


class Publication
{
protected:
    string title;
    float price;

public:
    void getData()
    {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putData()
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};


class Book : public Publication
{
private:
    int pageCount;

public:
    void getData()
    {
        Publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putData()
    {
        Publication::putData();
        cout << "Page Count: " << pageCount << " pages" << endl;
    }
};


class Tape : public Publication
{
private:
    float playingTime;

public:
    void getData()
    {
        Publication::getData();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putData()
    {
        Publication::putData();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Book book;
    Tape tape;

    cout << "Enter details for the book : " << endl;
    book.getData();

    cout << "\nEnter details for the tape : " << endl;
    tape.getData();

    cout << "\nDisplaying Book Details : " << endl;
    book.putData();

    cout << "\nDisplaying Tape Details : " << endl;
    tape.putData();

    return 0;
}
