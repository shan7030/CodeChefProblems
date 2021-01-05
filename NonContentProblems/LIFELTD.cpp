#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll t;
cin>>t;
string v[3];
	while(t--)
	{
		for(int i=0;i<3;i++)
		{
			cin>>v[i];
		}

		if(v[0][0]=='l' and v[1][0]=='l' and v[1][1]=='l')
		{
			cout<<"yes"<<endl;
		}
		else if(v[1][0]=='l' and v[2][0]=='l' and v[2][1]=='l')
		{
			cout<<"yes"<<endl;
		}
		else if(v[0][1]=='l' and v[1][1]=='l' and v[1][2]=='l')
		{
			cout<<"yes"<<endl;
		}
		else if(v[1][1]=='l' and v[2][1]=='l' and v[2][2]=='l')
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}

	}


return 0;
}

