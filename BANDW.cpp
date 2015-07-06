#include <iostream>
using namespace std;
int main()
{
	char b[500],n[500];
	long count,i,flag;
	//cin>>b>>n;
	cin>>b>>n;
	while(1)
	{
		if(b[0]=='*' && n[0]=='*') return 0;
		count=0; flag=0;
		for(i=0;b[i]!='\0';i++)
		{
			if(b[i]==n[i])
			{
				if(flag==1) flag=0;
				continue;
			}	
			if(flag==0) 
			{	flag=1;  count++; }
		}	
		cout<<count<<endl;
		//printf("%ld\n",count);
		//scanf("%s %s",&b,&n);
		cin>>b>>n;
	}	
	return 0;
}
