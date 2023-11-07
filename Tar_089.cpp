#include <bits/stdc++.h>
using namespace std;

// Remove Characters from first String present in the Second String

string removechar(string s1, string s2)
{
    string ans = "";
    for (int i = 0; i < s1.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < s2.size(); j++)
        {
            if (s2[j] == s1[i])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            ans = ans + s1[i];
        }
    }
    return ans;
}
int main()
{

    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << removechar(s1, s2);
}