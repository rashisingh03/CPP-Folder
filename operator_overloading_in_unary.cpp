#include <iostream>
using namespace std;
class test
{
    int a;

public:
    test() {}
    test(int x)
    {
        a = x;
    }
    test operator-()
    {
        test obj;
        obj.a = -a;
        return obj;
    }
    void show()
    {
        cout << a << " ";
    }
};
int main()
{
    test obj1(3), ob2;
    ob2 = -obj1;
    cout << "the negated value of ob1 is:";
    ob2.show();
    return 0;
}
//summary 
/*Class Definition: A simple class test with a private member a and public functions.
Constructor: The default constructor and a parameterized constructor to initialize a.
Unary Operator Overloading: The unary - operator is overloaded to negate the value of a.
Object Creation: Two objects, obj1 and ob2, are created. obj1 is initialized with 3, and ob2 is used to hold the negated result.
Function Display: The show() function is used to print the value of a for the objects.*/