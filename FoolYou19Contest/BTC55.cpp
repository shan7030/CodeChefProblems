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

	ll count=0;
	ll flag=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='/')
		count++;
		else 
		count--;
	
		if(count<0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
		cout<<"Irregular since Childhood."<<endl;
	}
	else
	{
		cout<<"Regular since Childhood."<<endl;
	}
}

return 0;
}
