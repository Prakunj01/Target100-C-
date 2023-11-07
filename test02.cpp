#include <iostream>
using namespace std;
bool checko1(long long int a,long long int  b,long long int x)
{
    a=a+x;
    b=b-x;
    if(a==b){
        return true;
    }else{
        return false;
    }
}
int checko2(long long int  a,long long int  b,long long int x)
{
    a=a-x;
    b=b+x;
    if(a==b)
    {
        return 1;
    }
    else{
        return 0;
    }
}
bool checko3(long long int  a,long long int  b)
{
    if(a==b){
        return true;
    }else{
        return false;
    }
}

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    long long int a,b,x;
	    cin>>a>>b>>x;
	    int p = checko1(a,b,x);
	    int q = checko2(a,b,x);
	    int r = checko3(a,b);
	    if( (p==1) || ( q==1) || (r==1))
	    {
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	
	return 0;
}
