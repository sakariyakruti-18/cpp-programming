#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a non-negative integer (0-20): ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "Please enter a number between 0 and 20." << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}

/*Enter a non-negative integer (0-20): -8
Please enter a number between 0 and 20.

Enter a non-negative integer (0-20): 50
Please enter a number between 0 and 20.

Enter a non-negative integer (0-20): 4
Factorial of 4 = 24*/