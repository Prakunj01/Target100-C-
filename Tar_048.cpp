#include <iostream>
using namespace std;

///             < ................. Automorphic NUMBER ...............>

int squareofN(int n)
{

    return n * n;
}

bool checkAutomorphic(int num)
{

    int sq = squareofN(num);
    while (num > 0)
    {

        if (num % 10 != sq % 10)
            return false;

        num = num / 10;
        sq = sq / 10;
    }
    return true;
}

int main()
{
    int num;
    cin >> num;

    cout << checkAutomorphic(num);
}
