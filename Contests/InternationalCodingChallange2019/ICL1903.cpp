#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{

	ll n,m,k;	
	cin>>n>>m>>k;
	if(n<m)
	{
		cout<<"-1"<<endl;
		continue;
	}

	ll i=0;
	ll flag=0;	
	while(1)
	{
		if((n-i*k)<m)
		{
			break;
		}
		if((n-i*k)%m==0)
		{	
			flag=1;break;
		}
				
		i++;
	}

	if(flag==1)
	{	
		cout<<i<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
}

return 0;
}
