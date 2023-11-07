#include <bits/stdc++.h>
using namespace std;

// Find the largest word in a String

string findlarge(string s)
{
    string ans = "";
    int max = 0;
    int large =0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            large++;
        }

        if (max < large)
        {
            max = large;
            
        }
    }
    cout<<max;
}

int main()
{
    string s;
    getline(cin, s);
    findlarge(s);
}