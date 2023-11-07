#include <iostream>
using namespace std;

//........................SUM OF NUMBER .........................

int sumDigit(int n)
{

    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout <<sumDigit(n);
}