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
		cin>>s;
		vector<ll> zero(n,0);
		vector<ll> one(n,0);
		
		ll count=0;
		for(ll i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			count++;

			zero[i]=count;
		}
	
		count=0;
		for(ll i=s.length()-1;i>=0;i--)
		{
			if(s[i]=='1')
			count++;

			one[i]=count;
		}
		
		ll max_length=one[0]>zero[s.length()-1]?one[0]:zero[s.length()-1];
	
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='0' && zero[i]+one[i]>max_length )
			{
				max_length=zero[i]+one[i];
			}
		
		}

		cout<<(n-max_length)<<endl;
		

		
	
	}
	
	return 0;
}
