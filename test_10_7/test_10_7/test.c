#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//
//
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", &password);
//	printf("��ȷ�ϣ���Y/N��");
//	a = getchar();
//	if (a == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	int a = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ���Y/N��");
//	a = getchar();
//	if (a == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//
//}



//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 5)
//			continue;
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//	{
//		k++;
//		printf("%d %d",i, k);
//	}
//	return 0;
//}

//

//��һ����������
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int  k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//�۰���ҷ�
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n",mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//��д���룬��ʾ�ַ����������ƶ������м���
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//�ַ�������\0�������±�Ҫ��2.
//	int right = strlen(arr1) - 1;
//	while (left <= right)
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
//}

//ģ���������룬��������������˳�����
//int main()
//{
//	char possword[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &possword);
//		if (strcmp(possword, "asd123") == 0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����\n");
//	}
//	return 0;
//}


