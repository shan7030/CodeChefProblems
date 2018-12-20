#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{	
		ll n,x,y;
		cin>>n;
		vector<ll> v(n);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		cin>>x>>y;
		sort(v.begin(),v.end());
		ll j=n-1;
		double ans=0;
		for(ll i=0;i<(n/2);i++)
		{
			ll x1=(v[i]-x);
			ll y1=(-y);
			ll x2=(v[j]-x);
			ll y2=(-y);
			double num=x1*x2+y1*y2;
			double den=sqrt(x1*x1+y1*y1);
			double den2=sqrt(x2*x2+y2*y2);	
			double den3=den*den2;
			    std::cout << std::fixed;
			ans=ans+acos(num/den3);			
		
			j--;
		}
		cout<<setprecision(12)<<ans;
		cout<<endl;


	}

return 0;
}
