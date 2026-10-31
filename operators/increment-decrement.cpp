#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Initial value: " << a << endl;

    cout << "Pre-increment (++a): " << ++a << endl;
    cout << "Post-increment (a++): " << a++ << endl;
    cout << "Value after post-increment: " << a << endl;

    cout << "Pre-decrement (--a): " << --a << endl;
    cout << "Post-decrement (a--): " << a-- << endl;
    cout << "Value after post-decrement: " << a << endl;

    return 0;
}

/*Enter a number: 10
Initial value: 10
Pre-increment (++a): 11
Post-increment (a++): 11
Value after post-increment: 12
Pre-decrement (--a): 11
Post-decrement (a--): 11
Value after post-decrement: 10*/