#include <iostream>
#include <bits/stdc++.h>
using namespace std;

///             < ....... INCREASING AND DECREASIND ORDER ...............>

int increse(int arr[], int n)
{


}

int decrese(int arr[], int n)
{
}

void printArray(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i];
        cout<< endl;
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    increse(arr, n);
    cout << endl;
    decrese(arr, n);
}