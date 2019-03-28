#include<iostream>
using namespace std;
#define ll long long int

int main()
{


ll t;
cin>>t;

while(t--)
{
	ll n,k;
	cin>>n>>k;

	ll x1=n%10;
	ll x2=(n/10)%10;
	ll x3=(n/100)%10;
	
	if(x1==x2 && x2==x3)
	{
		cout<<"1"<<endl;
	}
	else if(x1==x2 && x2!=x3)
	{	
		cout<<"8"<<endl;
	}
	else if(x1!=x2 && x2==x3)
	{
		
		cout<<"8"<<endl;
	}
	else if(x1==x3 && x1!=x2)
	{
		
		cout<<"8"<<endl;
	}
	else 
	{
		
		cout<<"27"<<endl;
	}
}


return 0;
}
