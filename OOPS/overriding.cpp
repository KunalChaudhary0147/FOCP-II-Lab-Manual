//overriding

#include <iostream>
using namespace std;

class shape
{
public:
    void area()
    {
        cout << "Area of shape is not defined" << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of shape is not defined" << endl;
    }

    void dimension()
    {
        cout << "Dimension of shape is not defined" << endl;
    }

    void display()
    {
        cout << "****We are 2D shapes****" << endl;
    }
};

class square : public shape
{
    int side;
public:
    square()
    {
        side = 0;
    }

    square(int s)
    {
        side = s;
    }

    void area()   //overriding area function of shape class
    {
        cout << "Area of square: " << side * side << endl;
    }

    void perimeter()  //overriding perimeter function of shape class
    {
        cout << "Perimeter of square: " << 4 * side << endl;
    }

    void dimension()  //overriding dimension function of shape class
    {
        cout << "Dimension of square: 2D" << endl;
    }
};

int main()
{
    shape s;
    square sq(5);

    cout << "Shape: " << endl;
    s.display();
    s.area();
    s.perimeter();
    s.dimension();

    cout << endl << "Square: " << endl;
    sq.display();   //inherited function, not overridden
    sq.area();      //overridden function
    sq.perimeter(); //overridden function
    sq.dimension(); //overridden function

    return 0;
}