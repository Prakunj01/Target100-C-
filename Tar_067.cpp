#include <iostream>

using namespace std;

//................................DECIMAL TO BINARY ..................
int main()
{

    int n;
    cin >> n;

    int ans = 0;
    int d = 1;
    while (n > 0)
    {
        int rem = n % 2;

        ans = rem * d + ans;
        d= d*10;
        n = n / 2;
    }

    cout << ans;
    return 0;
}