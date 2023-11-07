#include <iostream>
using namespace std;

//------------------------------ Find all NON repeating elements in an array  ----------------------------

int findrepeat(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                // cout<<arr[i]<<"  ";
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    //  findrepeat(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        findrepeat(arr, n);
        t--;
    }
}