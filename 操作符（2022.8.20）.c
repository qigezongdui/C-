#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = -5;
//	int b = a >> 1;
//	printf("%d", b);
//	return 0;
//}


//
//int main()
//{
//	int a = 1;
//	//int b = a++;
//	//int c = ++a;
//	//int d = a--;
//	int e = --a;
//	
//	//printf("a=%d,a++=%d\n",a, b);
//	//printf("a=%d,++a=%d\n",a, c);
//	//printf("a=%d,a--=%d\n",a, d);
//	printf("a=%d,--a=%d\n",a, e);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//			//c=5   a=5+3=8     b=8-4=4   c=5+5=10    �����Ϊ10	
//	printf("%d", d);
//
//}



struct Book
{
	int price;
	char name[20];
	char id[20];
};


int main()
{
	struct Book b = { 100,"��ϰʱ�������","20220821" };
	struct Book* pb = &b;  //*����pd��ָ�����͵ı�����struct Book����pbָ���b��struct Book���͵ı�����


	printf("price:%d\n", pb->price);   
	printf("name:%s\n", pb->name);
	printf("id:%s\n", pb->id);

	//printf("price:%d\n", (*pb).price);   //*pb ��Ϊ�����ò���������ͨ��pb�����ŵĵ�ַ�ҵ�pb��ָ������ݣ����˴�*pb��b�ȼۡ�
	//printf("name:%s\n", (*pb).name);
	//printf("id:%s\n", (*pb).id);


	//printf("price:%d\n", b.price);
	//printf("name:%s\n", b.name);
	//printf("id:%s\n", b.id);

	return 0;
}