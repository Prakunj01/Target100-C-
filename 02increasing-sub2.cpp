#include <iostream>
using namespace std;

int increasing_subarray(int input[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        if (input[1] - input[0] == 1)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }

    int count = 0;
    int i = 0;
    while (i < n - 1)
    {
        int j = i + 1;

        if (input[j] - input[i] == 1)
        {
            count++;
            i += 1;
        }
        else if (input[j + 1] - input[i] == 1)
        {
            count++;
            i += 1;
        }
        else
        {
            i += 1;
        }
    }
    return count + 1;
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
    cout << increasing_subarray(arr, n);
}