#include <iostream>
using namespace std;
class room
{
public:
    double length;
    double breadth;
    double height;
    double calculate_area()//function
    {
        return length * breadth;
    }
    double calculate_volume()//function
    {
        return length * breadth * height;
    }
};

int main()
{
    room room1;
    cout << "Enetr the length of room:" << endl;
    cin >> room1.length;
    cout << "Enter the breadth of room:" << endl;
    cin >> room1.breadth;
    cout << "Enter the height of room:" << endl;
    cin >> room1.height;
    cout << "Area of room=" << room1.calculate_area() << endl;//printing statements with function calling
    cout << "Volume of room=" << room1.calculate_volume() << endl;//printing statements with function calling
    return 0;
}
