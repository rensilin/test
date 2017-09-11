#include<stdio.h>

int main()
{
	int a[9],n,k=0;
	scanf("%d",&n);
	int i;
	for(a[1]=0;a[1]<10;a[1]++)
		for(a[2]=0;a[2]<10;a[2]++)
			for(a[3]=0;a[3]<10;a[3]++)
				for(a[4]=0;a[4]<10;a[4]++)
					for(a[5]=0;a[5]<10;a[5]++)
						for(a[6]=0;a[6]<10;a[6]++)
							for(a[7]=0;a[7]<10;a[7]++)
								for(a[8]=0;a[8]<10;a[8]++)
								{
									for(i=1;a[i]==0&&i<9;i++);
									k+=9-i;
									if(k>=n)
									{
										printf("%d\n",a[8-k+n]);
										return 0;
									}
								}
	return 0;
}
