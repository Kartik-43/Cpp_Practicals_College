#include <iostream>
#include <cstdlib>

using namespace std;

class MyClass
{
    int x;

public:
    MyClass(int val = 0) : x(val)
    {
        cout << "\nConstructor called!" << endl;
    }

    ~MyClass()
    {
        cout << "\nDestructor called!" << endl;
    }

    void *operator new(size_t size)
    {
        cout << "Custom new operator called! \nSize of class : " << size << endl;
        void *p = malloc(size);
        if (!p)
        {
            bad_alloc ba;
            throw ba;
        }
        return p;
    }

    void operator delete(void *p)
    {
        cout << "\nCustom delete operator called!\n\n" << endl;
        free(p);
    }

    void display() const
    {
        cout << "Value of x : " << x << endl;
    }
};

int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123" << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;

    MyClass *obj = new MyClass(10);

    obj->display();

    delete obj;

    return 0;
}
