#include <iostream>
using namespace std;

// --------------------------------  Finding equilibrium index of an array  --------------------

int findequilibrium(int arr[], int n)
{
    int sum1 = -n;
    int sum2 = 0;
    int i = 0;
    while (i < n)
    {
        sum2 = 0;

        sum1 = sum1 + arr[i-1];
       
        for (int j = i + 1; j < n; j++)
        {
            sum2 = sum2 + arr[j];
        }

        if (sum1 == sum2)
        {
            // cout << i;
            // break;
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<< findequilibrium(arr, n);

    return 0;
}
