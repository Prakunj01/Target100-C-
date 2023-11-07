#include <iostream>
using namespace std;

//------------------------------- Adding Element in an array -----------------------------

int addatbegin(int *arr, int n, int v1)
{
    for (int i = n; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = arr[v1];
}

void addatlast(int *arr, int n, int v2)
{
    arr[n+1]=v2;
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

    int v1, v2;
    cin >> v1;
    addatbegin(arr, n, v1);

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " , ";
    }

    cin >> v2;
    addatlast(arr, n, v2);

    for (int i = 0; i <= n+1; i++)
    {
        cout << arr[i] << "  ";
    }
}