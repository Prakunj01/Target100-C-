#include <iostream>
#include <string.h>
using namespace std;

// ...........................Maximum occurring character in a string........
int findMax(string s, int n)
{
    int max = 0;
    char m1;
    for (int i = 0; i < n; i++)
    {

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (j < i && s[i] == s[j])
            {
                break;
            }

            if (s[i] == s[j])
            {
                count++;
            }
        }

        if (max < count)
        {
            max=count;
            m1 = s[i];
        }
    }
    cout << m1 << endl;
}

int main()
{
    string s;

    getline(cin, s);
    int n = s.length();

    findMax(s, n);
}
