#include<iostream>
using namespace std;

class base {
    public:
        int pub = 9;     // Public member
    private:
        int priv = 6;    // Private member
    protected:
        int protect = 2; // Protected member

    // Constructor for base class
    base() {
        cout << "Constructor of base class" << endl;
    }
    ~base(){
        cout<<"destructor of base class"<<endl;//estructor of base class
    }
};

class derivedprotect : protected base {
    public:
        // Method to display values
        void show() {
            cout << "pub: " << pub << endl;
            // Can't access private member 'priv'
            // cout << "priv: " << priv << endl; // This will cause an error
            cout << "protect: " << protect << endl;
        }

        // Constructor for derived class
        derivedprotect() {
            cout << "Constructor of derived class" << endl;
        }
        ~derivedprotect(){
        cout<<"destructor of base class"<<endl;//destructor of derived class
        }
};

int main() {
    // Create object of derived class
    derivedprotect obj;
    obj.show();  // Call the show function
    return 0;
}
