#include <iostream>

using namespace std;

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2 ; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)
        return true;
    else
        return false;
}

int main()
{
    // your code goes here
   
    // bool ex2 = isPerfect(15);
    // bool ex3 = isPerfect(28);

    int n;
    cin>>n;


 bool m = isPerfect(n);
    if (m == true)
    {
        cout << "It is a perfect number" << endl;
    }
    else
        cout << "it is not a perfect number" << endl;

    return 0;
}