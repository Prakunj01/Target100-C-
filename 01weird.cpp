#include <iostream>
#include <vector>
using namespace std;

int weird_array(int input[], int n)
{
    return -1;
}

int weird_array(vector<int> a)
{
    if (a.size() < 2)
    {
        return 0;
    }

    vector<int> li;
    int count = 0;
    int maximum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
            if (a[i] == a[j])
                count++;
            else
            {
                // li.push_back(count);
                cout << count << " ";
                if (maximum < count)
                {
                    maximum = count;
                }
                count = 0;
                break;
            }
        }
    }
    // int maximum = 0;
    // for (int num : li)
    // {
    //     cout<<num<<"  ";
    //     if (num > maximum)
    //     {
    //         maximum = num;
    //     }
    // }
    cout << endl;
    return maximum;
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

    cout << weird_array(a);
}