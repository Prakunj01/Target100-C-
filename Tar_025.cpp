#include <iostream>
using namespace std;

// --------------------------- Check if array is subset of another array ------------------

bool searchK(int arr[], int arr2[], int n, int k)
{
    int i = 0;
    while (i < n)
    {
        if (n > k)
        {
            return false;
        }
        int count = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i] == arr2[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            return false;
        }

        i++;
    }
    return true;
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
    int arr2[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr2[i];
    }

    cout << searchK(arr, arr2, n, k);

    return 0;
}
