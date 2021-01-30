#include<iostream>
using namespace std;
#define ll long long int

int main()
{
	
ll t;
cin>>t;

while(t--) {
	ll n;
	cin>>n;
	
	ll even=0;
	ll odd=0;

	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		if(a%2==0){
			even++;
		}		
		else
		{
			odd++;
		}	
	}
	
		if(odd%2==0)
		{
			cout<<"1"<<endl;	
		}
		else 
		{
			cout<<"2"<<endl;
		}	

}	


return 0;
}
