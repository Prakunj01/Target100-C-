#include <iostream>
using namespace std;

//  .........................................."CHANGE ZERO WITH 1."......................................

int change(long n)
{

    if (n == 0)
        return 1;

    long ans = 0, temp = 1;

    while (n > 0)
    {

        int d = n % 10;
        if (d == 0)

            d = d + 1;

        ans = d * temp + ans;
        n /= 10;
        temp *= 10;
    }
    return ans;
}

int main()
{
    long int n;
    cin >> n;

    cout << change(n);
}