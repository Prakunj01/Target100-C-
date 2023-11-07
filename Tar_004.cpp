#include <iostream>
using namespace std;



   ///             < .......      . PRINT REVERSE ARRAY ...............>


int printReverse(int arr[], int n)
{

  for (int i = n - 1; i >= 0; i--)
  {
    cout << arr[i] << "  ";
  }

  return 0;
}


// void rvereseArray(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }



int reversewhile(int arr[], int n)
{
  int i = n - 1;
  while (i >= 0)
  {
    cout << arr[i] << "  ";
    i--;
  }
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

  printReverse(arr, n);
  cout << endl;
  reversewhile(arr, n);
  cout << endl;


 
}