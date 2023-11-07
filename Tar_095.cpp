#include <iostream>
#include <string.h>
using namespace std;

//Change case of each character in a string


string chagecase(string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = towlower(s[i]);
            }
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);

    cout << chagecase(s);
}