#include <iostream>
#include <math.h>
using namespace std;

//......................................OCTAL TO BINAY......................

int main()
{

    int n;
    cin >> n;
    int deci = 0, b = 0;

    while (n > 0)
    {
        int Rem = n % 10;
        deci = deci + Rem * pow(8, b);

        n = n / 10;
        b++;
    }

    cout << deci << endl;

    int octal = 0;
    int d = 1;
    while (deci > 0)
    {
        int rem = deci % 2;
        octal = octal + rem * d;
        d = d * 10;
        deci = deci / 2;
    }
    cout << octal;

    return 0;
}