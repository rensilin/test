#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

void errprint(char *s)
{
	perror(s);
	exit(1);
}

int main(int argc,char *argv[])
{
	if(argc!=2)errprint("参数错误");
	int ifd=read(argv);
	return 0;
}

