#include<iostream>
#include<bits/stdc++.h> 
#include<vector>
#include<math.h>
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
		vector<ll> a(n);

		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
			a[i]=v[i];
		}

		ll xo=0;
		for(ll i=0;i<32;i++)
		{
			ll count=0;
			for(ll j=0;j<n;j++)
			{
				if(a[j]%2==1)
				count++;
				a[j]=a[j]>>1;
			}
			if((count)>(n/2))
			{
				xo=xo+pow(2,i);
			}
		}	
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			sum=sum+(v[i]^xo);
		}
			
		cout<<sum<<endl;


	}
return 0;
}
