#include <bits/stdc++.h>
using namespace std;

//........................finding roots formula ..............................


int roots(int a, int b, int c)
{

    int n2 = sqrt((b * b) + (4 * a * c));

    int r1, r2;
    r1 = (b + n2) / 2 * c;
    r2 = (b - n2) / 2 * c;
    return r1, r2;
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    cout<<roots(a,b,c);
}