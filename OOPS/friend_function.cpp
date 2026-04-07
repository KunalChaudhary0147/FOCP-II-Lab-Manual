//use of friend function 

#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;
public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }

    friend void area(rectangle r);   //friend function declaration
};

void area(rectangle r)   //friend function definition
{
    int a = r.length * r.breadth;
    cout << "Area of rectangle: " << a << endl;
}

int main()
{
    rectangle r1, r2(10, 5);
    cout << "Rectangle 1: " << endl;
    r1.display();
    area(r1);   //calling friend function
    cout << endl << "Rectangle 2: " << endl;
    r2.display();
    area(r2);   //calling friend function
    return 0;
}