#include <iostream>
#include<set>
using namespace std;
int main()
{
	int n;
	typedef unsigned long long int ull;
	multiset<ull> p;
	multiset<ull,greater_equal<ull> > c;
	multiset<ull>::iterator i1;
    multiset<ull,greater_equal<ull> >::iterator i2;
    scanf("%d",&n);
	while(n!=0)
	{
		ull x,i;
		ull sum=0;
		//cout<
		for(i=0;i<n;i++)
			{
				cin>>x;
				p.insert(x);
			}
		cout<<"Loop1 complete"<<endl;	
		for(i=0;i<n;i++)
			{
				cin>>x;
				c.insert(x);
			}	
		cout<<"Loop2 complete"<<endl;	
		for(i1=p.begin(),i2=c.begin();i1!=p.end();i1++,i2++)
			sum += ((*i1)*(*i2));
		cout<<sum<<endl;
		p.clear(); c.clear();
		scanf("%d",&n);
	}	
	return 0;
}