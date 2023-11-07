#include <iostream>
#include <string.h>
using namespace std;

//        ..................Find the Position of a Substring within a String

int findposition(string s1, string s2)
{
    int p = -1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s2[0] == s1[i])

        {
            return i;
        }
    }
        return p;
    
}
int main()
{
    string s2, s1;

    getline(cin, s1);
    cin >> s2;

    cout << findposition(s1, s2);
}