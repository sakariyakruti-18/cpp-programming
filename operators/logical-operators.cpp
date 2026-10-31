#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "(a > 0 && b > 0): " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0): " << (a > 0 || b > 0) << endl;
    cout << "!(a > b): " << !(a > b) << endl;

    return 0;
}

/*Enter two numbers: 12
15
(a > 0 && b > 0): 1
(a > 0 || b > 0): 1
!(a > b): 1*/