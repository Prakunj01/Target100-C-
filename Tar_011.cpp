#include <bits/stdc++.h>
using namespace std;

//------------------------------------ Remove duplicates from sorted array ---------------------


int main(){

int n;
cin>>n;
vector<int> arr ;// [10]={1,1,1,2,2,2,3,4,4,5};

int element;

for (int i= 0; i<n; i++ ){
cin>>element;
arr.push_back(element);

}

int count =0;
for (int i= 0; i<n; i++ ){

    if(arr[i] == arr[i+1]){
        arr[i+1]= 0;
        count++;
    }
}
n=n-count;
for (int i= 0; i<n; i++ ){

    cout<< arr[i]<<"  ";
    
}


}