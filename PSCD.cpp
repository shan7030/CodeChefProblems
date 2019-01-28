#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{

	string s;
	cin>>s;
	ll n=s.length();
	for(ll i=0;i<n;i++)
	{
		ll diff=s[i]-48;
		ll diff2=9-diff;
		if(diff2>diff)
		{
			s[i]=diff2+48;
		}
	}
	cout<<s<<endl;

}

return 0;
}
