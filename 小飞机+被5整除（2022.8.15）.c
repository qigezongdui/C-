#include<stdio.h>


//С�ɻ�
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    for (a = 0; a < 2; a++)
//    {
//        printf("     **     \n");
//    }
//
//    while (b < 2)
//    {
//        printf("************\n");
//        b++;
//    }
//
//    do
//    {
//        printf("    *  *    \n");
//        c++;
//    } while (c < 2);
//
//    return 0;
//}



//��5��������



int main()
{
	int a = 0;
	scanf_s("%d", &a);
	if (a % 5 == 0)
		printf("%d�ܱ�5����", a);
	else
		printf("%d���ܱ�5����", a);
	return 0;
}
