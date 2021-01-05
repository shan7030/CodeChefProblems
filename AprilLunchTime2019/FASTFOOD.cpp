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

	vector<ll> v1(n),v2(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v1[i];
	
	}
	
	for(ll i=0;i<n;i++)
	{
		cin>>v2[i];
	}

	for(ll i=1;i<n;i++)
	{
		v1[i]=v1[i-1]+v1[i];
	}
		
	for(ll i=n-2;i>=0;i--)
	{
		v2[i]=v2[i]+v2[i+1];
	}

	vector<ll> ans;
	
	for(ll i=0;i<(n-1);i++)
	{
		ans.push_back(v1[i]+v2[i+1]);		
	}
	
	ans.push_back(v2[0]);
	ans.push_back(v1[n-1]);
	sort(ans.begin(),ans.end(),greater<ll> ());

	cout<<ans[0]<<endl;	

}


return 0;
}
