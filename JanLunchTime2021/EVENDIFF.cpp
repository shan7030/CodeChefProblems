#include<iostream>
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
		ll even=0;
		ll odd=0;

		while(n--)
		{
			ll a;
			cin>>a;
			if(a%2==0)
				even++;
			else
				odd++;
		}	
		cout<<(even>odd?odd:even)<<endl;
		

	}	


}
