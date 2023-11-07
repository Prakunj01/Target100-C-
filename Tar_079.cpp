#include <iostream>
#include <string.h>
using namespace std;

string reverse(string s, int len)
{
    for (int i = 0; i <= len / 2; i++)
    {

        int temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
        // cout<<s[i]<<endl;
    }
    cout << s[0] << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;
    cout << s[3] << endl;
    cout << s[4] << endl;
    cout << s[5] << endl;

    return s;
}

int main()
{
    string s;
    cin >> s;

    int len = s.length();
    // cout << len<<endl;
    cout << reverse(s, len);
    // cout << s;
}