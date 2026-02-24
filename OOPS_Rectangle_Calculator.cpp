/*Scenario:
Calculate area and perimeter of a rectangle.
Class Name:
Rectangle
Attributes:
•	float length
•	float width
Methods:
•	void inputDimensions()
•	float calculateArea()
•	float calculatePerimeter()
•	void displayResult()
*/

#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

    public:
    void inputDimensions()
    {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }

    float calculateArea()
    {
        return length * width;
    }

    float calculatePerimeter()
    {
        return 2 * (length + width);
    }

    void displayResult()
    {
        cout << "\nArea of the rectangle: " << calculateArea() << endl;
        cout << "Perimeter of the rectangle: " << calculatePerimeter() << endl;
    }
};

int main ()
{
    Rectangle r;
    r.inputDimensions();
    r.displayResult();

    return 0;
}