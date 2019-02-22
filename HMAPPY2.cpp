#include<iostream>
using namespace std;
#define ll unsigned long long int

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
ll lcm(ll a,ll b)
{
	return (a*b)/gcd(a,b);
}
int main()
{

ll t;
cin>>t;

ll n,a,b,k;
while(t--)
{
	cin>>n>>a>>b>>k;
	if(a==b)
	{
		cout<<"Lose"<<endl;
		continue;
	}
	ll div1=n/a-n/lcm(a,b);
	ll div2=n/b-n/lcm(a,b);
	
	if((div1+div2)>=k)
	{
		cout<<"Win"<<endl;
	}	
	else
	{
		cout<<"Lose"<<endl;
	}	
			

}

return 0;
}
