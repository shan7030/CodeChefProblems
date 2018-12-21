#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

typedef struct node
{
ll a;
ll c;
}node;


typedef struct node1
{
ll s;
ll no;
}node1;

bool comp(node a1,node a2)
{
	if(a1.c==a2.c)
		return a1.a<a2.a;
		
return a1.c<a2.c;
	
}

bool comp1(node1 a1,node1 a2)
{
	return a1.s<a2.s;
}
int main()
{
ll p,s;
cin>>p>>s;
vector<node> v;
ll ko=1;
while(p--)
{
	vector<ll> scores(s),no(s);
	vector<node1> fg(s);
	for(ll i=0;i<s;i++)
	{
		cin>>scores[i];
	}
		
	
	for(ll i=0;i<s;i++)
	{
		cin>>no[i];
		node1 r;
		r.s=scores[i];
		r.no=no[i];
		fg[i]=r;
	}
	sort(fg.begin(),fg.end(),comp1);
	ll counter=0;
	for(ll i=1;i<s;i++)
	{
		if(fg[i-1].no>fg[i].no)
		counter++;
	}
	node f;
	f.a=ko++;
	f.c=counter;
	v.push_back(f);
	
	
}

sort(v.begin(),v.end(),comp);
ko--;
for(ll i=0;i<ko;i++)
{
cout<<v[i].a<<endl;
}


return 0;
}

