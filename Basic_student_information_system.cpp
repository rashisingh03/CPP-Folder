#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
// Define a class called Student

class student
{
public:
    string name;
    int age;
    int rollno;
    // Method to display student information

    void displayinfo()
    { // function defination
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "rollno:" << rollno << endl;
    }
};
int main()
{
    // Create an object of the Student class

    student student;
    // Take user input for student information

    cout << "enter student name:";
    cin >> student.name;
    cout << "enter the age of student:";
    cin >> student.age;
    cout << "enter the roll no of student:";
    cin >> student.rollno;
    void displayinfo(); // calling of function
    cout << "\n student information:" << endl;
    cout << "enter student name:" << student.name << endl;
    cout << "age of student:" << student.age << endl;
    cout << "the roll no of student:" << student.rollno << endl;

    return 0;
}