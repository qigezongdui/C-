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
//	printf("��������Ҫ�Ƚϵ���������");
//	scanf("%d %d", &x, &y);
//
//	z=Max(x, y);
//
//	printf("%dΪ�ϴ���", z);
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
//	printf("����ǰa=%d,b=%d\n", a, b);
//
//	//Swap1(a, b);
//	Swap2(&a, &b);
//
//	printf("������a=%d,b=%d", a, b);
//
//	return 0;
//}
//



//1.дһ���������ж�һ�����ǲ������ꡣ

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
//		printf("������Ҫ�жϵ���ݣ�");
//		scanf("%d", &i);
//
//		j = Runnian(i);
//
//		if (j == 1)
//			printf("%d������\n", i);
//		else
//			printf("%d��������\n", i);
//
//	}
//	return 0;
//}



//2.дһ�������ж�һ�����ǲ�������

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
//	return 1;//����ѭ����δ��ǰ�����������ս�b��Ϊsqrt(a)+1��������ѭ���������Ӷ�����ѭ����Ҳ����ζ��a��Ȼ��������
//}
//	
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		printf("��������Ҫ�жϵ�����");
//		scanf("%d", &i);
//		j = Sushu(i);
//		if (j == 1)
//			printf("%d������\n", i);
//		else
//			printf("%d��������\n", i);
//	}
//	return 0;
//}



//3.дһ��������ʵ��һ��������������Ķ��ֲ���
//int Search(int a, int arr1[],int n) //ʵ���ϴ��ݹ�������arr1���׵�ַ���ʶ�Ӧ���� int Search(int a, int *arr1,int n) 
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
//	int x = 0;//Ҫ���ҵ�ֵ
//	int arr1[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//�����ҵ�����
//	int y = -1;//x��arr1�е��±�ֵ����arr1�в�����x����yΪ-1 ����arr1���ж��xֵ����ֻ��������˳���±�ֵ�ĵ�һ���±�ֵ��
//	int n = sizeof(arr1)/sizeof(arr1[0]);
//	while (1)
//	{
//		printf("����������ҵ�ֵ��");
//		scanf("%d", &x);
//		y = Search(x, arr1, n);
//		if (y != -1)
//			printf("%d������arr1�е��±�Ϊ%d\n", x, y);
//		else
//			printf("����arr1�в�����%d\n", x);
//	}
//	return 0;
//}



//4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1

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




//��ϰ������һ������ֵ������˳���ӡ����ÿһλ�����磺����1234����ӡ1 2 3 4.
//
//int Print(int x)
//{
//	if (x > 9)                    //���С��10����ôֱ�Ӵ�ӡ
//	{
//		Print(x/ 10);
//	}
//	printf("%d ", x % 10);        //�����ǵ���ջ��ʵ�ֵģ��ص��Ǻ���ȳ�
//
//	return;
//}
//
//
//int main()
//{
//	int a = 0;
//
//	printf("������Ҫ�����ֵ��");
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




//��ϰ����д����������������ʱ���������ַ����ĳ���      ��ģ��ʵ��strlen



//int my_strlen(char* x)     //ָ�����x����������arr���׵�ַ
//{
//	if(*x != '\0')
//		return 1 + my_strlen(x+1); // x+1��˼����x����ƶ�һ��Ԫ��ռ���ڴ�ռ�ĳ��ȣ�ָ����һ��Ԫ�أ�
//									//ע�⣺�˴��������ͱ�������Ҫ����ƶ��ĸ��ֽڣ���Ϊÿ������Ԫ��ռ���ĸ��ֽڵĳ��ȡ�
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
////��ϰ����n���Ľ׳�
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
//	printf("������Ҫ���ֵ��");
//	scanf("%d", &i);
//
//	// //����
//	//for (j = 1; j <= i; j++)
//	//{
//	//	ret *= j;
//	//}
//
//	//�ݹ�
//	ret = Fac(i);
//	printf("%d", ret);
//	return 0;
//}



//��ϰ�����n��쳲�������      1 1 2 3 5 8 13 21 34 55		 ÿһ��쳲�����������ǰ������֮��
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
//	printf("������Ҫ��ĵ�n������");
//	scanf("%d",& b);
//	a = fib(b);
//	printf("��%d��쳲�������Ϊ:%d",b ,a);
//	return 0;
//}