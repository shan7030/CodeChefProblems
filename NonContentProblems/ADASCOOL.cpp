#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll t;
cin>>t;
ll m,n;

while(t--)
{
	cin>>n>>m;
	if(n%2==1 && m%2==1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
}

return 0;
}
