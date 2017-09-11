#include <stdio.h>

#define MAXN 1000

__device__ inline long long kpow(long long a,long long k)
{
	long long b=1;
	while(k)
	{
		if(k&1LL)b*=a;
		a*=a;
		k>>=1;
	}
	return b;
}

__global__ void add(long long *a,long long *b,long long *c)
{
	c[blockIdx.x]=kpow(a[blockIdx.x],b[blockIdx.x]);
	a[blockIdx.x]=threadIdx.x;
	b[blockIdx.x]=threadIdx.y;
}

long long a[MAXN],b[MAXN];

int main()
{
	for(int i=0;i<MAXN;i++)
	{
		a[i]=i;
		b[i]=4;
	}
	b[2]=10;
	b[3]=9;
	b[4]=5;
	b[8]=3;
	b[44]=3;
	long long *dev_a;
	long long *dev_b;
	long long *dev_ans;
	size_t siz=sizeof(long long)*MAXN;
	cudaMalloc(&dev_a,siz);
	cudaMalloc(&dev_b,siz);
	cudaMalloc(&dev_ans,siz);
	cudaMemcpy(dev_a,a,siz,cudaMemcpyHostToDevice);
	cudaMemcpy(dev_b,b,siz,cudaMemcpyHostToDevice);
	add<<<MAXN,1>>>(dev_a,dev_b,dev_ans);
	cudaMemcpy(a,dev_ans,siz,cudaMemcpyDeviceToHost);
	cudaFree(dev_a);
	cudaFree(dev_b);
	cudaFree(dev_ans);
	for(int i=0;i<MAXN;i++)printf("%lld ",a[i]);
	printf("\n");
	return 0;
}
