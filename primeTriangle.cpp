#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines for the triangle: ";
    cin >> n;

    int currentNum = 2; // Start checking for primes from 2

    for (int i = 1; i <= n; i++) // Outer loop for each row
    {
        // Print leading spaces for center alignment
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print primes for the current row
        int primesInLine = 0;
        while (primesInLine < i) // Print exactly 'i' primes in the current row
        {
            bool isPrime = true;
            for (int k = 2; k * k <= currentNum; k++) // Check if currentNum is prime
            {
                if (currentNum % k == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cout << currentNum << " ";
                primesInLine++;
            }
            currentNum++;
        }
        cout << endl;
    }

    return 0;
}
