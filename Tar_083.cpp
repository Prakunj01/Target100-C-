#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

// ............................Calculate Frequency of characters in a String.............
string calFreq(string s, int n)
{
    // cout << "hello " << endl;
    vector<bool> isvisited(n, false);

    for (int i = 0; i < n; i++)
    {
        // cout << " 1st " << endl;

        if (isvisited[i] == true)
           continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            // cout << "2nd " << endl;

            if (s[i] == s[j])
            {
                count++;
                isvisited[j] = true;
            }
        }
        
        cout << s[i] << " freq " << count << endl;
    }
}

int main()
{
    string s;

    getline(cin, s);
    int n = s.length();

    calFreq(s, n);
}
