#include<stdio.h>

int main()
{
	int  a = 13;//���ͱ���a�д洢��13
	printf("%d\n", sizeof(a));//printf("%d\n", a);
	long b = 254;//�����ͱ���b�д洢��254
	printf("%d\n", sizeof(b));//printf("%d\n", b);
	short c = 1;//�����ͱ���c�д洢��1
	printf("%d\n", sizeof(c));//printf("%d\n", c);
	long long d = 1245;//���������ͱ���d�д洢��1245
	printf("%d\n", sizeof(d));//printf("%d\n", d);
	signed e = 17;//�з������ͱ���e�д洢��17
	printf("%d\n", sizeof(e));//printf("%d\n", e);
	unsigned f = -3;//�޷������ͱ���f�д洢��-3
	printf("%d\n", sizeof(f));//printf("%d\n", f);

	float g = 2.3;//�����ȸ������g�д洢��2.3
	printf("%d\n", sizeof(g));//printf("%f\n", g);
	double h = 9.22;//˫���ȸ������h�д洢��9.22
	printf("%d\n", sizeof(h));//printf("%f\n", h);
	long double i = 3.122;//��˫���ȱ���i�д洢��3.122
	printf("%d\n", sizeof(i));//printf("%f\n", i);

	char j = 'z';//�ַ��ͱ���j�д洢����ĸz
	printf("%d\n", sizeof(j));//printf("%c\n", j);

	return 0;
}