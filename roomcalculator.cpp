#include <iostream>
using namespace std;
class room
{
public:
    double length;
    double breadth;
    double height;
    double calculate_area()
    {
        return length * breadth;
    }
    double calculate_volume()
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
    cout << "Area of room=" << room1.calculate_area() << endl;
    cout << "Volume of room=" << room1.calculate_volume() << endl;
    return 0;
}