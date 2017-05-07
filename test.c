#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//do something
int main()
{
	int result=fork();
	if(result==-1)
	{
		perror("failed");
		exit(0);
	}
	else if (result==0)
	{
		printf("c1\n");
		printf("c2");
	}
	else
	{
		printf("p1\n");
		printf("p2");
		exit(0);
	}
}
