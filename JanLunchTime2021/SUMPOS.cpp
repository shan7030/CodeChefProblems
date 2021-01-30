#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--) {
	ll a,b,c;
	cin>>a>>b>>c;

	if((a+b)==c || (b+c)==a || (a+c)==b)
	{
		cout<<"YES"<<endl;
	}	
	else
	{
		cout<<"NO"<<endl;
	}
		
}

}
