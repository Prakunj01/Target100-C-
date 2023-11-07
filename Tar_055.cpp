#include <iostream>
using namespace std;

//........................PERMUTATION .........................

int factorial(int n){
    if(n==0)
    return 1;
    
    return n*factorial(n-1);
    }

int permutation(int n, int r)
{
int a = factorial(n);
int b = factorial(n-r);

return a/b;
   
}

int main()
{
    int n,r;
    cin >> n>>r;
    cout <<permutation(n,r);
}