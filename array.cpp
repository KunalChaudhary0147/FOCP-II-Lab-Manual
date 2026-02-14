/*read an array of marks of students and make a function result which displays max, min, avg. dont use built in max min avg function*/

#include<iostream>
#include<numeric>
using namespace std;

void result(int *marks, int n)
{
    int max = marks[0];
    int min = marks[0];
    for(int i = 1; i < n; i++)
    {
        if(marks[i] > max)
            max = marks[i];
        if(marks[i] < min)
            min = marks[i];
    }
    float avg = accumulate(marks, marks + n, 0) / (float)n;
    cout<<"Max marks: "<<max<<endl;
    cout<<"Min marks: "<<min<<endl;
    cout<<"Average marks: "<<avg<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int *marks = new int[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks[i];
    }
    result(marks, n);
}