#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	ll n;	
	while(t--)
	{
		ll n;
		cin>>n;
		ll counter=0;
		ll nk;
		ll flag=0;
		while(n--)
		{
			cin>>nk;
			if(nk)
			counter++;
			else
			{
				counter--;
				if(counter<0)
				{
					flag=1;
					
				}
				
			}
			
		}
		if(flag==1)
		{
			cout<<"Invalid"<<endl;
		}
		else
		{
			cout<<"Valid"<<endl;
		}
		
	}

return 0;
}
