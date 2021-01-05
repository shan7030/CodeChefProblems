#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
	ll n;
	cin>>n;
	
	vector<ll> v(n);
	ll max=0;
	for(ll i=0;i<n;i++)	
	{
		cin>>v[i];
		max=max+v[i];
	}

	max=max-n+1;
	cout<<max<<endl;	
	
}

return 0;
}
