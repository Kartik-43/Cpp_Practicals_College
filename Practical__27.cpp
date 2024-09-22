#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class String
{
    char *str;
    int length;

public:
    String(const char *s = "")
    {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    String(const String &other)
    {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    ~String()
    {
        delete[] str;
    }

    String operator+(const String &other)
    {
        String result;
        result.length = length + other.length;
        result.str = new char[result.length + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    String &operator=(const String &other)
    {
        if (this != &other)
        {
            delete[] str;
            length = other.length;
            str = new char[length + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    bool operator<=(const String &other) const
    {
        return strcmp(str, other.str) <= 0;
    }

    void displayLength() const
    {
        cout << "Length of the string: " << length << endl;
    }

    void toLower()
    {
        for (int i = 0; i < length; i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    void toUpper()
    {
        for (int i = 0; i < length; i++)
        {
            str[i] = toupper(str[i]);
        }
    }

    void display() const
    {
        cout << str << "\n" << endl;
    }
};

int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123" << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;

    char a1[10], a2[10];
    cout << "Enter the String for String 1 ( Upto 10 characters ) - ";
    cin.getline(a1, 10);
    
    cout << "\nEnter the String for String 2 ( Upto 10 characters ) - ";
    cin.getline(a2, 10);

    String s1(a1);
    String s2(a2);

    cout << "\nString 1: ";
    s1.display();

    cout << "String 2: ";
    s2.display();

    String s3 = s1 + s2;
    cout << "\nConcatenated String :- ";
    s3.display();

    String s4 = s1;
    cout << "\nCopied String from String 1 : ";
    s4.display();

    cout << "\nChecking which string is larger !" << endl;
    if (s1 <= s2)
    {
        cout << "String 1 is less than or equal to String 2" << endl;
    }

    else
    {
        cout << "String 1 is greater than String 2" << endl;
    }

    s1.displayLength();

    cout << "\nString 1 in lowercase: ";
    s1.toLower();
    s1.display();

    cout << "\nString 1 in uppercase: ";
    s1.toUpper();
    s1.display();

    return 0;
}
