#include <iostream>
using namespace std;

// -------------------------------- Search an Element in an Array  --------------------

int searchK(int arr[], int n , int k)
{
    int i = 0;
    while (i < n)
    {
        if(arr[i] == k)
        {
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
    int k;
    cin >> k;

    cout << searchK(arr, n, k);

    return 0;
}
