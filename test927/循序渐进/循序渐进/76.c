#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
print(int n)
{
	if (n > 9)
		print(n / 10);

		printf("%d ",n %10);//为什么加入else反而jiu实现不了

}
int main()
{
	//顺序打印
	int num = 234;
	
	print(num);

	return 0;
}



