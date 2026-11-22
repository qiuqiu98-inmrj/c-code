#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//阶乘练习
int fac(int n)
{
	if (n > 0)
		return fac(n - 1) * n;
	else 
		return 1;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int r = fac(n);
	printf("%d",r);



	return 0;
}
