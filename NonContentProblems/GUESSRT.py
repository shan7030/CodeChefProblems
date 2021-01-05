

def power(x,y,m):
	if y==0:
		return 1
	p=power(x,y/2,m)%m
	p=(p*p)%m
	
	if y%2==0:
		return p
	return (x*p)%m


def power1(a,m):
	return power(a,m-2,m)	

def pow1(x,y,p):
	res=1
	x=x%p
	while y>0:
		if y&1 :
			res=(res*x)%p
	
		y=y>>1
		x=(x*x)%p
	res=(res*k)%p
	return res


t = input()

for num in range(0,t):
	n,k,m = map(int, raw_input().split()) 

	if m==1:
		p1=1
		q1=n
		ans=power1(q1,1000000007)*p1
		print(ans%1000000007)
	else:
		if m%2==1:
			u=m/2+2
			p1=pow1(n,(u-1),1000000007)-pow1((n-1),(u-1),1000000007)
			q1=pow1(n,(u-1),1000000007)
			ans=power1(q1,1000000007)*p1
			print(ans%1000000007)
		else:
			u=m/2+1
			p1=(pow1(n,(u-1),1000000007)*(n+k))-(pow1((n-1),(u-1),1000000007)*(n+k))+(pow1((n-1),(u-1),1000000007))
			q1=pow1(n,(u-1),1000000007)*(n+k)
			ans=power1(q1,1000000007)*p1
			print(ans%1000000007)
		


