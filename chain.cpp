#include<stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t,n,k,i,count,d,x,y;
	freopen("chain.txt","r",stdin);
	cin>>t;
	while(t--)
	{	
		cin>>n>>k;
		int a[n+1][2];
		for(i=1;i<=n;i++)
		{
			a[i][0] = i;
			a[i][1] = 50001;
		}
		
		count=0;
		for(i=0;i<k;i++)
		{
			cin>>d>>x>>y;
			if(d==1)
			{
				if(x>y)  a[x][0] = a[y][0];
				else     a[y][0] = a[x][0];
			}	
			else
			{
				if(x>n || y>n || x==y) count++;
				if(a[x][1]==50001 && a[y][1]==50001) 
				{
					a[]
				}	
			}
		}
		cout<<count<<endl;			
	}
	return 0;
}