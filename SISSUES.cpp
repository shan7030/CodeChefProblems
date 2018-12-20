#include<iostream>
using namespace std;
#define ll long long int

int main()
{

	ll t;
	cin>>t;
	ll n;
	string s;

	while(t--)
	{
		cin>>n;
		cin>>s;
		ll sum1=0,sum2=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='+')
			{
				sum1++;
			}
			else if(s[i]=='-')
			{
				sum1--;
			}
			if(sum1<0)
			{
				sum2=1;
				break;
			}
						
		}
		if(sum2==1)
		{
			cout<<"FIND A NEW JOB"<<endl;
		}	
		else
		{
			cout<<"MAYBE YOU ARE SAFE"<<endl;
		}

	}


return 0;
}
