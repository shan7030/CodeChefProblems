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
	string s;
	vector<ll> v(26,0);
	for(ll i=0;i<n;i++)
	{
		cin>>s;
		for(ll j=0;j<s.length();j++)
		{
			if(v[s[j]-'a']==i)
			v[s[j]-'a']++;
		}	
	}	
	ll ans=0;	
	for(ll i=0;i<26;i++)
	{
		if(v[i]==n)
		ans++;		
	}		
	cout<<ans<<endl;
}


return 0;
} 
