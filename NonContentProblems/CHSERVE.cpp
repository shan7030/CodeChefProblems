#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;
ll p1,p2,k;
while(t--)
{
	cin>>p1>>p2>>k;
	ll sum=p1+p2;
	//if(sum%k==0)
	//{
		sum=sum/k;
		if(sum%2==0)
		cout<<"CHEF"<<endl;
		else
		cout<<"COOK"<<endl;
			





}

return 0;
}
