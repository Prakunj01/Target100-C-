#include <iostream>
#include <string.h>
using namespace std;

// Change every letter with next lexicographic alphabet

string lexicographi(string &s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        char c1 = s[i];
        c1++;
        ans = ans + c1;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << lexicographi(s) << endl;
    // cout << s << endl;
}
