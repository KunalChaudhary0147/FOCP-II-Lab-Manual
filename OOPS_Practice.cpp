/*Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a class Candy with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().*/

#include <iostream>
using namespace std;

class Candy
{
    string color;
    int points;

    public:
    void setCandy(string c, int p)
    {
        color = c;
        points = p;
    }

    void displayCandy()
    {
        cout << "Candy Color: " << color << endl;
        cout << "Points: " << points << endl;
    }
};

int main()
{
    Candy candy1, candy2;

    candy1.setCandy("Red", 10);
    candy2.setCandy("Green", 20);

    cout << "Candy 1 Details:" << endl;
    candy1.displayCandy();

    cout << "\nCandy 2 Details:" << endl;
    candy2.displayCandy();

    return 0;
}