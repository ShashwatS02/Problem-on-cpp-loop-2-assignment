#include <iostream>
using namespace std;

int main()
{

    int sp, cp;
    cout << "SP: ";
    cin >> sp;
    cout << "CP: ";
    cin >> cp;

    if (sp > cp)
    {
        cout << "Profit: " << sp - cp;
    }

    else if (cp > sp)
    {
        cout << "Loss: " << cp - sp;
    }

    else
    {
        cout << "No change";
    }

    return 0;
}