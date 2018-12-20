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

		cin>>n;
		string s;
		cin>>s;
		ll kj=n;
		if(n%2!=0)
			kj=n-1;
		for(ll i=1;i<kj;i=i+2)
		{
			char temp=s[i-1];
			s[i-1]=s[i];
			s[i]=temp;			
		}
		for(ll i=0;i<n;i++)
		{
			
				ll dist=s[i]-97;
				s[i]=122-dist;
			
		}
		cout<<s<<endl;


	}	

return 0;
}

