#define _CRT_SECURE_NO_WARNINGS
//监视
#include<stdio.h>
int main()
{
	//调试练习
	int i = 0;
	int n = 0;
	int j = 1;
	int sum = 0;
	int input = 5;
	
	for (n = 1;n <= input;n++)
	{
		for (int i = 1;i <= n;i++)
		{
			j *= i;
		}
		sum += j;

  }
	printf("%d",sum);


	return 0;
}
