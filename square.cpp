#include <iostream>
using namespace std;

int main()
{

    int length, breadth;
    cout << "Length: ";
    cin >> length;
    cout << "Breadth: ";
    cin >> breadth;

    if (length == breadth)
    {
        cout << "It is a square";
    }

    else
    {
        cout << "It is a rectangle";
    }

    return 0;
}