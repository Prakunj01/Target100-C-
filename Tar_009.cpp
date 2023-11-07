#include <iostream>
using namespace std;

//------------------------------------ Average of all elements in an array ---------------------


int main()
{
    long sum = 0;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  +  ";
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << sum << endl;

    float avg = sum / n;
    cout << "   Average is :  " << avg;

    return 0;
}