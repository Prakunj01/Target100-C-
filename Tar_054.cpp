#include <iostream>
using namespace std;

//........................SUM ALL NO> BETWEEN A AND B .........................

int sumDigit(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sumDigit(a, b);
}