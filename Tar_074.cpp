#include <iostream>
using namespace std;

int count(string s, int len)
{

    for (int i = 0; i <= len; i++)
    {
        s[i] = towlower(s[i]);
    }

    int vowels = 0, consonants = 0, whitespaces = 0;

    for (int i = 0; i <= len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++;
        }
        else if (s[i] > 'a' && s[i] <= 'z')
        {
            consonants++;
        }
        else if
            (s[i] == ' ')
            {
                whitespaces++;
            }
    }

cout<<"vowel are    " <<vowels<<endl;
cout<<"consonant are   " <<consonants<<endl;
cout<<"space are   " <<whitespaces<<endl;



}

int main()
{

    string s;
    getline(cin, s);

    int len = s.length();
    count(s, len);

    // cout<<"hello"<< "   "<<s;
}