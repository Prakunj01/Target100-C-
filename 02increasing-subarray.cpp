#include <iostream>
#include <vector>
using namespace std;

int incresing_subarray(vector<int> a)
{
    if (a.size() == 1)
    {
        return 1;
    }
    if (a.size() == 2)
    {
        if (a[1] - a[0] == 1)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }

    vector<int> temp;
    int i = 0;
    while (i < a.size() - 1)
    {
        int j = i + 1;

        if (a[j] - a[i] == 1)
        {
            temp.push_back(a[j]);
            i += 1;
        }
        else if (a[j + 1] - a[i] == 1)
        {
            temp.push_back(a[j]);
            i += 1;
        }
        else
        {
            i += 1;
        }
    }
    return (temp.size() + 1);
}

int main()
{
    int size, n;
    cin >> size;
    vector<int> a;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        a.push_back(n);
    }

    cout<< incresing_subarray (a);
}