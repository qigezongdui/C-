#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//int main()
//{
//	/*int i = 0;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 1,2,3 };
//
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	
//
//	int j = sizeof(arr3) / sizeof(arr3[0]);
//	printf("%d", j);
//
//	int arr4[5] = { 1,2,3,4,5,6 };
//
//	char arr6[10] = "1234";
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%c ", arr6[i]);
//
//	}*/
//
//
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };*/
//	//char arr0[] = "abcd";
//	//arr[4] = 100;
//	//printf("%d",arr[4] );
//
//	/*int j = sizeof(arr0) / sizeof(arr0[0]);
//	int k = strlen(arr0);
//	printf("j=%d\n", j);
//	printf("k=%d", k);*/
//
//}



//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%p\n", &arr1[i]);
//	}
//
//}


//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9, };
//	int arr3[3][4] = { {1,2,3,4},{1,2},{3,4} };
//	int arr4[][4]= { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			printf("&arr3[%d][%d]=%p\n",i,j ,&arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//ð������

//
//void Swap(int* p, int* q)
//{
//	int tmp = 0;
//	tmp = *p;
//	*p = *q;
//	*q = tmp;
//
//}
//
//void Bubble_sort(int arr2[], int x)
//{
//	int a = 0; 
//	int b = 0;
//	for (a = 0; a <= x - 2; a++)    //��Ҫ���������
//	{
//		int flag = 1;
//		for (b = 0; b <= x - a-2; b++)   //ÿ����Ҫ�ȽϵĴ���
//		{
//			if (arr2[b] > arr2[b+ 1])
//			{ 
//				Swap(&arr2[b], &arr2[b+ 1]);
//				flag = 0;
//			}
//		}
//		if (flag == 1)      //�Ż�������ĳһ����������У�δ������������˵����ʱ����Ԫ���Ѿ����������ٽ��бȣ�ֱ��������
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int arr1[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int n = sizeof(arr1) / sizeof(arr1[0]);
//
//
//	Bubble_sort(arr1, n);
//	
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}
