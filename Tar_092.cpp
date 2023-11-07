#include <iostream>
#include <string.h>

using namespace std;

// SORT THE GIVEN STRING
string solve(string arr, int n)
{

    for (int j = 0; j < n - j; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    cout << solve(s, n);
    return 0;
}