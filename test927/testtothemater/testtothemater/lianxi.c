#define _CRT_SECURE_NO_WARNINGS
//函数的递归
#include<stdio.h>
FAC(int j)
{
	if (j == 0)
		return 1;
	else
		return FAC(j - 1) * j;//再者就是 递归的条件
}
int main()
{
	int j = 0;
	scanf("%d",&j);
	int r = FAC(j);
	printf("%d",r);
}


