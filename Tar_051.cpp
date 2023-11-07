#include <iostream>
using namespace std;

//................. CHECKING THE HARSHAD NUMBER .......................

int addDigit(int n)
{

    int ans = 0;

    while (n > 0)
    {

        int r = n % 10;
        ans = ans + r;
        n = n / 10;
    }
    return ans;
}

int harshadno(int num)
{
    int a = addDigit(num);
    if (num % a == 0)
    {
        cout << " it is a Harshad no.";
    }
    else
    {
        cout << " No ";
    }
}

int main()
{

    int num;
    cin >> num;

    harshadno(num);
}