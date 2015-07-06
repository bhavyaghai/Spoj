#include <stdio.h>
int main()
{
	int t,n,count=0,i,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%d",&n);	count=0;
		for(i=2;i*i*i<=n;i++)
		{
			if(n%(i*i*i)==0)
				break;
			count+= n/(i*i*i);	
		}
		if(i*i*i>n)	printf("Case %d: %d\n",k,(n-count));
		else		printf("Case %d: Not Cube Free\n",k);
	}
	return 0;
}