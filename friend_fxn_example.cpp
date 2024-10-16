#include <iostream>
using namespace std;

// Defining a class named 'student'
class student
{
    // Private members to store marks for physics and math
    int physics;
    int math;

public:
    // Public member function to input the marks for both subjects
    void inputMarks()
    {
        cout << "Enter the marks for Physics subject: "; // Prompt for Physics marks
        cin >> physics;                                  // Input Physics marks

        cout << "Enter the marks for Math subject: "; // Prompt for Math marks
        cin >> math;                                  // Input Math marks
    }

    // Friend function declaration - this function can access private members of the 'student' class
    friend void showDetails(student &ob);
};

// Friend function definition
void showDetails(student &ob)
{
    // Displaying the entered marks using the private members of 'student'
    cout << "\n** You entered the marks for two subjects **" << endl;
    cout << "Physics marks: " << ob.physics << endl;
    cout << "Math marks: " << ob.math << endl;

    // Calculating the average of the two subjects
    int average = (ob.physics + ob.math) / 2;
    cout << "The average marks for both subjects: " << average << endl;
}

int main()
{
    student stu;      // Creating an object of the 'student' class
    stu.inputMarks(); // Calling the inputMarks() function to take user input
    showDetails(stu); // Calling the friend function to display details and calculate average

    return 0;
}
