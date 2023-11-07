#include <iostream>
using namespace std;


int powerof(int number,int power){
int Ans = 1;

for(int i =1; i <=power; i++){
    Ans = number * Ans;
}

return Ans;
}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<powerof(n,m);
    return 0;
}