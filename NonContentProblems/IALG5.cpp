#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n,k,r;
cin>>n>>k>>r;
ll i=1;
ll sum=0;
ll count=0;
while(sum<=k)
{
	count++;
	sum=sum+(i)*r;
	i++;
	if(count>n)
	break;
}
count--;
if((n-count)<0)
count=0;
else
count=n-count;
cout<<(count)<<endl;


return 0;
}
