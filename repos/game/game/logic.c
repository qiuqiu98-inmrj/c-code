#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void initialboard(char board[ROMS][COLS],int r,int c,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < r ;i++)
	{
		for (j = 0; j < c;j++)
		{
			board[i][j] = set;
		}
	}
}
	void display(char board[ROMS][COLS], int x, int y)
	{
		int i = 0;
		int j = 0;
		for (j = 0; j <= y;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
		for (i = 1;i <= x;i++)
		{
			printf("%d ", i);
			for (j = 1; j <= y;j++)
			{
				printf("%c ", board[i][j]);//此处就带有一个空格 
			}
			printf("\n");
		}
	}
void setmine(char board[ROMS][COLS],int r,int c)
{
	int count = 10;
	while (count)
	{
	
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
size_t GetMineCount(char mine[ROMS][COLS], int x, int y)
{
	return
		mine[x-1][y-1] + mine[x-1][y] + mine[x][y-1] + mine[x+1][y-1]
 + mine[x+1][y]   + mine[x+1][y+1] + mine[x][y+1] + mine[x-1][y+1]
 - 8 *'0';
}
void findmine(char mine[ROMS][COLS], char show[ROMS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int wein = 0;
	//判定输入范围合法
	while (wein<r*c -10)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			//除了要控制边界输入是否真确  还要避免重复的判定
			if (show[x][y] != ' * ')//扫码了       ////////////////////////他妈的居然会在这里出错       ' 0 '   操居然是三个字符  与打印的 * * *  一样有两个空格
            {                                                  
				if (mine[x][y] ==  '1')//哈哈这是被炸死了
				{
					printf("你真菜哈哈哈 菜就多练\n");
					display(mine, ROM, COL);//展示棋盘背面结果   打印结果不需要打印边界 所以只需传入 ROM 和 COL 即可
					break;
				}
				//那要是没被炸死  就要告知周围的九宫格内共有几个雷
				 else 
				{
					//注意此处 x 为 行 y 为列
					//服了又要开始遍历l
					//先搞个函数吧
				    size_t count = GetMineCount(mine,x,y);//还有雷是在 mine 这个数组中
					//统计好了以后 将 count放入到 展示的数组中去  也就  show 数组
					show[x][y] = (char)count + '0';
					display(show, ROM, COL);
					wein++;
				}
			}
		}
		else
		{
			printf("请重新输入坐标 当前坐标不合理");
		}
	}
	if (wein == r * c - 10)
	{
		printf("呵呵恭喜你排雷成功");
		display(mine, ROM, COL);
	}


}

