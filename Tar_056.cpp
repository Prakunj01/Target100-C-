#include <iostream>
using namespace std;

//  .........................................."ADD TWO NUMBER."......................................

int _gcd(int a, int b)
{

    if (b == 0)
    {
        return a;
    }

    return _gcd(b, a % b);
}

int simplefied(int &a, int &b)
{

    int hcf = _gcd(a, b);

    a = a / hcf;
    b /= hcf;

    //cout << a << "  " << b;
}

int main()
{
    int a, d1, b, d2;
    cin >> a >> d1 >> b >> d2;

    int LCM = d1 * d2 / (_gcd(d1, d2));

    int d3 = LCM;

    int n3 = ((a * (d3 / d1)) + (b * (d3 / d2)));

    cout << n3 << "  " << d3<<endl<<endl;

    simplefied(n3, d3);
     cout << n3 << "  " << d3<<endl<<endl;
    return 0;
}
