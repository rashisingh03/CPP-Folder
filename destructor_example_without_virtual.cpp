#include <iostream>  // Include the iostream library for input/output operations
using namespace std;  // Use the standard namespace to avoid using "std::" before standard functions

// Base class definition
class base {
public:
    // Destructor for the base class
    ~base() {
        cout << "base destructor called";  // Print message indicating base destructor was called
    }
};

// Derived class definition that inherits from base
class derived : public base {
public:
    // Destructor for the derived class
    ~derived() {
        cout << "derived class destructor called";  // Print message indicating derived destructor was called
    }
};

int main() {
    base *ptr = new derived;  // Create a derived object and assign it to a base class pointer
    delete ptr;  // Delete the object pointed to by ptr (base class pointer)
    return 0;  // Return 0 to indicate successful execution of the program
}
