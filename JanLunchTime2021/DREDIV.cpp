#include<iostream>
using namespace std;
#define ll long long int


bool twopower(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
	cin>>t;

	while(t--)
	{	
		ll n,k;
		cin>>n>>k;
		vector<int> v(n,0);
		vector<int> give(n,0);
		vector<int> take(n,0);
		vector<int> solved(n,0);

		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}	
		
		for(ll i=0;i<n;i++)
		{
			ll rem=v[i]%k;

			if(rem!=0)
			{
				if((v[i]+rem)%k==0)
				{			
					take[i]=rem;
					give[i]=k-rem;
				}
				
				if((v[i]-rem)%k==0)
				{
					give[i]=rem;
					take[i]=k-rem;
				}
			}	
			else
			{
				solved[i]=1;
			}
		}	

		
		for(ll i=0;i<n;i++)
		{
			if(take[i]!=0)
			{
				if(k%v[i]==0 && twopower(k/v[i]))
				{
					solved[i]=1;
				}
				else
				{	
					
				}
			}
		}
	}

return 0;
}
