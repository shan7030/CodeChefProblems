#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long int
#define pii pair<ll, ll>

typedef struct node
{
ll a,b;
}node;

typedef struct node2
{
ll a,b,diff;
}node2;


bool comp(node2 f1,node2 f2)
{
	return f1.diff<f2.diff;
}

int main()
{

ll t;
cin>>t;

while(t--)
{
	ll n;
	cin>>n;

	vector<node2> v;
	map<pii,ll> m;
	for(ll i=0;i<n;i++)
	{
		node2 hj;
		cin>>hj.a;
		cin>>hj.b;
		m[{hj.a,hj.b}]++;
		if(hj.a<=0 && hj.b<=0)
		{
			hj.diff=abs(hj.a)+hj.b;
		}
		else if(hj.a>=0 && hj.b>=0)
		{
			hj.diff=hj.b-hj.a;
		}
		else 
		{
			hj.diff=abs(hj.a)+hj.b;
		}
		if(m[{hj.a,hj.b}]==1)
		v.push_back(hj);
	}

	sort(v.begin(),v.end(),comp);
	ll mindif=v[0].diff;

	ll i=0;
	ll flag=0;
	while(i<v.size() && v[i].diff==mindif)
	{
		if(m[{v[i].a,v[i].b}]%2==1)
		{
			flag=1;break;
		}
		
		i++;
	}

	if(flag==0)
	{
		cout<<"Shivam"<<endl;
	}
	else
	{
		cout<<"Akash"<<endl;
	}

}
return 0;
}
