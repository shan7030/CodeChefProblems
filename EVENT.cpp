#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;
string s,f;
ll l,r;
while(t--)
{

	cin>>s>>f;
	cin>>l>>r;
	ll start,end;


	if(s=="monday")
	{
		start=0;
	}
	else if(s=="tuesday")
	{
		start=1;
	}
	else if(s=="wednesday")
	{
		start=2;
	}
	else if(s=="thursday")
	{
		start=3;
	}
	else if(s=="friday")
	{
		start=4;
	}
	else if(s=="saturday")
	{
		start=5;
	}
	else
	{
		start=6;
	}

	
	if(f=="monday")
	{
		end=0;
	}
	else if(f=="tuesday")
	{
			end=1;
	}
	else if(f=="wednesday")
	{
		end=2;
	}
	else if(f=="thursday")
	{
		end=3;
	}
	else if(f=="friday")
	{
		end=4;
	}
	else if(f=="saturday")
	{
		end=5;
	}
	else
	{
		end=6;
	}
	
	ll diff=std::abs(start-end)+1;

	ll diff2=std::abs(r-l);
	ll count=0;
	ll z=start;	
	
	for(ll i=l;i<=r;i++)
	{
		if((start+i-1)%7==end)
		{
			count++;
			z=i;
		}
	}
	if(count>=2)
	{
		cout<<"many"<<endl;
	}
	else if(count==1)
	{
		cout<<z<<endl;
	}
	else
	{
		cout<<"impossible"<<endl;
	}


}


return 0;
}
