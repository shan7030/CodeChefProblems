#include<iostream>
using namespace std;
#define ll long long int

int main()
{

	ll n,r;
	cin>>n>>r;
	ll k;
	for(ll i=0;i<n;i++)
	{
		cin>>k;
		if(k>=r)
		{
			cout<<"Good boi"<<endl;
		}
		else
		{
			cout<<"Bad boi"<<endl;
		}
	
	}

return 0;
}
