#define _CRT_SECURE_NO_WARNINGS 1

////计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("请输入数字\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算1！+2！+3!
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 3; i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//在一个有序的数组中查找一个数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int mid = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("请输入一个数");
//	scanf("%d", &a);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (a < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//编写代码，演示多字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome come to bit";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//
//}

//模拟密码登入，若3次密码错
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", &arr);
//		if (strcmp(arr,"abc123")==0)
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else
//		{
//			if (i == 3)
//				continue;
//			printf("输入错误，请重新输入\n");
//		}
//	}
//	if (i > 3)
//	{
//		printf("三次均错误，密码已被锁\n");
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "hallo word";
//	memset(arr, '4', 3);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(n); a++)
//	{
//		if (n %a == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
			left =mid+1;
		else if (arr[mid]>k)
			right =mid- 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//写一个函数，函数要传递过去数组，k，元素个数
	int ret=binary_search(arr, k,sz);
	if (ret == -1)
		printf("找不到\n");
	else
		printf("找到了，下标是：%d\n", ret);
	return 0;
}