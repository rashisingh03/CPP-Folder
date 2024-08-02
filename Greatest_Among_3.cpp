#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter all three numbers:  "; // It shows as an output

    cin >> a >> b >> c; // In this line u have to enter 3 digit

    if (a == b && a == c)
    {
        cout << "All are equal : " << a << endl; // if a is greatest among all then this statement will print
    }else if(a==b && (a>c)){
        cout<<"A and B both are equal: "<<a<<"  "<<b<<endl;
    }
    else if (c==b && c>a)
    {
        cout<<"B and C both are equal: "<<b<<"  "<<c<<endl;
    }
    else if(c==a && c>b){
        cout<<"A and C both are equal: "<<a<<"  "<<c<<endl;
    }
    else 
    {
        if (a > b && a > c) // this is if part of if-else statement
        {
            cout << "a is greater: " << a << endl; // if a is greatest among all then this statement will print
        }
        else if (b > a && b > c) // this is if part of if-else statement
        {
            cout << "b is greater: " << b << endl; // if b is greatest among all then this statement will print
        }

        else // this is if part of if-else statement
        {
            cout << "c is greater: " << c << endl; // if c is greatest among all then this statement will print
        }
    }

    return 0;
}
