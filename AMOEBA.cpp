#include <iostream>
using namespace std;
int main()
{
	long x;
	while(scanf("%ld",&x)!=EOF)
	{
		long int r=6,sum=1,day=0,mod=1,temp;
		temp = x;
		while(x>0)
		{
			mod *= 10;
			x /= 10;
		}
		while(sum<=10000000000l)
		{
			if(sum%mod==x)
				break;
			r = (r%10000000000l)*6;
			sum = (r-1)/5; 
		}
		if(k==10)	cout<<-1<<endl;
		else	cout<<day<<endl;
	}
	return 0;
}