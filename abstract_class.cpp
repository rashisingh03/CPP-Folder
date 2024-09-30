#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    int length, breadth;  // Variables to store dimensions of a rectangle

    // Pure virtual function (abstract method)
    // This makes the class abstract, meaning objects of this class cannot be created
    virtual void showArea() = 0;

    // Function to calculate and show the area of a rectangle
    // Uses length and breadth to compute area
    void show() {
        int sum = length * breadth;  // Area of the rectangle = length * breadth
        cout << "The area of the rectangle is: " << sum << endl;
    }

    // Function to take input for length and breadth from the user
    void input() {
        cout << "Enter the length: ";
        cin >> length;  // Take input for length
        cout << "Enter the breadth: ";
        cin >> breadth;  // Take input for breadth
    }
};

// Circle class inheriting from Shape
// This class will implement the pure virtual function 'showArea'
class Circle : public Shape {
private:
    int radius;  // Variable to store radius of the circle
    const float pi;  // Constant value of pi, set to 3.14

public:
    // Constructor to initialize radius and pi
    // 'radius' is initialized from the argument, 'pi' is set to 3.14
    Circle(int r) : radius(r), pi(3.14) {}

    // Override the pure virtual function 'showArea' from the Shape class
    // This calculates and displays the area of the circle using the formula pi * r^2
    void showArea() override {
        cout << "The area of the circle is: " << pi * radius * radius << endl;
    }

    // Function to take input for the radius from the user
    void data() {
        cout << "Enter the radius: ";
        cin >> radius;  // Take input for radius
        cout << "The radius entered is: " << radius << endl;
    }
};

int main() {
    // Create a Circle object, initializing the radius to 0 initially
    Circle obj(0);

    // Call the 'data' function to input the radius for the circle
    obj.data();

    // Display the area of the circle using the overridden 'showArea' method
    obj.showArea();

    // Input length and breadth for the rectangle (inherited from Shape)
    obj.input();

    // Display the area of the rectangle using the inherited 'show' function
    obj.show();

    return 0;
}
