#include <iostream>
using namespace std;

class shape
{
    public:
    shape()
    {
        cout << "shape default const called" << endl;
    }

    virtual void area()
    {
        cout << "no dim no area" << endl;
    }

    void display()
    {
        cout << "we are 2D shapes" << endl;
    }
};

class rectangle : public shape
{
    int length, breadth;
    public:
    rectangle(int l=5, int w=10): length(l), breadth(w)
    {
        cout << "rectangle obj created" << endl;
    }

    void area()
    {
        cout << "area of rectangle: " << length * breadth << endl;
    }
};

int main()
{
    shape *s1, s2;
    rectangle r2(50, 45);

    s1=&s2;
    s1->area();

    s1=&r2;
    s1->area();

    s2=r2;
    s2.area();
}