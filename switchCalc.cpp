#include <iostream>
using namespace std;

int main()
{

    float a, b;
    char op;
    cout << "Enter an operator: ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;

    default:
        break;
    }

    return 0;
}