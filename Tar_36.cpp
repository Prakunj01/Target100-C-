#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int r,a;
    cin >> a >> r >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
       sum = sum + a;
       a= a*r;
    }
    cout << "The sum of the A.P." << n << "  is: " << sum << endl;
}
