#include <iostream>
using namespace std;

// ------------------------ Calculate sum of the elements of the array ----------------

int main()
{
    int sum = 0;
    int arr[5] = {1, 2, 3, 4, 10};

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;

    return 0;
}