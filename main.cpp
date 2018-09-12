#include<stdio.h>
#include"sum.h"
int main()
{
	int res=0;
	for(int i=1;i<=100;i++){
		res=sum(res,i);
	}
	printf("%d",res);
	return 0;
}