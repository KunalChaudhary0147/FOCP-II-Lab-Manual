/*Make two functions to swap two numbers, 1 using pointers and other using reference parameters*/

#include<iostream>
using namespace std;

void swapUsingPointers(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapUsingReferences(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10 , y = 20;
    cout<<"Before swapping using pointers: x = "<<x<<" and y = "<<y<<endl;
    swapUsingPointers(&x , &y);
    cout<<"After swapping using pointers: x = "<<x<<" and y = "<<y<<endl;

    int a = 30 , b = 40;
    cout<<"Before swapping using references: a = "<<a<<" and b = "<<b<<endl;
    swapUsingReferences(a , b);
    cout<<"After swapping using references: a = "<<a<<" and b = "<<b<<endl;

    return 0 ;
}