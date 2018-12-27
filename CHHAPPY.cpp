#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

	ll t;
	cin>>t;
	ll n;
	while(t--)	
	{
		cin>>n;
		vector<ll> v(n);
		vector<ll> v1(n,0);
		//cout<<"\n\n\n"<<endl;
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
			v1[v[i]-1]++;
		}
		vector<ll> v2;	
		for(ll i=0;i<n;i++)
		{
			if(v1[i]>0)
			v2.push_back(i);
		}


		//cout<<endl;
		vector<ll> v3(n,0);	
		ll flag=0;

		for(ll i=0;i<v2.size();i++)
		{
			v3[v[v2[i]]-1]++;
			if(v3[v[v2[i]]-1]>=2)
				{
				flag=1;break;
				}
		}
		if(flag==0)	
		cout<<"Poor Chef"<<endl;		
		else
		cout<<"Truly Happy"<<endl;
		//cout<<endl;
		

		
		
	}	
return 0;
}


