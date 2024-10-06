#include <iostream>
using namespace std;

class test
{
    int x; // Private member variable to store an integer value

public:
    // Default constructor: Initializes an object but does not assign any value to 'x'
    test()
    {
    }

    // Parameterized constructor: Initializes 'x' with the value of 'a' when an object is created
    test(int a)
    {
        x = a;
    }

    // Operator overloading for the '+' operator
    // This allows the use of the '+' operator to add two 'test' objects
    test operator+(test &obj1)
    {
        test obj3;           // Create a temporary object to store the result
        obj3.x = x + obj1.x; // Add the 'x' values of the current object and 'obj1'
        return obj3;         // Return the resulting object
    }

    // Method to display the value of 'x'
    void show()
    {
        cout << x << " " << endl;
    }
};

int main()
{
    // Creating three 'test' objects: 'obj1' and 'obj2' initialized with values 5 and 3, respectively
    test obj1(5), obj2(3), obj4;

    // Using the overloaded '+' operator to add 'obj1' and 'obj2'
    obj4 = obj1 + obj2;

    // Display the result
    cout << "sum is:";
    obj4.show(); // Calls the 'show()' function to print the value of 'x' in 'obj4'
}
