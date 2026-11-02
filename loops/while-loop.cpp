#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    while (i <= n)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;

    return 0;
}

/*Enter the value of n: 16
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16*/