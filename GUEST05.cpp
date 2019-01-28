#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

ll hotel(vector<ll> &a, vector<ll> &d) {

        ll n=a.size();
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(a[i],0));
            v.push_back(make_pair(d[i]-1,1));
            
        }
        
        sort(v.begin(),v.end());
        ll curr_max=0;
        ll max_active=0;
        for(ll i=0;i<v.size();i++)
        {
           // cout<<v[i].first<<" "<<v[i].second<<endl;
            if(v[i].second==0)
            {
                curr_max++;
                if(max_active<curr_max)
                {
                    max_active=curr_max;
                }
            }
            else
            {
                curr_max--;
            }
        }
        return max_active;
    
}

typedef struct node
{
ll a;
ll d;
}node;

bool comp(node a1,node a2)
{
	
	return a1.d<a2.d;
}
int main()
{

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> a(n),d(n);
		ll max=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>d[i];
		}
		
		cout<<hotel(a,d)<<endl;
	}

return 0;
}	
