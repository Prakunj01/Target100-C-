#include <iostream>
using namespace std;
int reverse(int n)
{
    int m = 0;
    while (n > 0)
    {

        int lastDigit = n % 10;

        m = m * 10 + lastDigit;

        n = n / 10;
    }
    return m;
}

int main()
{

    int n;
    cin >> n;
    int check = n;
    int m = reverse(n);

    if (check == m)
    {
        cout << " It is Palindrome ";
    }
    else
    {
        cout << " Not a Palindrome ";
    }
    return 0;
}