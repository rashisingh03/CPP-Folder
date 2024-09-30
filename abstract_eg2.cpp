#include <iostream>
using namespace std;

// Abstract class Shape
class shape
{
public:
    // Pure virtual function, making this class abstract
    virtual void draw() = 0; // Derived classes must implement this function

    // Non-virtual function to display information about the shape
    void info()
    {
        cout << "This is a shape" << endl; // Display a generic message
    }
};

// Class Circle that inherits from Shape
class circle : public shape
{
public:
    // Override the pure virtual function from the base class
    void draw() override
    {
        cout << "Drawing a circle" << endl; // Display a message specific to circles
    }
};

int main()
{
    circle obj; // Create an instance of the Circle class

    obj.draw(); // Call the draw() method to draw the circle

    obj.info(); // Call the info() method to display the shape information

    return 0; // Indicate that the program ended successfully
}
