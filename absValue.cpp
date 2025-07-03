#include <iostream>
using namespace std;

int main()
{

    int val;
    cout << "Val: ";
    cin >> val;

    if (val < 0)
    {
        cout << (val * -1);
    }

    else
    {
        cout << val;
    }

    return 0;
}