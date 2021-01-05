#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
ll n,k,v;

cin>>n>>k>>v;
ll sum=0;

for(ll i=0;i<n;i++)
{
	ll k1;
	cin>>k1;
	sum=sum+k1;
}	

	if((v*(n+k))<sum || (v*(n+k)-sum)%k!=0 || (v*(n+k)-sum)==0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<(v*(n+k)-sum)/k<<endl;
	}

}

return 0;
}
