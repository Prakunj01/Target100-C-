#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  ------------------------ Find the maximun number in an array  --------------------


int main(){

    int n;
    cin>>n;

    int arr[n];

   ///             < .......      . METHOD 1 ...............>
    for(int i =0; i<=n; i++){
       cin>>arr[i];

    }
 int large = INT_MIN;   

 for(int i=0; i<n; i++){
    if (arr[i] > large){
        large = arr[i];

    }
 }
 cout << large;
    
    return 0;
}