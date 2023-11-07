#include <iostream>
using namespace std;

///             < ................. Prime FACTORS OF A NUMBER ...............>

int main()
{

    int n;
    cin >> n;

    for (int i = 2; n > 1; i++)
    {
        // if (n % i == 0)
        // {
        // while (n % i == 0)

        for (; n % i == 0;)
        {
            cout << i << "  ";
            n = n / i;
        }
        // }
    }
}