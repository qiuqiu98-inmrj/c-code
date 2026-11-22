#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n = 0;
	scanf_s("%d",&n);
	while (n)
	{
		printf("%d",n % 10);
		n = n / 10;



	}





	return 0;
}
