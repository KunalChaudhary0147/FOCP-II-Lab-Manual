/*Create a class Student with data members: name and marks.
Use a constructor to initialize the values and display the student details using a member function.*/

#include <iostream>
using namespace std;

class A
{
    int a1, a2, a3;

    public:
    A()
    {
        a1=0;
        a2=0;
        a3=0;
    }

    A(int a1, int a2, int a3)
    {
        this->a1 = a1; // Using 'this' operator to differentiate between object variables and parameters
        (*this).a2 = a2; // Another way to use 'this' operator
        a3=a3;
    }

    void display()
    {
        cout<<"a1: "<<a1<<endl;
        cout<<"a2: "<<a2<<endl;
        cout<<"a3: "<<a3<<endl;
    }
};

int main()
{
    A obj1;
    A obj2(10, 20, 30);

    cout<<"Object 1 details: "<<endl;
    obj1.display();

    cout<<"\nObject 2 details: "<<endl;
    obj2.display();

    return 0;
}