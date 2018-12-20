#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
	string s;
	cin>>s;
	ll n=s.length();
	vector<ll> v(26,0);	
	for(ll i=0;i<n;i++)
	{
		v[s[i]-97]++;
	}

	ll count=0;
	for(ll i=0;i<26;i++)
	{	
		if(v[i]%2!=0)
		count++;

	}
	if(count>1)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<1<<endl;
	}	

	return 0;
}
