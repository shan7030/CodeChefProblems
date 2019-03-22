#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
	ll f,s1,s2;
	cin>>f>>s1>>s2;

	if(f==0)
	{
		ll q;
		cin>>q;
		while(q--)
		{
			ll s3,s4;
			cin>>s3>>s4;
			if((s3==s1 && s4==s2) || (s3!=s1 && s4!=s2))
			cout<<"OFF"<<endl;
			else
			cout<<"ON"<<endl;
		}
	}
	else
	{
		ll q;
		cin>>q;
		while(q--)
		{
			ll s3,s4;
			cin>>s3>>s4;
			if((s3==s1 && s4==s2) || (s3!=s1 && s4!=s2))
			cout<<"ON"<<endl;
			else
			cout<<"OFF"<<endl;
		}
	}
	
}

return 0;
}
