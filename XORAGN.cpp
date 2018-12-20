#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;
ll n;
	while(t--)
	{
		cin>>n;
		vector<ll> v(n);
		ll ans=0;		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
			ll p=v[i]+v[i];
			ans=ans^p;
		}
		cout<<ans<<endl;
			
	}

return 0;
}
