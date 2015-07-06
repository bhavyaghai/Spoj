#include <iostream>
#include<set>
using namespace std;
int main(int argc, char *argv[])
{	multiset<int,greater<int> > m;
	multiset<int, greater<int> >::iterator it;
	long long int n,k,s,count=0;
	int x;
	cin>>n>>k>>s;
	while(n--)
	{
		cin>>x;
		m.insert(x);	
	}
	k *=s;
	it = m.begin();
	while(k>0)
	{
		k -= (*it);
		it++;
		count++;
	}
	cout<<count<<endl;
	return 0;
}