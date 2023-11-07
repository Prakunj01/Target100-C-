#include <iostream>
using namespace std;

// -------------------------  Maximum Product Subarray in an Array ---------------


int maxproduct(int arr[], int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        int max = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            max = max * arr[j];
            // cout << " aaraha ";
            // cout<<max;

        if (p < max)
        {
            p = max;
            // cout << " me hu";
            // cout << p << endl;
        }
        }
        
    }
    return p;
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

    cout << maxproduct(arr, n);
}