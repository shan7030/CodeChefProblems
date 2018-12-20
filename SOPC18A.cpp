#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	ll a,b;
	while(t--)
	{
		cin>>a>>b;
		ll ans=a;
		while(ans<=b)
		{
			if(ans%a==0 && b%ans==0)
				break;
			ans=ans+a;		
		}	

		if(ans>b)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}
	}


return 0;
}
