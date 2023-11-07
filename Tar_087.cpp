#include <bits/stdc++.h>
using namespace std;

string removedupli(string str)
{
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }
        if (i == j)
        {
            ans = ans + str[i];
        }
    }
    return ans;
}

int main()
{
    string str;
    getline(cin, str);

    cout << removedupli(str) << endl;
}