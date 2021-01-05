#include<iostream>
#include<vector>
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
	vector<ll> a(n);
	vector<ll> d(n);
	vector<ll> summer(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(ll i=0;i<n;i++)
	{
		cin>>d[i];
	}

	
	for(ll i=0;i<n;i++)
	{
		if(i==0)
		{
			summer[i]=a[1]+a[n-1];
		}
		else if(i==n-1)
		{
			summer[i]=a[0]+a[n-2];
		}
		else
		{
			summer[i]=a[i-1]+a[i+1];
		}
	}
	
	
	for(ll i=0;i<n;i++)
	{
		summer[i]=d[i]-summer[i];
	}	
	
	ll ind=0;
	
	for(ll i=0;i<n;i++)
	{		
		if(summer[i]>0)
		{
			ind=i;break;
		}
	}
	
	
	if(summer[ind]<=0)
	{
		cout<<"-1"<<endl;
		continue;
	}

	ll defe=d[ind];
	
	for(ll i=0;i<n;i++)
	{
		if(summer[i]>0 && defe<d[i])
		defe=d[i];
	}
	cout<<defe<<endl;
}


return 0;
} 
