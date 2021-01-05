#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

	while(t--)
	{

		ll d;
		cin>>d;
		vector<ll> v(31,0);
		while(d--)
		{
			ll day,pro;
			cin>>day>>pro;
			v[day-1]=pro;
		}		
		ll q;
		cin>>q;
		for(ll i=1;i<31;i++)
		{
			v[i]=v[i]+v[i-1];
		}
		while(q--)
		{
			ll day,pro;
			cin>>day>>pro;
			if(v[day-1]>=pro)
			{
				cout<<"Go Camp"<<endl;
			}
			else
			{
				cout<<"Go Sleep"<<endl;
			}
		}
	}


return 0;
}
