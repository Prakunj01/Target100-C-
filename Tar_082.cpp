#include <iostream>
#include <string.h>
using namespace std;

// ............................Capitalize first and last character of each word of a string.......

string capitalizied(string s, int n)
{

    for (int i = 0; i <= n; i++)
    {

        if (i == 0)
        {
            s[i] = toupper(s[i]);
        }

        else if (s[i] == ' ')
        {
            s[i - 1] = toupper(s[i - 1]);
            s[i + 1] = toupper(s[i + 1]);
        }

        else if (i == n)
        {
            s[i] = toupper(s[i]);
        }


    }

    cout << s << endl;
    return s;
}

int main()
{
    string s;

    getline(cin, s);
    int n = s.length();

    capitalizied(s, n);
}
