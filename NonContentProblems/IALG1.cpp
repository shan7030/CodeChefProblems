#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<vector>
using namespace std;
#define ll long long int 

int main()
{

ll t;
cin>>t;

ll a,b;	
while(t--)
{
	cin>>a>>b;
	if(a%b==0)
	{
		cout<<a/b<<endl;
		continue;
	}
	ll que=a/b;
	ll rem=a%b;

	vector<ll> v;
	while(rem && v.size()<101)
	{
		rem=rem*10;
		
		v.push_back(rem/b);
			
		rem=rem%b;
		//cout<<rem<<endl;
		
	}
	//cout<<v.size()<<endl;
	  if(v.size() <= 100) {
      cout << que << '.';
      for(int i = 0 ; i < v.size() ; ++i)
      cout << v[i];
      cout << endl;
      continue;
    }
	if(v[v.size()-1]>=5)
	{
		v[v.size()-2]++;
		
		if(v[v.size()-2]==10)
		{
			ll carry=1;
			ll i=v.size()-2;
			v[i]=0;
			i--;
			while(carry && i>=0)
			{
				v[i]=v[i]+1;
				if(v[i]==10)
				{
					v[i]=0;
					carry=1;
				}
				else
				{
					carry=0;
				}				
				i--;
			}
			if(carry)
			{
				que++;
			}
			
		}
		
	}
	cout<<que<<".";
		ll end=99;
		for(ll i=99;i>=0;i--)
		{
			if(v[i]!=0)
			{	
				end=i;
				break;
			}		
		
		}	
		for(ll i=0;i<=end;i++)
		cout<<v[i];
	
	cout<<endl;	
	
}


return 0;
}



