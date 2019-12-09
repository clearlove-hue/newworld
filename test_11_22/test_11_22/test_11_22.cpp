#include<stdio.h>
int main()
{
	int i, k, n;
	printf("请输入需要的高度:>");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}