#include<iostream>  // Include the iostream header for input/output operations
using namespace std; // Use the standard namespace to avoid typing 'std::' before standard functions

class base{  // Define a class named 'base'
    public:
    int pub=1;  // Public data member (accessible outside the class)
    
    protected:
    int protect=2;  // Protected data member (accessible to derived classes but not outside the class)
    
    private:
    int priv=3;  // Private data member (only accessible within the class itself)
};

class derivedprivate:private base{  // Define a class 'derivedprivate' that privately inherits from 'base'
    public:
    void show(){  // Public member function of 'derivedprivate' to show certain members
        cout<<"pub:"<<pub<<endl;  // Accessing and printing the public member 'pub' from the base class
        cout<<"prot:"<<protect<<endl;  // Accessing and printing the protected member 'protect' from the base class
        //cout<<"priv:"<<priv<<endl;  // This line is commented because 'priv' is private and not accessible
    }
};

int main(){
    derivedprivate objpriv;  // Create an object 'objpriv' of type 'derivedprivate'
    objpriv.show();  // Call the 'show' function on the object to display values of accessible members
    return 0;  // Return 0 to indicate successful execution of the program
}
