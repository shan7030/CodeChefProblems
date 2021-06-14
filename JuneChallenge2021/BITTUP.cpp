#include<iostream>
using namespace std;
#define ll long long int


ll power(ll x, ll y) {
    ll modulo = 1000000007;
    ll res = 1;

    while(y) {
        
        if(y & 1) {
            res= (res *x) % modulo;
        }


        x = (x * x) % modulo;
        
        y=y>>1; // y=y/2
    }
    return res; 
}


int main() {
    int t;
    ll n,m;
    cin>>t;

    while(t--) {
        cin>>n>>m;
        cout<<power(power(2,n)-1,m)<<endl;
    }

    return 0;
}