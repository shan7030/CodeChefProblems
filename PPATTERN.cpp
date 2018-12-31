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
		ll a[n][n];
		ll ans=1;
		ll sum=0;
		
		for(ll k=0;k<n;k++)
		{
			ll row=0,col=k;
			while(row<n && col>=0)
			{
				a[row][col]=ans;ans++;
				row++;
				col--;
			}
		}

			for(ll k=0;k<n;k++)
		{
			ll row=k+1,col=n-1;
			while(row<n && col>(k))
			{
				a[row][col]=ans;ans++;
				row++;
				col--;
			}
		}	
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}

return 0;
}
