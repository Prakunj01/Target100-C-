#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int d,a;
    cin >> a >> d >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a += d;
    }
    cout << "The sum of the A.P." << n << "  is: " << sum << endl;
}
