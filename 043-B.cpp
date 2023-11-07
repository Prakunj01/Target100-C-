#include <iostream>
using namespace std ;

 ///             < .................  FACTORIAL OF A NUMBER  ...............>

int main(){

int n;
cin>>n;
int Ans = 1;

for(int i=1; i<=n; i++){

Ans = i * Ans;
    
}

cout<<Ans<<endl;
return 0;

}
