#include<iostream>
using namespace std;
#define ll unsigned long long int

int main()
{

ll t;
cin>>t;
ll ans1,ans2,ans3,ans4,ans5;
ll x1,y1,x2,y2;

while(t--)
{
	
	ll zero=0;
	ll ten9=1000000000;

	
		cout<<"Q "<<zero<<" "<<zero<<endl;
		cin>>ans1;
		
		cout<<"Q "<<ten9<<" "<<ten9<<endl;
		cin>>ans2;

		cout<<"Q "<<ten9<<" "<<zero<<endl;
		cin>>ans3;
		
		cout<<"Q "<<zero<<" "<<ten9<<endl;
		cin>>ans4;
		
		ll x1x2=(ans1+ten9-ans3)/2;
		cout<<"Q "<<x1x2<<" "<<0<<endl;
		cin>>ans5;
		
			
		y1=ans5;
		x1=ans1-y1;	
		x2=y1+ten9-ans3;
		y2=x1+ten9-ans4;
	
		cout<<"A "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		int k;	
		cin>>k;
		if(k<0)
		{
			break;
		}

	
	
	

}


return 0;
}
