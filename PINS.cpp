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
	
	n=n/2;
	string h="1";
	string h1="000000000000000000000000000000000000";
	while(n>=36)
	{
		n=n-36;
		h=h+h1;
	}
	while(n--)
	{
		h=h+"0";
	} 
	cout<<"1 "<<h<<endl;


}




return 0;
}
