/*Scenario:
Store and display student details along with total marks.
Class Name:
Student
Attributes:
•	int rollNo
•	string name
•	int marks1
•	int marks2
•	int marks3
Methods:
•	void inputDetails()
•	int calculateTotal()
•	void displayDetails()
*/
#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int marks1, marks2, marks3;

    public:
    void inputDetails()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
    }

    int calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

    void displayDetails()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks 1: " << marks1 << endl << "Marks 2: " << marks2 << endl << "Marks 3: " << marks3 << endl << endl <<"Total Marks: " << calculateTotal() << endl;
    }
};

int main ()
{
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
}