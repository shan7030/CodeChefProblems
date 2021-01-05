#include<iostream>
using namespace std;
#define ll long long int

int main()
{
 ll t;
	cin>>t;
	while(t--)
	{
		ll count=0;ll a[10][10];
		for(ll i=0;i<10;i++)
		{
			for(ll j=0;j<10;j++)
			{
				cin>>a[i][j];	
				if(a[i][j]<=30)
				count++;
			}
		}
		if(count>=60)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}

return 0;
}
