#include <iostream>
#include<string.h>
using namespace std;

// ..........................Remove all spaces from the String............................


int remove(string s, int len)
{

    // for (int i = 0; i <= len; i++)
    // {
    //     s[i] = towlower(s[i]);
    // }

    for (int i = 0; i <= len; i++)
    {
        if (s[i] == ' ')
        {
            s = s.substr(0, i) + s.substr(i + 1);
            i--;
        }
    }

    cout << s << endl;
}

int main()
{

    string s;
    getline(cin, s);

    int len = s.length();
    remove(s, len);

    // cout<<"hello"<< "   "<<s;
}