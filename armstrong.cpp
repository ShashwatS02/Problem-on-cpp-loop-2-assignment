#include <iostream>

using namespace std;

int main()
{
    cout << "Armstrong numbers between 100 and 500 are:" << endl;

    for (int i = 100; i <= 500; i++)
    {
        int num = i;
        int sum = 0;

        int firstDigit = num % 10;
        num /= 10;
        int secondDigit = num % 10;
        num /= 10;
        int thirdDigit = num % 10;

        sum = (firstDigit * firstDigit * firstDigit) + (secondDigit * secondDigit * secondDigit) + (thirdDigit * thirdDigit * thirdDigit);

        if (i == sum)
        {
            cout << i << " ";
        }
    }

    return 0;
}
