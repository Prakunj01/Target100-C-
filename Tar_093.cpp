#include <iostream>
#include <string.h>
using namespace std;

//Count the number of words in a given string


int countalpha(string s)
{int count =1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' '){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    getline(cin,s);

    cout<< countalpha(s);
}