/*Implement a modular C++ solution that reads marks for 10 subjects into an array in main()
and delegates the computation of average, minimum, and maximum scores to a separate method computePerformance().*/

#include<iostream>
#include<numeric>
using namespace std;

void computePerformance(int *marks, int n)
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
    float avg = accumulate(marks, marks + n, 0.0) / (float)n;
    cout<<"Max marks: "<<max<<endl;
    cout<<"Min marks: "<<min<<endl;
    cout<<"Average marks: "<<avg<<endl;
}

int main()
{
    const int n = 10;
    int marks[n];

    for(int i = 0; i < n; i++)
    {
        cout<<"Enter marks of subject "<<i+1<<": ";
        cin>>marks[i];
    }
    computePerformance(marks, n);
}