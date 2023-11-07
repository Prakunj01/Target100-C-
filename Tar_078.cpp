#include <iostream>
#include<string.h>
using namespace std;

// ..........................Remove all vowels from the String............................


int remove(string s, int len)
{
string ans;

    for (int i = 0; i <= len; i++)
    {
         int ascii = (int) s[i]; // ascii value

        if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        {
                ans.push_back(s[i]);

        }
    }

    cout << ans << endl;
}

int main()
{

    string s;
    getline(cin, s);

    int len = s.length();
    remove(s, len);

    // cout<<"hello"<< "   "<<s;
}