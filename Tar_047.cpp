#include <iostream>
using namespace std;
///             < ................. STRONGE NUMBER ...............>

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int strongno(int num)
{
    int r;
    int sum = 0;

    for( ;num > 0;){
        r = num % 10;
    sum = sum + factorial(r);
    num = num / 10;
    }
return sum;
}

int main()
{

    int num;
    cin >> num;

    int ans = strongno(num);

    if(ans == num)
    {
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
