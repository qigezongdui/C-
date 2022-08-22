#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值。
//	*p = 10;//非法访问内存
//
//	return 0;
//}


//int main()
//{
//	int arr1[10] = { 0};
//	int* p = arr1;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//
//		*p = i;//越界访问
//		p++;
//
//	}
//	return 0;
//}



//int* test()
//{
//	int a = 10;         //进入test（），a创建，而return &a;之后，a出了test函数，也就不再起作用，
//						//它的空间被释放，p也就找不到a原先的具体地址了。
//	return &a;
//
//
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };
//	
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//}



//int main()
//{
//	int arr[10] = { 0 };									//{ 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i <= 9; i++)
//	{
//		*(p + i) = i;
//
//		printf("arr[%d]=%d ", i, arr[i]);
//		printf("arr[%d]=%d \n", i,*( p+i));
//
//	}
//
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//
//	int* pa = &a;			//pa是一级指针变量        
//							//*pa表示pa是指针变量，int表示pa指向的变量是int型
//
//	int* * ppa = &pa;	//ppa是二级指针变量       
//						//*ppa表示ppa是指针变量，int*表示ppa指向的变量是一级整型指针
//
//
//	return 0;
//}






int main()
{
	int arr[10];//整型数组——存放整型变量的数组就是整型数组
	char ch[5];//字符数组——存放字符变量的数组就是字符数组
	int* parr[5];//指针数组——存放指针变量的数组就是指针数组，这里是整型指针数组
	char* pch[5];//指针数组——存放指针变量的数组就是指针数组，这里是字符指针数组

	return 0;
}


