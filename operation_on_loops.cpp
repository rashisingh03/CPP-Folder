#include <iostream>  //header file
using namespace std; // Use the standard namespace for cout, cin, etc.

int main()
{ // start of the main function
    int n;
    cout << "Enter the number upto which you want to print the counting:" << endl; // printing statement
    cin >> n;                                                          // input value n from the user
    for (int i = 1; i <= n; i++)                                      // using for loop
    {
        cout << i << endl;
    }
    return 0;
}

