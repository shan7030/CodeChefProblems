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
	ll n;
	cin>>n;

	ll count=0;
	
	while(1)
	{
		if(n==1)
		{
			count++;break;
		}
		ll root=sqrt(n);
		if(n==(root*root))	
		{
			count++;break;
		}
		//cout<<n<<endl;
		n=n-root*root;
		count++;
	}	

	cout<<count<<endl;	

}

return 0;
}
