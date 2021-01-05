#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;
ll flag=0;
ll count=0;
ll countb=0;
while(n--)
{
	ll k;
	cin>>k;
	if(flag==0)
	{
		if(k==50)
		{
			count++;
		}
		else if(k==100)
		{
			if(count==0)
			{
				cout<<"NO"<<endl;
				flag=1;
				continue;
			}
			countb++;
			count=count-1;
		}
		else 
		{		
		
			if(countb!=0 && count>=1)
			{
				count=count-1;
				countb--;	
			}
			else if(countb==0 && count>=3)
			count=count-3;
			else
			{
				cout<<"NO"<<endl;
				flag=1;
				continue;
			}
	}
	}
	
}
if(flag==0)
cout<<"YES"<<endl;
return 0;
}
