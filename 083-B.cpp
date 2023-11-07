#include <iostream>
#include <string.h>
// #include <vector>
using namespace std;

// ............................Calculate Frequency of characters in a String.............
string calFreq(string s, int n)
{

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

        if (count != 0)
        {
            cout << s[i] << " freq " << count << endl;
        }
    }
}

int main()
{
    string s;

    getline(cin, s);
    int n = s.length();

    calFreq(s, n);
}
