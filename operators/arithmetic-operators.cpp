#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;

    if (b != 0)
    {
        cout << "Division: " << (double)a / b << endl;
        cout << "Modulus: " << a % b << endl;
    }
    else
    {
        cout << "Division and modulus by zero are not possible." << endl;
    }

    return 0;
}

/*Enter two numbers: 78
45
Addition: 123
Subtraction: 33
Multiplication: 3510
Division: 1.73333
Modulus: 33*/