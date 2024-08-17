#include<iostream> // Include the standard input-output stream library
using namespace std; // Use the standard namespace

int main() {
    int a[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array of 5 elements
    int beg = 0, end = 4, f = 0, mid, item; // Initialize variables for the binary search

    cout << "Enter the element you want to search: " << endl; // Ask the user to input the item to search
    cin >> item; // Read the item input by the user

    while (beg <= end) { // Loop as long as the beginning index is less than or equal to the end index
        mid = (beg +end) / 2; // Calculate the middle index of the current search range

        if (a[mid] == item) { // If the middle element is equal to the item being searched
            f = 1; // Set the flag to 1 indicating the item is found
            break; // Exit the loop since the item is found
        }
        else if (a[mid] < item) { // If the middle element is less than the item being searched
            beg = mid + 1; // Move the beginning index to the right of mid (search in the right half)
        }
        else { // If the middle element is greater than the item being searched
            end = mid - 1; // Move the end index to the left of mid (search in the left half)
        }
    }

    if (f == 1) { // After the loop, check if the item was found (flag is set to 1)
        cout << "Item found at index: " << mid << endl; // Print the index where the item was found
    } else { // If the flag is still 0, it means the item was not found
        cout << "Item not present in the array." << endl; // Print that the item is not present
    }

    return 0; // Return 0 to indicate that the program ended successfully
}
