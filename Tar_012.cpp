#include <iostream>
using namespace std;

//------------------------------------ Remove duplicates from unsorted array ---------------------




int removedupli(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = 0;
            }
        }
        n = n - count;
        if (arr[i] != 0)
        {
            cout << arr[i];
        }
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

    removedupli(arr, n);
}