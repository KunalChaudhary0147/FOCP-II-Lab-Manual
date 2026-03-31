/*Make a hybrid inheritance, class A with a variable a, a construstor to initialize a=110, a destructor and a display function
to show the value of a. Then hierarchy inheritance to class b and c with same things, variable b and c, constructor initializing
b=219 and c=310, destructor and display b and c. Then multiple inheritance from b and c to d with again same things, variable d,
constructor initializing d=500, destructor and display d.*/

#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    A()
    {
        cout << "Constructor of class A called" << endl;
        a = 110;
    }
    ~A()
    {
        cout << "Destructor of class A called" << endl;
    }
    void display_A()
    {
        cout << "Value of a: " << a << endl;
    }
};

class B : virtual public A     // Virtual inheritance to avoid ambiguity when both B and C inherit from A.
{
protected:
    int b;
public:
    B()
    {
        cout << "Constructor of class B called" << endl;
        b = 219;
    }
    ~B()
    {
        cout << "Destructor of class B called" << endl;
    }
    void display_B()
    {
        cout << "Value of b: " << b << endl;
    }
};

class C : virtual public A      // Virtual inheritance to avoid ambiguity when both B and C inherit from A.
{
protected:
    int c;
public:
    C()
    {
        cout << "Constructor of class C called" << endl;
        c = 310;
    }

    ~C()
    {
        cout << "Destructor of class C called" << endl;
    }

    void display_C()
    {
        cout << "Value of c: " << c << endl;
    }
};

class D : public B, public C
{
protected:
    int d;
public:
    D()
    {
        cout << "Constructor of class D called" << endl;
        d = 500;
    }
    
    ~D()
    {
        cout << "Destructor of class D called" << endl;
    }

    void display_D()
    {
        /*Specify path of display_A to avoid ambiguity */
        display_A();
        display_B();
        display_C();
        cout << "Value of d: " << d << endl;
    }
};  

int main()
{
    D a;
    // a.A::display_A();    This will cause ambiguity because both B and C inherit from A.
    a.B::display_B();
    a.C::display_C();
    a.display_D();
    return 0;
}