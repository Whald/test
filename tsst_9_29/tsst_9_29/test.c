#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//#include<stdio.h>
////#include<string.h>
//#define b 90
//int main()
//{
////#define b=90;
//	3;
//	/*int a = 4;
//	const a = 4;*/
//	printf("%d\n", b);
//
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	char a[20];
//	printf("今晚你饿吗？"和"或"可">:\n");
//	scanf("%s", &a);
//	if (a == "和")
//		printf("1");
//	else
//		printf("看看");
//	return 0;
//}
//#define max(a,b)(a+b)
//int main()
//{
//	/*int a = 1;
//	int b = 2; 
//	int c=a&b;
//	printf("%d\n", c);*/
//	/*int a[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	int b = 0;
//	b = sizeof(a) / sizeof(a[0]);
//	printf("%d\n", b);*/
//	int a = 10;
//	int b = 20;
//	int c = max(a, b);
//	printf("%d\n", c);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 1;
	while (a<=100)
	{
		if (a % 2 == 1)
		  printf("%d\n", a);
		a++;
	}
	return 0;
}