#include <iostream>  // Include the iostream library for input and output operations
using namespace std;

int main() {
    int i = 1;  // Declare and initialize the variable 'i' to 1
    int n;  // Declare the variable 'n' to store the user input

    cout << "Enter the value for which you want to print the table:" << endl;  // Prompt the user to enter a number
    cin >> n;  // Read the input number from the user and store it in 'n'

    // Loop to print the multiplication table for the entered number 'n'
    while (i <= 10) {
        cout << n << " * " << i << " = " << n * i << endl;  // Print the current multiplication step
        i++;  // Increment the value of 'i' by 1
    }

    return 0;  // Return 0 to indicate that the program ended successfully
}
