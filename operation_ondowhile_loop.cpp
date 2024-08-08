

#include <iostream> //Include the iostream library for input and output operations
using namespace std;
int main()
{
    int n, i = 1;                                                             // Declare and initialize the variable 'i' to 1
    cout << "Enter the value for which you want to print the table:" << endl; // Prompt the user to enter a number
    cin >> n;
    do
    {
        cout << n << " * " << i << " = " << n * i << endl; // Print the current multiplication step
        i++;                                               // increment of value i by 1
    } while (i <= 10); // conditiont
    return 0;
}
