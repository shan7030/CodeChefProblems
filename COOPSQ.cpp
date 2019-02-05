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
	ll s1=0,s2=0,s3=0;
	for(ll i=3;i<=sqrt(n);i=i+3)
	{
		ll ko=i*i+3;
		if(ko/3>2 && ko%3==0)
		{
			s1=s1+ko/3;s2=s2+ko/3-1;s3=s3+ko/3-2;
		}
	
	}
	cout<<s1<<" "<<s2<<" "<<s3<<endl; 	

}


return 0;
}
