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
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll i=0;ll j=n-1;
			ll sum=0;		
		while(i<j)
		{
			sum=sum+std::abs(v[i]-v[j]);
			i++;j--;		
		}
		cout<<sum<<endl;
	}


return 0;
}

