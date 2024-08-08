
#include <iostream>  // Includes the input-output stream library, which allows the use of cin and cout
using namespace std; // This allows us to use standard functions like cin and cout without prefixing them with "std::"

// Function to perform linear search
int linearsearch(int arr[], int n, int key)
{
    // Loop through the array from index 0 to n-1
    for (int i = 0; i < n; i++)
    {
        // Check if the current element is equal to the key
        if (arr[i] == key)
        {
            return i; // If found, return the index of the key
        }
    }
    return -1; // If the key is not found, return -1
}

int main()
{
    int n;                                                 // Variable to store the number of elements in the array
    cout << "Enter the number of elements in the array: "; // Prompt the user to enter the number of elements
    cin >> n;                                              // Read the number of elements from the user

    int arr[n]; // Declare an array of size n
    for (int i = 0; i < n; i++)
    {                                              // Loop to take n elements as input
        cout << "Enter element " << i + 1 << ": "; // Prompt the user to enter each element
        cin >> arr[i];                             // Read the element and store it in the array
    }

    int key;                                     // Variable to store the element to search for
    cout << "Enter the element to search for: "; // Prompt the user to enter the element they want to search for
    cin >> key;                                  // Read the search element from the user

    int result = linearsearch(arr, n, key); // Call the linearsearch function and store the result (index or -1)
    if (result != -1)
    {                                                         // Check if the key was found (i.e., result is not -1)
        cout << "Element found at index: " << result << endl; // Print the index where the element was found
    }
    else
    {                                                      // If the key was not found (i.e., result is -1)
        cout << "Element not found in the array." << endl; // Print a message indicating that the element was not found
    }

    return 0; // Return 0 to indicate successful completion of the program
}
