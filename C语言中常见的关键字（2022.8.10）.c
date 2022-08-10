#include<stdio.h>
typedef unsigned int u_int;

//int main()
//{
//	//int i = 10;//自动创建，自动销毁
//	//auto int i = 10;
//	//printf("%d", i);
//
//	/*unsigned int a = 20;
//	u_int a = 20;*/
//
//	
//
//
//	return 0;
//}



//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//}


//extern int a;
//
//int main()
//{
//	printf("%d", a);
//	return 0;
//}


extern  int sum(int x, int y);
int main()
{
	int z = 0;
	int x = 10;
	int y = 20;
	z=sum(x, y);
	printf("%d", z);
}
