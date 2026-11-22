//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int a[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int maxVal = 0, minVal = 0;
//	int maxRow = 0, maxCol = 0;
//	int minRow = 0, minCol = 0;
//
//	/* 1. 先把 9 个数全部读进来 */
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (scanf("%d", &a[i][j]) != 1)
//			{
//				printf("输入错误\n");
//				return 1;
//			}
//		}
//	}
//
//	/* 2. 数据读完，才用第一个元素当初值 */
//	maxVal = a[0][0];
//	minVal = a[0][0];
//
//	/* 3. 一次遍历，同时找最大值和最小值 */
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (a[i][j] > maxVal)
//			{
//				maxVal = a[i][j];
//				maxRow = i;
//				maxCol = j;
//			}
//			if (a[i][j] < minVal)
//			{
//				minVal = a[i][j];
//				minRow = i;
//				minCol = j;
//			}
//		}
//	}
//
//	/* 4. 打印 */
//	printf("原数组数据：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("最大值在第 %d 行第 %d 列，为 %d\n", maxRow + 1, maxCol + 1, maxVal);
//	printf("最小值在第 %d 行第 %d 列，为 %d\n", minRow + 1, minCol + 1, minVal);
//
//	return 0;
//}