#include<stdio.h>
#include<string.h>

int main()
{
	/*char arr1[] = { 'h','e','l','l','o' };*/
	char arr1[] = { 'h','e','l','l','o','\0'};
	char arr2[] = "hello";


	/*printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/


	printf("%s\n", arr1);
	printf("%s\n", arr2);


	return 0;
}