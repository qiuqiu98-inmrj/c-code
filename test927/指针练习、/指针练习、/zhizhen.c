#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//为甚没函数需要指针
void swap(int*a,int*b )//函数得到的值是复印件并不能实际上操作 x 和y 
{                               //那为什么不在main函数里操作呢    为了就复用
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 3;
	int* p = &x;//声明p是指针
	int y = 5;
	int* p2 = &y;

	
	swap(p, p2);//传参穿的是指针的变量名
	printf("x = %d y = %d",x,y);





}