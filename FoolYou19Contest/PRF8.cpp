#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

ll sum=0;

for(ll i=1;i*i<=n;i++)
{
	if(n%i==0)
	{
		sum=sum+i;
		if(i!=1 && n/i!=i)
		sum=sum+n/i;
	}
}

if(sum==n && n!=1)
{
	cout<<"Perfect"<<endl;
}
else
{
	cout<<"Not Perfect"<<endl;
}

return 0;
}
