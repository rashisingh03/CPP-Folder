#include <iostream>
using namespace std;

// Base class 'base' witsh public, private, and protected members
class base
{
public:
    int pub = 8; // Public member, accessible outside the class
private:
    int priv = 5; // Private member, not accessible outside the class
protected:
    int protect = 4; // Protected member, accessible in derived classes

    // Constructor of the 'base' class
    base()
    {
        cout << "constructor of base class" << endl;
    }

    // Destructor of the 'base' class
    ~base()
    {
        cout << "destructor of base class" << endl;
    }
};

// Second base class 'base2'
class base2
{
public:
    // Constructor of the 'base2' class
    base2()
    {
        cout << "constructor of base2 class" << endl;
    }

    // Destructor of the 'base2' class
    ~base2()
    {
        cout << "destructor of base2 class" << endl;
    }
};

// Derived class 'derivedclass' inheriting from 'base2' and 'base'
class derivedclass : public base2, public base
{
public:
    // Member function 'show' to display accessible members
    void show()
    {
        // Accessing the public member of the 'base' class
        cout << "pub: " << pub << endl;

        // Uncommenting the following line will cause an error,
        // because 'priv' is private and not accessible outside the 'base' class
        // cout << "priv: " << priv << endl;

        // Accessing the protected member of the 'base' class
        cout << "protect: " << protect << endl;
    }
};

int main()
{
    // Creating an object of 'derivedclass', which triggers constructors of both base classes
    derivedclass obj;

    // Calling the 'show' function to display public and protected members
    obj.show();

    // Accessing the public member directly through the object
    cout << "pub: " << obj.pub << endl;

    // When the program ends, destructors of both base classes are called
    return 0;
}
