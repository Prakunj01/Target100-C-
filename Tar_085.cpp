#include <iostream >
#include <algorithm>
using namespace std;

//......................Check if two Strings are anagrams of each other

bool checkanagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string s2, s1;
    cin >> s1;
    cin >> s2;

    if (checkanagrams(s1, s2))
    {
        cout << " TRUE " << endl;
    }
    else
    {
        cout << " false ";
    }

    return 0;
}