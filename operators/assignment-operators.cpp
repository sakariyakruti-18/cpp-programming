#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the initial value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Initial a: " << a << endl;

    a += b;
    cout << "After a += b: " << a << endl;

    a -= b;
    cout << "After a -= b: " << a << endl;

    a *= b;
    cout << "After a *= b: " << a << endl;

    if (b != 0)
    {
        a /= b;
        cout << "After a /= b: " << a << endl;

        a %= b;
        cout << "After a %= b: " << a << endl;
    }
    else
    {
        cout << "Division and modulus by zero are not possible." << endl;
    }

    return 0;
}

/*Enter the initial value of a: 5
Enter the value of b: 2
Initial a: 5
After a += b: 7
After a -= b: 5
After a *= b: 10
After a /= b: 5
After a %= b: 1*/