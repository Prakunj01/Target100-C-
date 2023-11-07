#include <iostream>
using namespace std;

///             < ................. GCD of two NUMBER ...............>

int minof(int a , int b){

    if(a>b)
    return b;
    else
    return a;
}

int hcfis(int a, int b){

    int ans;
    int least = minof(a,b);

    for(int i=1; i<=least; i++){
        if(a % i==0 && b%i==0)
        ans =i;
    }
    return ans;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcfis(a,b);
}