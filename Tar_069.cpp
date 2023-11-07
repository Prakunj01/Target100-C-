#include <iostream>
#include <math.h>
using namespace std;

//........................OCTAL TO DECIMAL ....................................

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s = "1011";
// 	cout << stoi(s, 0, 2);
// }

int main()
{

    int n;
    cin >> n;

    int b = 0, ans = 0;

    while (n > 0)
    {
        int a = n % 10;
        ans = a * pow(8, b) + ans;

        n = n / 10;
        b++;
    }

    cout << ans << "  ";
    return 0;
}