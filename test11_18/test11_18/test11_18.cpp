#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>







//条件运算符
//int main()
//{
	/*int i = (3 + 4,4+4,5+6,5+5 + 6);*///逗号为运算符，出现赋值时，以最右边为准
//	int i, j;
//	/*i = 2015 < 2019 ? 2015 : 2019;
//	printf("%d\n", i);*/
//
//	for(i=10,j=20;i<j;i++){}
	/*printf("%d ", i);*/
//}



//斐波那契数列
int fib(int x)
{
	if (x == 1||x == 2)return 1;
	
	return fib(x - 1) + fib(x - 2);
	
}


int main()
{
	int n,y;
	printf("请输入需要求第几项:>");
	scanf_s("%d", &n);
	y = fib(n);
	printf("%d\n", y);
	/*int z=fib(n+2)-1;
  printf("数列的前%d项和为%d\n",n,z);*/
}