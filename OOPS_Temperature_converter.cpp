/*Scenario:
Convert Celsius to Fahrenheit.
Class Name:
Temperature
Attributes:
•	float celsius
Methods:
•	void inputTemperature()
•	float convertToFahrenheit()
•	void displayResult()
*/

#include <iostream>
using namespace std;

class Temperature
{
    float celsius;

    public:
    void inputTemperature()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    float convertToFahrenheit()
    {
        return (celsius * 9 / 5) + 32;
    }

    void displayResult()
    {
        cout << "\nTemperature in Fahrenheit: " << convertToFahrenheit() << endl;
    }
};

int main()
{
    Temperature temp;
    temp.inputTemperature();
    temp.displayResult();

    return 0;
}