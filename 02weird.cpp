#include <iostream>
using namespace std;

int weird_array(int input[], int n)
{
    if (n < 2)
    {
        return 0;
    }
    int count = 0;
    int maximum = 0;
    int len = 0;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (input[i] == input[j])
                count++;
            else
            {
                temp[len] = count;
                len++;
                if (maximum < count)
                {
                    maximum = count;
                }
                count = 0;
                break;
            }
        }
    }
    return maximum;
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
    cout << weird_array(arr, n);
}