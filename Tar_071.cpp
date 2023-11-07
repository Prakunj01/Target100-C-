#include <iostream>
#include <math.h>
using namespace std;

//........................BINARY TO OCTAL ....................................

int main()
{

    int n;
    cin >> n;

    int b = 0, deci = 0;

    while (n > 0)
    {
        int a = n % 10;
        deci = a * pow(2, b) + deci;

        n = n / 10;
        b++;
    }

    cout << deci << endl;

    int d = 1;
    int octal = 0;
    while (deci > 0)
    {
        int rem = deci % 8;

        octal = rem * d + octal;
        d = d * 10;
        deci = deci / 8;
    }

    cout << octal << endl;

    return 0;
}