//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int Max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//
//	printf("请输入需要比较的两个数：");
//	scanf("%d %d", &x, &y);
//
//	z=Max(x, y);
//
//	printf("%d为较大数", z);
//
//	return 0;
//}


//
//void Swap1(int x, int y)
//{
//	int z = 0;
//
//	z = x;
//	x = y;
//	y = z;
//
//	return;
//}


//void Swap2(int *x, int *y)
//{
//	int z = 0;
//
//	z = *x;
//	*x = *y;
//	*y = z;
//		
//	return;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前a=%d,b=%d\n", a, b);
//
//	//Swap1(a, b);
//	Swap2(&a, &b);
//
//	printf("交换后a=%d,b=%d", a, b);
//
//	return 0;
//}
//



//1.写一个函数，判断一个数是不是闰年。

//int Runnian(int a)
//{
//	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		printf("请输入要判断的年份：");
//		scanf("%d", &i);
//
//		j = Runnian(i);
//
//		if (j == 1)
//			printf("%d是闰年\n", i);
//		else
//			printf("%d不是闰年\n", i);
//
//	}
//	return 0;
//}



//2.写一个函数判断一个数是不是素数

//#include<math.h>
//int Sushu(int a)
//{
//	int b = 2;
//	for (b = 2; b <= sqrt(a); b++)
//	{
//		if (a % b == 0)
//			return 0;
//	}
//
//	return 1;//上述循环若未提前结束，则最终将b变为sqrt(a)+1后不再满足循环条件，从而结束循环，也就意味着a必然是素数。
//}
//	
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		printf("请输入需要判断的数：");
//		scanf("%d", &i);
//		j = Sushu(i);
//		if (j == 1)
//			printf("%d是素数\n", i);
//		else
//			printf("%d不是素数\n", i);
//	}
//	return 0;
//}



//3.写一个函数，实现一个整型有序数组的二分查找
//int Search(int a, int arr1[],int n) //实际上传递过来的是arr1的首地址，故而应当是 int Search(int a, int *arr1,int n) 
//{
//	int left = 0;
//	int right = n-1;
//	int middle = (left + right) / 2;
//	while (left <= right)
//	{
//		if (a > arr1[middle])
//		{
//			left = middle + 1;
//			middle = (left + right) / 2;
//		}
//		if (a <arr1[ middle])
//		{
//			right = middle - 1;
//			middle = (left + right) / 2;
//		}
//		if (a == arr1[middle])
//			return middle;
//	}
//	return -1;
//}
//int main()
//{
//	int x = 0;//要查找的值
//	int arr1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//待查找的数组
//	int y = -1;//x在arr1中的下标值，若arr1中不存在x，则y为-1 （若arr1中有多个x值，则只返回正向顺序下标值的第一个下标值）
//	int n = sizeof(arr1)/sizeof(arr1[0]);
//	while (1)
//	{
//		printf("请输入待查找的值：");
//		scanf("%d", &x);
//		y = Search(x, arr1, n);
//		if (y != -1)
//			printf("%d在数组arr1中的下标为%d\n", x, y);
//		else
//			printf("数组arr1中不存在%d\n", x);
//	}
//	return 0;
//}



//4.写一个函数，每调用一次这个函数，就会将num的值增加1

//
//void Add(int* a)
//{
//	(*a)++;
//	return;
//}
//
//
//int main()
//{
//	int num = 0;
//	int i = 1;
//
//	for (i = 1; i < 10; i++)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}
//
//	return 0;
//}


//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}




//练习：接收一个整型值，按照顺序打印它的每一位，例如：接收1234，打印1 2 3 4.
//
//int Print(int x)
//{
//	if (x > 9)                    //如果小于10，那么直接打印
//	{
//		Print(x/ 10);
//	}
//	printf("%d ", x % 10);        //函数是调用栈来实现的，特点是后进先出
//
//	return;
//}
//
//
//int main()
//{
//	int a = 0;
//
//	printf("请输入要输出的值：");
//	scanf("%d", &a);
//
//	Print(a);
//
//	return 0;
//}




//void test(x)
//{
//
//	if (x < 10000)
//	{
//		test(x + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}




//练习：编写函数，不允许创建临时变量，求字符串的长度      即模拟实现strlen



//int my_strlen(char* x)     //指针变量x接收了数组arr的首地址
//{
//	if(*x != '\0')
//		return 1 + my_strlen(x+1); // x+1意思是让x向后移动一个元素占据内存空间的长度，指向下一个元素，
//									//注意：此处若是整型变量，就要向后移动四个字节，因为每个整型元素占据四个字节的长度。
//
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//}
//
//
//
////练习：求n！的阶乘
//
//
//int Fac(x)
//{
//	if (x <=1)
//		return 1;
//	else
//		return x*Fac(x - 1);
//}
//
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int ret = 1;
//
//	printf("请输入要求的值：");
//	scanf("%d", &i);
//
//	// //迭代
//	//for (j = 1; j <= i; j++)
//	//{
//	//	ret *= j;
//	//}
//
//	//递归
//	ret = Fac(i);
//	printf("%d", ret);
//	return 0;
//}



//练习：求第n个斐波那契数      1 1 2 3 5 8 13 21 34 55		 每一个斐波那契数等于前两个数之和
//
//int fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);
//
//}


//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a= b;
//		b = c;
//		x--;
//	}
//	return c;
//
//}
//
//int main()
//{
//	int a = 1;
//	int b = 0;
//	printf("请输入要求的第n个数：");
//	scanf("%d",& b);
//	a = fib(b);
//	printf("第%d个斐波那契数为:%d",b ,a);
//	return 0;
//}