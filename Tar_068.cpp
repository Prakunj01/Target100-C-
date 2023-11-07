#include <iostream>

using namespace std;

//................................DECIMAL TO OCTAL ..................
int main()
{

    int n;
    cin >> n;

    int ans = 0;
    int d = 1;
    while (n > 0)
    {
        int rem = n % 8;

        ans = rem * d + ans;
        d= d*10;
        n = n / 8;
    }

    cout << ans;
    return 0;
}