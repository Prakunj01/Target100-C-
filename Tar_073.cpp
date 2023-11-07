#include <bits/stdc++.h>
using namespace std;

//..............................................is palindrome
string isPalindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++)
    {

        if (S[i] != S[S.length() - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    string S;
    cin >> S;
    cout << isPalindrome(S);

    return 0;
}
