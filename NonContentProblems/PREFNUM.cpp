#include<iostream>
using namespace std;
#define ll long long int

 
int main()
{
ll t;
cin>>t;
ll x;
ll y;
	while(t--)
	{
	
		cin>>x>>y;
		ll sum=x;
		if(sum%y==0)
		{
			cout<<sum<<endl;
		}
		else 
		{
			if(sum*10<0)
			{			
			cout<<"-1"<<endl;
			}			
			else
			{
				sum=sum*10;
				if(sum%y!=0)
				sum=sum+y-sum%y;
				cout<<sum<<endl;
			}
		}	
	}

}
