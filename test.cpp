#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cctype>

template<class TN>
inline void kread(TN &x)
{
    x=0;
    char c;
    bool flag=false;
    while(!isdigit(c=getchar()))
       if(c=='-')
            flag=true;
    do{
        x=x*10+c-48;
    }while(isdigit(c=getchar()));
    if(flag)x=-x;
}

template<class TN,class... ARGS>
inline void kread(TN &first,ARGS& ... args)
{
    kread(first);
    kread(args...);
}

using namespace std;

int main()
{
	for(long long i=10;i<=1000000000000LL;i*=10)
	{
		if(i%233==1)
		{
			printf("%lld",i);
			break;
		}
		else cout<<i%233<<endl;
	}
	return 0;
}

