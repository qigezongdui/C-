#include<stdio.h>
#include<string.h>

int main()
{
	/*int a = 1;
	int b = 25;
	
	printf("%d\n",a);
	printf("%d\n",b);*/


	//printf("nihao\rhaha");

	/*char str []= "hello";
	printf("%d", strlen(str));*/
	/*printf("haha\r");*/


	/*printf("hello\vworld\n");
	printf("helloo\vworld");*/

	//printf("01\v2345");

	/*printf("hello\fworld");*/


	/*printf("5\a");*/


	/*printf("\"\n");
	printf("\'\n");
	printf("\\\n");
	printf("\?\n");*/



	//printf("%c\n", '\101');		//1*8^2+0*8^1+1*8^0=65 对应ASCII的A
	//printf("%c\n", '\x41');		//4*16^1+1*16^0=65	对应ASCII的A
	//return 0;


	printf("%d", strlen("abc\r\t\b\123\x22\192"));  
	//a	 b	c	\r	\t	\b	\123	\x22	\1	9	2     一共11个
}