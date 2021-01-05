#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll t;

cin>>t;
while(t--)
{
	string s;
	cin>>s;
	ll num1=0;
	ll num2=0;
	ll num3=0;
	ll num4=0;
	ll count1=-1;
	ll count2=-1;
	ll n=s.length();
	for(ll i=0;i<n;i++)
	{
		while(s[i]>='0' && s[i]<='9' && i<n )
		{
			num1=num1*10+(s[i]-'0');i++;
			
		}	
		if(s[i]=='+')
		{
			count1=1;
			i++;		
		}
		else if(s[i]=='-')
		{
			count1=0;
			i++;
		}
		
		while(s[i]>='0' && s[i]<='9' && i<n )
		{
			num2=num2*10+(s[i]-'0');i++;

		}
		if(s[i]=='+')
		{
			count2=1;
			i++;		
		}
		else if(s[i]=='-')
		{
			count2=0;
			i++;
		}
		
			while(s[i]>='0' && s[i]<='9' && i<n)
		{
			num3=num3*10+(s[i]-'0');i++;
	
		}	
		if(s[i]=='=')		
		i++;	
			while(s[i]>='0' && s[i]<='9' && i<n )
		{
			num4=num4*10+(s[i]-'0');i++;

		}		
	}

	if(num1+num2+num3==num4 && count1==1 && count2==1)
	{
		cout<<"Valid Equation"<<endl;
	}
	else if(num1-num2+num3==num4 && count2==1 && count1==0)
	{
		cout<<"Valid Equation"<<endl;
	}
	else if(num1+num2-num3==num4 && count1==1 && count2==0)
	{
		cout<<"Valid Equation"<<endl;
	}
	else if(num1-num2-num3==num4 && count1==0 && count2==0)
	{
		cout<<"Valid Equation"<<endl;
	}	
	else if(count1==-1 && count2==-1 && num1==num4)
	{	
		cout<<"Valid Equation"<<endl;
	}
	else if(count2==-1 && count1==0 && num1-num2==num4)
	{
			cout<<"Valid Equation"<<endl;
	}
	else if(count2==-1 && count1==1 && num1+num2==num4)
	{
		cout<<"Valid Equation"<<endl;			
	}
	else
	{
		cout<<"Invalid Equation"<<endl;
	} 
}



return 0;
}
