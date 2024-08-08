

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter the num you want to print:" << endl;
    cin >> n;
    do
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
