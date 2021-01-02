#include<stdio.h>

int main(void)
{
	
	//printf("Hello World\n");
	//int a = 10;
	/*printf("a 는 %d\n", a);
		a++;
		printf("a 는 %d\n", a);
		a++;
		printf("a 는 %d\n", a);*/

	/*int b = 20;
	printf("b 는 %d\n", ++b);
	printf("b 는 %d\n", b++); 
	printf("b 는 %d\n", b); */
	
	//int i = 1;
	/*printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++); 
	printf("Hello World %d\n", i++); 
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/
	
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/
	
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello World%d\n", i++);
	//	//i++;
	//}
	/*int i = 1;
	do
	{
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/
	
	for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째  반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("     두 번째 반복문 : %d\n", j);
		}
	}
	
	return 0;
}