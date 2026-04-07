//creating and using class attributes

#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;
    static int count;   //static data member to count the number of objects created, shared among all objects of the class, class attribute

    public:
    rectangle()
    {
        length = 0;
        breadth = 0;
        count++;
    }

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        count++;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Number of objects created till now: " << count << endl;   //accessing static data member
    }
};

int rectangle::count = 0;  
/*initializing static data member outside the class, if not initialized, it will be initialized to 0 by default,
writing this line is mandatory to allocate memory for static data member, if not written, it will give linker error as it
will not be able to find the definition of static data member.*/

int main()
{
    rectangle r1, r2(10, 5);

    cout << "Rectangle 1: " << endl;
    r1.display();
    
    cout << endl << "Rectangle 2: " << endl;
    r2.display();

    rectangle r3(7, 3);
    cout << endl << "Rectangle 3: " << endl;
    r3.display();

    return 0;
}