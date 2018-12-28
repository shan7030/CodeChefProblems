#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n,c;
cin>>n>>c;
ll ans=n-1;
ll kl;
ll cost=0;
	while(cost<=1000)
	{
		
		cost++;
		cout<<1<<" "<<ans<<endl;
		cin>>kl;
		if(kl==0)
		{
			break;
		}
		else
		{
			cost=cost+c;
			cout<<2<<endl;
			ans--;
		}
	}
cout<<3<<" "<<ans+1<<endl;

return 0;
}
