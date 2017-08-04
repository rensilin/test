#include <bits/stdc++.h>  
using  namespace  std;  
typedef long long ll;  

ll pow_mod(ll x, ll n, ll mod){  
	ll res=1;  
	while(n>0){  
		if(n&1)res=res*x%mod;  
		x=x*x%mod;  
		n>>=1;  
	}  
	return res;  
}  

int euler_phi(int n)  
{  
	int m=(int)sqrt(n+0.5);//n的素数范围在[1,sqrt(n)]之间  
	int ret=n;//初始化返回值  
	for(int i=2;i<=m;++i)if(!(n%i))//如果i是n的因子(可以保证是素因子)  
	{  
		ret=ret/i*(i-1);//计算结果  
		while(!(n%i))n/=i;//将i作为因子把n“除尽”  
	}  
	if(n>1)ret=ret/n*(n-1);//n可能也是质数  
	return ret;  
}  

ll f(int x){  
	if(x==1)return 0;  
	int phi=euler_phi(x);  
	return pow_mod(2, f(phi)+phi, x);  
}  

int  main(){  
	//  std::ios::sync_with_stdio(false);  
	//  std::cin.tie(0);  

	int T;  
	scanf("%d",&T);  
	while(T--){  
		int p;  
		scanf("%d",&p);  
		printf("%lld\n",f(p));  
	}  
	return 0;  
}  
