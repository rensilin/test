#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

class iter:public iterator<std::random_access_iterator_tag,int>{
private:
	int n;
public:
	iter()
	{
	}
	iter(int i)
	{
		n=i;
	}
	int operator*()
	{
		return n;
	}
	friend bool operator!=(const iter &a,const iter &b)
	{
		return a.n!=b.n;
	}
	void operator+=(int i)
	{
		n+=i;
	}
	void operator++()
	{
		n++;
	}
	difference_type operator-(const iter &o)
	{
		return n-o.n;
	}
};

int main()
{
	iter i=lower_bound(iter(0),iter(11),4);
	cout<<*i<<endl;
	return 0;
}

