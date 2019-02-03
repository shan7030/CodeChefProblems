#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

ll n;
while(t--)
{
	cin>>n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
	}
	ll sum=0;
	

	for(ll i=0;i<n;i++)	
	{
		//cout<<sum<<endl;
		if(v[i]==-1)
		{
			v[i]=floor(sum/(i));
		}
		
		sum=sum+v[i];
	}
	for(ll i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

return 0;
}
