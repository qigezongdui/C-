#include<stdio.h>
//
//int main()
//{
//	int a = 10;//int类型，分配4个内存单元
//	printf("%p\n", &a);//%p，用来打印地址
//	int * pa = &a;//pa用于存放a的地址，pa在C语言中叫做指针变量
//				//*说明pa是指针变量，int说明pa指向的对象是int类型的变量（此处为a）
//
//
//	*pa = 20;//*—解引用操作符，*pa通过pa里面存放的地址找到a
//	printf("%d\n", a);
//
//	return 0;
//}


int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(long*));


	return 0;
}
