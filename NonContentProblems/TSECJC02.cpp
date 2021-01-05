#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

bool isPrime (ll number) { 
		for(ll i=2;i*i<=(number);i++)
		if(number%i==0)
		return false;  
	   return true;
}
int main()
{
ll t;
cin>>t;

while(t--)
{
	ll f1,f2;
	cin>>f1>>f2;
	vector<ll> first;
	first.push_back(f1);
	first.push_back(f2);

	for(ll i=0;i<18;i++)
	{
		first.push_back(first[i]+first[i+1]);
	}
	
	ll counter=0;
	for(ll i=0;i<20;i++)
	{
		if(isPrime(first[i]))
		counter++;
	}
	cout<<counter<<endl;
}

return 0;
}
