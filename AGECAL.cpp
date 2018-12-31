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
		vector<ll> v(n);
		vector<ll> sum(n,0);
		cin>>v[0];sum[0]=v[0];
		for(ll i=1;i<n;i++)
		{
			
			cin>>v[i];
			sum[i]=sum[i-1]+v[i];
		}		
		ll by,bm,bd;
		ll cy,cm,cd;
		cin>>by>>bm>>bd>>cy>>cm>>cd;
		ll diff=(cy-by);	
		ll ans=0;
		ll first=0;
		ll last=0;
		if(diff==0)
		{
			if(bm==cm)
			{
				cout<<(cd-bd+1)<<endl;
			}
			else
			{
				ll sum1=v[bm-1]-bd+1;
				sum1=sum1+cd;
				for(ll i=bm+1;i<cm;i++)
				sum1=sum1+v[i-1];
				cout<<sum1<<endl;
			}
			
		}
		else
		{
			diff--;
			//cout<<"HERE"<<endl;
			ans=ans+(diff)*sum[n-1];
			//cout<<ans<<endl;
			ans=ans+((cy-1)/4)-((by-1)/4);
			//cout<<ans<<endl;
				ll sum1=v[bm-1]-bd+1+(sum[n-1]-sum[bm-1]);
				sum1=sum1+cd;
				if(cm>=2)
				sum1=sum1+sum[cm-2];
				ans=ans+sum1;
				cout<<ans<<endl;
						
		}		
	
		//cout<<ans<<endl;
	}

return 0;
}
