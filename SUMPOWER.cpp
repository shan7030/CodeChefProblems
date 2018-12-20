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

ll n,k;
cin>>n>>k;

string s;
cin>>s;
vector<ll> v(n-1,0);
for(ll i=1;i<n;i++)
{
	if(s[i-1]!=s[i])
	{
		v[i-1]=1;
	}
	else
	{
		v[i-1]=0;
	}
}

ll sum=0;
ll sum1=0;

for(ll i=0;i<k;i++)
{
sum1=sum1+v[i];
}

for(ll i=0;i<(n-k);i++)
{
	ll j=0;
	
	sum=sum+sum1;
	sum1=sum1-v[i]+v[i+k];

}
cout<<sum<<endl;

}

return 0;
}


