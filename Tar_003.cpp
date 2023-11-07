#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  ------------------------ Find the  second smallest number in an array  --------------------

int secondSmallest(int arr[], int n)
{

  int small = INT_MAX;
  int second ;//= small;

  for (int i = 0; i < n; i++)
  {

    if (arr[i] < small)
    {
      second = small;
      small = arr[i];
    }
    else if (arr[i] < second && arr[i] != small)
    {
      second = arr[i];
    }
  }
  cout << second;
}

int main()
{

  int n;
  cin >> n;

  int arr[n];

  ///             < .......      . METHOD 1 ...............>
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  secondSmallest(arr, n);

  return 0;
}
