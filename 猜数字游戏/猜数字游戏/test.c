#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("*******输入1开始游戏******\n");
//	printf("*******输入0退出游戏******\n");
//}
//
////RAND_MAX;
//void game()
//{
//	//1.生成随机数//rand()生成随机数函数
//	//2.猜数字
//	int input = 0;
//	int random_num = rand() % 100+1;
//	while (1)
//	{
//		printf("请输入猜的数字");
//		scanf("%d", &input);
//		if (input > random_num)
//			printf("猜大了\n");
//		else if (input < random_num)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//执行游戏
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf("***输入1，开始游戏***\n");
	printf("***输入0，退出游戏***\n");
}

void game()
{
	int i = 0;
	srand((unsigned)(time(NULL)));
	int sj = rand()%100+1;
	while (1)
	{
		printf("请输入数字\n");
		scanf("%d", &i);
		if (i > sj)
		{
			printf("猜大了\n");
		}
		else if (i < sj)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}

}
int main()
{

	int input = 0;
	do
	{
		menu();
			printf("请输入数字");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
			{
					   printf("输入错误，请重新输入");
					   break;
			}
			}
	} 
	while (input);
	return 0;
}

