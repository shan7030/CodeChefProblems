#include<iostream>
#include<vector>
#include<bits/stdc++.h>
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
		ll flag=0;
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]>(n-1) || v[i]<0)
			{
				flag=1;
			}
		}
		sort(v.begin(),v.end());
		ll count=1;
		ll countofmin=1;
		for(ll i=1;i<n;i++)
		{
			if(v[i-1]!=v[i])
			count++;
			if(v[i]==v[0])
			countofmin++;
			
		}
		if(count>=3 || flag==1 || n<=1)
		cout<<"-1"<<endl;
		else if(count==1 && v[0]==0 )
		cout<<n<<endl;
		else if(count==1 && v[0]==n-1)
		cout<<"0"<<endl;
		else if(count==2 && v[0]+1==v[n-1] && countofmin==v[n-1])
		cout<<(n)-v[n-1]<<endl;
		else
		cout<<"-1"<<endl;
		
		
	}
return 0;
}
