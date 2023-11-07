#include <iostream>
using namespace std;

///             < ................. LCM NUMBER  using formula...............>

int minof(int a, int b)
{

    if (a > b)
        return b;
    else
        return a;
}

int hcfis(int a, int b)
{

    int ans;
    int least = minof(a, b);

    for (int i = 1; i <= least; i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    return ans;
}

int lcmof(int a, int b)
{
    int product = a * b;
    int hcf = hcfis(a, b);
    int lcm = product / hcf;
    return lcm;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "HCF  " << hcfis(a, b) << endl;
    cout << "LCM  " << lcmof(a, b) << endl;
}