/*Scenario:
Store employee details and calculate annual salary.
Class Name:
Employee
Attributes:
•	int empId
•	string name
•	double monthlySalary
Methods:
•	void inputDetails()
•	double calculateAnnualSalary()
•	void displayDetails()
*/

#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string name;
    double monthlySalary;

    public:
    void inputDetails()
    {
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter monthly salary: ";
        cin >> monthlySalary;
    }

    double calculateAnnualSalary()
    {
        return monthlySalary * 12;
    }

    void displayDetails()
    {
        cout << "\nEmployee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Monthly Salary: $" << monthlySalary << endl;
        cout << "Annual Salary: $" << calculateAnnualSalary() << endl;
    }
};

int main ()
{
    Employee e1;
    e1.inputDetails();
    e1.displayDetails();

    return 0;
}