#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;

    int size, element;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    for (int i = 0; i < size; i++)
    {
        cout << i << " ";
    }

    sort(arr.begin(), arr.end(), greater);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

//     for (int i = n - 1; i >= n / 2; i--)
//     {
//         cout << arr[i] << " ";
//     }
// }