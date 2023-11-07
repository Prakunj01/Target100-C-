#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  ------------------------    Find the smallest number in an array  --------------------

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    int small = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << small;

    return 0;
}