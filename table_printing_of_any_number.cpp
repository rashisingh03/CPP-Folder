#include <iostream>  //header file
using namespace std; // Use the standard namespace for cout, cin, etc.

int main()
{ // start of the main function
    int n;
    cout << "Enter the number whose table you want to print:" << endl; // printing statement
    cin >> n;                                                          // input value n from the user
    for (int i = 1; i <= 10; i++)                                      // using for loop
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}