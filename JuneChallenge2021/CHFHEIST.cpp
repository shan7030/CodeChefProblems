#include<iostream>
using namespace std;

int main()
{
    long long int t,D,d,P,Q;
    cin>>t;
    while(t--) {
        cin>>D>>d>>P>>Q;
        long long int amount = 0;
        long long int rem = D%d;
        long long int n = D/d;
        amount = P*d*(n) + ((n)*(n-1)*d*Q)/2+ rem * (P + Q *(n)) ; 
        cout<<amount<<endl;
    }

    return 0;
}