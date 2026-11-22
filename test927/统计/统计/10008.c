#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	///基础这样写可以但是只能得到整数
	int num = 0;
	int count = 0;
	scanf("%d",&num);
	while (num)
	{
		int x = num % 2;
		num = num / 2;
		if (x - 1 == 0)
			count++;
	}
	printf("%d",count);




	return 0;
}