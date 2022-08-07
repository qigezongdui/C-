#include<stdio.h>

int main()
{
	int  a = 13;//整型变量a中存储了13
	printf("%d\n", sizeof(a));//printf("%d\n", a);
	long b = 254;//长整型变量b中存储了254
	printf("%d\n", sizeof(b));//printf("%d\n", b);
	short c = 1;//短整型变量c中存储了1
	printf("%d\n", sizeof(c));//printf("%d\n", c);
	long long d = 1245;//更长的整型变量d中存储了1245
	printf("%d\n", sizeof(d));//printf("%d\n", d);
	signed e = 17;//有符号整型变量e中存储了17
	printf("%d\n", sizeof(e));//printf("%d\n", e);
	unsigned f = -3;//无符号整型变量f中存储了-3
	printf("%d\n", sizeof(f));//printf("%d\n", f);

	float g = 2.3;//单精度浮点变量g中存储了2.3
	printf("%d\n", sizeof(g));//printf("%f\n", g);
	double h = 9.22;//双精度浮点变量h中存储了9.22
	printf("%d\n", sizeof(h));//printf("%f\n", h);
	long double i = 3.122;//长双精度变量i中存储了3.122
	printf("%d\n", sizeof(i));//printf("%f\n", i);

	char j = 'z';//字符型变量j中存储了字母z
	printf("%d\n", sizeof(j));//printf("%c\n", j);

	return 0;
}