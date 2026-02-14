/*read an array of marks of students and make a function result which displays max, min, avg. use built in max min avg function*/

#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

void result(int *marks, int n)
{
    int maxMarks = *max_element(marks, marks + n);
    int minMarks = *min_element(marks, marks + n);
    double avgMarks = accumulate(marks, marks + n, 0.0) / n;

    cout<<"Maximum Marks: "<<maxMarks<<endl;
    cout<<"Minimum Marks: "<<minMarks<<endl;
    cout<<"Average Marks: "<<avgMarks<<endl;
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