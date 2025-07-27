#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (true)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            cout << i;
            break;
        }
        else
        {
            cout << i << endl;
        }

        i++;
    }
    return 0;
}