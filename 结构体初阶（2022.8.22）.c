#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


struct Stu
{
	char id[20];
	char name[20];
	int age;
		

}s1,s2;//ͬʱҲ���������ﴴ������s1��s2  ���������s1��s2��ȫ�ֱ���

//int main()
//{
//	struct Stu st1;//��������st1��st1�Ǿֲ�����
//	struct Stu st2 = { "2022","����",20};
//	struct Stu* p = &st2;
//
//	printf("%s\n", st2.id);
//	printf("%s\n", st2.name);
//	printf("%d\n", st2.age);
//	printf("\n");
//
//	printf("%s\n", (*p).id);
//	printf("%s\n", (*p).name);
//	printf("%d\n", (*p).age);
//	printf("\n");
//
//	printf("%s\n", p->id);
//	printf("%s\n", p->name);
//	printf("%d\n", p->age);
//
//	return 0;
//}



void Print1(struct Stu s)
{
	printf("%s %s %d\n", s.id, s.name, s.age);

}


void Print2(struct Stu *s)
{
	printf("%s %s %d\n", s->id, s->name, s->age);

}



int main()
{
	struct Stu x1= { "2022","����",20 };
	Print1(x1);
	Print2(&x1);


	return 0;
}