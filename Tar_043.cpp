#include <iostream>
using namespace std;

 ///             < .................  FACTORIAL OF A NUMBER  ...............>

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }

    int Ans = n*fact(n-1);
    return Ans;
}

 int main(){
    int n;
    cin>>n;

    cout<<fact(n);

return 0;
 }

