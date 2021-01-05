#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{
ll t;

cin>>t;

ll n;
while(t--)
{
	cin>>n;
	vector<ll> v(n);
	ll one=0;	
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==1)
			one++;
	}
	ll f1=gcd(v[0],v[1]);
	for(ll i=2;i<n;i++)
	{
		f1=gcd(f1,v[i]);
	}	
	//cout<<f1<<endl;
	if(f1==1 or one>=1)
	{
		cout<<"0"<<endl;
	}
	else 
	{
		cout<<"-1"<<endl;
	}
}



return 0;
}
