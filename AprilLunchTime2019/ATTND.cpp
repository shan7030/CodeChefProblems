#include<iostream>
#include<map>
#include<vector>
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
	vector<string> fname(n),lname(n);
	map<string,ll> m;
	for(ll i=0;i<n;i++)
	{
		cin>>fname[i]>>lname[i];
		m[fname[i]]++;
	}

	for(ll i=0;i<n;i++)
	{
		if(m[fname[i]]==1)
		{	
			cout<<fname[i]<<endl;
		}
		else
		{
			cout<<fname[i]<<" "<<lname[i]<<endl;
		}
	}
}	

return 0;
}

