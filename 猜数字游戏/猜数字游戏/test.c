#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("*******����1��ʼ��Ϸ******\n");
//	printf("*******����0�˳���Ϸ******\n");
//}
//
////RAND_MAX;
//void game()
//{
//	//1.���������//rand()�������������
//	//2.������
//	int input = 0;
//	int random_num = rand() % 100+1;
//	while (1)
//	{
//		printf("������µ�����");
//		scanf("%d", &input);
//		if (input > random_num)
//			printf("�´���\n");
//		else if (input < random_num)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("������:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//ִ����Ϸ
//			break;
//		case 0:
//			break;
//		default:
//			printf("�����������������\n");
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
	printf("***����1����ʼ��Ϸ***\n");
	printf("***����0���˳���Ϸ***\n");
}

void game()
{
	int i = 0;
	srand((unsigned)(time(NULL)));
	int sj = rand()%100+1;
	while (1)
	{
		printf("����������\n");
		scanf("%d", &i);
		if (i > sj)
		{
			printf("�´���\n");
		}
		else if (i < sj)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
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
			printf("����������");
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
					   printf("�����������������");
					   break;
			}
			}
	} 
	while (input);
	return 0;
}

