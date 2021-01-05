#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{


ll n;
cin>>n;
ll m;
cin>>m;
vector<ll> v(n,0);
ll x,l,r;
for(ll i=0;i<m;i++)
{
	cin>>x>>l>>r;
	for(ll j=l;j<r;j++)
	{
		v[j]=v[j]+x;	
	}
	

}
ll max=0;

for(ll i=0;i<n;i++)
{
	if(v[i]>max)
	{
		max=v[i];
	}
	//cout<<v[i]<<endl;
	
}
//cout<<" asgdhj"<<endl;
ll counter=0;
for(ll i=0;i<n;i++)
{
	if(v[i]==max)
	counter++;
}

cout<<counter<<" ";
for(ll i=0;i<n;i++)
{
	if(v[i]==max)
	cout<<i+1<<" ";
}
return 0;
}
