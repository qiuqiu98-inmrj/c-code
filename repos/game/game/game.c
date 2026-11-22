#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void game()
{
	char mine[ROMS][COLS];//但是固定行和列就会比较麻烦 不如将常量直接在函数外部进行宏定义
	char show[ROMS][COLS];//初始化字符不可能直接就= {} 所以要写函数 
	//初始化棋盘函数  //初始化背景板全部为 * 
	initialboard(mine, ROMS, COLS,'0');
	initialboard(show, ROMS, COLS, '*');
	display(show,ROM,COL);
	//display(mine,ROM,COL);
	//将表格使用坐标轴方式展现  那只要写上雷坐标判断输入的坐标
	//升成随机坐标
	//所以开始布置雷的坐标
	setmine(mine, ROM, COL);//要先在头文件中声名
	//display(mine, ROM, COL);  此函数只是单纯用于 检验 雷布置的是否正确
	//现在开始排查雷
findmine(mine,show,ROM,COL);//这个函数要做两件事 一 将 排查坐标是否是雷  二 是将信息放入到 全是 * 的数组中并且将他们展示出来

}

void meun()
{
	
	printf("+++++++++++++++++++++++\n");
	printf("+++++++++1    play       +++\n");
	printf("+++++++++++++++++++++++\n");
	printf("+++++++++ 0    exit       +++\n");
	printf("+++++++++++++++++++++++\n");
	
}
int main()  
{
	//设计随机种子
	srand((unsigned)time(NULL));
	int input;
	do
	{
		meun();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("我丢你老母，重输\n");
		}
	
	} while (input);

	return 0;
}