#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
	string s;
	cin>>s;
	
	ll n=s.length();
	vector<ll> v(26,0);
	for(ll i=0;i<n;i++)	
	{
		v[s[i]-'A']++;
	}
	
	map<ll,ll> m;
	ll countofdistinct=0;
	vector<ll> max;
	for(ll i=0;i<26;i++)
	{

		if(v[i]!=0)
		{		
			max.push_back(v[i]);
			countofdistinct++;
		}
	}
	sort(max.begin(),max.end(),greater<ll> ());
	sort(v.begin(),v.end(),greater<ll> ());
	vector<ll> ans;
	
	
	
	for(ll i=1;i<=(26);i++)
	{
		if(n%i==0)
		{
			ll req=0;
			ll count=n/i;
			ll count2=0;
			//cout<<count<<endl;
			for(ll j=0;j<i;j++)
			{
				if(v[j]<count)
				{
					req=req+(count-v[j]);
				}
				

			}
			//cout<<req<<endl;
			ans.push_back(req);
		}
	}
		sort(v.begin(),v.end());
	
	
	
	
	/*for(ll i=1;i<=(countofdistinct);i++)
	{
		if(n%i==0)
		{
			ll req=0;
			ll count=n/i;
			ll count2=0;
			//cout<<count<<endl;
			for(ll j=0;j<i;j++)
			{
				if(v[j]>count)
				{
					req=req+(v[j]-count);
				}
				

			}
			
			ans.push_back(req);
		}
	}
	ll count2=0;*/
	sort(ans.begin(),ans.end());
	if(ans[0]<(n-1))
	cout<<ans[0]<<endl;
	else
	cout<<(n-1)<<endl;	
}


return 0;
}
