#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;
string s;
while(t--)
{
cin>>s;
int l=s.length();
ll i=0;
	if(l%2!=0)
	{
		cout<<"no"<<endl;
	}
	else
	{
		ll flag=0;
		while(i<l)
		{
			if(s[i]==s[i+1])
			{
				flag=1;			
				break;
			}
				i=i+2;
		}
		if(flag==1)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
	}

}

return 0;
}
