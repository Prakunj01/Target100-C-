#include <iostream>
using namespace std;

///             < .................  FACTOR OF A NUMBER ...............>

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            cout << i << "  ";
        }
    }
    cout<<n;

    return 0;
}
