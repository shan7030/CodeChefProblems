#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

ll r,c,k;
while(t--)
{

	cin>>r>>c>>k;
	int a[8][8]={0};
	a[r-1][c-1]=1;
	ll to=2;
	while(k--)
	{
		ll gh=0;

		for(ll i=0;i<8;i++)
		{
			
			for(ll j=0;j<8;j++)
			{
				if(a[i][j]==(to-1) )
				{

					if((i+1)<8 && a[i+1][j]==0)
					{
						a[i+1][j]=to;
					}
					if((i-1)>=0 && a[i-1][j]==0)
					a[i-1][j]=to;
					if((j-1)>=0 && a[i][j-1]==0)
					a[i][j-1]=to;
					if((j+1)<8 && a[i][j+1]==0)
					a[i][j+1]=to;
					if((i-1)>=0 && (j-1)>=0 && a[i-1][j-1]==0)
					a[i-1][j-1]=to;
					if((i+1)<8 && (j-1)>=0 && a[i+1][j-1]==0)
					a[i+1][j-1]=to;
					if((i+1)<8 && (j+1)<8 && a[i+1][j+1]==0)
					a[i+1][j+1]=to;
					if((i-1)>=0 && (j+1)<8 && a[i-1][j+1]==0)
					a[i-1][j+1]=to;


					gh=1;

				

				}
			}

		}
		
	if(gh==1)
	to++;	
	}
	ll counter=0;
	for(ll i=0;i<8;i++)
	{
		for(ll j=0;j<8;j++)
		{
			//cout<<a[i][j]<<" ";
			if(a[i][j])
			counter++;
		}
		//cout<<endl;

	}
	cout<<counter<<endl;
	

}



return 0;
}
