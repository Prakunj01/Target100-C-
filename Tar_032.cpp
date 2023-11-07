#include <bits/stdc++.h>
using namespace std;

int remainder(int n)
{
    return (n % 2);
}

int main()
{
    int n;
    cin >> n;
    if (n%2 == 0)
    {
        cout << n << " is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
}