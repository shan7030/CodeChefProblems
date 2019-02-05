#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}

ll lcm(ll a,ll b)
{
	return (a*b)/gcd(a,b);
}
int main()
{

ll n;
cin>>n;
vector<ll> v;
for(ll i=1;i*i<=n;i++)
{
	if(n%i==0)
	v.push_back(i);
	if(n%i==0 && n/i!=i)
	v.push_back(n/i);
}

ll m=v.size();
ll ans=0;

for(ll i=0;i<m;i++)
{
	//cout<<v[i]<<endl;
	for(ll j=i;j<m;j++)
	{
		if(lcm(v[i],v[j])==n)
		ans++;
		
	}

}
cout<<ans<<endl;
return 0;
}
