#include<iostream>
#include<math.h>
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
		ll bit=0,nibble=0,byte=0;
		ll ind=n/26;
		ll ans=pow(2,ind);
		ll diff=n%26;	
		if(diff==0)
		{
			byte=ans/2;
		}
		else if(diff<=2)
		{
			bit=ans;
		}
		else if(diff<=10)
		{
			nibble=ans;

		}
		else if(diff<26)
		{
			byte=ans;
		}	
		cout<<bit<<" "<<nibble<<" "<<byte<<endl;
	}

return 0;
}
