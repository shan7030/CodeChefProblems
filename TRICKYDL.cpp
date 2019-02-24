#include<iostream>
#include<math.h>
using namespace std;
#define ll long long int


int main()
{
ll t;
cin>>t;

while(t--)
{
	ll a;
	cin>>a;
	ll start=1;
	while(pow(2,start)<a)
	{
		start++;
	}		

	ll profit=0;
	ll him=0;
	ll fri=0;
	ll i=0;
	while(him>=fri)
	{
		him=him+a;
		fri=fri+pow(2,i);i++;
	}
	cout<<i-1<<" "<<start<<endl;

}

return 0;
}
