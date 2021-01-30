#include<iostream>
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
		ll ans=0;
		bool gk=false;
		bool canbebot=0;
	
		for(int i=0;i<n;i++)
		{
			ll a;
			cin>>a;

			if(a!=-1) {ans++;}
			
			if(a>k) {gk=true;}
			
			if(a>1) canbebot=true;
		}
		
		ll ceil=n%2==0?(n/2):(n/2+1);


		if(ans<ceil)
		{
			cout<<"Rejected"<<endl;
		}
		else if(gk)
		{
			cout<<"Too Slow"<<endl;
		}
		else if(ans==n && canbebot==false)
		{
			cout<<"Bot"<<endl;
		}
		else 
		{
			cout<<"Accepted"<<endl;
		}	
	}

return 0;
}
