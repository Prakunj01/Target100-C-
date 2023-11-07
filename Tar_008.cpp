#include <iostream>
using namespace std;

// -=====================================     Block Swap Algorithm     ==========================================

void swap(int arr[], int a, int b, int k)
{

    for (int i = 0; i < k; i++)
    {
        int temp = arr[a + i];
        arr[a + i] = arr[b + i];
        arr[b + i] = temp;
    }
}

void blockSwap(int arr[], int k, int n)
{

    if (k == 0 || k == n)
        return;

    if (k == n - k)
    {
        swap(arr, 0, n - k, k);
        return;
    }

    else if (k < n - k)
    {
        swap(arr, 0, n - k, k);
        blockSwap(arr, k, n - k); // second part of array is taken now
    }

    else
    {
        swap(arr, 0, k, n - k);
        blockSwap(arr + n - k, 2 * k - n, k);
    }
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

    blockSwap(arr, k, n);

    cout << "After Rotating the array " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}