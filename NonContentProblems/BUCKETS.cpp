#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

ll n,k;
cin>>n>>k;
float a[n][k];
vector<float> v(k,0);
vector<float> sum(n,0);
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<k;j++)
	{
		cin>>a[i][j];
		sum[i]=sum[i]+a[i][j];
		
	}
	
}
for(ll i=1;i<n;i++)
{
	for(ll j=0;j<k;j++)
	{
		a[i][j]=a[i][j]+a[i-1][j]/sum[i-1];
	}	

}

float sum2=0;
for(ll i=0;i<k;i++)
{
	sum2=sum2+a[n-1][i];
}

for(ll i=0;i<k;i++)
{
	cout<<setprecision(9)<<fixed;
	cout<<(a[n-1][i]/sum2)<<" ";	
}

return 0;
}
