#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b)
    {
        if (a >= c)
        {
            cout << "Greatest number: " << a << endl;
        }
        else
        {
            cout << "Greatest number: " << c << endl;
        }
    }
    else
    {
        if (b >= c)
        {
            cout << "Greatest number: " << b << endl;
        }
        else
        {
            cout << "Greatest number: " << c << endl;
        }
    }

    return 0;
}

/*Enter three numbers: 12
11
56
Greatest number: 56*/