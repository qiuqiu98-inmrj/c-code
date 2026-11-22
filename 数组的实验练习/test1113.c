#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//实验练习一
// 
//int main()
//{
//	int i = 0;
//	int num[15];
//	for (int j = 0;j < 15;j++)
//	{
//		scanf("%d", &num[j]);
//	}
//	printf("原始数据 :");
//	for (i = 0;i < 15; i++)
//	{
//    	printf("%d ", num[i]);
//
//	}
//	printf("\n");
//	printf("删除后数据 :");
//	for (i = 0;i < 15; i++)
//	{
//		if (num[i] <= 10)
//		{
//			printf("%d ", num[i]);
//		}
//	}
//
//
//
//
//
//	return 0;
//}



///实验练习二
//封装打印函数

//要是想读M*N 个数字直接在宏中修改就可以了
//#define M 3
//#define N 3
//void Print(int  arr[M][N], int r, int c)
//{
//	for (int m = 0;m < 3;m++)
//	{
//
//		for (int n = 0;n < 3;n++)
//		{
//			printf("%d ", arr[m][n]);
//		}
//		printf("\n");
//	}
//}
//
//
//
//int main()
//{
//	
//	int min = 0;
//	int max = 0;
//	
//	int define[M][N] = {0};
//	
//
//	//循环输入数组
//	for (int i = 0;i < M;i++)
//	{
//		for (int j = 0;j < N;j++)
//		{
//			if (scanf("%d", &define[i][j])!=1)
//			{
//				return 1;//测试主程序正常返回0非正常则返回大于0 的数就是一表示异常
//			}
//		}
//	}
//	int MAX = define[0][0];
//	int MIN = define[0][0];
//	//判断数组
//	for (int i = 0;i < M;i++)
//	{
//		//确定行数
//		for (int j = 0;j < N;j++)
//		{
//			
//			if (define[i][j] > MAX)//比较每行的数据大小
//			{
//				MAX = define[i][j];
//				max = i + 1;
//			}
//			if (MIN > define[i][j])//比较每行的数据大小
//			{
//				MIN = define[i][j];
//				min = i + 1;//min也就是最小值函数所在的行数但 是第一行 0 是i的初始值所以要初始化为一
//			}                          
//		}
//	}
//	//打印原数组结果   整他吗烦人不如直接就打印数组做到一个函数里面去
//	printf("原数组数据：\n");
//	Print(define,M,N);
//
//	//准备替换
//	for (int i = 0;i < M;i++)
//	{
//		int temp;
//
//		temp = define[max-1][i];
//		define[max-1][i] = define[min][i];
//		define[min][i] = temp;
//	}
//
//	//打印新数组结果
//	printf("新数组数据：\n");
//	Print(define, M, N);
//
//	printf("最大值在第 %d 行 为 %d ", max, MAX);
//	printf("最小值在第 %d 行 为 %d ",min+1,MIN);
//    
//
//
//
//
//
//
//
//
/*return 0;
}*/



//实验练习三


int main()
{
	int soc[3][4] = {0};
	char name[3][10] = { "扎啤","zhapiba","dazhuau"};
	int average[4] = {0};
	
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			if (scanf("%d", &soc[i][j]) != 1)
			{
				return 1;//测试主程序正常返回0非正常则返回大于0 的数就是一表示异常
			}
		}
	}
	//计算平均数
	//按列计算平均数
	for (int n = 0; n < 4;n++)
	{
		int sum = 0;
		for (int m = 0;m < 3;m++)
		{

			sum += soc[m][n];
		}
		average[n] = sum / 4;
	}
	//按行计算平均数
	//此处省略
	printf("姓名\t数学\t英语\t思政\t历史\n");
	for (int m = 0;m < 3;m++)
			{
		printf("%-10s ",name[m]);
				for (int n = 0;n < 4;n++)
				{
					printf("%-5d ", soc[m][n]);
				}
				printf("\n");
				
			}
	printf("average    ");
	for (int m = 0;m < 4;m++)
	{
		printf("%-5d ", average[m]);
	}



	return 0;
}







