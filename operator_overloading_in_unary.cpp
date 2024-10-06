#include <iostream>  // Include the iostream library for input/output operations
using namespace std;  // Use the standard namespace to avoid using "std::" before standard functions

class test  // Define a class named 'test'
{
    int a;  // Private member variable 'a' of type int

public:
    test() {}  // Default constructor (does nothing)

    test(int x)  // Parameterized constructor that takes an int argument 'x'
    {
        a = x;  // Initialize member variable 'a' with the value of 'x'
    }

    // Overload the unary minus '-' operator to negate the value of 'a'
    test operator-()  
    {
        test obj;  // Create a temporary object 'obj' of class 'test'
        obj.a = -a;  // Negate the value of 'a' and assign it to 'obj.a'
        return obj;  // Return the object 'obj' with the negated value of 'a'
    }

    // Member function to display the value of 'a'
    void show()  
    {
        cout << a << " ";  // Print the value of 'a'
    }
};

int main()
{
    test obj1(3), ob2;  // Create two objects of class 'test': obj1 initialized with 3, ob2 is default initialized
    ob2 = -obj1;  // Apply the overloaded unary minus operator to obj1, store the result in ob2

    cout << "the negated value of ob1 is:";  // Output message to indicate the result
    ob2.show();  // Call the show() function of ob2 to display the negated value of obj1 (which is stored in ob2)

    return 0;  // End of the program, return 0 indicates successful execution
}

//summary 
/*Class Definition: A simple class test with a private member a and public functions.
Constructor: The default constructor and a parameterized constructor to initialize a.
Unary Operator Overloading: The unary - operator is overloaded to negate the value of a.
Object Creation: Two objects, obj1 and ob2, are created. obj1 is initialized with 3, and ob2 is used to hold the negated result.
Function Display: The show() function is used to print the value of a for the objects.*/