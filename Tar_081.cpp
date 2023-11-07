#include <iostream>
#include <string.h>
using namespace std;

// ..............................Sum of the Numbers in a String..........................

int search(string s, int n)
{

    int sum = 0;
    int num = 0;
    for (int i = 0; i <= n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
        }
        else
        {
            sum = num + sum;
            num=0;
        }
    }
    return sum + num;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << search(s, n);
}
