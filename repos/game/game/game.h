#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROM 9//只需更改此处
#define COL 9
#define ROMS (ROM + 2)
#define COLS (COL + 2)
//初始化棋盘
void initialboard(char board[ROMS][COLS], int r, int c, char set);
//打印棋盘
void display(char board[ROMS][COLS], int x, int y);
//设置雷
void setmine(char board[ROMS][COLS], int r, int c);
//统计指定位置周围的雷数
size_t  GetMineCount(char mine[ROMS][COLS], int x, int y);
//查找雷
void findmine(char board2[ROMS][COLS], char board3[ROMS][COLS],int r,int c);