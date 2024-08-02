 #include <iostream>
using namespace std;
int main()
{
    double first, second;
    char op;
    cout << "enter the numbers: ";
    cin >> first >> second;
    cout << "+, -, *, /:";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "the addition of two digits are: " << first+ second << endl;
        break;

    case '-':
        cout << "the subtraction of two digits are: " << first - second << endl;
        break;
    case '*':
        cout << "the multiplication of two digits are: " << first*second << endl;
        break;
    case '/':
        cout << "the multiplication of two digits are: " << first/ second << endl;
        break;
    
    default:
    cout<<"invalid operator";
    break;
}

    return 0;
    }
