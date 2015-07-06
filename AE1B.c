#include <stdio.h>
int main()
{
	long long int n,k,temp,s,i=0,j,loc;
	scanf("%lld %lld %lld",&n,&k,&s);
	k *= s;
	int a[n];
	while(i<n)	scanf("%d",&a[i++]);
	//printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
	for(i=0;k>0;i++)
	{	loc =i ;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
				loc = j;
		}
		if(loc !=i)
		{
			temp = a[loc];
			a[loc] = a[i];
			a[i] = a[temp];
		}
		printf("%lld %d\n",k,a[i]);
		k -= a[i];
	}	
	printf("%lld\n",(i+1));
	return 0;
}
