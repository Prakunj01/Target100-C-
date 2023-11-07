#include <iostream>
using namespace std;

//..........................check Abundant Number.......................

int sumfactor(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int checkAbundant(int num)
{

    int a = sumfactor(num);

        if (a > num)
    {
        cout << " It is a Abundant number ";
    }
    else
    {
        cout << " Nahi ha ";
    }
}

int main()
{
    int num;
    cin >> num;
    checkAbundant(num);
    
}